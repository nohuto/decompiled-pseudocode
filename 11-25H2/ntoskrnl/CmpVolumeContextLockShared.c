/*
 * XREFs of CmpVolumeContextLockShared @ 0x140A41E3C
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9108 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A41DB0 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A41DFC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int64 *v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 56);
  v2 = KeAbPreAcquire(a1 + 56, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (unsigned __int64)v1);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
