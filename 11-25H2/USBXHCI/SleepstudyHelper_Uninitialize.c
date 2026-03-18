/*
 * XREFs of SleepstudyHelper_Uninitialize @ 0x140080710
 * Callers:
 *     DriverCleanup @ 0x14007A960 (DriverCleanup.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044358 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void *__fastcall SleepstudyHelper_Uninitialize(void *a1)
{
  void *result; // rax

  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
    return (void *)((__int64 (__fastcall *)(void *))qword_14006BCD8)(a1);
  result = &SleepstudyHelperUnsupportedHandle;
  if ( a1 != &SleepstudyHelperUnsupportedHandle )
  {
    if ( qword_14006BCD8 )
      return (void *)((__int64 (__fastcall *)(void *))qword_14006BCD8)(a1);
  }
  return result;
}
