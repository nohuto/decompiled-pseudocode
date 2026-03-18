/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x1402BD440
 * Callers:
 *     MiPostInsertVad @ 0x1402BCBB0 (MiPostInsertVad.c)
 *     MiLockLoaderEntry @ 0x14036E4C0 (MiLockLoaderEntry.c)
 *     MiLockAweVadsExclusive @ 0x1404B43C0 (MiLockAweVadsExclusive.c)
 *     MiLockAwePagesExclusive @ 0x140677010 (MiLockAwePagesExclusive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 *v3; // r13
  unsigned int v4; // r9d
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned __int64 *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdi
  unsigned int v11; // esi
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  volatile signed __int32 *v15; // roff
  unsigned __int64 *v16; // rcx

  v3 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v3 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v3, BugCheckParameter2);
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  v5 = v4;
  if ( (v4 & 1) != 0 )
  {
    v6 = (v4 >> 13) & 0x3FFFF;
    _BitScanReverse(&v7, v6);
    v8 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v7 - 2))
                                        + 8 * (v6 ^ (unsigned int)(1 << v7))
                                        + 8)
                            + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 4) & 0x1FF));
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v3, BugCheckParameter2);
    v9 = 1;
    LODWORD(v10) = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( (unsigned int)v10 > 1 )
    {
      v11 = ((unsigned int)v5 >> 13) & 0x3FFFF;
      v12 = (v5 >> 4) & 0x1FF;
      do
      {
        _BitScanReverse(&v13, v11);
        if ( _interlockedbittestandset64(
               (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8LL * v9)
                                                                 + 8LL * (v13 - 2))
                                                     + 8 * (v11 ^ (unsigned __int64)(unsigned int)(1 << v13))
                                                     + 8)
                                         + 8LL * v12),
               0LL) )
        {
          v10 = (unsigned int)(v10 - 1);
          _BitScanReverse(&v14, v11);
          v15 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v10)
                                                                  + 8LL * (v14 - 2))
                                                      + 8 * (v11 ^ (unsigned __int64)(unsigned int)(1 << v14))
                                                      + 8)
                                          + 8LL * v12);
          v16 = (unsigned __int64 *)v15;
          if ( _interlockedbittestandset64(v15, 0LL) )
            ExfAcquirePushLockExclusiveEx(v16, v3, BugCheckParameter2);
        }
        else
        {
          ++v9;
        }
      }
      while ( v9 < (unsigned int)v10 );
    }
  }
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
}
