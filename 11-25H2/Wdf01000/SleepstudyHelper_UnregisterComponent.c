/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1400AB514
 * Callers:
 *     ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x14004C6B0 (-SleepStudyStop@FxPkgPnp@@QEAAXXZ.c)
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1400A7538 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB164 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(SS_COMPONENT__ *Handle)
{
  unsigned int v2; // edi
  unsigned int v4; // eax

  v2 = 0;
  if ( Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( SleepstudyHelperRoutineBlock.UnregisterComponent )
      return (unsigned int)SleepstudyHelperRoutineBlock.UnregisterComponent(Handle);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( Handle != (SS_COMPONENT__ *)&SleepstudyHelperUnsupportedHandle )
    {
      if ( SleepstudyHelperRoutineBlock.UnregisterComponent )
        v4 = SleepstudyHelperRoutineBlock.UnregisterComponent(Handle);
      else
        v4 = -1073741637;
      if ( v4 != -1073741637 )
        return v4;
    }
    return v2;
  }
}
