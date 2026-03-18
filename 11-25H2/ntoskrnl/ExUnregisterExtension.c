/*
 * XREFs of ExUnregisterExtension @ 0x1407B10F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpDereferenceHost @ 0x1407B1210 (ExpDereferenceHost.c)
 *     ExpVerifyCallbackResult @ 0x1407B1290 (ExpVerifyCallbackResult.c)
 */

__int64 __fastcall ExUnregisterExtension(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rbp
  unsigned int v6; // eax
  unsigned __int64 Count; // rax
  unsigned int v8; // eax

  CurrentThread = KeGetCurrentThread();
  p_Count = &a1[4].Count;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&a1[4], 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (__int64)p_Count);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( a1[8].Count )
  {
    v6 = guard_dispatch_icall_no_overrides(2LL);
    ExpVerifyCallbackResult(2LL, v6);
  }
  ExWaitForRundownProtectionRelease(a1 + 11);
  Count = a1[8].Count;
  a1[12].Count = 0LL;
  a1[7].Count = 0LL;
  if ( Count )
  {
    v8 = guard_dispatch_icall_no_overrides(3LL);
    ExpVerifyCallbackResult(3LL, v8);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Count, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_Count);
  KeAbPostRelease((ULONG_PTR)p_Count);
  KeLeaveCriticalRegion();
  return ExpDereferenceHost(a1);
}
