/*
 * XREFs of CmpVolumeManagerLockContextListShared @ 0x14082310C
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140822324 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpVolumeManagerLockContextListShared()
{
  __int64 *v0; // rbx
  signed __int64 result; // rax

  v0 = KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpVolumeManager, 0, v0, (unsigned __int64)&CmpVolumeManager);
  if ( v0 )
    *((_BYTE *)v0 + 10) = 1;
  return result;
}
