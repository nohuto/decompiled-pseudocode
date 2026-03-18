/*
 * XREFs of Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline @ 0x1400176D8
 * Callers:
 *     RequestPendingCompletion @ 0x140009240 (RequestPendingCompletion.c)
 *     AssignCommandId @ 0x14000B2A0 (AssignCommandId.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 * Callees:
 *     Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledFallback @ 0x140017710 (Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledFallback.c)
 */

__int64 Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixKcsanRacyAccessesInStorNVMe__private_featureState & 0x10) != 0 )
    return Feature_FixKcsanRacyAccessesInStorNVMe__private_featureState & 1;
  else
    return Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledFallback(
             (unsigned int)Feature_FixKcsanRacyAccessesInStorNVMe__private_featureState,
             3LL);
}
