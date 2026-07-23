/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x14079DBB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  _RTL_BALANCED_NODE *v1; // rsi
  struct _LIST_ENTRY *Flink; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rbp
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
    v5 = (signed __int64 *)&Flink[256];
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)&Flink[256], 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[256], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[256], v6, (__int64)&Flink[256]);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v9 = (_QWORD *)a1[1], (_QWORD *)*v9 != a1) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[3] = 0LL;
    if ( v1[1].Children[1] == (_RTL_BALANCED_NODE *)&v1[1].Right )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&Flink[255], v1);
      ExFreePoolWithTag(v1, 0);
    }
    _m_prefetchw(v5);
    v10 = *v5;
    v11 = *v5 - 16;
    if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v11 = 0LL;
    if ( (v10 & 2) != 0 || (v12 = *v5, v12 != _InterlockedCompareExchange64(v5, v11, v10)) )
      ExfReleasePushLock(&Flink[256].Flink);
    KeAbPostRelease((ULONG_PTR)&Flink[256]);
    KeLeaveCriticalRegion();
  }
}
