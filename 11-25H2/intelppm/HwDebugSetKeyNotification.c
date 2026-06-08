/*
 * XREFs of HwDebugSetKeyNotification @ 0x14003AF54
 * Callers:
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140047504 (HwDebugInitializeRegistryDebugRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall HwDebugSetKeyNotification(POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ebx
  unsigned __int16 v3; // r9
  __int64 CompletionFilter; // [rsp+28h] [rbp-30h]
  ULONG Disposition; // [rsp+68h] [rbp+10h] BYREF

  Disposition = 0;
  if ( HwDiagnosticMonitor
    || (qword_140021D40 = 0LL,
        ApcRoutine[0] = 0LL,
        qword_140021D38 = (__int64)HwDebugRegistryHandlerWrapper,
        v1 = ZwCreateKey(&HwDiagnosticMonitor, 0xF003Fu, ObjectAttributes, (ULONG)0, 0LL, (ULONG)0, &Disposition),
        v2 = v1,
        v1 >= 0) )
  {
    v1 = ZwNotifyChangeKey(
           HwDiagnosticMonitor,
           0LL,
           (PIO_APC_ROUTINE)ApcRoutine,
           (PVOID)1,
           &IoStatusBlock,
           (ULONG)5,
           1u,
           0LL,
           (ULONG)0,
           1u);
    v2 = v1;
    if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 11;
      goto LABEL_8;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 10;
LABEL_8:
    LODWORD(CompletionFilter) = v1;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      v3,
      (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
      CompletionFilter);
  }
  return v2;
}
