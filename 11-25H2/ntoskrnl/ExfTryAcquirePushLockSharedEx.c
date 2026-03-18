/*
 * XREFs of ExfTryAcquirePushLockSharedEx @ 0x1403F5B90
 * Callers:
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403F5880 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1403F59A4 (ExpTryAcquireFannedOutPushLockShared.c)
 *     PfLockSharedTryAcquire @ 0x1403F5A50 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1403F5AE0 (ExTryAcquirePushLockSharedEx.c)
 *     IopProcessIoTracking @ 0x140593F70 (IopProcessIoTracking.c)
 *     DifExfTryAcquirePushLockSharedWrapper @ 0x140615F20 (DifExfTryAcquirePushLockSharedWrapper.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14064A150 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExfTryAcquirePushLockShared @ 0x14064A210 (ExfTryAcquirePushLockShared.c)
 *     MiTryAcquirePushLockUnordered @ 0x140669B6C (MiTryAcquirePushLockUnordered.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockSharedEx(signed __int64 *a1, char a2)
{
  char v2; // r8
  char v4; // r11
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt

  v2 = 0;
  if ( !ExpPushLockAllowImplicitUpgrade || (v4 = 1, (a2 & 4) != 0) )
    v4 = 0;
  _m_prefetchw(a1);
  v5 = *a1;
  while ( (v5 & 2) == 0 && ((v5 & 1) == 0 || (v5 & 0xFFFFFFFFFFFFFFF0uLL) != 0) || v4 && (v5 & 1) == 0 )
  {
    v6 = (v5 | 1) + 16;
    if ( (v5 & 2) != 0 )
      v6 = v5 | 1;
    v7 = v5;
    v5 = _InterlockedCompareExchange64(a1, v6, v5);
    if ( v7 == v5 )
      return 1;
  }
  return v2;
}
