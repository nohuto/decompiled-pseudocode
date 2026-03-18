/*
 * XREFs of PopFxEnablePlatformStates @ 0x1405CCB48
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x14073DE00 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140355CAC (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140741BC8 (PopFxInitializeSocSubsystemStaticInfo.c)
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
      _InterlockedExchange(&dword_140E27B80, DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(DeepSleepPlatformStateIndex);
    }
  }
}
