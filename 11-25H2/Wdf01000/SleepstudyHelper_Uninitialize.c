/*
 * XREFs of SleepstudyHelper_Uninitialize @ 0x1400DB1B8
 * Callers:
 *     ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x14004C6B0 (-SleepStudyStop@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB164 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall SleepstudyHelper_Uninitialize(SS_LIBRARY__ *InitializeHandle)
{
  if ( Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
    || InitializeHandle != (SS_LIBRARY__ *)&SleepstudyHelperUnsupportedHandle
    && SleepstudyHelperRoutineBlock.Uninitialize )
  {
    SleepstudyHelperRoutineBlock.Uninitialize(InitializeHandle);
  }
}
