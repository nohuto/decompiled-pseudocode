/*
 * XREFs of PopFxEnablePlatformStates @ 0x1405D12F8
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x140749E80 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1404A673C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98 (PopFxInitializeSocSubsystemStaticInfo.c)
 */

void __fastcall PopFxEnablePlatformStates(int a1)
{
  unsigned __int32 DeepSleepPlatformStateIndex; // eax

  if ( a1 )
  {
    PopPepPlatformStateRegistered();
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    if ( DeepSleepPlatformStateIndex != -1 )
    {
      _InterlockedExchange(&dword_140E27DC0, DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(DeepSleepPlatformStateIndex);
    }
  }
}
