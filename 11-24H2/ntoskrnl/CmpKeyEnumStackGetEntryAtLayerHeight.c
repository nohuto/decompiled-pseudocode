/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14090A69C
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x140908320 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackReset @ 0x14090A0F8 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x14090A2F8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14090A384 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x14090A4D4 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14090A540 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14090B1D0 (CmpKeyEnumStackCreateResumeContext.c)
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
