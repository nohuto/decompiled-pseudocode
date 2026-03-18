/*
 * XREFs of HalpInitializeTimers @ 0x14053A610
 * Callers:
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F98E4 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpTimerSelectRoles @ 0x14053B848 (HalpTimerSelectRoles.c)
 *     HalpMmAllocateMemoryInternal @ 0x140542CD0 (HalpMmAllocateMemoryInternal.c)
 *     HalpFindTimer @ 0x1405471A0 (HalpFindTimer.c)
 *     HalpTimerBuildKnownResourceIdString @ 0x1405472E0 (HalpTimerBuildKnownResourceIdString.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x140547330 (HalpTimerCalculateMaximumAllowableDrift.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405488E4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 *     RtlUdiv128 @ 0x1405F0850 (RtlUdiv128.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpInitializeTimers(__int64 a1)
{
  __int64 v2; // rbx
  __int64 InternalData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 Timer; // rax
  __int64 v11; // r8
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  void *MemoryInternal; // rax
  _QWORD *v21; // rdi
  unsigned int v22; // r9d
  _BYTE v24[136]; // [rsp+30h] [rbp-98h] BYREF
  int v25; // [rsp+B8h] [rbp-10h]
  int v26; // [rsp+BCh] [rbp-Ch]

  memset_0(v24, 0, sizeof(v24));
  HalpTimerLoaderBlock = a1;
  v2 = HalpStallCounter;
  HalpOriginalStallTimer = HalpStallCounter;
  InternalData = HalpTimerGetInternalData(HalpStallCounter);
  v7 = guard_dispatch_icall_no_overrides(InternalData, v4, v5, v6);
  if ( v7 < 0 )
  {
    HalpTimerSetProblemEx(v2, 15, v7, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0x61Eu);
    goto LABEL_3;
  }
  LODWORD(v9) = HalpTimerRegisterBuiltinPluginsCommon(1LL, v8, (unsigned int)v7);
  if ( (int)v9 < 0 )
  {
    HalpTimerLastProblem = 14;
    goto LABEL_3;
  }
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    v11 = *(_QWORD *)(Timer + 288);
    v12 = *(_DWORD *)(Timer + 228);
    v13 = *(_DWORD *)(Timer + 284);
    v25 = v12;
    v14 = *(unsigned __int16 *)(v11 + 24);
    v15 = *(_QWORD *)(v11 + 32);
    v26 = v13;
    HalpTimerBuildKnownResourceIdString(v24, v14 >> 1, v15);
  }
  v16 = HalpTimerSelectRoles();
  v9 = (unsigned int)v16;
  if ( v16 < 0 )
LABEL_3:
    KeBugCheckEx(0x5Cu, 0x110uLL, 0x5250631uLL, HalpTimerLastProblem, (int)v9);
  v19 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(4096LL);
    HalpTimerReferencePage = MemoryInternal;
    v21 = MemoryInternal;
    if ( !MemoryInternal )
    {
      LODWORD(v9) = -1073741670;
      goto LABEL_3;
    }
    memset_0(MemoryInternal, 0, 0x1000uLL);
    v19 = HalpPerformanceCounter;
    *(_DWORD *)v21 = 1416388936;
    v21[1] = RtlUdiv128(10000000LL, 0LL, *(_QWORD *)(v19 + 192), 0LL);
  }
  qword_140FC32D8 = (__int64)HalpTimerDpcRoutine;
  v22 = 0;
  HalpTimerPeriodicTimer = 8LL;
  qword_140FC3230 = (__int64)&qword_140FC3228;
  qword_140FC3228 = (__int64)&qword_140FC3228;
  off_140E008E8[0] = (__int64 (__fastcall *)())HalpTimerReportIdleStateUsage;
  off_140E008E0[0] = (__int64 (__fastcall *)())HalpTimerQueryWakeTime;
  HalpOriginalPerformanceCounter = v19;
  HalpTimerDpc = 275;
  qword_140FC32E0 = 0LL;
  qword_140FC32F8 = 0LL;
  qword_140FC32D0 = 0LL;
  qword_140FC3238 = 0LL;
  dword_140FC325C = 0;
  word_140FC3258 = 0;
  if ( HalpAlwaysOnCounter )
    HalpTimerMaximumAllowableDrift = HalpTimerCalculateMaximumAllowableDrift(v18, v17, v9, 0LL);
  return v22;
}
