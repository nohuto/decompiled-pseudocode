/*
 * XREFs of HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x14007FA40
 * Callers:
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x14007B4E0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x14007F624 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 * Callees:
 *     SleepstudyHelper_UnregisterComponent @ 0x1400458F0 (SleepstudyHelper_UnregisterComponent.c)
 */

__int64 __fastcall HUBFDO_UnregisterSleepstudyBlockerReasons(_QWORD *a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)a1[329];
  if ( v2 )
  {
    result = SleepstudyHelper_UnregisterComponent(v2);
    a1[329] = 0LL;
  }
  v4 = (void *)a1[330];
  if ( v4 )
  {
    result = SleepstudyHelper_UnregisterComponent(v4);
    a1[330] = 0LL;
  }
  v5 = (void *)a1[331];
  if ( v5 )
  {
    result = SleepstudyHelper_UnregisterComponent(v5);
    a1[331] = 0LL;
  }
  return result;
}
