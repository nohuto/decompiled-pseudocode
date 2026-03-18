/*
 * XREFs of MiGetZeroExceptionInfo @ 0x140433D28
 * Callers:
 *     MiTryZeroMemory @ 0x140210860 (MiTryZeroMemory.c)
 * Callees:
 *     MiZeroVaToActiveEntry @ 0x140433DA8 (MiZeroVaToActiveEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  ++dword_140EF4A18;
  return 1LL;
}
