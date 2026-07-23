/*
 * XREFs of KiAdjustCoreIsolationReasonThread @ 0x1405BF948
 * Callers:
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BF6F0 (KeEnableCoreIsolationMitigationPolicyThread.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiSetThreadIsolationWidthUnsafe @ 0x1405C070C (KiSetThreadIsolationWidthUnsafe.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C52A4 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KiAdjustCoreIsolationReasonThread(struct _KTHREAD *a1, char a2, char a3, struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned int v4; // ebx
  volatile unsigned __int8 CoreIsolationReasons; // dl
  char v9; // al
  volatile unsigned __int8 v10; // dl
  BOOL v11; // r15d
  char v12; // al
  struct _KPRCB *CurrentPrcb; // r13
  struct _KPRCB *v14; // r12
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  char v16; // r14
  unsigned __int64 v17; // rcx
  bool v18; // al
  char v19; // al
  struct _SINGLE_LIST_ENTRY *v20; // r14
  struct _KPRCB *v22; // [rsp+30h] [rbp-28h] BYREF
  volatile __int64 *v23; // [rsp+38h] [rbp-20h] BYREF
  __int128 v24; // [rsp+40h] [rbp-18h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+50h] BYREF
  char v27; // [rsp+B0h] [rbp+58h]
  struct _SINGLE_LIST_ENTRY *v28; // [rsp+B8h] [rbp+60h]

  v28 = a4;
  v4 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( a1->ThreadLock );
  }
  CoreIsolationReasons = a1->CoreIsolationReasons;
  v9 = 1 << a2;
  v27 = (CoreIsolationReasons & (unsigned __int8)(1 << a2)) != 0;
  if ( v27 == a3
    || (!a3 ? (v10 = ~v9 & CoreIsolationReasons) : (v10 = v9 | CoreIsolationReasons),
        a1->CoreIsolationReasons = v10,
        v11 = v10 != 0,
        v11 == ((*((_DWORD *)&a1->0 + 1) >> 1) & 1)) )
  {
    a1->ThreadLock = 0LL;
    return v27;
  }
  v24 = 0LL;
  v12 = KiAcquireThreadStateLockForWrite((__int64)a1, (__int64 *)&v22, &v25, &v23, (volatile signed __int64 **)&v24);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = v22;
  if ( v12 && v12 != 1 && (v12 == 2 || v12 == 3) )
  {
    v18 = v12 == 3 || v22->NextThread == 0LL;
    v16 = 0;
    StaticRescheduleContext = 0LL;
    if ( v18 )
    {
      StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
      memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
      KiStartRescheduleContext((__int64)StaticRescheduleContext, &v25);
      KiSetThreadIsolationWidthUnsafe(a1, v11);
      v19 = KiAdjustRescheduleContextForIsolationWidthChange(StaticRescheduleContext, v14, a1);
      v20 = v28;
      if ( v19 )
        KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, v28);
      v16 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, CurrentPrcb, 0, v20);
      goto LABEL_16;
    }
  }
  else
  {
    StaticRescheduleContext = 0LL;
    v16 = 0;
  }
  KiSetThreadIsolationWidthUnsafe(a1, v11);
LABEL_16:
  KiReleaseThreadStateLock(v17, (__int64)v14, &v25, v23, (volatile signed __int64 **)&v24);
  a1->ThreadLock = 0LL;
  if ( v16 )
  {
    if ( StaticRescheduleContext->ProcessorCount )
    {
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * v4 + 8 * v4),
          CurrentPrcb,
          0LL,
          0LL);
        ++v4;
      }
      while ( v4 < StaticRescheduleContext->ProcessorCount );
    }
    KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  }
  return v27;
}
