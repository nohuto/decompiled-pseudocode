/*
 * XREFs of PopW32ThreadLock @ 0x1C002C500
 * Callers:
 *     EditionCreateWindowStationEntryPointEx @ 0x1C013B780 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
