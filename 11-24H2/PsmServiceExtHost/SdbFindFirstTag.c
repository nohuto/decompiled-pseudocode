/*
 * XREFs of SdbFindFirstTag @ 0x180097EEC
 * Callers:
 *     SdbGetDatabaseID @ 0x1800923C0 (SdbGetDatabaseID.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1800944EC (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpApphelpExeInfo @ 0x180095564 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x1800958B0 (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180095C0C (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x180095DD8 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x180096F1C (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180097770 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x180098004 (SdbpFindMatchingDWORD.c)
 *     InitOnceGetStringTableOffset @ 0x1800980B0 (InitOnceGetStringTableOffset.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099364 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckContainment @ 0x1800996C0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x1800997B0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x180099880 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180099A30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A880 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x18009AF70 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B0A8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B2F4 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x18009BAA8 (SdbpMatchList.c)
 *     SdbpMatchOne @ 0x18009BC50 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x1800924D0 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009286C (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, unsigned int a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, a2, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
