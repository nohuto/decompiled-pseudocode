/*
 * XREFs of SleepstudyHelper_GenerateGuid @ 0x140059524
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044358 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_GenerateGuid(__int64 a1, __int64 a2, GUID *a3)
{
  unsigned int v4; // ebx

  if ( qword_14006BCE0 )
    v4 = qword_14006BCE0();
  else
    v4 = -1073741637;
  if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && v4 == -1073741637 )
  {
    v4 = 0;
    *a3 = GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED;
  }
  return v4;
}
