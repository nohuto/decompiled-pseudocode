/*
 * XREFs of ExRemovePoolTag @ 0x1403985B4
 * Callers:
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExpFreePoolChecks @ 0x14035B160 (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14035B760 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPoolTrackerReturnLimit @ 0x14035BA20 (ExpPoolTrackerReturnLimit.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExRemovePoolTag(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  KIRQL v8; // r11
  int v9; // r9d
  unsigned int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  char *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // r14d
  unsigned __int64 v16; // rbp
  unsigned __int8 v17; // r15
  unsigned int v18; // r14d
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // r10d
  __int16 v23; // di
  __int64 v24; // r13
  unsigned int v25; // edx
  unsigned int v26; // r11d
  __int64 v27; // r8
  int v29; // r9d
  __int64 v30; // r9
  __int16 v31; // dx
  _BYTE *v32; // r9
  int v33; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h]
  char v35; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v36; // [rsp+88h] [rbp+10h]
  char v37; // [rsp+98h] [rbp+20h] BYREF

  v36 = a2;
  v34 = *a4 & 0x1C0;
  v8 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v9 = 1;
  v10 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter3 >> 12)) ^ ((40543 * (BugCheckParameter3 >> 12)) >> 32));
  v11 = 0;
  while ( 1 )
  {
    v12 = 32LL * v10;
    if ( *(_QWORD *)((char *)PoolBigPageTable + v12) == BugCheckParameter3 )
      break;
    if ( ++v10 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v9 )
        goto LABEL_5;
      v10 = 0;
      v9 = 0;
    }
  }
  v13 = (char *)PoolBigPageTable + v12;
  if ( !((char *)PoolBigPageTable + v12) )
LABEL_5:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter3, (unsigned int)*a4, 0LL);
  v14 = *((_DWORD *)v13 + 2);
  v15 = *((_DWORD *)v13 + 3);
  v16 = *((_QWORD *)v13 + 2);
  *a2 = v14;
  *(_QWORD *)a4 = (v15 >> 8) & 0xFFF;
  *a3 = v16;
  if ( v14 == 1819242320 )
  {
    v17 = 0;
    LOWORD(v18) = 0;
  }
  else
  {
    v17 = v15;
    v18 = v15 >> 20;
  }
  _InterlockedDecrement(&ExpPoolBigEntriesInUse);
  _InterlockedIncrement64((volatile signed __int64 *)v13);
  ExReleaseSpinLockShared(&ExpLargePoolTableLock, v8);
  v19 = *a2;
  v20 = *(_QWORD *)a4;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  if ( (_DWORD)v19 == PoolHitTag )
    __debugbreak();
  v21 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v21 = ExpPoolFlagsToPoolType(v20, v20 & 0x10, (unsigned int)&v33, (unsigned int)&v35, (__int64)&v37);
    if ( (int)v21 >= 0 )
    {
      v31 = v33;
      if ( v35 )
      {
        v31 = v33 | 8;
        v33 |= 8u;
      }
      EtwTracePool(3618, v31, v19, BugCheckParameter3, v16);
    }
  }
  LODWORD(v21) = KeGetPcr()->Prcb.Number;
  v22 = PoolTrackTableMask;
  v23 = v20 & 0xFFFB;
  v24 = (__int64)*(&ExPoolTagTables + v21);
  v25 = PoolTrackTableMask & ((40543 * v19) ^ ((unsigned __int64)(40543 * v19) >> 32));
  v26 = v25;
  while ( 1 )
  {
    v27 = v24 + 80LL * v25;
    if ( *(_DWORD *)v27 == (_DWORD)v19 )
      break;
    if ( *(_DWORD *)v27 || (v29 = *(_DWORD *)(PoolTrackTable + 80LL * v25)) == 0 )
    {
      v25 = v22 & (v25 + 1);
      if ( v25 == v26 )
      {
        ExpRemovePoolTrackerExpansion(v19, v16, v23);
        goto LABEL_17;
      }
    }
    else
    {
      *(_DWORD *)v27 = v29;
      v30 = *(_QWORD *)(PoolTrackTable + 80LL * v25 + 72);
      if ( v30 )
        *(_QWORD *)(v27 + 72) = v30;
    }
  }
  ExpPoolTrackerReturnLimit((v23 & 0x100) == 0, v16, v27);
LABEL_17:
  if ( v17 )
  {
    v32 = (_BYTE *)(BugCheckParameter3 + v16 - (unsigned __int16)v18);
    while ( v11 < (unsigned __int16)v18 )
    {
      if ( *v32 != v17 )
        KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter3, (ULONG_PTR)v32, v17);
      ++v32;
      ++v11;
    }
  }
  return ExpFreePoolChecks(BugCheckParameter3, *v36, v16, v34, BugCheckParameter3);
}
