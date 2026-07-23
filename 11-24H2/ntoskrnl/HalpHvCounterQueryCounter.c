/*
 * XREFs of HalpHvCounterQueryCounter @ 0x1403BC300
 * Callers:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     HalpTimerSavePerformanceCounter @ 0x1403BBA50 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1403BBD10 (HalpTimerDpcRoutine.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403BC024 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpHvTimerArm @ 0x1403BC260 (HalpHvTimerArm.c)
 *     HalpTimerDelayedQueryCounter @ 0x1405450B0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1405458C8 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1403BC420 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvCounterQueryCounter(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 (__fastcall *v3)(_DWORD *, __int64); // rcx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = HalpHvTimerApi;
  if ( !HalpHvTimerApi )
    return __readmsr(0x40000020u);
  v3 = HvlGetReferenceTimeUsingTscPage;
  if ( (unsigned __int64 (__fastcall *)(_DWORD *, __int64))HalpHvTimerApi != HvlGetReferenceTimeUsingTscPage )
    return guard_dispatch_icall_no_overrides(0LL, a2);
  v7 = 0LL;
  while ( 1 )
  {
    v4 = *(_DWORD *)HvlpReferenceTscPage;
    if ( !*(_DWORD *)HvlpReferenceTscPage )
      break;
    if ( MEMORY[0xFFFFF78000000294] )
    {
      __asm { rdtscp }
      LODWORD(v7) = (_DWORD)v3;
    }
    else
    {
      if ( KeGetCurrentPrcb()->CpuVendor == 2 )
      {
        _mm_lfence();
      }
      else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
      {
        _mm_mfence();
      }
      v2 = __rdtsc();
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    v5 = ((v2 | (a2 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64;
    v2 = (unsigned __int64)HvlpReferenceTscPage;
    a2 = *((_QWORD *)HvlpReferenceTscPage + 2) + v5;
    v7 = a2;
    LODWORD(v3) = *(_DWORD *)HvlpReferenceTscPage;
    if ( *(_DWORD *)HvlpReferenceTscPage == v4 )
      return v7;
  }
  HvlpGetRegister64(589828LL, &v7);
  return v7;
}
