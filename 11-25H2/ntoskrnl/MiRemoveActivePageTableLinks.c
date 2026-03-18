/*
 * XREFs of MiRemoveActivePageTableLinks @ 0x14038573C
 * Callers:
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1403851C0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x140385A24 (MiSetPfnOldestWsleLeafAge.c)
 *     MiRebuildPageTableAges @ 0x140385AC4 (MiRebuildPageTableAges.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRevertPfnActivePageTable @ 0x1403858EC (MiRevertPfnActivePageTable.c)
 */

__int64 __fastcall MiRemoveActivePageTableLinks(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx

  v5 = *(_QWORD *)(a1 + 16) + 24 * ((*(_QWORD *)a2 >> 55) & 7LL);
  if ( !a3 )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
  --*(_DWORD *)(v5 + 68);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = v6 & 0xFFFFFFFFFFLL;
  if ( *(_QWORD *)(v5 + 72) == a2 )
  {
    if ( v7 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v5 + 72) = 0LL;
      *(_QWORD *)(v5 + 80) = 0LL;
    }
    else
    {
      v11 = 48 * v7 - 0x220000000000LL;
      *(_QWORD *)(v5 + 72) = v11;
      *(_QWORD *)(v11 + 16) |= 0xFFFFFF0000000000uLL;
      *(_DWORD *)(v11 + 36) |= 0xFFFFu;
    }
  }
  else
  {
    v8 = (unsigned __int16)*(_DWORD *)(a2 + 36) | (v6 >> 24) & 0xFFFFFF0000LL;
    v9 = 48 * v8 - 0x220000000000LL;
    *(_QWORD *)(v9 + 16) = v6 ^ (*(_QWORD *)(v9 + 16) ^ v6) & 0xFFFFFF0000000000uLL;
    if ( v7 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v5 + 80) = v9;
    }
    else
    {
      v10 = 48 * v7 - 0x220000000000LL;
      *(_QWORD *)(v10 + 16) ^= (*(_QWORD *)(v10 + 16) ^ (v8 << 24)) & 0xFFFFFF0000000000uLL;
      *(_DWORD *)(v10 + 36) = v8 ^ (*(_DWORD *)(v10 + 36) ^ v8) & 0xFFFF0000;
    }
  }
  if ( !a3 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
  return MiRevertPfnActivePageTable(a2);
}
