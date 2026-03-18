/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x140AADE90
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140800F84 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x14095BC48 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140488BC4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpValidateRootTagSizes @ 0x140802070 (SdbpValidateRootTagSizes.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbGetDatabaseID @ 0x140A67650 (SdbGetDatabaseID.c)
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
  {
    AslLogCallPrintf(
      1LL,
      (__int64)"SdbpValidateAndApplyCompatFlags",
      932LL,
      (__int64)"MajorVersion mismatch, MajorVersion [0x%lx] Expected 0x%lx");
    return v4;
  }
LABEL_8:
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && (int)SdbpValidateRootTagSizes(a1) < 0 )
  {
    AslLogCallPrintf(
      1LL,
      (__int64)"SdbpValidateAndApplyCompatFlags",
      943LL,
      (__int64)"SdbpValidateRootTagSizes failed to validate SDB [%x]");
  }
  else
  {
    if ( (unsigned int)SdbGetDatabaseID(a1, (void *)(a1 + 28)) )
      return 1;
    AslLogCallPrintf(1LL, (__int64)"SdbpValidateAndApplyCompatFlags", 956LL, (__int64)"Failed to get the database ID");
    if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0, 28673)) )
      return 1;
  }
  return v4;
}
