/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x140B54710
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B41E0 (KeGetProcessorNumberFromIndex.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B88E0 (HalGetProcessorIdByNtNumber.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140406C00 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404B4304 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1404CD748 (KeRestoreProcessorSpecificFeatures.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404D0514 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSaveProcessorSpecificFeatures @ 0x1404F99DC (KeSaveProcessorSpecificFeatures.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404FAACC (KeSaveExtendedAndSupervisorState.c)
 *     PnprGetStackLimits @ 0x1405A7AEC (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x1405B9F4C (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405B9FAC (KeSuspendClockTimerSafe.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprMirrorMarkedPages @ 0x140B543CC (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG v4; // r14d
  int v5; // edi
  bool v6; // si
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // bl
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  signed __int32 *v27; // r8
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v32; // [rsp+28h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v35; // [rsp+48h] [rbp-38h]
  __int128 v36; // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+68h] [rbp-18h]

  ProcNumber = 0;
  v4 = (unsigned int)SystemArgument2;
  v31 = 0;
  v5 = (int)SystemArgument1;
  v33 = 0LL;
  v32 = 0LL;
  v37 = 0LL;
  v6 = 1;
  v7 = PnprContext;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  *DeferredContext = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)SystemArgument1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    v6 = KeDisableInterrupts();
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < v5 )
      _mm_pause();
  }
  if ( KeGetProcessorNumberFromIndex(v4, &ProcNumber) < 0 )
    goto LABEL_63;
  v8 = *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group);
  if ( !_bittest64(&v8, ProcNumber.Number) )
    goto LABEL_31;
  while ( *(int *)(PnprContext + 200) < 1 )
    _mm_pause();
  KeSuspendClockTimerSafe();
  KeSaveIptStateBeforeProcessorGoesOffline();
  v9 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v9 = (int)KeSaveExtendedAndSupervisorState(
                (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                (__int64)BugCheckParameter3) >= 0;
  KeSaveProcessorSpecificFeatures();
  if ( (int)HalGetProcessorIdByNtNumber(v4, (__int64)&v31, v10, v11) < 0 )
LABEL_63:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
  {
    LOBYTE(v13) = 1;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v31, v13, v14);
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33176), &v33, v13, v14);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33176), v12, v13, v14);
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v31, 0LL, v15);
  KeResumeClockTimerSafe();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  KeRestoreProcessorSpecificFeatures((__int64)&v32);
  if ( v9 )
    KeRestoreExtendedAndSupervisorState((ULONG_PTR)BugCheckParameter3);
  KeRestoreIptStateAfterProcessorComesOnline();
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
LABEL_31:
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    while ( *(int *)(PnprContext + 200) < 2 )
      _mm_pause();
    if ( (int)PnprMirrorMarkedPages() < 0 )
    {
      v20 = PnprContext;
      v21 = *(_DWORD *)(PnprContext + 33288);
      if ( !v21 )
        v21 = 2266;
      *(_DWORD *)(PnprContext + 33288) = v21;
      v22 = *(_DWORD *)(v20 + 33292);
      if ( !v22 )
        v22 = 1;
      *(_DWORD *)(v20 + 33292) = v22;
    }
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  }
  while ( *(int *)(PnprContext + 200) < 4 )
    _mm_pause();
  PnprGetStackLimits((_QWORD *)(PnprContext + 216 + 8LL * v4), PnprContext + 16600 + 8LL * v4);
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    v25 = *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group);
    if ( _bittest64(&v25, ProcNumber.Number) )
    {
      guard_dispatch_icall_no_overrides(v33, ProcNumber.Group, v23, v24);
    }
    else if ( v6 )
    {
      v26 = KeGetCurrentPrcb();
      v27 = (signed __int32 *)v26->SchedulerAssist;
      if ( v27 )
      {
        _m_prefetchw(v27);
        v28 = *v27;
        do
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange(v27, v28 & 0xFFDFFFFF, v28);
        }
        while ( v29 != v28 );
        if ( (v28 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v26);
      }
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
