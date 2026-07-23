/*
 * XREFs of EtwpCompressionProc @ 0x14064F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpCompressPendingBuffers @ 0x14064F724 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x14064FD4C (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  int *v1; // rsi
  signed __int32 i; // eax
  bool v4; // zf
  int v5; // eax
  char *v6; // rax
  char *v7; // rbp

  v1 = (int *)(a1 + 358);
  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 350, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 350, 0xFFFFFFFF) )
  {
    v4 = i == 2;
    v5 = *v1;
    if ( !v4 )
      break;
    if ( v5 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v5 )
  {
    v6 = (char *)KeAbPreAcquire((__int64)(a1 + 352), 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 352, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 176, v6, (__int64)(a1 + 352));
    if ( v7 )
      v7[10] = 1;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 176, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 176);
    KeAbPostRelease((ULONG_PTR)(a1 + 352));
  }
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 170) + 704LL) + 8LL * *a1),
    1u);
}
