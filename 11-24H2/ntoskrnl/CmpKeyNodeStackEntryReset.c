/*
 * XREFs of CmpKeyNodeStackEntryReset @ 0x14090A44C
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x140908320 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpResetKeyNodeStack @ 0x140909A80 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14090A540 (CmpKeyEnumStackAdvanceInternal.c)
 * Callees:
 *     CmpKeyNodeStackEntryInitialize @ 0x14090A4AC (CmpKeyNodeStackEntryInitialize.c)
 *     CmpKeyNodeStackEntryCleanup @ 0x14090A758 (CmpKeyNodeStackEntryCleanup.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryReset(__int64 a1)
{
  CmpKeyNodeStackEntryCleanup();
  return CmpKeyNodeStackEntryInitialize(a1);
}
