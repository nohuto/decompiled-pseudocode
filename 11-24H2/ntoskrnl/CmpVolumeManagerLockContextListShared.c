/*
 * XREFs of CmpVolumeManagerLockContextListShared @ 0x140A52CDC
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14094F848 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpVolumeManagerLockContextListShared()
{
  char *v0; // rbx
  signed __int64 result; // rax

  v0 = (char *)KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpVolumeManager, 0, v0, (__int64)&CmpVolumeManager);
  if ( v0 )
    v0[10] = 1;
  return result;
}
