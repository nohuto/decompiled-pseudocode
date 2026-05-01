/*
 * XREFs of SdbGetStringTagPtr @ 0x180097D74
 * Callers:
 *     SdbpApphelpExeInfo @ 0x180095104 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x180095450 (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x1800957AC (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckAllAttributes @ 0x180096ABC (SdbpCheckAllAttributes.c)
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
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x180098304 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x18009836C (SdbpGetMappedTagData.c)
 *     SdbpReadStringRef @ 0x180098644 (SdbpReadStringRef.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v6; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
    goto LABEL_2;
  v6 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  if ( v6 == (__int16)0x8000 )
    return SdbpGetMappedTagData(a1, v3);
  if ( v6 == 24576 )
  {
    StringRef = SdbpReadStringRef(a1, v3);
    if ( !StringRef )
    {
LABEL_2:
      AslLogCallPrintf(1LL);
      return 0LL;
    }
    return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  return v2;
}
