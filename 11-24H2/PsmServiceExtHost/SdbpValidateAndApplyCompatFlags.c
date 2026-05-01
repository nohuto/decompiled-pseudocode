/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x1800944EC
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1800929B0 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x1800940CC (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180092190 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetDatabaseID @ 0x1800923C0 (SdbGetDatabaseID.c)
 *     SdbpValidateRootTagSizes @ 0x180094600 (SdbpValidateRootTagSizes.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
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
