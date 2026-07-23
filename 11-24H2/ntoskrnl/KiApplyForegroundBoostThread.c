/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1404F4630
 * Callers:
 *     KiProcessPendingForegroundBoosts @ 0x1404B5840 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402D8B94 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402DE7C8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403A0DB0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140432720 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiSetForegroundBoost @ 0x14044762C (KiSetForegroundBoost.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 *a2)
{
  char v2; // di
  unsigned __int64 v4; // rcx
  int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rdx
  signed int v8; // r9d
  int v9; // r15d
  int v10; // r12d
  int v11; // ebx
  int v12; // ebx
  struct _KPRCB *v13; // r14
  _KTHREAD *NextThread; // rbx
  __int64 v15; // rdx
  struct _KPRCB *v16; // rsi
  unsigned __int64 v17; // rcx
  volatile __int64 *v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-28h]
  _OWORD v22[2]; // [rsp+48h] [rbp-20h] BYREF
  struct _KPRCB *v24; // [rsp+C8h] [rbp+60h] BYREF

  v2 = 0;
  v24 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v22[0] = 0LL;
  v5 = (unsigned __int8)KiAcquireThreadStateLockForWrite(
                          a1,
                          (__int64 *)&v24,
                          &v20,
                          &v19,
                          (volatile signed __int64 **)v22);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) == 0
    || (*(_DWORD *)(a1 + 120) & 8) != 0
    || *(char *)(a1 + 195) <= 0
    || (KiSetForegroundBoost(a1), v6 = KiComputeThreadPriority(a1, 0, 0), v8 = *(char *)(a1 + 195), v9 = v6, v6 <= v8) )
  {
    KiReleaseThreadStateLock(v4, (__int64)v24, &v20, v19, (volatile signed __int64 **)v22);
  }
  else
  {
    v10 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v5 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v13 = v24;
          KiUpdateThreadPriority((__int64)v24, v7, a1, v6, 1);
          v10 = v9;
        }
        else
        {
          KiUpdateThreadPriority(0LL, v7, a1, v6, 0);
          v13 = v24;
        }
      }
      else
      {
        v13 = v24;
        NextThread = v24->NextThread;
        KiUpdateThreadPriority((__int64)v24, v7, a1, v6, NextThread == 0LL);
        if ( !NextThread )
        {
          v13 = v24;
          if ( *(_BYTE *)(a1 + 388) == 2 )
            v10 = v9;
        }
      }
    }
    else
    {
      v13 = v24;
      KiRemoveThreadFromAnyReadyQueue(v24, (__int64)v19, a1, v8);
      KiUpdateThreadPriority(0LL, v15, a1, v9, 0);
      KiPrepareReadyThreadForRescheduling(a1, v9, a2);
    }
    KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
    v16 = CurrentPrcb;
    KiReleaseThreadStateLock(v17, (__int64)v13, &v20, v19, (volatile signed __int64 **)v22);
    if ( v10 > 0 )
      KiHvEnlightenedGuestPriorityKick((__int64)v16, (__int64)v13, v10);
    return 1;
  }
  return v2;
}
