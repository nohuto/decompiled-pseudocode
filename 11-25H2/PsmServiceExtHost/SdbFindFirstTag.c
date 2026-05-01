/*
 * XREFs of SdbFindFirstTag @ 0x180097A8C
 * Callers:
 *     SdbGetDatabaseID @ 0x180091F60 (SdbGetDatabaseID.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18009408C (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpApphelpExeInfo @ 0x180095104 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180095450 (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x1800957AC (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x180095978 (SdbpReadApphelpDisplayResources.c)
 *     SdbpCheckAllAttributes @ 0x180096ABC (SdbpCheckAllAttributes.c)
 *     InitOnceScanIndexes @ 0x180097310 (InitOnceScanIndexes.c)
 *     SdbpFindMatchingDWORD @ 0x180097BA4 (SdbpFindMatchingDWORD.c)
 *     InitOnceGetStringTableOffset @ 0x180097C50 (InitOnceGetStringTableOffset.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099014 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckContainment @ 0x180099370 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x180099460 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x180099530 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1800996E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A530 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x18009AC20 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009AD58 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009AFA4 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchList @ 0x18009B7D0 (SdbpMatchList.c)
 *     SdbpMatchOne @ 0x18009B960 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x180092070 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009240C (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
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
