/*
 * XREFs of PpmIdleExecuteTransition @ 0x1404E92D8
 * Callers:
 *     PoIdle @ 0x14044B7A0 (PoIdle.c)
 * Callees:
 *     PpmUnlockProcessors @ 0x140205028 (PpmUnlockProcessors.c)
 *     PpmExitCoordinatedIdle @ 0x14026A9B8 (PpmExitCoordinatedIdle.c)
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KiCancelClockTimer @ 0x1403E9910 (KiCancelClockTimer.c)
 *     PpmEndActiveTimeAccumulation @ 0x1403E9BF4 (PpmEndActiveTimeAccumulation.c)
 *     PpmBeginActiveTimeAccumulation @ 0x140466B9C (PpmBeginActiveTimeAccumulation.c)
 *     PpmIdleUpdateConcurrency @ 0x140479680 (PpmIdleUpdateConcurrency.c)
 *     PpmEventExitIdleState @ 0x140495268 (PpmEventExitIdleState.c)
 *     PpmEnterCoordinatedIdle @ 0x1404AF304 (PpmEnterCoordinatedIdle.c)
 *     PpmIdleSetSynchronizationState @ 0x1404CFF74 (PpmIdleSetSynchronizationState.c)
 *     PpmEventEnterIdleState @ 0x1404D0B8C (PpmEventEnterIdleState.c)
 *     KeIdleSpecCtrl @ 0x1404E6ED0 (KeIdleSpecCtrl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HvlSetPlatformIdleState @ 0x140586110 (HvlSetPlatformIdleState.c)
 *     KeQueryWakeSource @ 0x1405ACFCC (KeQueryWakeSource.c)
 *     KePrepareClockTimerForIdle @ 0x1405B52DC (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B5660 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 *     KeDeepSleepProcessor @ 0x1405B88D4 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     PpmCancelExitLatencyTrace @ 0x1405C96DC (PpmCancelExitLatencyTrace.c)
 *     PpmIdlePrepareExitLatencyTrace @ 0x1405CA218 (PpmIdlePrepareExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CA35C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmTraceExitLatency @ 0x1405CAD34 (PpmTraceExitLatency.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char *a11)
{
  unsigned int v11; // ebx
  __int64 v12; // r14
  __int64 v14; // rsi
  LARGE_INTEGER PerformanceCounter; // r13
  __int64 v16; // rcx
  int v17; // r14d
  _BYTE *v18; // rcx
  char v19; // r12
  unsigned __int8 v20; // r15
  int IsEmptyAffinity; // eax
  char v22; // r11
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  signed __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // r11d
  __int64 v30; // rcx
  char v31; // r12
  char v32; // al
  struct _KPRCB *CurrentPrcb; // rbx
  int v34; // r15d
  char v35; // al
  int v36; // ecx
  int v37; // r11d
  int v38; // r8d
  __int64 *v39; // rdx
  int v40; // ecx
  KSPIN_LOCK *v41; // r12
  KSPIN_LOCK *v42; // rcx
  char v43; // r10
  char v44; // bl
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // ebx
  KSPIN_LOCK *v49; // rcx
  unsigned __int8 v50; // al
  char v51; // al
  unsigned __int8 v52; // al
  int v53; // eax
  char *v54; // rbx
  unsigned __int64 v55; // rcx
  int *v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v62; // rdx
  int v63; // ebx
  __int64 v64; // r9
  __int64 v65; // r8
  int v66; // ecx
  int v67; // r9d
  __int64 v68; // r15
  char result; // al
  char v70; // [rsp+50h] [rbp-B0h]
  char v71; // [rsp+51h] [rbp-AFh]
  char v72; // [rsp+52h] [rbp-AEh]
  unsigned __int8 v73; // [rsp+53h] [rbp-ADh]
  char v74; // [rsp+54h] [rbp-ACh]
  char v75; // [rsp+55h] [rbp-ABh]
  char v76; // [rsp+56h] [rbp-AAh]
  char v77; // [rsp+57h] [rbp-A9h]
  int v80; // [rsp+6Ch] [rbp-94h] BYREF
  int v81; // [rsp+70h] [rbp-90h] BYREF
  int v82; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v83; // [rsp+78h] [rbp-88h] BYREF
  __int64 v84; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v85; // [rsp+88h] [rbp-78h]
  __int64 v86; // [rsp+90h] [rbp-70h]
  __int64 v87; // [rsp+98h] [rbp-68h]
  _BYTE v88[144]; // [rsp+A0h] [rbp-60h] BYREF

  v11 = a3;
  v12 = a2;
  v87 = a4;
  memset_0(v88, 0, 0x88uLL);
  v14 = *(_QWORD *)(BugCheckParameter4 + 34880);
  v82 = -1;
  PerformanceCounter.QuadPart = 0LL;
  v16 = 344 * v12;
  v84 = 0LL;
  v17 = 0;
  v18 = (_BYTE *)(v14 + v16);
  v86 = *(_QWORD *)(v14 + 664);
  v81 = 0;
  v71 = 0;
  v74 = 0;
  v19 = 0;
  v75 = 0;
  v76 = 0;
  v70 = 0;
  LODWORD(v84) = 11;
  v80 = 130;
  v85 = v18;
  v77 = 0;
  *a11 = 0;
  if ( !a8 || *(_BYTE *)(v14 + 715) || (v20 = 1, v18[1397]) )
    v20 = 0;
  v73 = v20;
  v72 = 0;
  IsEmptyAffinity = KeIsEmptyAffinityEx((unsigned __int16 *)(v14 + 336));
  v22 = 0;
  if ( !IsEmptyAffinity )
    *(_WORD *)(v14 + 56) |= 0x20u;
  if ( a10 )
    *(_WORD *)(v14 + 56) |= 0x8000u;
  *(_DWORD *)(BugCheckParameter4 + 34944) = a2;
  *(_BYTE *)(BugCheckParameter4 + 34940) = v20;
  if ( a8 )
  {
    *(_BYTE *)(BugCheckParameter4 + 34941) = v85[1394] == 0;
    PpmIdleSetSynchronizationState((unsigned __int32 *)(BugCheckParameter4 + 34956), 2u);
  }
  v23 = *(_QWORD *)(v14 + 8);
  if ( v23 != -1 )
  {
    v76 = 1;
    v83 = v23 + a7;
    if ( KiClockTimerPerCpuTickScheduling == v22 )
    {
      *(_QWORD *)(BugCheckParameter4 + 34928) = v23 + a7;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
        *(unsigned __int8 *)(BugCheckParameter4 + 209));
    }
    else
    {
      KiSetClockTimer(
        BugCheckParameter4,
        (LARGE_INTEGER)a7,
        v23 + a7,
        0,
        5,
        v22,
        *(_BYTE *)(v14 + 716) == (unsigned __int8)v22);
      v22 = 0;
    }
  }
  if ( v85[1393] != v22 || a9 != v22 && KiClockTimerPerCpuTickScheduling == v22 )
    goto LABEL_57;
  v24 = *(_QWORD *)(BugCheckParameter4 + 200);
  v25 = *(_QWORD *)(BugCheckParameter4 + 192);
  v74 = 1;
  _m_prefetchw((const void *)(v25 + 64));
  v26 = _InterlockedOr64((volatile signed __int64 *)(v25 + 64), v24);
  v17 = guard_dispatch_icall_no_overrides(v20 ^ 1u, v25);
  v29 = 0;
  if ( *(_DWORD *)(BugCheckParameter4 + 14424) )
  {
    v17 = -2147483631;
LABEL_20:
    if ( a8 )
      PpmIdleSetSynchronizationState((unsigned __int32 *)(BugCheckParameter4 + 34956), 0);
    v30 = 1LL;
    v31 = 1;
    v72 = 1;
    goto LABEL_93;
  }
  if ( v17 < 0 )
    goto LABEL_20;
  v32 = PpmIdleRecheckCoordinatedIdleMask(
          v14,
          *(unsigned __int8 *)(BugCheckParameter4 + 208),
          *(_QWORD *)(BugCheckParameter4 + 200) | v26);
  v29 = 0;
  if ( v32 )
  {
    v17 = -1073741802;
    goto LABEL_20;
  }
  if ( a10 && !a5 )
    v17 = 128;
  if ( v20 )
  {
    v77 = 1;
    _InterlockedAdd(&PpmNonInterruptibleCount, 1u);
    CurrentPrcb = KeGetCurrentPrcb();
    v34 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      guard_dispatch_icall_no_overrides(1LL, v27);
      CurrentPrcb->PendingTickFlags &= ~1u;
      CurrentPrcb->ClockTimerState.ClockActive = 0;
    }
    if ( CurrentPrcb->Number == v34 )
      ++dword_140F20984;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  v83 = -1LL;
  if ( *(_BYTE *)(v14 + 716) )
  {
    v11 = a3;
    v35 = PpmIdlePrepareExitLatencyTrace(v14, a3);
    v75 = v35;
    if ( v35 )
    {
      v36 = 512;
      *(_WORD *)(v14 + 56) |= 0x200u;
    }
    if ( !a5 )
      goto LABEL_47;
    if ( a3 == -1 )
    {
      v36 = 1;
    }
    else
    {
      v36 = 1;
      if ( PpmDripsStateIndex != -1 )
        v19 = 1;
    }
    if ( a5 == 2 )
    {
      v38 = 1;
    }
    else
    {
LABEL_47:
      v38 = v37;
      if ( a5 )
        v36 = 1;
      else
        LOBYTE(v36) = v37;
    }
    v39 = &v84;
    LOBYTE(v39) = v19;
    KePrepareClockTimerForPlatformIdle(v36, (_DWORD)v39, v38, *(_QWORD *)(v14 + 696), v35, (__int64)&v84, (__int64)&v83);
  }
  else
  {
    if ( !KiClockTimerPerCpuTickScheduling )
      goto LABEL_74;
    KePrepareClockTimerForIdle(&v83);
    v40 = 10;
    v11 = a3;
    if ( (_DWORD)KiClockTimerOwner == *(_DWORD *)(BugCheckParameter4 + 36) )
      v40 = 2;
    LODWORD(v84) = v40;
  }
  if ( KiClockTimerPerCpuTickScheduling )
  {
    *(_QWORD *)(BugCheckParameter4 + 34928) = v83;
    goto LABEL_57;
  }
LABEL_74:
  v11 = a3;
LABEL_57:
  v41 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35320);
  if ( v41 )
  {
    PpmIdleUpdateConcurrency(*(PKSPIN_LOCK *)(BugCheckParameter4 + 35320), a6, 1, 1);
    v42 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35328);
    if ( v42 )
      PpmIdleUpdateConcurrency(v42, a6, 1, 1);
  }
  *(_DWORD *)(v14 + 28) = a2;
  PpmEndActiveTimeAccumulation(BugCheckParameter4, a6);
  if ( *(_QWORD *)(v14 + 600) )
    v17 = guard_dispatch_icall_no_overrides(v86, a2);
  if ( v11 != -1 && v11 == PpmDripsStateIndex && *(int *)(BugCheckParameter4 + 35104) >= 2 )
    HvlSetPlatformIdleState(1LL);
  if ( v17 < 0 )
  {
    v48 = a2;
  }
  else
  {
    v70 = 1;
    PpmEnterCoordinatedIdle(*(unsigned int *)(v14 + 1036), *(_QWORD *)(v14 + 1048), v11, a6, a5);
    if ( v11 != -1 )
      *(_WORD *)(v14 + 56) |= 0x10u;
    PpmEventEnterIdleState(a2, *(_WORD *)(v14 + 56), *(_BYTE *)(v14 + 717), *(_QWORD *)(v14 + 688));
    v43 = 0;
    if ( a8 )
      PpmIdleSetSynchronizationState((unsigned __int32 *)(BugCheckParameter4 + 34956), v73 + 3);
    if ( v74 != v43 )
    {
      if ( v85[1392] < 2u )
        v71 = v43;
      else
        v71 = KeDeepSleepProcessor();
    }
    _InterlockedIncrement8((volatile signed __int8 *)(BugCheckParameter4 + 14567));
    v44 = KeIdleSpecCtrl(BugCheckParameter4, 1, &v81, 0);
    v17 = guard_dispatch_icall_no_overrides(v86, v87);
    KeIdleSpecCtrl(BugCheckParameter4, 0, &v81, v44);
    _InterlockedDecrement8((volatile signed __int8 *)(BugCheckParameter4 + 14567));
    if ( v71 )
    {
      v71 = 0;
      if ( *(_BYTE *)(BugCheckParameter4 + 34394) )
        KeWakeProcessor(v46, v45, v47);
    }
    if ( *(int *)(v14 + 60) < 0 && v17 >= 0 )
      v17 = *(_DWORD *)(v14 + 60);
    v48 = a2;
    PpmEventExitIdleState(a2, v17);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmBeginActiveTimeAccumulation(BugCheckParameter4, PerformanceCounter.QuadPart);
  v29 = 0;
  if ( v41 )
  {
    PpmIdleUpdateConcurrency(v41, PerformanceCounter.QuadPart, 0, 1);
    v49 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35328);
    v29 = 0;
    if ( v49 )
    {
      PpmIdleUpdateConcurrency(v49, PerformanceCounter.QuadPart, 0, 1);
      v29 = 0;
    }
  }
  *(_QWORD *)(BugCheckParameter4 + 34896) = PerformanceCounter.QuadPart - a6;
  if ( a8 )
  {
    v50 = PpmIdleSetSynchronizationState((unsigned __int32 *)(BugCheckParameter4 + 34956), 0);
    if ( v17 >= 0 && v50 != 8 && v73 != (_BYTE)v29 )
      KeBugCheckEx(0xA0u, 0x702uLL, v48, v50, BugCheckParameter4);
    *(_BYTE *)(BugCheckParameter4 + 34941) = v29;
  }
  v31 = 0;
  v30 = 1LL;
LABEL_93:
  if ( *(_QWORD *)(BugCheckParameter4 + 34896) >= (unsigned __int64)PpmIdleClusterIdleMitigationThreshold
    || *(_DWORD *)(v14 + 1036) <= v29 )
  {
    *(_BYTE *)(v14 + 65) = v29;
  }
  else
  {
    v51 = v70;
    if ( !v70 )
    {
      *(_BYTE *)(v14 + 65) = v29;
      goto LABEL_101;
    }
    v52 = *(_BYTE *)(v14 + 65);
    if ( v52 < 5u )
      *(_BYTE *)(v14 + 65) = v52 + 1;
  }
  v51 = v70;
LABEL_101:
  if ( v74 == (_BYTE)v29 )
  {
    if ( a10 == (_BYTE)v29 )
      goto LABEL_125;
    v54 = a11;
  }
  else
  {
    if ( v51
      && v17 >= 0
      && !v31
      && PpmPlatformStates
      && PpmDripsStateIndex != -1
      && *(_DWORD *)(448LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 416) )
    {
      v53 = KeQueryWakeSource(&v84, &v80, v88);
      v54 = a11;
      LOBYTE(v29) = 0;
      if ( v53 < 0 )
      {
        v80 = 3;
      }
      else if ( PopIdleWakeSkippingEnabled && !v80 )
      {
        *a11 = 1;
      }
    }
    else
    {
      v54 = a11;
    }
    v55 = *(unsigned __int8 *)(BugCheckParameter4 + 209);
    _interlockedbittestandreset64((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL), v55);
    if ( v71 != (_BYTE)v29 && *(_BYTE *)(BugCheckParameter4 + 34394) )
    {
      KeWakeProcessor(v55, v27, v28);
      LOBYTE(v29) = 0;
    }
    if ( v75 == (_BYTE)v29 || v17 < 0 )
    {
      LOBYTE(v27) = a5 == 2;
      v56 = 0LL;
    }
    else
    {
      v56 = &v82;
      LOBYTE(v27) = a5 == 2;
    }
    LOBYTE(v55) = *v54;
    KeResumeClockTimerFromIdle(v55, v27, v56);
    guard_dispatch_icall_no_overrides(v58, v57);
    LOBYTE(v29) = 0;
  }
  KeAccumulateTicks(
    BugCheckParameter4,
    *(_DWORD *)(BugCheckParameter4 + 14528),
    MEMORY[0xFFFFF78000000320],
    0,
    v29,
    (*v54 != 0) + 3);
LABEL_125:
  LOBYTE(v30) = 1;
  guard_dispatch_icall_no_overrides(v30, v27);
  v60 = 0LL;
  if ( v76 )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( v85[1393] )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v60) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v60);
        }
        KiCancelClockTimer(BugCheckParameter4, 5, 0);
        if ( KiIrqlFlags )
        {
          LOBYTE(v62) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v62);
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        KiCancelClockTimer(BugCheckParameter4, 5, 0);
      }
      *(_QWORD *)(BugCheckParameter4 + 34928) = -1LL;
    }
    else
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
        *(unsigned __int8 *)(BugCheckParameter4 + 209));
      *(_QWORD *)(BugCheckParameter4 + 34928) = -1LL;
    }
  }
  LOBYTE(v59) = v70;
  v63 = PpmExitCoordinatedIdle(
          BugCheckParameter4,
          v14 + 1032,
          v59,
          (unsigned int)v17,
          v31,
          PerformanceCounter.QuadPart,
          a5,
          *a11,
          (__int64)v88,
          v80);
  if ( !v31 )
  {
    guard_dispatch_icall_no_overrides(v86, a2);
    if ( v63 != -1 && v63 == PpmDripsStateIndex && *(int *)(BugCheckParameter4 + 35104) >= 2 )
      HvlSetPlatformIdleState(0LL);
  }
  v64 = *(_QWORD *)(v14 + 1048);
  LODWORD(v65) = *(_DWORD *)(v14 + 1036);
  while ( (_DWORD)v65 )
  {
    v65 = (unsigned int)(v65 - 1);
    *(_DWORD *)(448LL * *(unsigned int *)(v64 + 4 * v65) + PpmPlatformStates + 416) = 0;
  }
  if ( v77 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  PpmUnlockProcessors(v14 + 336, (unsigned __int16 *)(v14 + 336));
  if ( *(_BYTE *)(v14 + 3) )
  {
    v68 = *(_QWORD *)(BugCheckParameter4 + 34880);
    if ( v17 < 0 || (int)PpmTraceExitLatency(v66, a2, v63, v67, v82, PerformanceCounter.QuadPart) < 0 )
      PpmCancelExitLatencyTrace(BugCheckParameter4);
    else
      *(_BYTE *)(v68 + 3) = 0;
  }
  result = v72;
  *(_BYTE *)(v14 + 64) = v72;
  *(_DWORD *)(v14 + 60) = v17;
  return result;
}
