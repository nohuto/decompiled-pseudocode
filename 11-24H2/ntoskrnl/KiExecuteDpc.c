/*
 * XREFs of KiExecuteDpc @ 0x1405C4680
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405C06B8 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
    KeWaitForGate(a1 + 33600, 5LL);
    v3 = KeGetCurrentThread();
    --v3->SpecialApcDisable;
    do
    {
      *(_WORD *)(a1 + 14526) = 1;
      if ( KeSmapEnabled )
        __asm { clac }
      _disable();
      KiExecuteAllDpcs((struct _KPRCB *)a1, (__int64)CurrentThread, &v8, 1LL);
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
