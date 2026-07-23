/*
 * XREFs of DbgkFlushErrorPort @ 0x140A527EC
 * Callers:
 *     PspExitProcess @ 0x1408F2E70 (PspExitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     DbgkpDereferenceErrorPort @ 0x14057BA38 (DbgkpDereferenceErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1407054F8 (DbgkpRemoveErrorPort.c)
 */

__int64 __fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  __int64 result; // rax
  signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int32 *v6; // rdi
  char *v7; // rbp

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  result = (__int64)PsGetServerSiloGlobals(ProcessServerSilo);
  v4 = (signed __int64 *)(result + 936);
  if ( a1 == *(_QWORD *)(result + 952) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->KernelApcDisable;
    v7 = (char *)KeAbPreAcquire(result + 936, 0LL);
    if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v4, 0, v7, (__int64)v4);
    if ( v7 )
      v7[10] = 1;
    if ( a1 == v4[2] )
    {
      v6 = (volatile signed __int32 *)v4[1];
      _InterlockedIncrement(v6);
    }
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    result = KeLeaveCriticalRegionThread();
    if ( v6 )
    {
      DbgkpRemoveErrorPort((__int64)CurrentThread, (ULONG_PTR)v4, v6);
      return DbgkpDereferenceErrorPort(v6);
    }
  }
  return result;
}
