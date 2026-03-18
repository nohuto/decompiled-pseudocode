/*
 * XREFs of SleepstudyHelper_ComponentActive @ 0x1400AB2F8
 * Callers:
 *     imp_WdfDeviceStopIdleActual @ 0x1400141F0 (imp_WdfDeviceStopIdleActual.c)
 *     StopIdleWorker @ 0x140014800 (StopIdleWorker.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB234 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActive(SS_COMPONENT__ *Handle)
{
  unsigned int v2; // edi
  unsigned int v4; // eax

  v2 = 0;
  if ( Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( SleepstudyHelperRoutineBlock.ComponentActive )
      return (unsigned int)SleepstudyHelperRoutineBlock.ComponentActive(Handle);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( Handle != (SS_COMPONENT__ *)&SleepstudyHelperUnsupportedHandle )
    {
      if ( SleepstudyHelperRoutineBlock.ComponentActive )
        v4 = SleepstudyHelperRoutineBlock.ComponentActive(Handle);
      else
        v4 = -1073741637;
      if ( v4 != -1073741637 )
        return v4;
    }
    return v2;
  }
}
