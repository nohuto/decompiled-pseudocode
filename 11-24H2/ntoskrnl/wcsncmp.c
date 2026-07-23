/*
 * XREFs of wcsncmp @ 0x1404FD890
 * Callers:
 *     EtwpApplyPredicate @ 0x1403E8DC0 (EtwpApplyPredicate.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x14046EA24 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x1405435F8 (HalpInsertProfileSource.c)
 *     CarGetDriverInfoFromDriverName @ 0x140614400 (CarGetDriverInfoFromDriverName.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074BFC8 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14074DA8C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x14074FCB0 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x14074FD20 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A90A4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x140809E4C (AslPathClean.c)
 *     AslPathCleanUstr @ 0x14080A0BC (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x14080BC10 (AslpPathWildcardMakeLeaves.c)
 *     PfSnPrefetchMetadata @ 0x140937DF4 (PfSnPrefetchMetadata.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x140949480 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     PfSnPopulateReadList @ 0x140953450 (PfSnPopulateReadList.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140980664 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     WmipFindISinGEbyName @ 0x1409AFB60 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1409E1CE0 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x1409E28B8 (LdrpResCompareResourceNames.c)
 *     HalpDeviceEquals @ 0x140B77580 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x140B77770 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
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
