/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1404EE770
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x14047C6C0 (SleepstudyHelperDestroyBlocker.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405E45D8 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v3; // edx

  IsEnabledDeviceUsageNoInline = Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline();
  v3 = 0;
  if ( !IsEnabledDeviceUsageNoInline )
    return SleepstudyHelperDestroyBlocker(a1);
  if ( a1 != (KSPIN_LOCK *)&SleepstudyHelperUnsupportedHandle )
    return (unsigned int)SleepstudyHelperDestroyBlocker(a1);
  return v3;
}
