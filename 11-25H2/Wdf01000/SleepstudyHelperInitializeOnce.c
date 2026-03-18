/*
 * XREFs of SleepstudyHelperInitializeOnce @ 0x1400DAF20
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation_0 @ 0x1400852F2 (ZwPowerInformation_0.c)
 *     memset @ 0x1400AC740 (memset.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall SleepstudyHelperInitializeOnce(_RTL_RUN_ONCE *RunOnce, void *Parameter, void **Context)
{
  size_t v3; // rdi
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  _SLEEPSTUDY_HELPER_ROUTINE_BLOCK_V2 *RoutineBlock; // [rsp+30h] [rbp-18h] BYREF
  _POWER_INFORMATION_INTERNAL_HEADER Header; // [rsp+68h] [rbp+20h] BYREF

  v3 = 272LL;
  v4 = 0;
  RoutineBlock = 0LL;
  memset(&SleepstudyHelperRoutineBlock, 0, sizeof(SleepstudyHelperRoutineBlock));
  Header.Version = 0;
  Header.InternalType = PowerInternalQuerySleepStudyHelperRoutineBlock;
  v5 = ZwPowerInformation_0(PowerInformationInternal, &Header, 8u, &RoutineBlock, 8u);
  if ( v5 == -1073741637 )
    return 1;
  if ( v5 >= 0 )
  {
    if ( RoutineBlock->Version == 1 )
      v3 = 264LL;
    memmove(&SleepstudyHelperRoutineBlock, RoutineBlock, v3);
    return 1;
  }
  return v4;
}
