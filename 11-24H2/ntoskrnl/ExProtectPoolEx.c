/*
 * XREFs of ExProtectPoolEx @ 0x140382168
 * Callers:
 *     SmHpChunkHeapProtect @ 0x140379518 (SmHpChunkHeapProtect.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14037AAF0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037F670 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpChunkFree @ 0x140380F50 (SmHpChunkFree.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140381180 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpBufferUpdateFullness @ 0x140381C40 (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x140381E34 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferProtectEx @ 0x140382050 (SmHpBufferProtectEx.c)
 *     SmHpChunkAlloc @ 0x140382D30 (SmHpChunkAlloc.c)
 *     SmHpChunkUnprotect @ 0x140382F80 (SmHpChunkUnprotect.c)
 *     CmpProtectPool @ 0x140479388 (CmpProtectPool.c)
 *     CmpProtectPoolEx @ 0x140485EC4 (CmpProtectPoolEx.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  char *v12; // r9
  __int64 v13; // r11
  unsigned __int64 v14; // rbx
  char *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v22; // rdx

  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 0LL;
  v7 = 0;
  LOWORD(v8) = 0;
  v9 = 40543 * (a1 >> 12);
  LOWORD(v10) = 128;
  v11 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( !PoolBigPageTable )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    if ( KiIrqlFlags )
    {
      LOBYTE(v22) = v11;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
    }
    __writecr8(v11);
    return 0LL;
  }
  v12 = (char *)PoolBigPageTable + 32 * PoolBigPageTableSize;
  v13 = 32LL * (((_DWORD)PoolBigPageTableSize - 1) & ((unsigned int)v9 ^ HIDWORD(v9)));
  v14 = a3 + a2 - 1;
  v15 = (char *)PoolBigPageTable + v13;
  while ( 1 )
  {
    do
    {
      v16 = *(_QWORD *)v15;
      if ( (*(_QWORD *)v15 & 1) == 0 && a2 >= v16 )
      {
        v17 = *((_QWORD *)v15 + 2);
        if ( v14 < v17 + v16
          && ((v17 & 0xFFF) == 0 || ((v14 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v17 + v16 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
        {
          v18 = *(_QWORD *)v15;
          v10 = (unsigned __int64)*((unsigned int *)v15 + 3) >> 8;
          v8 = *((_QWORD *)v15 + 2);
          goto LABEL_12;
        }
      }
      v15 += 32;
    }
    while ( v15 < v12 );
    if ( v7 == 1 )
      break;
    v15 = (char *)PoolBigPageTable;
    v7 = 1;
    v12 = (char *)PoolBigPageTable + v13;
  }
  v18 = 0LL;
LABEL_12:
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v19) = v11;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
  }
  __writecr8(v11);
  if ( !v18 )
    return 0LL;
  v20 = v8 & 0xFFF;
  if ( v20 )
  {
    if ( (v10 & 0x400) == 0 || v20 > 0x10uLL )
      return 0LL;
  }
  if ( a4 == -1 )
    return 1LL;
  else
    return MmProtectPool(a2, a3, a4);
}
