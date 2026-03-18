/*
 * XREFs of KiExecuteDpc @ 0x1405C2BB0
 * Callers:
 *     <none>
 * Callees:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405BF008 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  int v8; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v9[396]; // [rsp+24h] [rbp-1B4h] BYREF

  memset_0(v9, 0, sizeof(v9));
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(_DWORD *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 14520) = 1;
  while ( 1 )
  {
    v8 = 0;
    KeWaitForGate(a1 + 33600, 5, 0);
    v3 = KeGetCurrentThread();
    --v3->SpecialApcDisable;
    do
    {
      *(_WORD *)(a1 + 14526) = 1;
      if ( KeSmapEnabled )
        __asm { clac }
      _disable();
      KiExecuteAllDpcs((struct _KPRCB *)a1, (unsigned __int64)CurrentThread, &v8, 1LL);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v6 = *SchedulerAssist;
        do
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
        }
        while ( v7 != v6 );
        if ( (v6 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      if ( KeSmapEnabled )
        __asm { stac }
    }
    while ( _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 14526), 0, 1) != 1 );
    *(_QWORD *)(a1 + 14480) = 0LL;
    KeLeaveGuardedRegion();
  }
}
