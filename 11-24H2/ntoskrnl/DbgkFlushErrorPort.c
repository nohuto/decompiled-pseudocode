/*
 * XREFs of DbgkFlushErrorPort @ 0x140939888
 * Callers:
 *     PspExitProcess @ 0x1409387A0 (PspExitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     DbgkpDereferenceErrorPort @ 0x14057E5A8 (DbgkpDereferenceErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140707938 (DbgkpRemoveErrorPort.c)
 */

__int64 __fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  __int64 result; // rax
  signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int32 *v6; // rdi
  _QWORD *v7; // rbp

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  result = (__int64)PsGetServerSiloGlobals(ProcessServerSilo);
  v4 = (signed __int64 *)(result + 936);
  if ( a1 == *(_QWORD *)(result + 952) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire(result + 936, 0LL);
    if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v4, 0, v7, (__int64)v4);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
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
