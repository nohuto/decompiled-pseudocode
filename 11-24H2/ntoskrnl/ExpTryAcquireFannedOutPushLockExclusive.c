/*
 * XREFs of ExpTryAcquireFannedOutPushLockExclusive @ 0x140491098
 * Callers:
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14049A980 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 */

char __fastcall ExpTryAcquireFannedOutPushLockExclusive(unsigned int a1)
{
  char v2; // di
  ULONG MaximumProcessorCount; // r10d
  ULONG i; // ebx
  __int64 v5; // r14
  unsigned int v6; // ecx
  __int64 v7; // rsi
  unsigned int v8; // ecx
  volatile signed __int64 *v9; // rcx

  v2 = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  for ( i = 0; ; ++i )
  {
    if ( i >= MaximumProcessorCount )
      return 1;
    v5 = (a1 >> 13) & 0x3FFFF;
    _BitScanReverse(&v6, v5);
    v7 = (a1 >> 4) & 0x1FF;
    if ( _interlockedbittestandset64(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * i) + 8LL * (v6 - 2))
                                                 + 8 * (v5 ^ (unsigned int)(1 << v6))
                                                 + 8)
                                     + 8 * v7),
           0LL) )
    {
      break;
    }
  }
  while ( i )
  {
    _BitScanReverse(&v8, v5);
    v9 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * --i) + 8LL * (v8 - 2))
                                               + 8 * (v5 ^ (unsigned int)(1 << v8))
                                               + 8)
                                   + 8 * v7);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
  }
  return v2;
}
