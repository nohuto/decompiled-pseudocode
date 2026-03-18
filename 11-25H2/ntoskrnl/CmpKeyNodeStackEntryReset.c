/*
 * XREFs of CmpKeyNodeStackEntryReset @ 0x1409756E4
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x140973594 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpResetKeyNodeStack @ 0x140974D18 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1409757D8 (CmpKeyEnumStackAdvanceInternal.c)
 * Callees:
 *     CmpKeyNodeStackEntryInitialize @ 0x140975744 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x1409759F0 (CmpKeyNodeStackEntryCleanup.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryReset(__int64 a1)
{
  CmpKeyNodeStackEntryCleanup();
  return CmpKeyNodeStackEntryInitialize(a1);
}
