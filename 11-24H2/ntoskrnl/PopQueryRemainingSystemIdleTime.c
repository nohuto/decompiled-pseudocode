/*
 * XREFs of PopQueryRemainingSystemIdleTime @ 0x140AAE2F4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopQueryRemainingSystemIdleTime(int *a1, _DWORD *a2)
{
  char *v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // eax

  PopAcquireRwLockExclusive(&PopSystemIdleLock);
  *a1 = 0;
  *a2 = dword_140E0B664;
  if ( dword_140E0B668 )
  {
    v4 = (char *)&unk_140E0B680;
    v5 = 4LL;
    v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    do
    {
      if ( !v4[8] )
      {
        v7 = v6 - *(_QWORD *)v4;
        if ( v7 <= (unsigned int)dword_140E0B668 )
        {
          v8 = *a1;
          if ( *a1 <= (unsigned int)(dword_140E0B668 - v7) )
            v8 = dword_140E0B668 - v7;
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
  return PopReleaseRwLock((signed __int64 *)&PopSystemIdleLock);
}
