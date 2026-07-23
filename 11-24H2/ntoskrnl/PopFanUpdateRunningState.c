/*
 * XREFs of PopFanUpdateRunningState @ 0x140AB45D8
 * Callers:
 *     PopFanWorker @ 0x140A7E230 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x14075BE18 (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140F0B124 )
    {
      byte_140F0B124 = 1;
      qword_140F0B130 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140F0B124 )
  {
    if ( byte_140F0B125 )
      PopFanEndCsFanPeriod();
    qword_140F0B130 = 0LL;
    byte_140F0B124 = 0;
  }
  return PopReleaseRwLock(&PopFanLock);
}
