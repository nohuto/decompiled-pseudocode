/*
 * XREFs of CmpVolumeContextLockShared @ 0x140A46300
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D88F8 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A46274 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A462C0 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  _QWORD *v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 56);
  v2 = KeAbPreAcquire(a1 + 56, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (__int64)v1);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
