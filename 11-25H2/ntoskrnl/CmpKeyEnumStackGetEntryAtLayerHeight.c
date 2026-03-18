/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140975934
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x140973594 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140974254 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackReset @ 0x140975390 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x140975590 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14097561C (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x14097576C (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1409757D8 (CmpKeyEnumStackAdvanceInternal.c)
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
