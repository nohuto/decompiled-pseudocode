/*
 * XREFs of HalpInitializeTimers @ 0x140537E50
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 *     HalpTimerBuildKnownResourceIdString @ 0x140544BA0 (HalpTimerBuildKnownResourceIdString.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x140544BF0 (HalpTimerCalculateMaximumAllowableDrift.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405461A4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 *     RtlUdiv128 @ 0x1405EDE30 (RtlUdiv128.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpInitializeTimers(__int64 a1)
{
  __int64 v2; // rbx
  __int64 InternalData; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 Timer; // rax
  __int64 v9; // r8
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  void *MemoryInternal; // rax
  _QWORD *v19; // rdi
  unsigned int v20; // r9d
  _BYTE v22[136]; // [rsp+30h] [rbp-98h] BYREF
  int v23; // [rsp+B8h] [rbp-10h]
  int v24; // [rsp+BCh] [rbp-Ch]

  memset_0(v22, 0, sizeof(v22));
  HalpTimerLoaderBlock = a1;
  v2 = HalpStallCounter;
  HalpOriginalStallTimer = HalpStallCounter;
  InternalData = HalpTimerGetInternalData(HalpStallCounter);
  v5 = guard_dispatch_icall_no_overrides(InternalData, v4);
  if ( v5 < 0 )
  {
    HalpTimerSetProblemEx(v2, 15, v5, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0x61Eu);
    goto LABEL_3;
  }
  LODWORD(v7) = HalpTimerRegisterBuiltinPluginsCommon(1LL, v6, (unsigned int)v5);
  if ( (int)v7 < 0 )
  {
    HalpTimerLastProblem = 14;
    goto LABEL_3;
  }
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    v9 = *(_QWORD *)(Timer + 288);
    v10 = *(_DWORD *)(Timer + 228);
    v11 = *(_DWORD *)(Timer + 284);
    v23 = v10;
    v12 = *(unsigned __int16 *)(v9 + 24);
    v13 = *(_QWORD *)(v9 + 32);
    v24 = v11;
    HalpTimerBuildKnownResourceIdString(v22, v12 >> 1, v13);
  }
  v14 = HalpTimerSelectRoles();
  v7 = (unsigned int)v14;
  if ( v14 < 0 )
LABEL_3:
    KeBugCheckEx(0x5Cu, 0x110uLL, 0x5250631uLL, HalpTimerLastProblem, (int)v7);
  v17 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(4096LL);
    HalpTimerReferencePage = MemoryInternal;
    v19 = MemoryInternal;
    if ( !MemoryInternal )
    {
      LODWORD(v7) = -1073741670;
      goto LABEL_3;
    }
    memset_0(MemoryInternal, 0, 0x1000uLL);
    v17 = HalpPerformanceCounter;
    *(_DWORD *)v19 = 1416388936;
    v19[1] = RtlUdiv128(10000000LL, 0LL, *(_QWORD *)(v17 + 192), 0LL);
  }
  qword_140FC3538 = (__int64)HalpTimerDpcRoutine;
  v20 = 0;
  HalpTimerPeriodicTimer = 8LL;
  qword_140FC3490 = (__int64)&qword_140FC3488;
  qword_140FC3488 = (__int64)&qword_140FC3488;
  off_140E008E8[0] = (__int64 (__fastcall *)())HalpTimerReportIdleStateUsage;
  off_140E008E0[0] = (__int64 (__fastcall *)())HalpTimerQueryWakeTime;
  HalpOriginalPerformanceCounter = v17;
  HalpTimerDpc = 275;
  qword_140FC3540 = 0LL;
  qword_140FC3558 = 0LL;
  qword_140FC3530 = 0LL;
  qword_140FC3498 = 0LL;
  dword_140FC34BC = 0;
  word_140FC34B8 = 0;
  if ( HalpAlwaysOnCounter )
    HalpTimerMaximumAllowableDrift = HalpTimerCalculateMaximumAllowableDrift(v16, v15, v7, 0LL);
  return v20;
}
