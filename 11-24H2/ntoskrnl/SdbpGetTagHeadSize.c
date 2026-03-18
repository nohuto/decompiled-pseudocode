/*
 * XREFs of SdbpGetTagHeadSize @ 0x1409603A0
 * Callers:
 *     SdbpGetNextTagId @ 0x14095F430 (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x14095FA14 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x14095FE60 (SdbpReadTagData.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140488BC4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpReadMappedData @ 0x140960150 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int16 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v4, 2u) )
  {
    if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
      return (v4 & 0xF000u) < 0x7000 ? 2 : 6;
    v2 = v4 & 0xF000;
    if ( v2 == 24576 || v2 == 4096 || v2 == 0x2000 || v2 == 12288 || v2 == 0x4000 || v2 == 20480 )
      return 2LL;
    if ( v2 == 36864 || v2 == 28672 || v2 == 0x8000 )
      return 6LL;
    AslLogCallPrintf(1LL, (__int64)"SdbpGetTagHeadSize", 121LL, (__int64)"Invalid TAG_TYPE encountered. TAG: [%x]");
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpGetTagHeadSize", 100LL, (__int64)"Error reading tag");
  }
  return 0LL;
}
