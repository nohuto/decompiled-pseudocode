/*
 * XREFs of ExpAcquireFannedOutPushLockExclusive @ 0x1402A257C
 * Callers:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1402A2500 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 */

int __fastcall ExpAcquireFannedOutPushLockExclusive(unsigned int a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned __int64 v7; // rsi
  unsigned __int64 *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned __int64 *v15; // rcx

  v3 = (a1 >> 13) & 0x3FFFF;
  v4 = (unsigned __int64)a1 >> 4;
  _BitScanReverse(&v5, v3);
  v7 = v4 & 0x1FF;
  v9 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v5 - 2))
                                      + 8 * (v3 ^ (unsigned int)(1 << v5))
                                      + 8)
                          + 8 * v7);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, a2, a3);
  v10 = 1;
  LODWORD(v11) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v12) = v11;
  if ( (unsigned int)v11 > 1 )
  {
    do
    {
      _BitScanReverse(&v13, v3);
      v11 = *(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * v10) + 8LL * (v13 - 2));
      if ( _interlockedbittestandset64(
             (volatile signed __int32 *)(*(_QWORD *)(v11 + 8 * (v3 ^ (unsigned int)(1 << v13)) + 8) + 8 * v7),
             0LL) )
      {
        v12 = (unsigned int)(v12 - 1);
        _BitScanReverse(&v14, v3);
        v11 = *(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v12) + 8LL * (v14 - 2));
        v15 = (unsigned __int64 *)(*(_QWORD *)(v11 + 8 * (v3 ^ (unsigned int)(1 << v14)) + 8) + 8 * v7);
        if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
          LODWORD(v11) = ExfAcquirePushLockExclusiveEx(v15, a2, a3);
      }
      else
      {
        ++v10;
      }
    }
    while ( v10 < (unsigned int)v12 );
  }
  return v11;
}
