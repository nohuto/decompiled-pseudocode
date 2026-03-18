/*
 * XREFs of CmpKeyNodeStackEntryReset @ 0x1409169DC
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x1409148B0 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpResetKeyNodeStack @ 0x140916010 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140916AD0 (CmpKeyEnumStackAdvanceInternal.c)
 * Callees:
 *     CmpKeyNodeStackEntryInitialize @ 0x140916A3C (CmpKeyNodeStackEntryInitialize.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x140916CE8 (CmpKeyNodeStackEntryCleanup.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryReset(__int64 a1)
{
  CmpKeyNodeStackEntryCleanup();
  return CmpKeyNodeStackEntryInitialize(a1);
}
