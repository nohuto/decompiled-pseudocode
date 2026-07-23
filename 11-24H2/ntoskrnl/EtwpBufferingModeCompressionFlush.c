/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x14064F324
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpCompressPendingBuffers @ 0x14064F724 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x14064FD4C (EtwpRelinquishCompressionTarget.c)
 */

__int64 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rdi

  result = *(unsigned int *)(a1 + 1432);
  if ( (_DWORD)result )
  {
    EtwpCompressPendingBuffers();
    v3 = (char *)KeAbPreAcquire(a1 + 1408, 0LL);
    v4 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), v3, a1 + 1408);
    if ( v4 )
      v4[10] = 1;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    return KeAbPostRelease(a1 + 1408);
  }
  return result;
}
