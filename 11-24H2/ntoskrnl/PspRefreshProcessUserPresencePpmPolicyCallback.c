/*
 * XREFs of PspRefreshProcessUserPresencePpmPolicyCallback @ 0x1405E2A40
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeSetProcessPpmPolicy @ 0x140475710 (KeSetProcessPpmPolicy.c)
 */

__int64 __fastcall PspRefreshProcessUserPresencePpmPolicyCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v2; // rdi
  char *v4; // rax
  char *v5; // rsi
  int v6; // edx

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 2072);
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire(a1 + 2072, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  if ( v5 )
    v5[10] = 1;
  v6 = 9;
  if ( *(_DWORD *)(a1 + 2080) == 9 )
  {
    if ( PspDisableWindowInFocusUserIdleQosByPolicy || PspDisableWindowInFocusUserIdleQos )
      v6 = 7;
    KeSetProcessPpmPolicy(a1, v6);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
