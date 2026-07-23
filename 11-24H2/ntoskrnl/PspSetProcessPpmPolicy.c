/*
 * XREFs of PspSetProcessPpmPolicy @ 0x140AC95E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x1402A9650 (Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeSetProcessPpmPolicy @ 0x140475710 (KeSetProcessPpmPolicy.c)
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405CFFFC (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

_QWORD *__fastcall PspSetProcessPpmPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  char *v5; // rax
  char *v6; // r14
  char v7; // cl

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
  v5 = (char *)KeAbPreAcquire(a1 + 2072, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 2072), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 2072), v5, a1 + 2072);
  v7 = 1;
  if ( v6 )
    v6[10] = 1;
  *(_DWORD *)(a1 + 2080) = a2;
  if ( !PspDisableWindowInFocusUserIdleQos && !PspDisableWindowInFocusUserIdleQosByPolicy )
    v7 = 0;
  if ( a2 == 9 && v7 )
    a2 = 7;
  KeSetProcessPpmPolicy(a1, a2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2072), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 2072));
  KeAbPostRelease(a1 + 2072);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
