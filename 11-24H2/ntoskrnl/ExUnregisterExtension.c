/*
 * XREFs of ExUnregisterExtension @ 0x1407C0D10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpDereferenceHost @ 0x1407C0E30 (ExpDereferenceHost.c)
 *     ExpVerifyCallbackResult @ 0x1407C0EB0 (ExpVerifyCallbackResult.c)
 */

__int64 __fastcall ExUnregisterExtension(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rsi
  char *v4; // rax
  char *v5; // rbp
  unsigned int v6; // eax
  unsigned __int64 Count; // rax
  unsigned int v8; // eax

  CurrentThread = KeGetCurrentThread();
  p_Count = &a1[4].Count;
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&a1[4], 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (__int64)p_Count);
  if ( v5 )
    v5[10] = 1;
  if ( a1[8].Count )
  {
    v6 = guard_dispatch_icall_no_overrides(2LL, a1[9].Count);
    ExpVerifyCallbackResult(2LL, v6);
  }
  ExWaitForRundownProtectionRelease(a1 + 11);
  Count = a1[8].Count;
  a1[12].Count = 0LL;
  a1[7].Count = 0LL;
  if ( Count )
  {
    v8 = guard_dispatch_icall_no_overrides(3LL, a1[9].Count);
    ExpVerifyCallbackResult(3LL, v8);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Count, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_Count);
  KeAbPostRelease((ULONG_PTR)p_Count);
  KeLeaveCriticalRegion();
  return ExpDereferenceHost(a1);
}
