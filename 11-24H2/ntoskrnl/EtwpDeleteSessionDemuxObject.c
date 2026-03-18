/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x1407ACF80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1)
{
  unsigned __int64 *v1; // rsi
  struct _LIST_ENTRY *Flink; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt

  v1 = (unsigned __int64 *)a1[3];
  if ( v1 )
  {
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
    CurrentThread = KeGetCurrentThread();
    v5 = (signed __int64 *)&Flink[273];
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)&Flink[273], 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[273], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[273], (__int64)v6, (__int64)&Flink[273]);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v9 = (_QWORD *)a1[1], (_QWORD *)*v9 != a1) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[3] = 0LL;
    if ( (unsigned __int64 *)v1[4] == v1 + 4 )
    {
      RtlRbRemoveNode((unsigned __int64 *)&Flink[272], v1);
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
