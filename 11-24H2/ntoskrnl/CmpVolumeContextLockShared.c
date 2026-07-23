/*
 * XREFs of CmpVolumeContextLockShared @ 0x140A3BFC0
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D8E48 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A3BF34 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A3BF80 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  char *v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 56);
  v2 = (char *)KeAbPreAcquire(a1 + 56, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (__int64)v1);
  if ( v2 )
    v2[10] = 1;
  return result;
}
