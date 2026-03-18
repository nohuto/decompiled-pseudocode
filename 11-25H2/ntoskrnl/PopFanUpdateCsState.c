/*
 * XREFs of PopFanUpdateCsState @ 0x140AB85CC
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140A75970 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140750548 (PopFanEndCsFanPeriod.c)
 */

__int64 __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140F0BA45 )
    {
      if ( byte_140F0BA44 )
        PopFanEndCsFanPeriod();
      qword_140F0BA58 = 0LL;
      byte_140F0BA45 = 0;
    }
  }
  else if ( !byte_140F0BA45 )
  {
    byte_140F0BA45 = 1;
    qword_140F0BA58 = MEMORY[0xFFFFF78000000008];
  }
  return PopReleaseRwLock(&PopFanLock);
}
