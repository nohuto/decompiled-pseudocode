/*
 * XREFs of ??1?$Win32RawLockedItemNoCleanup@K$0A@@@QEAA@XZ @ 0x14019E454
 * Callers:
 *     NtUserSetSysColors @ 0x140171750 (NtUserSetSysColors.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *__fastcall Win32RawLockedItemNoCleanup<unsigned long,0>::~Win32RawLockedItemNoCleanup<unsigned long,0>(
        _QWORD *a1)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrent((__int64)a1);
  *((_QWORD *)result + 48) = *a1;
  a1[2] = -1LL;
  return result;
}
