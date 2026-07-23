/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x140AA8F10
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1408016C4 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x140943708 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140483CB4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpValidateRootTagSizes @ 0x1408027B0 (SdbpValidateRootTagSizes.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbGetDatabaseID @ 0x140A60B48 (SdbGetDatabaseID.c)
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
    AslLogCallPrintf(1LL, (__int64)"SdbpValidateAndApplyCompatFlags");
    return v4;
  }
  if ( (unsigned int)SdbGetDatabaseID(a1, (void *)(a1 + 28)) )
    return 1;
  AslLogCallPrintf(1LL, (__int64)"SdbpValidateAndApplyCompatFlags");
  if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0, 28673)) )
    return 1;
  return v4;
}
