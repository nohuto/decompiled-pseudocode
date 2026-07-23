/*
 * XREFs of KiExecuteDpcDelegate @ 0x1405C47B0
 * Callers:
 *     <none>
 * Callees:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KeAttachProcess @ 0x140477330 (KeAttachProcess.c)
 */

void __noreturn KiExecuteDpcDelegate()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v2; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  CurrentThread = KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  KeAttachProcess(PsInitialSystemProcess);
  while ( 1 )
  {
    _disable();
    _InterlockedAnd16((volatile signed __int16 *)&CurrentPrcb->14524, 0xFF7Fu);
    KiRetireDpcList((__int64)CurrentPrcb);
    CurrentPrcb->PrcbFlagsReserved &= ~0x800u;
    v2 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v2->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v4 = *SchedulerAssist;
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
      }
      while ( v5 != v4 );
      if ( (v4 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v2);
    }
    _enable();
    CurrentThread->WaitIrql = 2;
    KiSwapThread((ULONG_PTR)CurrentThread, (__int64)CurrentPrcb, 0LL);
  }
}
