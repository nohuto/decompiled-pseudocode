/*
 * XREFs of NvmeAdapterConnectNonMSIInterrupt @ 0x14019498C
 * Callers:
 *     NvmeAdapterConnectInterrupt @ 0x1400CDC54 (NvmeAdapterConnectInterrupt.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterConnectNonMSIInterrupt(
        unsigned __int64 a1,
        ULONG a2,
        KIRQL a3,
        unsigned __int8 a4,
        int a5,
        BOOLEAN a6,
        __int64 a7)
{
  struct _DEVICE_OBJECT *v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF

  memset_0(&Parameters, 0, sizeof(Parameters));
  v11 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Parameters.FullySpecified.InterruptMode = LevelSensitive;
  Parameters.FullySpecified.PhysicalDeviceObject = v11;
  Parameters.FullySpecified.InterruptObject = *(PKINTERRUPT **)(a1 + 584);
  Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)NvmeAdapterInterruptRoutine;
  Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)a7;
  Parameters.FullySpecified.Group = *(_WORD *)(a7 + 8);
  Parameters.FullySpecified.ShareVector = a6;
  Parameters.Version = 4;
  *(_OWORD *)&Parameters.MessageBased.ServiceContext = a1;
  Parameters.FullySpecified.Vector = a2;
  Parameters.FullySpecified.Irql = a3;
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = a4;
  LODWORD(result) = IoConnectInterruptEx(&Parameters);
  v13 = *(_QWORD *)(a1 + 584);
  if ( (int)result >= 0 )
    *(_DWORD *)(v13 + 12) = Parameters.Version;
  else
    *(_QWORD *)v13 = 0LL;
  return (unsigned int)result;
}
