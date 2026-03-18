/*
 * XREFs of MiGetZeroExceptionInfo @ 0x14042DBA8
 * Callers:
 *     MiTryZeroMemory @ 0x14020BD20 (MiTryZeroMemory.c)
 * Callees:
 *     MiZeroVaToActiveEntry @ 0x14042DC28 (MiZeroVaToActiveEntry.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetZeroExceptionInfo(int **a1, ULONG_PTR a2, int *a3, _QWORD *a4)
{
  int *BugCheckParameter4; // rbx
  __int64 v7; // rdx

  BugCheckParameter4 = *a1;
  *a3 = **a1;
  if ( *BugCheckParameter4 != -1073741819
    || (unsigned int)BugCheckParameter4[6] <= 1
    || (v7 = *((_QWORD *)BugCheckParameter4 + 5), *a4 = v7, (*(_QWORD *)MiZeroVaToActiveEntry(a2, v7) & 1) == 0) )
  {
    KeBugCheckEx(0x1Au, 0x6101uLL, a2, *a3, (ULONG_PTR)BugCheckParameter4);
  }
  ++dword_140EF4CF8;
  return 1LL;
}
