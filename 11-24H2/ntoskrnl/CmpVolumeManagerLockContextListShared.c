/*
 * XREFs of CmpVolumeManagerLockContextListShared @ 0x140A5B3CC
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140966DB8 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 CmpVolumeManagerLockContextListShared()
{
  _QWORD *v0; // rbx
  signed __int64 result; // rax

  v0 = KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&CmpVolumeManager, 0, v0, (__int64)&CmpVolumeManager);
  if ( v0 )
    *((_BYTE *)v0 + 10) = 1;
  return result;
}
