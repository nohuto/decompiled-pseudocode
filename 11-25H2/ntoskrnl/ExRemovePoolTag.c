/*
 * XREFs of ExRemovePoolTag @ 0x14038B5E8
 * Callers:
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExpFreePoolChecks @ 0x1402DE730 (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402E0260 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402E0770 (ExpPoolTrackerReturnLimit.c)
 *     EtwTracePool @ 0x1402FE3D8 (EtwTracePool.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExpPoolFlagsToPoolType @ 0x140B64240 (ExpPoolFlagsToPoolType.c)
 */

__int64 __fastcall ExRemovePoolTag(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
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
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // r10d
  unsigned __int64 v24; // rdi
  __int64 v25; // r13
  unsigned int v26; // edx
  unsigned int v27; // r11d
  __int64 v28; // r8
  __int16 v30; // dx
  _BYTE *v31; // r9
  int v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h]
  char v34; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v35; // [rsp+88h] [rbp+10h]
  char v36; // [rsp+98h] [rbp+20h] BYREF

  v35 = a2;
  v33 = *a4 & 0x1C0;
  v8 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v9 = 1;
  v10 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
  v11 = 0;
  while ( 1 )
  {
    v12 = 32LL * v10;
    if ( *(_QWORD *)((char *)PoolBigPageTable + v12) == BugCheckParameter2 )
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
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, (unsigned int)*a4, 0LL);
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
  v20 = *a2;
  v21 = *(_QWORD *)a4;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  if ( (_DWORD)v20 == PoolHitTag )
    __debugbreak();
  v22 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v22 = ExpPoolFlagsToPoolType(v21, v21 & 0x10, (unsigned int)&v32, (unsigned int)&v34, (__int64)&v36);
    if ( (int)v22 >= 0 )
    {
      v30 = v32;
      if ( v34 )
      {
        v30 = v32 | 8;
        v32 |= 8u;
      }
      EtwTracePool(0xE22u, v30, v20, BugCheckParameter2, v16);
    }
  }
  LODWORD(v22) = KeGetPcr()->Prcb.Number;
  v23 = PoolTrackTableMask;
  v24 = v21 & 0xFFFFFFFFFFFFFFFBuLL;
  v25 = (__int64)*(&ExPoolTagTables + v22);
  v26 = PoolTrackTableMask & ((40543 * v20) ^ ((unsigned __int64)(40543 * v20) >> 32));
  v27 = v26;
  while ( 1 )
  {
    v28 = v25 + 80LL * v26;
    if ( *(_DWORD *)v28 == (_DWORD)v20 )
      break;
    if ( *(_DWORD *)v28 || (v19 = *(unsigned int *)(PoolTrackTable + 80LL * v26), !(_DWORD)v19) )
    {
      v26 = v23 & (v26 + 1);
      if ( v26 == v27 )
      {
        ExpRemovePoolTrackerExpansion(v20, v16, v24, v19);
        goto LABEL_17;
      }
    }
    else
    {
      *(_DWORD *)v28 = v19;
      v19 = *(_QWORD *)(PoolTrackTable + 80LL * v26 + 72);
      if ( v19 )
        *(_QWORD *)(v28 + 72) = v19;
    }
  }
  ExpPoolTrackerReturnLimit((v24 & 0x100) == 0, v16, v28);
LABEL_17:
  if ( v17 )
  {
    v31 = (_BYTE *)(BugCheckParameter2 + v16 - (unsigned __int16)v18);
    while ( v11 < (unsigned __int16)v18 )
    {
      if ( *v31 != v17 )
        KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, (ULONG_PTR)v31, v17);
      ++v31;
      ++v11;
    }
  }
  return ExpFreePoolChecks(BugCheckParameter2, *v35, v16, v33, BugCheckParameter2);
}
