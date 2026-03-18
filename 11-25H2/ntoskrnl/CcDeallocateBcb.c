/*
 * XREFs of CcDeallocateBcb @ 0x1403A42B8
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x1403A3FF8 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1403A5A90 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
