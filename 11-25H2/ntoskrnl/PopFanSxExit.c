/*
 * XREFs of PopFanSxExit @ 0x1404D1374
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
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
