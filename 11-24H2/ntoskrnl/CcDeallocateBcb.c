/*
 * XREFs of CcDeallocateBcb @ 0x1402CD8E4
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x1402CD624 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1402CE42C (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
