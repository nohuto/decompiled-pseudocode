/*
 * XREFs of PopFanUpdateRunningState @ 0x140AB512C
 * Callers:
 *     PopFanWorker @ 0x140A7F6A0 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140750548 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateRunningState(char a1)
{
  int v2; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopFanLock);
  if ( a1 )
    v2 = PopFanTracking + 1;
  else
    v2 = PopFanTracking - 1;
  PopFanTracking = v2;
  if ( v2 )
  {
    if ( !byte_140F0BA44 )
    {
      byte_140F0BA44 = 1;
      qword_140F0BA50 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140F0BA44 )
  {
    if ( byte_140F0BA45 )
      PopFanEndCsFanPeriod();
    qword_140F0BA50 = 0LL;
    byte_140F0BA44 = 0;
  }
  return PopReleaseRwLock(&PopFanLock);
}
