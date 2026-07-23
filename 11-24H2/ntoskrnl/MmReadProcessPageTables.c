/*
 * XREFs of MmReadProcessPageTables @ 0x140681358
 * Callers:
 *     KiMonitorCacheErrata @ 0x1405C0EC0 (KiMonitorCacheErrata.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140404D20 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MmReadProcessPageTables(__int64 a1)
{
  unsigned __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  unsigned int v8; // r14d
  volatile __int64 *v9; // r15
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+68h] [rbp+10h]

  ValidPte = MiMakeValidPte(0LL, 0LL, -1610612732);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = ValidPte;
  __wbinvd();
  result = ExTryAcquireSpinLockSharedAtDpcLevel((__int64)&dword_140E38E08, v4, v5, v6);
  v8 = 0;
  if ( (_DWORD)result )
  {
    v9 = (volatile __int64 *)*((_QWORD *)CurrentPrcb->MmInternal + 42);
    v10 = _InterlockedExchange64(v9, CLFS_LSN_NULL_EXT);
    MiFlushSingleTbEntry((__int64)((_QWORD)v9 << 25) >> 16, -1, 1);
    v11 = MmPhysicalMemoryBlock;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      do
      {
        v12 = v11[2 * v8 + 2];
        v13 = 48 * v12 - 0x220000000000LL;
        v14 = 48 * (v12 + v11[2 * v8 + 3]) - 0x220000000000LL;
        v22 = v14;
        while ( v13 < v14 )
        {
          if ( (*(_BYTE *)(v13 + 34) & 7) == 6 )
          {
            v15 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
            if ( v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              v16 = (__int64)(v15 << 25) >> 16;
              if ( v16 >= 0xFFFFF68000000000uLL
                && v16 <= 0xFFFFF6FFFFFFFFFFuLL
                && ((*(_QWORD *)(v13 + 40) >> 60) & 7) != 1
                && (*(_QWORD *)(v13 + 40) & 0x10000000000LL) == 0
                && (*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
                && (HIWORD(*(_DWORD *)(v13 + 32)) & 0xC0) == 0x40 )
              {
                v3 = (0xAAAAAAAAAAAAB000uLL * ((__int64)(v13 + 0x220000000000LL) >> 4)) ^ ((0xAAAAAAAAAAAAB000uLL
                                                                                          * ((__int64)(v13 + 0x220000000000LL) >> 4)) ^ v3) & 0xFFF0000000000FFFuLL;
                _InterlockedExchange64(v9, v3);
                MiFlushSingleTbEntry((__int64)((_QWORD)v9 << 25) >> 16, -1, 128);
                v17 = (__int64)((_QWORD)v9 << 25) >> 16;
                v18 = 64LL;
                do
                {
                  v17 += 64LL;
                  --v18;
                }
                while ( v18 );
                v19 = KiCacheErrataMonitor;
                v20 = CurrentPrcb->Number + 39LL;
                CurrentPrcb->ClockKeepAlive = 1;
                _InterlockedExchange64((volatile __int64 *)(v19 + 16 * v20), -1LL);
                if ( (*(_QWORD *)(v19 + 16 * (*(unsigned int *)(a1 + 36) + 39LL)) & CurrentPrcb->GroupSetMember) != 0 )
                  goto LABEL_20;
              }
            }
            v14 = v22;
          }
          v13 += 48LL;
        }
        v11 = MmPhysicalMemoryBlock;
        ++v8;
      }
      while ( v8 < *(_DWORD *)MmPhysicalMemoryBlock );
    }
LABEL_20:
    _InterlockedExchange64(v9, v10);
    MiFlushSingleTbEntry((__int64)((_QWORD)v9 << 25) >> 16, -1, (v10 & 1) != 0 ? 128 : 1);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E38E08);
    return 1LL;
  }
  return result;
}
