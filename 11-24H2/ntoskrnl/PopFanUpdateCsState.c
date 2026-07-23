/*
 * XREFs of PopFanUpdateCsState @ 0x140AB776C
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140A71CC0 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x14075BE18 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140F0B125 )
    {
      if ( byte_140F0B124 )
        PopFanEndCsFanPeriod();
      qword_140F0B138 = 0LL;
      byte_140F0B125 = 0;
    }
  }
  else if ( !byte_140F0B125 )
  {
    byte_140F0B125 = 1;
    qword_140F0B138 = MEMORY[0xFFFFF78000000008];
  }
  return PopReleaseRwLock(&PopFanLock);
}
