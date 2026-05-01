/*
 * XREFs of SdbGetStringTagPtr @ 0x1800981D4
 * Callers:
 *     SdbpApphelpExeInfo @ 0x180095564 (SdbpApphelpExeInfo.c)
 *     SdbpConvertResourcesToStrings @ 0x1800958B0 (SdbpConvertResourcesToStrings.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180095C0C (SdbpReadApphelpDisplayCustom.c)
 *     SdbpCheckAllAttributes @ 0x180096F1C (SdbpCheckAllAttributes.c)
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
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x180098764 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x1800987CC (SdbpGetMappedTagData.c)
 *     SdbpReadStringRef @ 0x180098AA4 (SdbpReadStringRef.c)
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
