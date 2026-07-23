/*
 * XREFs of PpmIdleExecuteTransition @ 0x140371030
 * Callers:
 *     PoIdle @ 0x140441770 (PoIdle.c)
 * Callees:
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     PpmUnlockProcessors @ 0x140371990 (PpmUnlockProcessors.c)
 *     PpmEndActiveTimeAccumulation @ 0x140371B70 (PpmEndActiveTimeAccumulation.c)
 *     PpmExitCoordinatedIdle @ 0x140371BCC (PpmExitCoordinatedIdle.c)
 *     PpmBeginActiveTimeAccumulation @ 0x140371F00 (PpmBeginActiveTimeAccumulation.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x140462E90 (KiCancelClockTimer.c)
 *     PpmIdleUpdateConcurrency @ 0x140475BB0 (PpmIdleUpdateConcurrency.c)
 *     PpmEventExitIdleState @ 0x14048F314 (PpmEventExitIdleState.c)
 *     PpmEnterCoordinatedIdle @ 0x1404AA8A4 (PpmEnterCoordinatedIdle.c)
 *     PpmIdleSetSynchronizationState @ 0x1404C9170 (PpmIdleSetSynchronizationState.c)
 *     PpmEventEnterIdleState @ 0x1404C9C9C (PpmEventEnterIdleState.c)
 *     KeIdleSpecCtrl @ 0x1404DE260 (KeIdleSpecCtrl.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvlSetPlatformIdleState @ 0x140586A70 (HvlSetPlatformIdleState.c)
 *     KeQueryWakeSource @ 0x1405AD8CC (KeQueryWakeSource.c)
 *     KePrepareClockTimerForIdle @ 0x1405B675C (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B6F84 (KeResumeClockTimerFromIdle.c)
 *     KeDeepSleepProcessor @ 0x1405B9DA4 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     PpmCancelExitLatencyTrace @ 0x1405CB4AC (PpmCancelExitLatencyTrace.c)
 *     PpmIdlePrepareExitLatencyTrace @ 0x1405CBFE8 (PpmIdlePrepareExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1405CC12C (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmTraceExitLatency @ 0x1405CCB04 (PpmTraceExitLatency.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  int v36; // ebx
  __int64 v37; // r9
  __int64 i; // r8
  int v39; // ecx
  int v40; // r9d
  char result; // al
  KSPIN_LOCK *v42; // rcx
  __int64 v43; // r8
  KSPIN_LOCK *v44; // rcx
  unsigned __int8 v45; // al
  unsigned __int8 v46; // al
  char *v47; // rbx
  unsigned __int8 CurrentIrql; // bl
  __int64 v49; // r15
  unsigned __int64 v50; // r8
  __int64 v51; // rdx
  signed __int64 v52; // rbx
  char v53; // al
  struct _KPRCB *CurrentPrcb; // rbx
  int v55; // r15d
  char v56; // al
  int v57; // ecx
  int v58; // r11d
  int v59; // r8d
  __int64 *v60; // rdx
  int v61; // ecx
  __int64 v62; // rdx
  char v63; // r10
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // eax
  unsigned __int64 v68; // rcx
  int *v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  char v74; // [rsp+50h] [rbp-B0h]
  char v75; // [rsp+51h] [rbp-AFh]
  char v76; // [rsp+52h] [rbp-AEh]
  unsigned __int8 v77; // [rsp+53h] [rbp-ADh]
  char v78; // [rsp+54h] [rbp-ACh]
  char v79; // [rsp+55h] [rbp-ABh]
  char v80; // [rsp+56h] [rbp-AAh]
  char v81; // [rsp+57h] [rbp-A9h]
  int v84; // [rsp+6Ch] [rbp-94h] BYREF
  int v85; // [rsp+70h] [rbp-90h] BYREF
  int v86; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v87; // [rsp+78h] [rbp-88h] BYREF
  __int64 v88; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v89; // [rsp+88h] [rbp-78h]
  __int64 v90; // [rsp+90h] [rbp-70h]
  __int64 v91; // [rsp+98h] [rbp-68h]
  _BYTE v92[144]; // [rsp+A0h] [rbp-60h] BYREF

  v11 = a3;
  v12 = a2;
  v91 = a4;
  memset_0(v92, 0, 0x88uLL);
  v14 = *(_QWORD *)(BugCheckParameter4 + 34880);
  v86 = -1;
  QuadPart = 0LL;
  v16 = 344 * v12;
  v88 = 0LL;
  v17 = 0;
  v18 = (_BYTE *)(v14 + v16);
  v90 = *(_QWORD *)(v14 + 664);
  v85 = 0;
  v75 = 0;
  v78 = 0;
  v19 = 0;
  v79 = 0;
  v80 = 0;
  v74 = 0;
  LODWORD(v88) = 11;
  v84 = 130;
  v89 = v18;
  v81 = 0;
  *a11 = 0;
  if ( !a8 || *(_BYTE *)(v14 + 715) || (v20 = 1, v18[1397]) )
    v20 = 0;
  v77 = v20;
  v76 = 0;
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
    *(_BYTE *)(BugCheckParameter4 + 34941) = v89[1394] == 0;
    PpmIdleSetSynchronizationState(BugCheckParameter4 + 34956, v22);
  }
  v25 = *(_QWORD *)(v14 + 8);
  v26 = 1LL;
  if ( v25 != -1 )
  {
    v80 = 1;
    v87 = v25 + a7;
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
  if ( v89[1393] != v24 || a9 != v24 && KiClockTimerPerCpuTickScheduling == v24 )
    goto LABEL_11;
  v50 = *(_QWORD *)(BugCheckParameter4 + 200);
  v51 = *(_QWORD *)(BugCheckParameter4 + 192);
  v78 = 1;
  _m_prefetchw((const void *)(v51 + 64));
  v52 = _InterlockedOr64((volatile signed __int64 *)(v51 + 64), v50);
  v17 = guard_dispatch_icall_no_overrides(v20 ^ 1u, v51);
  v30 = 0;
  if ( *(_DWORD *)(BugCheckParameter4 + 14424) )
  {
    v17 = -2147483631;
LABEL_74:
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 34956, 0LL);
    v32 = 1LL;
    v31 = 1;
    v76 = 1;
    goto LABEL_20;
  }
  if ( v17 < 0 )
    goto LABEL_74;
  v53 = PpmIdleRecheckCoordinatedIdleMask(
          v14,
          *(unsigned __int8 *)(BugCheckParameter4 + 208),
          *(_QWORD *)(BugCheckParameter4 + 200) | v52);
  v30 = 0;
  if ( v53 )
  {
    v17 = -1073741802;
    goto LABEL_74;
  }
  if ( a10 && !a5 )
    v17 = 128;
  if ( v20 )
  {
    v81 = 1;
    _InterlockedAdd(&PpmNonInterruptibleCount, 1u);
    CurrentPrcb = KeGetCurrentPrcb();
    v55 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      guard_dispatch_icall_no_overrides(1LL, v29);
      CurrentPrcb->ClockTimerState.ClockActive = 0;
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v55 )
      ++dword_140F21424;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  v87 = -1LL;
  if ( *(_BYTE *)(v14 + 716) )
  {
    v11 = a3;
    v56 = PpmIdlePrepareExitLatencyTrace(v14, a3);
    v79 = v56;
    if ( v56 )
    {
      v57 = 512;
      *(_WORD *)(v14 + 56) |= 0x200u;
    }
    if ( !a5 )
      goto LABEL_101;
    if ( a3 == -1 )
    {
      v57 = 1;
    }
    else
    {
      v57 = 1;
      if ( PpmDripsStateIndex != -1 )
        v19 = 1;
    }
    if ( a5 == 2 )
    {
      v59 = 1;
    }
    else
    {
LABEL_101:
      v59 = v58;
      if ( a5 )
        v57 = 1;
      else
        LOBYTE(v57) = v58;
    }
    v60 = &v88;
    LOBYTE(v60) = v19;
    KePrepareClockTimerForPlatformIdle(v57, (_DWORD)v60, v59, *(_QWORD *)(v14 + 696), v56, (__int64)&v88, (__int64)&v87);
  }
  else
  {
    if ( !KiClockTimerPerCpuTickScheduling )
      goto LABEL_111;
    KePrepareClockTimerForIdle(&v87);
    v61 = 10;
    v11 = a3;
    if ( (_DWORD)KiClockTimerOwner == *(_DWORD *)(BugCheckParameter4 + 36) )
      v61 = 2;
    LODWORD(v88) = v61;
  }
  if ( KiClockTimerPerCpuTickScheduling )
  {
    *(_QWORD *)(BugCheckParameter4 + 34928) = v87;
    goto LABEL_11;
  }
LABEL_111:
  v11 = a3;
LABEL_11:
  v27 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35320);
  if ( v27 )
  {
    PpmIdleUpdateConcurrency(*(PKSPIN_LOCK *)(BugCheckParameter4 + 35320));
    v42 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35328);
    if ( v42 )
      PpmIdleUpdateConcurrency(v42);
  }
  *(_DWORD *)(v14 + 28) = a2;
  PpmEndActiveTimeAccumulation(BugCheckParameter4, a6, v23, v26);
  if ( *(_QWORD *)(v14 + 600) )
    v17 = guard_dispatch_icall_no_overrides(v90, a2);
  if ( v11 != -1 && v11 == PpmDripsStateIndex && *(int *)(BugCheckParameter4 + 35104) >= 2 )
    HvlSetPlatformIdleState(1LL);
  if ( v17 >= 0 )
  {
    v74 = 1;
    PpmEnterCoordinatedIdle(*(_DWORD *)(v14 + 1036), *(_QWORD *)(v14 + 1048), v11, a6, a5);
    if ( v11 != -1 )
      *(_WORD *)(v14 + 56) |= 0x10u;
    LOBYTE(v43) = *(_BYTE *)(v14 + 717);
    PpmEventEnterIdleState(a2, *(unsigned __int16 *)(v14 + 56), v43, *(_QWORD *)(v14 + 688));
    v63 = 0;
    if ( a8 )
    {
      LOBYTE(v62) = v77 + 3;
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 34956, v62);
    }
    if ( v78 != v63 )
    {
      if ( v89[1392] < 2u )
        v75 = v63;
      else
        v75 = KeDeepSleepProcessor();
    }
    _InterlockedIncrement8((volatile signed __int8 *)(BugCheckParameter4 + 14567));
    KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v85);
    v17 = guard_dispatch_icall_no_overrides(v90, v91);
    KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v85);
    _InterlockedDecrement8((volatile signed __int8 *)(BugCheckParameter4 + 14567));
    if ( v75 )
    {
      v75 = 0;
      if ( *(_BYTE *)(BugCheckParameter4 + 34394) )
        KeWakeProcessor(v65, v64, v66);
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
    v44 = *(KSPIN_LOCK **)(BugCheckParameter4 + 35328);
    v30 = 0;
    if ( v44 )
    {
      PpmIdleUpdateConcurrency(v44);
      v30 = 0;
    }
  }
  *(_QWORD *)(BugCheckParameter4 + 34896) = QuadPart - a6;
  if ( a8 )
  {
    v45 = PpmIdleSetSynchronizationState(BugCheckParameter4 + 34956, 0LL);
    if ( v17 >= 0 && v45 != 8 && v77 != (_BYTE)v30 )
      KeBugCheckEx(0xA0u, 0x702uLL, v28, v45, BugCheckParameter4);
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
    v33 = v74;
    goto LABEL_23;
  }
  v33 = v74;
  if ( v74 )
  {
    v46 = *(_BYTE *)(v14 + 65);
    if ( v46 < 5u )
      *(_BYTE *)(v14 + 65) = v46 + 1;
    goto LABEL_22;
  }
  *(_BYTE *)(v14 + 65) = v30;
LABEL_23:
  if ( v78 == (_BYTE)v30 )
  {
    if ( a10 == (_BYTE)v30 )
      goto LABEL_25;
    v47 = a11;
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
      v67 = KeQueryWakeSource(&v88, &v84, v92);
      v47 = a11;
      LOBYTE(v30) = 0;
      if ( v67 < 0 )
      {
        v84 = 3;
      }
      else if ( PopIdleWakeSkippingEnabled && !v84 )
      {
        *a11 = 1;
      }
    }
    else
    {
      v47 = a11;
    }
    v68 = *(unsigned __int8 *)(BugCheckParameter4 + 209);
    _interlockedbittestandreset64((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL), v68);
    if ( v75 != (_BYTE)v30 && *(_BYTE *)(BugCheckParameter4 + 34394) )
    {
      KeWakeProcessor(v68, v29, v23);
      LOBYTE(v30) = 0;
    }
    if ( v79 == (_BYTE)v30 || v17 < 0 )
    {
      LOBYTE(v29) = a5 == 2;
      v69 = 0LL;
    }
    else
    {
      v69 = &v86;
      LOBYTE(v29) = a5 == 2;
    }
    LOBYTE(v68) = *v47;
    KeResumeClockTimerFromIdle(v68, v29, v69);
    guard_dispatch_icall_no_overrides(v71, v70);
    LOBYTE(v30) = 0;
  }
  KeAccumulateTicks(
    BugCheckParameter4,
    *(_DWORD *)(BugCheckParameter4 + 14528),
    MEMORY[0xFFFFF78000000320],
    0,
    v30,
    (*v47 != 0) + 3);
LABEL_25:
  LOBYTE(v32) = 1;
  guard_dispatch_icall_no_overrides(v32, v29);
  v35 = 0LL;
  if ( v80 )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( v89[1393] )
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
          LOBYTE(v72) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v72);
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
  LOBYTE(v34) = v74;
  v36 = PpmExitCoordinatedIdle(
          BugCheckParameter4,
          (int)v14 + 1032,
          v34,
          v17,
          v31,
          QuadPart,
          a5,
          *a11,
          (__int64)v92,
          v84);
  if ( !v31 )
  {
    BugCheckParameter4a = *(_QWORD *)(v14 + 1048);
    guard_dispatch_icall_no_overrides(v90, a2);
    if ( v36 != -1 && v36 == PpmDripsStateIndex && *(int *)(BugCheckParameter4 + 35104) >= 2 )
      HvlSetPlatformIdleState(0LL);
  }
  v37 = *(_QWORD *)(v14 + 1048);
  for ( i = *(unsigned int *)(v14 + 1036);
        (_DWORD)i;
        *(_DWORD *)(448LL * *(unsigned int *)(v37 + 4 * i) + PpmPlatformStates + 416) = 0 )
  {
    i = (unsigned int)(i - 1);
  }
  if ( v81 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  PpmUnlockProcessors(v14 + 336, v14 + 336, i, v37, BugCheckParameter4a);
  if ( *(_BYTE *)(v14 + 3) )
  {
    v49 = *(_QWORD *)(BugCheckParameter4 + 34880);
    if ( v17 < 0 || (int)PpmTraceExitLatency(v39, a2, v36, v40, v86, QuadPart) < 0 )
      PpmCancelExitLatencyTrace(BugCheckParameter4);
    else
      *(_BYTE *)(v49 + 3) = 0;
  }
  result = v76;
  *(_BYTE *)(v14 + 64) = v76;
  *(_DWORD *)(v14 + 60) = v17;
  return result;
}
