/*
 * XREFs of ??0?$Win32HMThreadLock@UtagKL@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x14015649C
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140096CA0 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMThreadLock<tagKL>::Win32HMThreadLock<tagKL>(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = *(_QWORD *)(a2 + 456);
  *(_QWORD *)(a2 + 456) = a1;
  a1[1] = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
  return a1;
}
