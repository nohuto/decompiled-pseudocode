/*
 * XREFs of SdbGetNextChild @ 0x140825A94
 * Callers:
 *     SdbpFindNextNamedTagHelper @ 0x1407F5DF8 (SdbpFindNextNamedTagHelper.c)
 *     SdbFindNextTag @ 0x140824D70 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x140AA6DC8 (SdbpMatchList.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB7E84 (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404F1DD0 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetNextTagId @ 0x140824A14 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
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
      AslLogCallPrintf(2LL);
    }
    else
    {
      AslLogCallPrintf(1LL);
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
