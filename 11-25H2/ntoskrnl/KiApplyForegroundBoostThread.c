/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1404F46AC
 * Callers:
 *     KiProcessPendingForegroundBoosts @ 0x1404BAD50 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KiSetForegroundBoost @ 0x140269714 (KiSetForegroundBoost.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140271CE0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402F0F0C (KiPrepareReadyThreadForRescheduling.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140315960 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140352764 (KiRemoveThreadFromAnyReadyQueue.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 *a2)
{
  char v2; // di
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rdx
  int v8; // r11d
  signed int v9; // r9d
  int v10; // r15d
  struct _KPRCB *CurrentPrcb; // rbx
  int v12; // r12d
  int v13; // r11d
  int v14; // r11d
  struct _KPRCB *v15; // r14
  _KTHREAD *NextThread; // rbx
  bool v17; // zf
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  struct _KPRCB *v21; // [rsp+30h] [rbp-38h]
  volatile __int64 *v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h] BYREF
  _OWORD v24[2]; // [rsp+48h] [rbp-20h] BYREF
  struct _KPRCB *v26; // [rsp+C8h] [rbp+60h] BYREF

  v2 = 0;
  v26 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24[0] = 0LL;
  KiAcquireThreadStateLockForWrite(a1, (__int64 *)&v26, &v23, &v22, (volatile signed __int64 **)v24);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) == 0
    || (*(_DWORD *)(a1 + 120) & 8) != 0
    || *(char *)(a1 + 195) <= 0
    || (KiSetForegroundBoost(a1), v6 = KiComputeThreadPriority(v5, 0), v9 = *(char *)(a1 + 195), v10 = v6, v6 <= v9) )
  {
    KiReleaseThreadStateLock(v4, (__int64)v26, &v23, v22, (volatile signed __int64 **)v24);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 0;
    v21 = CurrentPrcb;
    v13 = v8 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v15 = v26;
          KiUpdateThreadPriority((__int64)v26, v7, a1, v6, 1);
          v12 = v10;
        }
        else
        {
          KiUpdateThreadPriority(0LL, v7, a1, v6, 0);
          v15 = v26;
        }
      }
      else
      {
        v15 = v26;
        NextThread = v26->NextThread;
        KiUpdateThreadPriority((__int64)v26, v7, a1, v6, NextThread == 0LL);
        v17 = NextThread == 0LL;
        CurrentPrcb = v21;
        if ( v17 )
        {
          v15 = v26;
          if ( *(_BYTE *)(a1 + 388) == 2 )
            v12 = v10;
        }
      }
    }
    else
    {
      v15 = v26;
      KiRemoveThreadFromAnyReadyQueue(v26, (__int64)v22, a1, v9);
      KiUpdateThreadPriority(0LL, v18, a1, v10, 0);
      KiPrepareReadyThreadForRescheduling(a1, v10, a2);
    }
    KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
    KiReleaseThreadStateLock(v19, (__int64)v15, &v23, v22, (volatile signed __int64 **)v24);
    if ( v12 > 0 )
      KiHvEnlightenedGuestPriorityKick((__int64)CurrentPrcb, (__int64)v15, v12);
    return 1;
  }
  return v2;
}
