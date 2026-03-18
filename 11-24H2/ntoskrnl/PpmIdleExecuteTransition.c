/*
 * XREFs of PpmIdleExecuteTransition @ 0x1403B4CA0
 * Callers:
 *     PoIdle @ 0x140449020 (PoIdle.c)
 * Callees:
 *     KeAccumulateTicks @ 0x14029C3C0 (KeAccumulateTicks.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     PpmUnlockProcessors @ 0x1403B66C4 (PpmUnlockProcessors.c)
 *     PpmEndActiveTimeAccumulation @ 0x1403B69C4 (PpmEndActiveTimeAccumulation.c)
 *     PpmExitCoordinatedIdle @ 0x1403B6A20 (PpmExitCoordinatedIdle.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1403B6D7C (PpmBeginActiveTimeAccumulation.c)
 *     KiCancelClockTimer @ 0x140469F60 (KiCancelClockTimer.c)
 *     PpmIdleUpdateConcurrency @ 0x14047A440 (PpmIdleUpdateConcurrency.c)
 *     PpmEventExitIdleState @ 0x140494884 (PpmEventExitIdleState.c)
 *     PpmEnterCoordinatedIdle @ 0x1404B0014 (PpmEnterCoordinatedIdle.c)
 *     PpmIdleSetSynchronizationState @ 0x1404D0080 (PpmIdleSetSynchronizationState.c)
 *     PpmEventEnterIdleState @ 0x1404D0C5C (PpmEventEnterIdleState.c)
 *     KeIdleSpecCtrl @ 0x1404E75A0 (KeIdleSpecCtrl.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HvlSetPlatformIdleState @ 0x140589780 (HvlSetPlatformIdleState.c)
 *     KeQueryWakeSource @ 0x1405B095C (KeQueryWakeSource.c)
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B94A0 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B9944 (KeResumeClockTimerFromIdle.c)
 *     KeDeepSleepProcessor @ 0x1405BC774 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     PpmCancelExitLatencyTrace @ 0x1405CDD8C (PpmCancelExitLatencyTrace.c)
 *     PpmIdlePrepareExitLatencyTrace @ 0x1405CE8C8 (PpmIdlePrepareExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CEA0C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmTraceExitLatency @ 0x1405CF3E4 (PpmTraceExitLatency.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 QuadPart; // r13
  __int64 v16; // rcx
  int v17; // r14d
  _BYTE *v18; // rcx
  char v19; // r12
  unsigned __int8 v20; // r15
  int IsEmptyAffinity; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // r11
  __int64 v25; // rax
  __int64 v26; // r9
  KSPIN_LOCK *v27; // r12
  unsigned int v28; // ebx
  __int64 v29; // rdx
  unsigned int v30; // r11d
  char v31; // r12
  __int64 v32; // rcx
  char v33; // al
  int v34; // r8d
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // r9
  __int64 i; // r8
  int v40; // ecx
  int v41; // r9d
  char result; // al
  KSPIN_LOCK *v43; // rcx
  __int64 v44; // r8
  KSPIN_LOCK *v45; // rcx
  unsigned __int8 v46; // al
  unsigned __int8 v47; // al
  char *v48; // rbx
  unsigned __int8 CurrentIrql; // bl
  __int64 v50; // r15
  unsigned __int64 v51; // r8
  __int64 v52; // rdx
  signed __int64 v53; // rbx
  char v54; // al
  struct _KPRCB *CurrentPrcb; // rbx
  int v56; // r15d
  char v57; // al
  int v58; // ecx
  int v59; // r11d
  int v60; // r8d
  __int64 *v61; // rdx
  int v62; // ecx
  __int64 v63; // rdx
  char v64; // r10
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // eax
  unsigned __int64 v69; // rcx
  int *v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  char v77; // [rsp+50h] [rbp-B0h]
  char v78; // [rsp+51h] [rbp-AFh]
  char v79; // [rsp+52h] [rbp-AEh]
  unsigned __int8 v80; // [rsp+53h] [rbp-ADh]
  char v81; // [rsp+54h] [rbp-ACh]
  char v82; // [rsp+55h] [rbp-ABh]
  char v83; // [rsp+56h] [rbp-AAh]
  char v84; // [rsp+57h] [rbp-A9h]
  int v87; // [rsp+6Ch] [rbp-94h] BYREF
  int v88; // [rsp+70h] [rbp-90h] BYREF
  int v89; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v90; // [rsp+78h] [rbp-88h] BYREF
  __int64 v91; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h]
  __int64 v94; // [rsp+98h] [rbp-68h]
  _BYTE v95[144]; // [rsp+A0h] [rbp-60h] BYREF

  v11 = a3;
  v12 = a2;
  v94 = a4;
  memset_0(v95, 0, 0x88uLL);
  v14 = *(_QWORD *)(BugCheckParameter4 + 34880);
  v89 = -1;
  QuadPart = 0LL;
  v16 = 344 * v12;
  v91 = 0LL;
  v17 = 0;
  v18 = (_BYTE *)(v14 + v16);
  v93 = *(_QWORD *)(v14 + 664);
  v88 = 0;
  v78 = 0;
  v81 = 0;
  v19 = 0;
  v82 = 0;
  v83 = 0;
  v77 = 0;
  LODWORD(v91) = 11;
  v87 = 130;
  v92 = v18;
  v84 = 0;
  *a11 = 0;
  if ( !a8 || *(_BYTE *)(v14 + 715) || (v20 = 1, v18[1397]) )
    v20 = 0;
  v80 = v20;
  v79 = 0;
  IsEmptyAffinity = KeIsEmptyAffinityEx(v14 + 336);
  v24 = 0;
  if ( !IsEmptyAffinity )
    *(_WORD *)(v14 + 56) |= 0x20u;
  if ( a10 )
    *(_WORD *)(v14 + 56) |= 0x8000u;
  *(_DWORD *)(BugCheckParameter4 + 34944) = a2;
  *(_BYTE *)(BugCheckParameter4 + 34940) = v20;
  if ( a8 )
  {
    LOBYTE(v22) = 2;
    *(_BYTE *)(BugCheckParameter4 + 34941) = v92[1394] == 0;
    PpmIdleSetSynchronizationState(BugCheckParameter4 + 34956, v22);
  }
  v25 = *(_QWORD *)(v14 + 8);
  v26 = 1LL;
  if ( v25 != -1 )
  {
    v83 = 1;
    v90 = v25 + a7;
    if ( KiClockTimerPerCpuTickScheduling == v24 )
    {
      *(_QWORD *)(BugCheckParameter4 + 34928) = v25 + a7;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
        *(unsigned __int8 *)(BugCheckParameter4 + 209));
    }
    else
    {
      KiSetClockTimer(BugCheckParameter4, a7, v25 + a7, 0, 5, v24, *(_BYTE *)(v14 + 716) == (unsigned __int8)v24);
      v24 = 0;
      v26 = 1LL;
    }
  }
  if ( v92[1393] != v24 || a9 != v24 && KiClockTimerPerCpuTickScheduling == v24 )
    goto LABEL_11;
  v51 = *(_QWORD *)(BugCheckParameter4 + 200);
  v52 = *(_QWORD *)(BugCheckParameter4 + 192);
  v81 = 1;
  _m_prefetchw((const void *)(v52 + 64));
  v53 = _InterlockedOr64((volatile signed __int64 *)(v52 + 64), v51);
  v17 = guard_dispatch_icall_no_overrides(v20 ^ 1u, v52, v51, 1LL);
  v30 = 0;
  if ( *(_DWORD *)(BugCheckParameter4 + 14424) )
  {
    v17 = -2147483631;
LABEL_74:
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 34956, 0LL);
    v32 = 1LL;
    v31 = 1;
    v79 = 1;
    goto LABEL_20;
  }
  if ( v17 < 0 )
    goto LABEL_74;
  v54 = PpmIdleRecheckCoordinatedIdleMask(
          v14,
          *(unsigned __int8 *)(BugCheckParameter4 + 208),
          *(_QWORD *)(BugCheckParameter4 + 200) | v53);
  v30 = 0;
  if ( v54 )
  {
    v17 = -1073741802;
    goto LABEL_74;
  }
  if ( a10 && !a5 )
    v17 = 128;
  if ( v20 )
  {
    v84 = 1;
    _InterlockedAdd(&PpmNonInterruptibleCount, 1u);
    CurrentPrcb = KeGetCurrentPrcb();
    v56 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      guard_dispatch_icall_no_overrides(1LL, v29, v23, v26);
      CurrentPrcb->ClockTimerState.ClockActive = 0;
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v56 )
      ++dword_140F21764;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  v90 = -1LL;
  if ( *(_BYTE *)(v14 + 716) )
  {
    v11 = a3;
    v57 = PpmIdlePrepareExitLatencyTrace(v14, a3);
    v82 = v57;
    if ( v57 )
    {
      v58 = 512;
      *(_WORD *)(v14 + 56) |= 0x200u;
    }
    if ( !a5 )
      goto LABEL_101;
    if ( a3 == -1 )
    {
      v58 = 1;
    }
    else
    {
      v58 = 1;
      if ( PpmDripsStateIndex != -1 )
        v19 = 1;
    }
    if ( a5 == 2 )
    {
      v60 = 1;
    }
    else
    {
LABEL_101:
      v60 = v59;
      if ( a5 )
        v58 = 1;
      else
        LOBYTE(v58) = v59;
    }
    v61 = &v91;
    LOBYTE(v61) = v19;
    KePrepareClockTimerForPlatformIdle(v58, (_DWORD)v61, v60, *(_QWORD *)(v14 + 696), v57, (__int64)&v91, (__int64)&v90);
  }
  else
  {
    if ( !KiClockTimerPerCpuTickScheduling )
      goto LABEL_111;
    KePrepareClockTimerForIdle(&v90);
    v62 = 10;
    v11 = a3;
    if ( (_DWORD)KiClockTimerOwner == *(_DWORD *)(BugCheckParameter4 + 36) )
      v62 = 2;
    LODWORD(v91) = v62;
  }
  if ( KiClockTimerPerCpuTickScheduling )
  {
    *(_QWORD *)(BugCheckParameter4 + 34928) = v90;
    goto LABEL_11;
  }
LABEL_111:
  v11 = a3;
LABEL_11:
  v27 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35320);
  if ( v27 )
  {
    PpmIdleUpdateConcurrency(*(PKSPIN_LOCK *)(BugCheckParameter4 + 35320));
    v43 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35328);
    if ( v43 )
      PpmIdleUpdateConcurrency(v43);
  }
  *(_DWORD *)(v14 + 28) = a2;
  PpmEndActiveTimeAccumulation(BugCheckParameter4, a6, v23, v26);
  if ( *(_QWORD *)(v14 + 600) )
    v17 = guard_dispatch_icall_no_overrides(v93, a2, v11, *(unsigned int *)(v14 + 1036));
  if ( v11 != -1 && v11 == PpmDripsStateIndex && *(int *)(BugCheckParameter4 + 35104) >= 2 )
    HvlSetPlatformIdleState(1LL);
  if ( v17 >= 0 )
  {
    v77 = 1;
    PpmEnterCoordinatedIdle(*(_DWORD *)(v14 + 1036), *(_QWORD *)(v14 + 1048), v11, a6, a5);
    if ( v11 != -1 )
      *(_WORD *)(v14 + 56) |= 0x10u;
    LOBYTE(v44) = *(_BYTE *)(v14 + 717);
    PpmEventEnterIdleState(a2, *(unsigned __int16 *)(v14 + 56), v44, *(_QWORD *)(v14 + 688));
    v64 = 0;
    if ( a8 )
    {
      LOBYTE(v63) = v80 + 3;
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 34956, v63);
    }
    if ( v81 != v64 )
    {
      if ( v92[1392] < 2u )
        v78 = v64;
      else
        v78 = KeDeepSleepProcessor();
    }
    _InterlockedIncrement8((volatile signed __int8 *)(BugCheckParameter4 + 14567));
    KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v88);
    v17 = guard_dispatch_icall_no_overrides(v93, v94, a2, a3);
    KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v88);
    _InterlockedDecrement8((volatile signed __int8 *)(BugCheckParameter4 + 14567));
    if ( v78 )
    {
      v78 = 0;
      if ( *(_BYTE *)(BugCheckParameter4 + 34394) )
        KeWakeProcessor(v66, v65, v67);
    }
    if ( *(int *)(v14 + 60) < 0 && v17 >= 0 )
      v17 = *(_DWORD *)(v14 + 60);
    v28 = a2;
    PpmEventExitIdleState(a2, (unsigned int)v17);
  }
  else
  {
    v28 = a2;
  }
  QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
  PpmBeginActiveTimeAccumulation(BugCheckParameter4, QuadPart);
  v30 = 0;
  if ( v27 )
  {
    PpmIdleUpdateConcurrency(v27);
    v45 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35328);
    v30 = 0;
    if ( v45 )
    {
      PpmIdleUpdateConcurrency(v45);
      v30 = 0;
    }
  }
  *(_QWORD *)(BugCheckParameter4 + 34896) = QuadPart - a6;
  if ( a8 )
  {
    v46 = PpmIdleSetSynchronizationState(BugCheckParameter4 + 34956, 0LL);
    if ( v17 >= 0 && v46 != 8 && v80 != (_BYTE)v30 )
      KeBugCheckEx(0xA0u, 0x702uLL, v28, v46, BugCheckParameter4);
    *(_BYTE *)(BugCheckParameter4 + 34941) = v30;
  }
  v31 = 0;
  v32 = 1LL;
LABEL_20:
  if ( *(_QWORD *)(BugCheckParameter4 + 34896) >= (unsigned __int64)PpmIdleClusterIdleMitigationThreshold
    || *(_DWORD *)(v14 + 1036) <= v30 )
  {
    *(_BYTE *)(v14 + 65) = v30;
LABEL_22:
    v33 = v77;
    goto LABEL_23;
  }
  v33 = v77;
  if ( v77 )
  {
    v47 = *(_BYTE *)(v14 + 65);
    if ( v47 < 5u )
      *(_BYTE *)(v14 + 65) = v47 + 1;
    goto LABEL_22;
  }
  *(_BYTE *)(v14 + 65) = v30;
LABEL_23:
  if ( v81 == (_BYTE)v30 )
  {
    if ( a10 == (_BYTE)v30 )
      goto LABEL_25;
    v48 = a11;
  }
  else
  {
    if ( v33
      && v17 >= 0
      && !v31
      && PpmPlatformStates
      && PpmDripsStateIndex != -1
      && *(_DWORD *)(448LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 416) )
    {
      v68 = KeQueryWakeSource(&v91, &v87, v95);
      v48 = a11;
      LOBYTE(v30) = 0;
      if ( v68 < 0 )
      {
        v87 = 3;
      }
      else if ( PopIdleWakeSkippingEnabled && !v87 )
      {
        *a11 = 1;
      }
    }
    else
    {
      v48 = a11;
    }
    v69 = *(unsigned __int8 *)(BugCheckParameter4 + 209);
    _interlockedbittestandreset64((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL), v69);
    if ( v78 != (_BYTE)v30 && *(_BYTE *)(BugCheckParameter4 + 34394) )
    {
      KeWakeProcessor(v69, v29, v23);
      LOBYTE(v30) = 0;
    }
    if ( v82 == (_BYTE)v30 || v17 < 0 )
    {
      LOBYTE(v29) = a5 == 2;
      v70 = 0LL;
    }
    else
    {
      v70 = &v89;
      LOBYTE(v29) = a5 == 2;
    }
    LOBYTE(v69) = *v48;
    KeResumeClockTimerFromIdle(v69, v29, v70);
    guard_dispatch_icall_no_overrides(v72, v71, v73, v74);
    LOBYTE(v30) = 0;
  }
  KeAccumulateTicks(
    (struct _KPRCB *)BugCheckParameter4,
    *(_DWORD *)(BugCheckParameter4 + 14528),
    MEMORY[0xFFFFF78000000320],
    0,
    v30,
    (*v48 != 0) + 3);
LABEL_25:
  LOBYTE(v32) = 1;
  guard_dispatch_icall_no_overrides(v32, v29, v23, v26);
  v35 = 0LL;
  if ( v83 )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( v92[1393] )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v35) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v35, 15LL);
        }
        KiCancelClockTimer(BugCheckParameter4, 5LL, 0LL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v75) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v75);
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        KiCancelClockTimer(BugCheckParameter4, 5LL, 0LL);
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
  LOBYTE(v34) = v77;
  v36 = PpmExitCoordinatedIdle(
          BugCheckParameter4,
          (int)v14 + 1032,
          v34,
          v17,
          v31,
          QuadPart,
          a5,
          *a11,
          (__int64)v95,
          v87);
  v37 = v36;
  if ( !v31 )
  {
    BugCheckParameter4a = *(_QWORD *)(v14 + 1048);
    guard_dispatch_icall_no_overrides(v93, a2, v36, *(unsigned int *)(v14 + 1036));
    if ( v37 != -1 && v37 == PpmDripsStateIndex && *(int *)(BugCheckParameter4 + 35104) >= 2 )
      HvlSetPlatformIdleState(0LL);
  }
  v38 = *(_QWORD *)(v14 + 1048);
  for ( i = *(unsigned int *)(v14 + 1036);
        (_DWORD)i;
        *(_DWORD *)(448LL * *(unsigned int *)(v38 + 4 * i) + PpmPlatformStates + 416) = 0 )
  {
    i = (unsigned int)(i - 1);
  }
  if ( v84 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  PpmUnlockProcessors(v14 + 336, v14 + 336, i, v38, BugCheckParameter4a);
  if ( *(_BYTE *)(v14 + 3) )
  {
    v50 = *(_QWORD *)(BugCheckParameter4 + 34880);
    if ( v17 < 0 || (int)PpmTraceExitLatency(v40, a2, v37, v41, v89, QuadPart) < 0 )
      PpmCancelExitLatencyTrace(BugCheckParameter4);
    else
      *(_BYTE *)(v50 + 3) = 0;
  }
  result = v79;
  *(_BYTE *)(v14 + 64) = v79;
  *(_DWORD *)(v14 + 60) = v17;
  return result;
}
