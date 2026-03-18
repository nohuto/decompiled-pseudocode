/*
 * XREFs of SleepstudyHelper_GenerateGuid @ 0x140045894
 * Callers:
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x14007F624 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140045730 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_GenerateGuid(__int64 a1, __int64 a2, GUID *a3)
{
  unsigned int v4; // ebx

  if ( qword_14006FD70 )
    v4 = qword_14006FD70();
  else
    v4 = -1073741637;
  if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && v4 == -1073741637 )
  {
    v4 = 0;
    *a3 = GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED;
  }
  return v4;
}
