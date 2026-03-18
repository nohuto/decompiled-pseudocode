/*
 * XREFs of EtwpFreeCompression @ 0x140463FA8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeRemoveQueueDpcEx @ 0x140464090 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x14046420C (EtwpFreePlaceholderList.c)
 *     EtwpRelinquishCompressionTarget @ 0x14065164C (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi

  KeRemoveQueueDpcEx(a1 + 1456, 0LL);
  if ( *(_DWORD *)(a1 + 1432) && (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    v4 = KeAbPreAcquire(a1 + 1408, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), (__int64)v4, a1 + 1408);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    KeAbPostRelease(a1 + 1408);
    _InterlockedExchange((volatile __int32 *)(a1 + 1432), 0);
  }
  v2 = *(void **)(a1 + 1424);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 1416);
  if ( !v3 || (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    EtwpFreePlaceholderList(a1);
  else
    ExFreePoolWithTag(v3, 0);
}
