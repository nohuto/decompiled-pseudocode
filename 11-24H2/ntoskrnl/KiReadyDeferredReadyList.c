/*
 * XREFs of KiReadyDeferredReadyList @ 0x140299320
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiSearchForNewThread @ 0x140296D10 (KiSearchForNewThread.c)
 *     KiAttemptToStealStandbyThread @ 0x140297D94 (KiAttemptToStealStandbyThread.c)
 *     KiEnterLongDpcProcessing @ 0x140298AA4 (KiEnterLongDpcProcessing.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1404BA9A0 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiSendSoftwareInterruptAffinity @ 0x140254CCC (KiSendSoftwareInterruptAffinity.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rdi
  char v5; // bp
  __int64 v6; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v9; // rdx
  char v10; // r8
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+2Ch] [rbp-2Ch]

  v2 = *a2;
  v5 = 0;
  if ( *a2 )
  {
    *a2 = (_QWORD *)*v2;
    do
    {
      KiDeferredReadySingleThread(a1, v2 - 27, a2, 0LL);
      v2 = *a2;
      ++v5;
      if ( *a2 )
        *a2 = (_QWORD *)*v2;
      v6 = a1 + 13784;
      if ( (v5 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(a1 + 13784);
    }
    while ( v2 );
  }
  else
  {
    v6 = a1 + 13784;
  }
  result = *(unsigned __int8 *)(v6 + 1);
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = 31LL;
      v10 = *(_BYTE *)v6;
      v12 = *(_DWORD *)(v6 + 4);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v11 = 6LL;
      v13 = 0LL;
      if ( v10 != 1 )
        v9 = 47LL;
      result = HalpInterruptSendIpi(&v11, v9);
    }
    else
    {
      result = KiSendSoftwareInterruptAffinity((unsigned __int16 *)(v6 + 8), *(_BYTE *)v6);
    }
    if ( *(_BYTE *)(v6 + 1) == 2 )
    {
      *(_QWORD *)(v6 + 8) = 2097153LL;
      result = (__int64)memset_0((void *)(v6 + 16), 0, 0x100uLL);
    }
    *(_BYTE *)(v6 + 1) = 0;
    *(_DWORD *)(v6 + 4) = 0xFFFF;
  }
  return result;
}
