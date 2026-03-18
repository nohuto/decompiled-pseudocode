/*
 * XREFs of HalpHvCounterQueryCounter @ 0x1403D6CB0
 * Callers:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     HalpTimerSavePerformanceCounter @ 0x1403D6404 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1403D66C0 (HalpTimerDpcRoutine.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403D69D4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpHvTimerArm @ 0x1403D6C10 (HalpHvTimerArm.c)
 *     HalpTimerDelayedQueryCounter @ 0x1405477F0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140548008 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1403D6DD0 (HvlpGetRegister64.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvCounterQueryCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 (__fastcall *v5)(_DWORD *, __int64); // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = HalpHvTimerApi;
  if ( !HalpHvTimerApi )
    return __readmsr(0x40000020u);
  v5 = HvlGetReferenceTimeUsingTscPage;
  if ( (unsigned __int64 (__fastcall *)(_DWORD *, __int64))HalpHvTimerApi != HvlGetReferenceTimeUsingTscPage )
    return guard_dispatch_icall_no_overrides(0LL, a2, a3, a4);
  v9 = 0LL;
  while ( 1 )
  {
    v6 = *(unsigned int *)HvlpReferenceTscPage;
    if ( !(_DWORD)v6 )
      break;
    if ( MEMORY[0xFFFFF78000000294] )
    {
      __asm { rdtscp }
      LODWORD(v9) = (_DWORD)v5;
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
      v4 = __rdtsc();
      LODWORD(a2) = HIDWORD(v4);
      v4 = (unsigned int)v4;
      a2 = (unsigned int)a2;
    }
    v7 = ((v4 | (a2 << 32)) * (unsigned __int128)*((unsigned __int64 *)HvlpReferenceTscPage + 1)) >> 64;
    v4 = (unsigned __int64)HvlpReferenceTscPage;
    a2 = *((_QWORD *)HvlpReferenceTscPage + 2) + v7;
    v9 = a2;
    LODWORD(v5) = *(_DWORD *)HvlpReferenceTscPage;
    if ( *(_DWORD *)HvlpReferenceTscPage == (_DWORD)v6 )
      return v9;
  }
  HvlpGetRegister64(589828LL, &v9, v6);
  return v9;
}
