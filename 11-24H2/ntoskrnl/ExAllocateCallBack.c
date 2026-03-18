/*
 * XREFs of ExAllocateCallBack @ 0x140A89920
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405B0B20 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140707E70 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140774510 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14077A318 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A897E0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A90080 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall ExAllocateCallBack(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a1;
    result[2] = a2;
  }
  return result;
}
