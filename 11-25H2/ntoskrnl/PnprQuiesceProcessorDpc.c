/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x140B44710
 * Callers:
 *     <none>
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x140201680 (HalGetProcessorIdByNtNumber.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140262BC0 (KeRestoreExtendedAndSupervisorState.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B3140 (KeGetProcessorNumberFromIndex.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404B49F4 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1404CA720 (KeRestoreProcessorSpecificFeatures.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404D0578 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSaveProcessorSpecificFeatures @ 0x1404F71DC (KeSaveProcessorSpecificFeatures.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404F862C (KeSaveExtendedAndSupervisorState.c)
 *     PnprGetStackLimits @ 0x1405A42DC (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x1405B6128 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405B6188 (KeSuspendClockTimerSafe.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnprMirrorMarkedPages @ 0x140B443CC (PnprMirrorMarkedPages.c)
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
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  struct _KPRCB *v20; // rcx
  signed __int32 *v21; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-60h] BYREF
  int v25; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v26; // [rsp+28h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v29; // [rsp+48h] [rbp-38h]
  __int128 v30; // [rsp+58h] [rbp-28h]
  __int64 v31; // [rsp+68h] [rbp-18h]

  ProcNumber = 0;
  v4 = (unsigned int)SystemArgument2;
  v25 = 0;
  v5 = (int)SystemArgument1;
  v27 = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  v6 = 1;
  v7 = PnprContext;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
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
                (PVOID *)BugCheckParameter3) >= 0;
  KeSaveProcessorSpecificFeatures();
  if ( (int)HalGetProcessorIdByNtNumber(v4, (__int64)&v25, v10, v11) < 0 )
LABEL_63:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184));
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33176));
  guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33176));
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184));
  KeResumeClockTimerSafe();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v14 = *SchedulerAssist;
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  KeRestoreProcessorSpecificFeatures((__int64)&v26);
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
      v16 = PnprContext;
      v17 = *(_DWORD *)(PnprContext + 33288);
      if ( !v17 )
        v17 = 2266;
      *(_DWORD *)(PnprContext + 33288) = v17;
      v18 = *(_DWORD *)(v16 + 33292);
      if ( !v18 )
        v18 = 1;
      *(_DWORD *)(v16 + 33292) = v18;
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
    v19 = *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group);
    if ( _bittest64(&v19, ProcNumber.Number) )
    {
      guard_dispatch_icall_no_overrides(v27);
    }
    else if ( v6 )
    {
      v20 = KeGetCurrentPrcb();
      v21 = (signed __int32 *)v20->SchedulerAssist;
      if ( v21 )
      {
        _m_prefetchw(v21);
        v22 = *v21;
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange(v21, v22 & 0xFFDFFFFF, v22);
        }
        while ( v23 != v22 );
        if ( (v22 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v20);
      }
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
