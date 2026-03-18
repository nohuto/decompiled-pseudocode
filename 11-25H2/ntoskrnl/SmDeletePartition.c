/*
 * XREFs of SmDeletePartition @ 0x140787F70
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x14067E824 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SmPartitionCleanup @ 0x1407881C4 (SmPartitionCleanup.c)
 */

void __fastcall SmDeletePartition(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rsi
  __int64 v7; // r8
  _QWORD *v8; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 2112));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire((__int64)&qword_140E28588, 0LL);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E28588, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&qword_140E28588, v4, (__int64)&qword_140E28588);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    v7 = *(_QWORD *)(v1 + 2120);
    if ( *(_QWORD *)(v7 + 8) != v1 + 2120 || (v8 = *(_QWORD **)(v1 + 2128), *v8 != v1 + 2120) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E28588, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E28588);
    KeAbPostRelease((ULONG_PTR)&qword_140E28588);
    KeLeaveCriticalRegion();
    SmPartitionCleanup(v1);
    CmSiFreeMemory((PPRIVILEGE_SET)v1);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
