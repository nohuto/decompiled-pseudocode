/*
 * XREFs of PopFanUpdateRunningState @ 0x140AB9518
 * Callers:
 *     PopFanWorker @ 0x140A83710 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x14075CE78 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateRunningState(char a1)
{
  int v2; // eax

  PopAcquireRwLockExclusive(&PopFanLock);
  if ( a1 )
    v2 = PopFanTracking + 1;
  else
    v2 = PopFanTracking - 1;
  PopFanTracking = v2;
  if ( v2 )
  {
    if ( !byte_140F0C0E4 )
    {
      byte_140F0C0E4 = 1;
      qword_140F0C0F0 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140F0C0E4 )
  {
    if ( byte_140F0C0E5 )
      PopFanEndCsFanPeriod();
    qword_140F0C0F0 = 0LL;
    byte_140F0C0E4 = 0;
  }
  return PopReleaseRwLock((signed __int64 *)&PopFanLock);
}
