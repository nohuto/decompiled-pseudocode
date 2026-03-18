/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x140650C1C
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140832840 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpCompressPendingBuffers @ 0x14065101C (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x14065164C (EtwpRelinquishCompressionTarget.c)
 */

__int64 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rdi

  result = *(unsigned int *)(a1 + 1432);
  if ( (_DWORD)result )
  {
    EtwpCompressPendingBuffers();
    v3 = KeAbPreAcquire(a1 + 1408, 0LL);
    v4 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), (__int64)v3, a1 + 1408);
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    return KeAbPostRelease(a1 + 1408);
  }
  return result;
}
