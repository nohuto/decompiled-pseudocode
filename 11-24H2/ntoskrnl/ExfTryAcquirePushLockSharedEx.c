/*
 * XREFs of ExfTryAcquirePushLockSharedEx @ 0x1404736D4
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x14033E6B0 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140473480 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x1404735A4 (ExpTryAcquireFannedOutPushLockShared.c)
 *     PfLockSharedTryAcquire @ 0x140473650 (PfLockSharedTryAcquire.c)
 *     IopProcessIoTracking @ 0x140597680 (IopProcessIoTracking.c)
 *     DifExfTryAcquirePushLockSharedWrapper @ 0x140621EE0 (DifExfTryAcquirePushLockSharedWrapper.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140656050 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExfTryAcquirePushLockShared @ 0x140656110 (ExfTryAcquirePushLockShared.c)
 *     MiTryAcquirePushLockUnordered @ 0x1406755CC (MiTryAcquirePushLockUnordered.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
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
