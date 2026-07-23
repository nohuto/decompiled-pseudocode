/*
 * XREFs of MiFreeSlabEntries @ 0x1403B5608
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1403B5490 (MiFreeUnusedSlabPages.c)
 *     MiDefragFreeEmptySlabEntries @ 0x14067B2A0 (MiDefragFreeEmptySlabEntries.c)
 *     MiDeleteSlabAllocator @ 0x14067BC60 (MiDeleteSlabAllocator.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     MiSlabUpdateRecentFailure @ 0x1403B62A8 (MiSlabUpdateRecentFailure.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x14045C66C (MiRemoveSlabEntry.c)
 *     MiSlabEntryBecameEmpty @ 0x14045CB00 (MiSlabEntryBecameEmpty.c)
 *     MiGetSlabCurrentTime @ 0x14045CB68 (MiGetSlabCurrentTime.c)
 *     MiPurgeSlabEntries @ 0x140481A04 (MiPurgeSlabEntries.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeSlabEntries(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r14
  __int64 v5; // r15
  int v6; // r11d
  unsigned int *v7; // rdi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rbp
  bool v11; // zf
  __int64 v12; // rax
  _QWORD *i; // rdi
  _QWORD *v14; // rcx
  _QWORD **v15; // rax
  _QWORD *v16; // r14
  _QWORD *v17; // rcx
  int v18; // ecx
  _QWORD *v19; // rdx
  _RTL_BITMAP *v20; // rcx

  v2 = (unsigned int *)(a2 + 136);
  v5 = LODWORD(MiPageSizes[(*(_DWORD *)(a2 + 136) >> 4) & 3]);
  MiSlabUpdateRecentFailure(a2 + 176);
  v7 = v2;
  if ( v6 == 1 )
    goto LABEL_7;
  if ( (*v2 & 1) != 0 )
  {
    if ( !v6 )
    {
      if ( (unsigned __int64)(MiGetSlabCurrentTime() - *(_QWORD *)(a2 + 168)) < 0x2FAF080 )
        return 0LL;
      v7 = (unsigned int *)(a2 + 136);
    }
    if ( !*(_QWORD *)(a2 + 104)
      || *(_QWORD *)(a2 + 96) + **(_QWORD **)(a2 + 80) >= (unsigned __int64)(*(_QWORD *)(a2 + 104) + v5) )
    {
LABEL_7:
      MiPurgeSlabEntries(a2);
      v9 = 0LL;
      v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
      v11 = *(_DWORD *)(a2 + 128) == 8;
      *v7 = *v2 & 0xFFFFFFFE;
      if ( v11 && *(_DWORD *)(a1 + 18288) )
      {
        v20 = (_RTL_BITMAP *)(*(_QWORD *)(57216LL * *(unsigned int *)(a2 + 132)
                                        + *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL)
                                        + 57008)
                            + 314064LL);
        RtlClearBits(v20, 0, v20->SizeOfBitMap);
      }
      v12 = *(_QWORD *)(a2 + 8);
      if ( (v12 & 1) != 0 )
      {
        if ( v12 == 1 )
        {
LABEL_24:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
          while ( 1 )
          {
            v19 = v9;
            if ( !v9 )
              break;
            v9 = (_QWORD *)*v9;
            MiFreeSlabEntry(a2, v19);
          }
          if ( KiIrqlFlags )
          {
            LOBYTE(v19) = v10;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
          }
          __writecr8(v10);
          return 0LL;
        }
        i = (_QWORD *)(v12 ^ (a2 | 1));
      }
      else
      {
        i = *(_QWORD **)(a2 + 8);
      }
      while ( i )
      {
        v15 = (_QWORD **)i[1];
        v16 = i;
        v14 = i;
        if ( v15 )
        {
          v17 = *v15;
          for ( i = (_QWORD *)i[1]; v17; v17 = (_QWORD *)*v17 )
            i = v17;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v14 )
              break;
            v14 = i;
          }
        }
        if ( (*((_DWORD *)v16 + 23) & 1) == 0 )
        {
          v18 = *((_DWORD *)v16 + 21);
          if ( v18 == (_DWORD)v5 )
          {
            MiRemoveSlabEntry(a1, a2, v16);
            *v16 = v9;
            v9 = v16;
          }
          else if ( *((_DWORD *)v16 + 22) + v18 >= (unsigned int)v5 )
          {
            MiSlabEntryBecameEmpty(a2, v16);
          }
        }
      }
      goto LABEL_24;
    }
  }
  return 0LL;
}
