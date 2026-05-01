/*
 * XREFs of SdbGetNextChild @ 0x18009240C
 * Callers:
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180097B00 (SdbFindNextTag.c)
 *     SdbpMatchList @ 0x18009B7D0 (SdbpMatchList.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x180093BB8 (SdbpGetNextTagId.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int NextTagId; // edi
  unsigned int v8; // ebx

  if ( a2 )
  {
    if ( (SdbGetTagFromTagID() & 0xF000) != 0x7000 )
    {
      AslLogCallPrintf(1LL);
      return 0LL;
    }
    NextTagId = SdbpGetNextTagId(a1, a2);
    if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
      && NextTagId > *(_DWORD *)(a1 + 20) )
    {
      AslLogCallPrintf(2LL);
      return 0LL;
    }
  }
  else
  {
    NextTagId = *(_DWORD *)(a1 + 20);
  }
  v8 = SdbpGetNextTagId(a1, a3);
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v8 >= NextTagId || v8 <= a3 )
      return 0;
  }
  else
  {
    v8 &= -(v8 < NextTagId);
  }
  return v8;
}
