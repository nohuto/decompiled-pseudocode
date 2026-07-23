/*
 * XREFs of CcDeallocateBcb @ 0x1402E5568
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x1402E5278 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1404B21D4 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
