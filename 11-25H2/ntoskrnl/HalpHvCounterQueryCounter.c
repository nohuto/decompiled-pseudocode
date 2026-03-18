/*
 * XREFs of HalpHvCounterQueryCounter @ 0x14028FA00
 * Callers:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     HalpHvTimerArm @ 0x14028F970 (HalpHvTimerArm.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x14028FC0C (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x14028FF50 (HalpTimerDpcRoutine.c)
 *     HalpTimerSavePerformanceCounter @ 0x140290158 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140544F00 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140545718 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x14028FB00 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvCounterQueryCounter(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 (__fastcall *v3)(); // rcx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = HalpHvTimerApi;
  if ( !HalpHvTimerApi )
    return __readmsr(0x40000020u);
  v3 = HvlGetReferenceTimeUsingTscPage;
  if ( (__int64 (__fastcall *)())HalpHvTimerApi != HvlGetReferenceTimeUsingTscPage )
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
