/*
 * XREFs of EtwpIsGuidAllowed @ 0x14089AB9C
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409EED94 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     bsearch @ 0x1404FBFE0 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  __int64 *v5; // rsi
  bool v6; // di
  size_t v7; // rax

  v2 = (signed __int64 *)(a1 + 688);
  v5 = KeAbPreAcquire(a1 + 688, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (unsigned __int64)v2);
  v6 = 1;
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v7 = *(unsigned __int16 *)(a1 + 1328);
  if ( (_WORD)v7 )
    v6 = bsearch(a2, *(const void **)(a1 + 1336), v7, 0x10uLL, EtwpCompareGuid) == 0LL;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
