/*
 * XREFs of SdbGetNextChild @ 0x140960210
 * Callers:
 *     SdbpFindNextNamedTagHelper @ 0x140805968 (SdbpFindNextNamedTagHelper.c)
 *     SdbFindNextTag @ 0x14095F4E4 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140ABBFC4 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpMatchList @ 0x140AE807C (SdbpMatchList.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140488BC4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetNextTagId @ 0x14095F430 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int NextTagId; // edi
  unsigned int v10; // ebx

  v4 = a3;
  if ( a2 )
  {
    if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
    {
      NextTagId = SdbpGetNextTagId(a1, a2, v7, v8);
      if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
        || NextTagId <= *(_DWORD *)(a1 + 20) )
      {
        goto LABEL_5;
      }
      AslLogCallPrintf(
        2LL,
        (__int64)"SdbGetNextChild",
        2949LL,
        (__int64)"SdbpGetNextTagId returned value larger than the SDB (for tiParent=0x%X; tiPrev=0x%X; pdb->dwSize=0x%X)");
    }
    else
    {
      AslLogCallPrintf(1LL, (__int64)"SdbGetNextChild", 2935LL, (__int64)"Trying to operate on non-list, non-root tag");
    }
    return 0LL;
  }
  NextTagId = *(_DWORD *)(a1 + 20);
LABEL_5:
  v10 = SdbpGetNextTagId(a1, v4, a3, a4);
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v10 >= NextTagId || v10 <= v4 )
      return 0;
  }
  else
  {
    v10 &= -(v10 < NextTagId);
  }
  return v10;
}
