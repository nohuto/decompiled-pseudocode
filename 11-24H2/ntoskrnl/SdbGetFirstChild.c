/*
 * XREFs of SdbGetFirstChild @ 0x140947DC0
 * Callers:
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB6FE4 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpMatchList @ 0x140AEB320 (SdbpMatchList.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140483CB4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpGetNextTagId @ 0x140946EF0 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
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
    AslLogCallPrintf(2LL, (__int64)"SdbGetFirstChild");
  }
  return 0LL;
}
