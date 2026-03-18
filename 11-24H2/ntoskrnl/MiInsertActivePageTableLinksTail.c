/*
 * XREFs of MiInsertActivePageTableLinksTail @ 0x1402E24F8
 * Callers:
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiAddWorkingSetEntries @ 0x1402E0980 (MiAddWorkingSetEntries.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1402E2910 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x1402E3C1C (MiSetPfnOldestWsleLeafAge.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiInsertActivePageTableLinksTail(__int64 a1, __int64 a2, unsigned __int8 a3, int a4)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8

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
    if ( (*(_DWORD *)(a2 + 36) & 0x4000000) != 0 )
      *(_QWORD *)a2 = ((unsigned __int64)(unsigned int)v8 << 32) ^ (*(_QWORD *)a2 ^ ((unsigned __int64)(unsigned int)v8 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
    else
      *(_QWORD *)(a2 + 16) = ((unsigned __int64)(unsigned int)v8 << 16) ^ (*(_QWORD *)(a2 + 16) ^ ((unsigned __int64)(unsigned int)v8 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
    if ( !a4 )
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    v10 = *(_QWORD *)(v7 + 80);
    if ( v10 )
    {
      *(_QWORD *)(v10 + 16) = (0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) ^ (*(_QWORD *)(v10 + 16) ^ (0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4))) & 0xFFFFFF0000000000uLL;
      *(_QWORD *)(a2 + 16) = (((0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFFF3FFFuLL) << 24) | 0x3FFFFFFFFFLL;
      *(_DWORD *)(a2 + 36) = (-1431655765 * ((v10 + 0x220000000000LL) >> 4)) ^ (v9 ^ (-1431655765
                                                                                    * ((v10 + 0x220000000000LL) >> 4))) & 0xFFFF0000;
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
