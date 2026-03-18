/*
 * XREFs of EtwpIsGuidAllowed @ 0x14083A0B4
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409F6160 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     bsearch @ 0x1404FE760 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  _QWORD *v5; // rsi
  bool v6; // di

  v2 = (signed __int64 *)(a1 + 688);
  v5 = KeAbPreAcquire(a1 + 688, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (__int64)v2);
  v6 = 1;
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( *(_WORD *)(a1 + 1328) )
    v6 = bsearch(a2, *(const void **)(a1 + 1336), *(unsigned __int16 *)(a1 + 1328), 0x10uLL, EtwpCompareGuid) == 0LL;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
