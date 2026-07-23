/*
 * XREFs of PopQueryRemainingSystemIdleTime @ 0x140AA91D0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopQueryRemainingSystemIdleTime(int *a1, _DWORD *a2)
{
  char *v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
  *a1 = 0;
  *a2 = dword_140E0B6E4;
  if ( dword_140E0B6E8 )
  {
    v4 = (char *)&unk_140E0B700;
    v5 = 4LL;
    v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    do
    {
      if ( !v4[8] )
      {
        v7 = v6 - *(_QWORD *)v4;
        if ( v7 <= (unsigned int)dword_140E0B6E8 )
        {
          v8 = *a1;
          if ( *a1 <= (unsigned int)(dword_140E0B6E8 - v7) )
            v8 = dword_140E0B6E8 - v7;
          *a1 = v8;
        }
      }
      v4 += 56;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    *a1 = -1;
  }
  return PopReleaseRwLock(&PopSystemIdleLock);
}
