/*
 * XREFs of CmpLockAppHiveLoadList @ 0x140A3D808
 * Callers:
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&CmpAppHiveLoadListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpAppHiveLoadListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpAppHiveLoadListLock, result, (__int64)&CmpAppHiveLoadListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
