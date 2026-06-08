/*
 * XREFs of HwDebugSetKeyNotification @ 0x140039E24
 * Callers:
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140039B38 (HwDebugInitializeRegistryDebugRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall HwDebugSetKeyNotification(POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS v1; // eax
  int v2; // edx
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 CompletionFilter; // [rsp+28h] [rbp-30h]
  ULONG Disposition; // [rsp+68h] [rbp+10h] BYREF

  Disposition = 0;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject
    || (*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL,
        *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0uLL,
        *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = HwDebugRegistryHandlerWrapper,
        v1 = ZwCreateKey(
               &WPP_MAIN_CB.Queue.Wcb.DeviceObject,
               0xF003Fu,
               ObjectAttributes,
               (ULONG)0,
               0LL,
               (ULONG)0,
               &Disposition),
        v3 = v1,
        v1 >= 0) )
  {
    v1 = ZwNotifyChangeKey(
           WPP_MAIN_CB.Queue.Wcb.DeviceObject,
           0LL,
           (PIO_APC_ROUTINE)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp,
           (PVOID)1,
           (PIO_STATUS_BLOCK)&WPP_MAIN_CB.DeviceQueue.DeviceListHead,
           (ULONG)5,
           1u,
           0LL,
           (ULONG)0,
           1u);
    v3 = v1;
    if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 11;
      goto LABEL_8;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 10;
LABEL_8:
    LODWORD(CompletionFilter) = v1;
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      4,
      v4,
      (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
      CompletionFilter);
  }
  return v3;
}
