/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x1407AD450
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  _RTL_BALANCED_NODE *v1; // rsi
  struct _LIST_ENTRY *Flink; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  char *v6; // rax
  char *v7; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt

  v1 = (_RTL_BALANCED_NODE *)a1[3];
  if ( v1 )
  {
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
    CurrentThread = KeGetCurrentThread();
    v5 = (signed __int64 *)&Flink[273];
    --CurrentThread->KernelApcDisable;
    v6 = (char *)KeAbPreAcquire((__int64)&Flink[273], 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[273], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[273], v6, (__int64)&Flink[273]);
    if ( v7 )
      v7[10] = 1;
    v8 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v9 = (_QWORD *)a1[1], (_QWORD *)*v9 != a1) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[3] = 0LL;
    if ( v1[1].Children[1] == (_RTL_BALANCED_NODE *)&v1[1].Right )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&Flink[272], v1);
      ExFreePoolWithTag(v1, 0);
    }
    _m_prefetchw(v5);
    v10 = *v5;
    v11 = *v5 - 16;
    if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v11 = 0LL;
    if ( (v10 & 2) != 0 || (v12 = *v5, v12 != _InterlockedCompareExchange64(v5, v11, v10)) )
      ExfReleasePushLock(&Flink[273].Flink);
    KeAbPostRelease((ULONG_PTR)&Flink[273]);
    KeLeaveCriticalRegion();
  }
}
