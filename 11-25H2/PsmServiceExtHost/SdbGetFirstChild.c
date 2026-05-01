/*
 * XREFs of SdbGetFirstChild @ 0x180092070
 * Callers:
 *     InitOnceScanIndexes @ 0x180097310 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x18009B7D0 (SdbpMatchList.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x180093BB8 (SdbpGetNextTagId.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, unsigned int a2)
{
  unsigned int NextTagId; // esi
  unsigned int v6; // ebx

  if ( a2 )
  {
    if ( (SdbGetTagFromTagID() & 0xF000) != 0x7000 )
      return 0LL;
    NextTagId = SdbpGetNextTagId(a1, a2);
    if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
      && NextTagId > *(_DWORD *)(a1 + 20) )
    {
      AslLogCallPrintf(2LL);
      return 0LL;
    }
    v6 = a2 + 6;
  }
  else
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v6 = 12;
  }
  return v6 < NextTagId ? v6 : 0;
}
