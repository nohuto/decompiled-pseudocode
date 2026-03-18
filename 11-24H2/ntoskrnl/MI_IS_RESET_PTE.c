/*
 * XREFs of MI_IS_RESET_PTE @ 0x140368EE0
 * Callers:
 *     MiCombineCandidate @ 0x14020C0F0 (MiCombineCandidate.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140E2DB80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140E2DB80;
  }
  return HIDWORD(a1) == 1;
}
