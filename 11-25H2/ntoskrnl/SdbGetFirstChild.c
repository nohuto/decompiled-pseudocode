/*
 * XREFs of SdbGetFirstChild @ 0x140825B84
 * Callers:
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x140AA6DC8 (SdbpMatchList.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB7E84 (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404F1DD0 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetNextTagId @ 0x140824A14 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int NextTagId; // esi
  unsigned int v7; // ebx

  if ( !a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v7 = 12;
    return v7 < NextTagId ? v7 : 0;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, a2, v4, v5);
    if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
      || NextTagId <= *(_DWORD *)(a1 + 20) )
    {
      v7 = a2 + 6;
      return v7 < NextTagId ? v7 : 0;
    }
    AslLogCallPrintf(2LL);
  }
  return 0LL;
}
