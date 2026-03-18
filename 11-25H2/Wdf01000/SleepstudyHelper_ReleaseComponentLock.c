/*
 * XREFs of SleepstudyHelper_ReleaseComponentLock @ 0x1400AB41C
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1400A7538 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     KeLowerIrql_0 @ 0x1400852B8 (KeLowerIrql_0.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB164 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_ReleaseComponentLock(SS_COMPONENT__ *Handle, unsigned __int8 Irql)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
    || Handle != (SS_COMPONENT__ *)&SleepstudyHelperUnsupportedHandle )
  {
    if ( SleepstudyHelperRoutineBlock.ReleaseComponentLock )
      return (unsigned int)SleepstudyHelperRoutineBlock.ReleaseComponentLock(Handle, Irql);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    KeLowerIrql_0(Irql);
  }
  return v4;
}
