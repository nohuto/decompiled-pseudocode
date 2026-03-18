/*
 * XREFs of MI_IS_RESET_PTE @ 0x1403FB340
 * Callers:
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140E2D940 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2D940;
  }
  return HIDWORD(a1) == 1;
}
