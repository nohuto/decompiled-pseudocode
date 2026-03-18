/*
 * XREFs of SleepstudyHelper_ResetComponentsStartTime @ 0x1400AB48C
 * Callers:
 *     ?SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ @ 0x140073E9C (-SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB164 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_ResetComponentsStartTime(SS_COMPONENT__ *Handle)
{
  unsigned int v2; // edi
  unsigned int v4; // eax

  v2 = 0;
  if ( Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( SleepstudyHelperRoutineBlock.ResetComponentsStartTime )
      return (unsigned int)SleepstudyHelperRoutineBlock.ResetComponentsStartTime(Handle);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( Handle != (SS_COMPONENT__ *)&SleepstudyHelperUnsupportedHandle )
    {
      if ( SleepstudyHelperRoutineBlock.ResetComponentsStartTime )
        v4 = SleepstudyHelperRoutineBlock.ResetComponentsStartTime(Handle);
      else
        v4 = -1073741637;
      if ( v4 != -1073741637 )
        return v4;
    }
    return v2;
  }
}
