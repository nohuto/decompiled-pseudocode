/*
 * XREFs of PopQueryLastStateTransitionInfo @ 0x140B61324
 * Callers:
 *     PopStateTransitionTimeoutDispatch @ 0x1405D1100 (PopStateTransitionTimeoutDispatch.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopQueryLastStateTransitionInfo(_OWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx

  v1 = 0;
  if ( a1 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0D288);
    if ( dword_140F0D280 == -1 )
    {
      v1 = -1073741823;
    }
    else
    {
      v3 = 3LL * (unsigned int)dword_140F0D280;
      *a1 = PopStateTransitonBlameStack[3 * (unsigned int)dword_140F0D280];
      a1[1] = PopStateTransitonBlameStack[v3 + 1];
      a1[2] = PopStateTransitonBlameStack[v3 + 2];
    }
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0D288);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
