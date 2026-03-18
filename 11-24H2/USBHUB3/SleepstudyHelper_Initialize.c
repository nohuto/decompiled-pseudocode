/*
 * XREFs of SleepstudyHelper_Initialize @ 0x140092F18
 * Callers:
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140045730 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
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
    if ( v4 < 0 || (v5 = (unsigned int (__fastcall *)(_QWORD *, __int64))qword_14006FD60) == 0LL )
    {
      v4 = 0;
      *a1 = &SleepstudyHelperUnsupportedHandle;
      return (unsigned int)v4;
    }
    return v5(a1, a2);
  }
  if ( v4 >= 0 )
  {
    v5 = (unsigned int (__fastcall *)(_QWORD *, __int64))qword_14006FD60;
    if ( !qword_14006FD60 )
      return (unsigned int)-1073741637;
    return v5(a1, a2);
  }
  return (unsigned int)v4;
}
