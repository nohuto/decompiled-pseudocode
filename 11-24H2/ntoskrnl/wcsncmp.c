/*
 * XREFs of wcsncmp @ 0x1404FFFD0
 * Callers:
 *     EtwpApplyPredicate @ 0x14032BA20 (EtwpApplyPredicate.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x140472754 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x140545D38 (HalpInsertProfileSource.c)
 *     CarGetDriverInfoFromDriverName @ 0x140615E40 (CarGetDriverInfoFromDriverName.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14074F75C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x140751990 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x140751A00 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A8F64 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x14080970C (AslPathClean.c)
 *     AslPathCleanUstr @ 0x14080997C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x14080B4D0 (AslpPathWildcardMakeLeaves.c)
 *     PfSnPrefetchMetadata @ 0x140954444 (PfSnPrefetchMetadata.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x1409619C0 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PfSnPopulateReadList @ 0x14096A9C0 (PfSnPopulateReadList.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140995624 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     pIoQueryBusDescription @ 0x14099C1E4 (pIoQueryBusDescription.c)
 *     WmipFindISinGEbyName @ 0x1409D0B10 (WmipFindISinGEbyName.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1409E6D20 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x1409E78F8 (LdrpResCompareResourceNames.c)
 *     HalpDeviceEquals @ 0x140B75580 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x140B75770 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
