/*
 * XREFs of ExAllocateCallBack @ 0x140A85D20
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405ADA90 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140705A30 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140774730 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14077A418 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A85BE0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8C77C (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall ExAllocateCallBack(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x62726243u);
  if ( result )
  {
    *result = 0LL;
    result[1] = a1;
    result[2] = a2;
  }
  return result;
}
