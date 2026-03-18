/*
 * XREFs of PopFanUpdateCsState @ 0x140ABC74C
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140A77BA0 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x14075CE78 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive(&PopFanLock);
  if ( a1 )
  {
    if ( byte_140F0C0E5 )
    {
      if ( byte_140F0C0E4 )
        PopFanEndCsFanPeriod();
      qword_140F0C0F8 = 0LL;
      byte_140F0C0E5 = 0;
    }
  }
  else if ( !byte_140F0C0E5 )
  {
    byte_140F0C0E5 = 1;
    qword_140F0C0F8 = MEMORY[0xFFFFF78000000008];
  }
  return PopReleaseRwLock((signed __int64 *)&PopFanLock);
}
