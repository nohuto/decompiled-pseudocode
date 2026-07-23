/*
 * XREFs of SmDeletePartition @ 0x140797450
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmPartitionCleanup @ 0x1407976A4 (SmPartitionCleanup.c)
 */

void __fastcall SmDeletePartition(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rsi
  __int64 v7; // r8
  _QWORD *v8; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 2112));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (char *)KeAbPreAcquire((__int64)&qword_140E28908, 0LL);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E28908, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&qword_140E28908, v4, (__int64)&qword_140E28908);
    if ( v6 )
      v6[10] = 1;
    v7 = *(_QWORD *)(v1 + 2120);
    if ( *(_QWORD *)(v7 + 8) != v1 + 2120 || (v8 = *(_QWORD **)(v1 + 2128), *v8 != v1 + 2120) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E28908, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E28908);
    KeAbPostRelease((ULONG_PTR)&qword_140E28908);
    KeLeaveCriticalRegion();
    SmPartitionCleanup(v1);
    CmSiFreeMemory((PPRIVILEGE_SET)v1);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
