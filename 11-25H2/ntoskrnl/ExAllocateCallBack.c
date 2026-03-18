/*
 * XREFs of ExAllocateCallBack @ 0x140A84B30
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405AD190 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1406FBF90 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140764B40 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14076A668 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A849F0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8B2EC (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
