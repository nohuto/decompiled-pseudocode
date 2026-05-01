/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x18009408C
 * Callers:
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x180093C6C (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetDatabaseID @ 0x180091F60 (SdbGetDatabaseID.c)
 *     SdbpValidateRootTagSizes @ 0x1800941A0 (SdbpValidateRootTagSizes.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 2608) |= 1u;
    goto LABEL_7;
  }
  if ( *a2 == 2 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 2608) |= 2u;
    goto LABEL_8;
  }
  if ( *a2 != 3 && (a3 & 1) == 0 )
    goto LABEL_5;
LABEL_8:
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && (int)SdbpValidateRootTagSizes(a1) < 0 )
  {
LABEL_5:
    AslLogCallPrintf(1LL);
    return v4;
  }
  if ( (unsigned int)SdbGetDatabaseID(a1, (void *)(a1 + 28)) )
    return 1;
  AslLogCallPrintf(1LL);
  if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL)) )
    return 1;
  return v4;
}
