/*
 * XREFs of SdbGetFirstChild @ 0x140960300
 * Callers:
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140ABBFC4 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpMatchList @ 0x140AE807C (SdbpMatchList.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140488BC4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetNextTagId @ 0x14095F430 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
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
    AslLogCallPrintf(
      2LL,
      (__int64)"SdbGetFirstChild",
      2894LL,
      (__int64)"SdbpGetNextTagId returned value larger than the SDB (for tiParent=0x%X; pdb->dwSize=0x%X)");
  }
  return 0LL;
}
