/*
 * XREFs of PspSetProcessPpmPolicy @ 0x140ACB960
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x14029AB60 (Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeSetProcessPpmPolicy @ 0x140479E80 (KeSetProcessPpmPolicy.c)
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405D28DC (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

_QWORD *__fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( !(unsigned int)Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline() )
    return (_QWORD *)KeSetProcessPpmPolicy(a1, a2);
  if ( !(unsigned int)Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 == 9 && PspDisableWindowInFocusUserIdleQos )
      a2 = 7;
    return (_QWORD *)KeSetProcessPpmPolicy(a1, a2);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a1 + 2072, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 2072), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 2072), (__int64)v5, a1 + 2072);
  v7 = 1;
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  *(_DWORD *)(a1 + 2080) = a2;
  if ( !PspDisableWindowInFocusUserIdleQos && !PspDisableWindowInFocusUserIdleQosByPolicy )
    v7 = 0;
  if ( a2 == 9 && v7 )
    a2 = 7;
  KeSetProcessPpmPolicy(a1, a2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2072), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 2072));
  KeAbPostRelease(a1 + 2072);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v8, v9, v10);
}
