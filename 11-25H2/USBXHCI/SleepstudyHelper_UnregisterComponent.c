/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x140059580
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x14007A3B0 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044358 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(void *a1)
{
  unsigned int v2; // edi
  unsigned int v4; // eax

  v2 = 0;
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_14006BD08 )
      return (unsigned int)qword_14006BD08(a1);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( a1 != &SleepstudyHelperUnsupportedHandle )
    {
      if ( qword_14006BD08 )
        v4 = qword_14006BD08(a1);
      else
        v4 = -1073741637;
      if ( v4 != -1073741637 )
        return v4;
    }
    return v2;
  }
}
