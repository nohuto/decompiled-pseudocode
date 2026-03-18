/*
 * XREFs of SleepstudyHelper_Initialize @ 0x1400DB020
 * Callers:
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1400A7390 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB164 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(SS_LIBRARY__ **InitializeHandle, void *Tag)
{
  NTSTATUS v4; // ebx
  int (__fastcall *Initialize)(SS_LIBRARY__ **, void *); // rax

  v4 = RtlRunOnceExecuteOnce(
         &SleepstudyHelperInitializeRunOnce,
         (PRTL_RUN_ONCE_INIT_FN)SleepstudyHelperInitializeOnce,
         0LL,
         0LL);
  if ( !Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v4 < 0 || (Initialize = SleepstudyHelperRoutineBlock.Initialize) == 0LL )
    {
      v4 = 0;
      *InitializeHandle = (SS_LIBRARY__ *)&SleepstudyHelperUnsupportedHandle;
      return (unsigned int)v4;
    }
    return (unsigned int)Initialize(InitializeHandle, Tag);
  }
  if ( v4 >= 0 )
  {
    Initialize = SleepstudyHelperRoutineBlock.Initialize;
    if ( !SleepstudyHelperRoutineBlock.Initialize )
      return (unsigned int)-1073741637;
    return (unsigned int)Initialize(InitializeHandle, Tag);
  }
  return (unsigned int)v4;
}
