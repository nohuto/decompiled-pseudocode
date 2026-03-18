/*
 * XREFs of EtwpReferenceLoggerSecurityDescriptor @ 0x140836818
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall EtwpReferenceLoggerSecurityDescriptor(__int64 a1)
{
  signed __int64 v2; // rbx
  signed __int64 v3; // rax
  int v4; // eax
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  _m_prefetchw((const void *)(a1 + 784));
  v2 = *(_QWORD *)(a1 + 784);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v5 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v4 == 1 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 24), 0xFuLL) <= 0 )
        __fastfail(0xEu);
      _m_prefetchw((const void *)(a1 + 784));
      v9 = *(_QWORD *)(a1 + 784);
      while ( (unsigned __int64)(v9 & 0xF) + 15 <= 0xF && v5 == (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v9 + 15, v9);
        if ( v10 == v9 )
          return v5;
      }
      ObDereferenceSecurityDescriptor(v5, 15LL);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((__int64)&EtwpSecurityLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&EtwpSecurityLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&EtwpSecurityLock, 0, v8, (__int64)&EtwpSecurityLock);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v5 = *(_QWORD *)(a1 + 784) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 24), 1uLL) <= 0 )
      __fastfail(0xEu);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&EtwpSecurityLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&EtwpSecurityLock);
    KeAbPostRelease((ULONG_PTR)&EtwpSecurityLock);
    KeLeaveCriticalRegion();
  }
  return v5;
}
