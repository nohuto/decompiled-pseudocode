/*
 * XREFs of SdbpGetTagHeadSize @ 0x180098568
 * Callers:
 *     SdbpGetNextTagId @ 0x180093BB8 (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x18009836C (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x1800986F0 (SdbpReadTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpReadMappedData @ 0x180093DD4 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  int v3; // ecx
  __int16 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( !(unsigned int)SdbpReadMappedData(a1, a2, &v4, 2u) )
    goto LABEL_2;
  if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
    return (v4 & 0xF000u) < 0x7000 ? 2 : 6;
  v3 = v4 & 0xF000;
  if ( (unsigned int)(v3 - 4096) <= 0x5000 && (((_WORD)v3 - 4096) & 0xFFF) == 0 )
    return 2LL;
  if ( ((v3 - 28672) & 0xFFFFCFFF) != 0 || v3 == 40960 )
  {
LABEL_2:
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  return 6LL;
}
