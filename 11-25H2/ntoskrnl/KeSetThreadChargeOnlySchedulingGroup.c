/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x14031A800
 * Callers:
 *     PspUpdateContainerImpersonation @ 0x1403061BC (PspUpdateContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  bool v4; // zf
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v7; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned int v9; // esi
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 )
  {
    v4 = a2 == 0;
  }
  else
  {
    if ( !a2 )
      return 0;
    v4 = *(_QWORD *)(a1 + 104) == 0LL;
  }
  if ( !v4 )
    return 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
  v7 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v7->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v11 = *SchedulerAssist;
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v7);
  }
  _enable();
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CurrentPrcb->PrcbLock );
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 9u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 1;
}
