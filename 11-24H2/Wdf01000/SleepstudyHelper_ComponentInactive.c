/*
 * XREFs of SleepstudyHelper_ComponentInactive @ 0x1400AB408
 * Callers:
 *     imp_WdfDeviceResumeIdleActual @ 0x140054130 (imp_WdfDeviceResumeIdleActual.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB234 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentInactive(SS_COMPONENT__ *Handle)
{
  unsigned int v2; // edi
  unsigned int v4; // eax

  v2 = 0;
  if ( Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( SleepstudyHelperRoutineBlock.ComponentInactive )
      return (unsigned int)SleepstudyHelperRoutineBlock.ComponentInactive(Handle);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( Handle != (SS_COMPONENT__ *)&SleepstudyHelperUnsupportedHandle )
    {
      if ( SleepstudyHelperRoutineBlock.ComponentInactive )
        v4 = SleepstudyHelperRoutineBlock.ComponentInactive(Handle);
      else
        v4 = -1073741637;
      if ( v4 != -1073741637 )
        return v4;
    }
    return v2;
  }
}
