/*
 * XREFs of PopFanSxExit @ 0x1404CA484
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 PopFanSxExit()
{
  __int64 i; // rbx

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PopFans; (__int64 *)i != &PopFans; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(i + 400));
    if ( *(_BYTE *)(i + 88) )
    {
      *(_QWORD *)(i + 208) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(i + 200) = 0;
    }
    PopReleaseRwLock((signed __int64 *)(i + 400));
  }
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
