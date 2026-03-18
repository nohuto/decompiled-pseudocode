/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1400458F0
 * Callers:
 *     HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x14007FA40 (HUBFDO_UnregisterSleepstudyBlockerReasons.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x140082700 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140045730 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(void *a1)
{
  unsigned int v2; // edi
  unsigned int v4; // eax

  v2 = 0;
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_14006FD98 )
      return (unsigned int)qword_14006FD98(a1);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( a1 != &SleepstudyHelperUnsupportedHandle )
    {
      if ( qword_14006FD98 )
        v4 = qword_14006FD98(a1);
      else
        v4 = -1073741637;
      if ( v4 != -1073741637 )
        return v4;
    }
    return v2;
  }
}
