/*
 * XREFs of EtwpIsGuidAllowed @ 0x140833108
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x140832F04 (EtwpIsRegEntryAllowed.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     bsearch @ 0x1404FC020 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  char *v5; // rsi
  bool v6; // di

  v2 = (signed __int64 *)(a1 + 688);
  v5 = (char *)KeAbPreAcquire(a1 + 688, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (__int64)v2);
  v6 = 1;
  if ( v5 )
    v5[10] = 1;
  if ( *(_WORD *)(a1 + 1328) )
    v6 = bsearch(a2, *(const void **)(a1 + 1336), *(unsigned __int16 *)(a1 + 1328), 0x10uLL, EtwpCompareGuid) == 0LL;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
