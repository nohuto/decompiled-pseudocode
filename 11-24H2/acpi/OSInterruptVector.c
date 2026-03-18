/*
 * XREFs of OSInterruptVector @ 0x1400C6D78
 * Callers:
 *     ACPIInterruptInitialize @ 0x140097230 (ACPIInterruptInitialize.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     memset @ 0x140070F40 (memset.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400A878C (AcpiIrqLibSetupSciInterrupt.c)
 */

__int64 __fastcall OSInterruptVector(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  int v3; // eax
  unsigned int v4; // edi
  struct _DEVICE_OBJECT *v6; // rax
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+28h] [rbp-60h]
  NTSTATUS v10; // [rsp+28h] [rbp-60h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-58h] BYREF

  memset(&Parameters, 0, 0x4CuLL);
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  KeInitializeDpc(
    (PRKDPC)(DeviceExtension + 96),
    (PKDEFERRED_ROUTINE)ACPIInterruptServiceRoutineDPC,
    (PVOID)DeviceExtension);
  v3 = AcpiIrqLibSetupSciInterrupt(
         *(_WORD *)(*((_QWORD *)AcpiInformation + 1) + 46LL),
         *(void **)(DeviceExtension + 784));
  v4 = v3;
  if ( v3 >= 0 )
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeviceExtension + 80);
    v6 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 784);
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    Parameters.FullySpecified.PhysicalDeviceObject = v6;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIInterruptServiceRoutine;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeviceExtension;
    v7 = IoConnectInterruptEx(&Parameters);
    v8 = v7;
    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v7;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xBu,
        (__int64)&WPP_8c66e6b15dd83bd6a4675f6d1eaf552a_Traceguids,
        v10);
    }
    return v8;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v3;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xAu,
        (__int64)&WPP_8c66e6b15dd83bd6a4675f6d1eaf552a_Traceguids,
        v9);
    }
    return v4;
  }
}
