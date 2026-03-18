/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140916C2C
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x1409148B0 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackReset @ 0x140916688 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x140916888 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140916914 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140916A64 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140916AD0 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140917760 (CmpKeyEnumStackCreateResumeContext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)a2;
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(v2 - 2) << 7);
  else
    return a1 + (v2 << 7) + 88;
}
