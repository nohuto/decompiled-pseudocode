/*
 * XREFs of MI_IS_RESET_PTE @ 0x1403FE370
 * Callers:
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DCC0;
  }
  return HIDWORD(a1) == 1;
}
