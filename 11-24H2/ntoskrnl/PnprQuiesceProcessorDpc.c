/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x140B56760
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HalGetProcessorIdByNtNumber @ 0x1402B4970 (HalGetProcessorIdByNtNumber.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeGetProcessorNumberFromIndex @ 0x140370900 (KeGetProcessorNumberFromIndex.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1403FF0E0 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404AEB24 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1404C6B18 (KeRestoreProcessorSpecificFeatures.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x1404C9708 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSaveProcessorSpecificFeatures @ 0x1404F72BC (KeSaveProcessorSpecificFeatures.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404F83AC (KeSaveExtendedAndSupervisorState.c)
 *     PnprGetStackLimits @ 0x1405A4ADC (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x1405B757C (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405B75DC (KeSuspendClockTimerSafe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnprMirrorMarkedPages @ 0x140B5641C (PnprMirrorMarkedPages.c)
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
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // bl
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  signed __int32 *v25; // r8
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v29; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v30; // [rsp+28h] [rbp-58h] BYREF
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v33; // [rsp+48h] [rbp-38h]
  __int128 v34; // [rsp+58h] [rbp-28h]
  __int64 v35; // [rsp+68h] [rbp-18h]

  ProcNumber = 0;
  v4 = (unsigned int)SystemArgument2;
  v29 = 0;
  v5 = (int)SystemArgument1;
  v31 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  v6 = 1;
  v7 = PnprContext;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
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
  v8 = **(_QWORD **)(PnprContext + 16);
  v9 = *(_QWORD *)(v8 + 8LL * ProcNumber.Group);
  if ( !_bittest64(&v9, ProcNumber.Number) )
    goto LABEL_31;
  if ( *(int *)(PnprContext + 200) < 1 )
  {
    do
    {
      _mm_pause();
      v8 = *(unsigned int *)(PnprContext + 200);
    }
    while ( (int)v8 < 1 );
  }
  KeSuspendClockTimerSafe(v8, ProcNumber.Group);
  KeSaveIptStateBeforeProcessorGoesOffline();
  v10 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v10 = (int)KeSaveExtendedAndSupervisorState(
                 (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                 (PVOID *)BugCheckParameter3) >= 0;
  KeSaveProcessorSpecificFeatures();
  if ( (int)HalGetProcessorIdByNtNumber(v4, (__int64)&v29, v11, v12) < 0 )
LABEL_63:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v29);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33176), &v31);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33176), v13);
  v15 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v29);
  KeResumeClockTimerSafe(v15, v14);
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
  KeRestoreProcessorSpecificFeatures((__int64)&v30);
  if ( v10 )
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
    v23 = *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group);
    if ( _bittest64(&v23, ProcNumber.Number) )
    {
      guard_dispatch_icall_no_overrides(v31, ProcNumber.Group);
    }
    else if ( v6 )
    {
      v24 = KeGetCurrentPrcb();
      v25 = (signed __int32 *)v24->SchedulerAssist;
      if ( v25 )
      {
        _m_prefetchw(v25);
        v26 = *v25;
        do
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange(v25, v26 & 0xFFDFFFFF, v26);
        }
        while ( v27 != v26 );
        if ( (v26 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
