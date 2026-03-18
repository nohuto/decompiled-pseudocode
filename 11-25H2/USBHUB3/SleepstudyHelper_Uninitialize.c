/*
 * XREFs of SleepstudyHelper_Uninitialize @ 0x140093A80
 * Callers:
 *     DriverCleanup @ 0x140001690 (DriverCleanup.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044EF0 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

void *__fastcall SleepstudyHelper_Uninitialize(void *a1)
{
  void *result; // rax

  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
    return (void *)((__int64 (__fastcall *)(void *))qword_14006FD78)(a1);
  result = &SleepstudyHelperUnsupportedHandle;
  if ( a1 != &SleepstudyHelperUnsupportedHandle )
  {
    if ( qword_14006FD78 )
      return (void *)((__int64 (__fastcall *)(void *))qword_14006FD78)(a1);
  }
  return result;
}
