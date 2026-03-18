/*
 * XREFs of MiInsertActivePageTableLinksTail @ 0x14038556C
 * Callers:
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1403851C0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x140385A24 (MiSetPfnOldestWsleLeafAge.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeUsedPtesCount @ 0x1403859D0 (MiInitializeUsedPtesCount.c)
 */

void __fastcall MiInsertActivePageTableLinksTail(__int64 a1, __int64 a2, unsigned __int8 a3, int a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // r8

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
    || (v6 = (__int64)(*(_QWORD *)(a2 + 8) << 25) >> 16 << 25 >> 16, v6 < 0xFFFFF68000000000uLL)
    || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = *(_QWORD *)(a1 + 16) + 24LL * a3;
    if ( (*(_DWORD *)(a2 + 36) & 0x4000000) != 0 )
      v8 = HIDWORD(*(_QWORD *)a2);
    else
      v8 = *(_QWORD *)(a2 + 16) >> 16;
    v9 = *(_DWORD *)(a2 + 36) | 0x4000000;
    *(_DWORD *)(a2 + 36) = v9;
    MiInitializeUsedPtesCount(a2, v8 & 0x3FF);
    if ( !a4 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
      v10 = 0xAAAAAAAAAAAAAAABuLL;
    }
    v11 = *(_QWORD *)(v7 + 80);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 16) = (0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) ^ (*(_QWORD *)(v11 + 16) ^ (0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4))) & 0xFFFFFF0000000000uLL;
      *(_QWORD *)(a2 + 16) = (((v10 * ((v11 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFFF3FFFuLL) << 24) | 0x3FFFFFFFFFLL;
      *(_DWORD *)(a2 + 36) = (v10 * ((v11 + 0x220000000000LL) >> 4)) ^ (v9 ^ (v10 * ((v11 + 0x220000000000LL) >> 4))) & 0xFFFF0000;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = 0xFFFFFF3FFFFFFFFFuLL;
      *(_DWORD *)(a2 + 36) = v9 | 0xFFFF;
      *(_QWORD *)(v7 + 72) = a2;
    }
    *(_QWORD *)(v7 + 80) = a2;
    ++*(_DWORD *)(v7 + 68);
    if ( !a4 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
  }
}
