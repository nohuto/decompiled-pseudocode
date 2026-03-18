/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x140644C1C
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408931C4 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpCompressPendingBuffers @ 0x14064501C (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x14064564C (EtwpRelinquishCompressionTarget.c)
 */

__int64 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rax
  __int64 *v4; // rdi

  result = *(unsigned int *)(a1 + 1432);
  if ( (_DWORD)result )
  {
    EtwpCompressPendingBuffers();
    v3 = KeAbPreAcquire(a1 + 1408, 0LL);
    v4 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), v3, a1 + 1408);
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    return KeAbPostRelease(a1 + 1408);
  }
  return result;
}
