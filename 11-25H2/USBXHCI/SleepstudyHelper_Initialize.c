/*
 * XREFs of SleepstudyHelper_Initialize @ 0x140080578
 * Callers:
 *     DriverEntry @ 0x14007AA30 (DriverEntry.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044358 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(_QWORD *a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  unsigned int (__fastcall *v5)(_QWORD *, __int64); // rax

  v4 = RtlRunOnceExecuteOnce(
         &SleepstudyHelperInitializeRunOnce,
         (PRTL_RUN_ONCE_INIT_FN)SleepstudyHelperInitializeOnce,
         0LL,
         0LL);
  if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v4 < 0 || (v5 = (unsigned int (__fastcall *)(_QWORD *, __int64))qword_14006BCD0) == 0LL )
    {
      v4 = 0;
      *a1 = &SleepstudyHelperUnsupportedHandle;
      return (unsigned int)v4;
    }
    return v5(a1, a2);
  }
  if ( v4 >= 0 )
  {
    v5 = (unsigned int (__fastcall *)(_QWORD *, __int64))qword_14006BCD0;
    if ( !qword_14006BCD0 )
      return (unsigned int)-1073741637;
    return v5(a1, a2);
  }
  return (unsigned int)v4;
}
