/*
 * XREFs of ExpFreeHeapSpecialPool @ 0x140398994
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 * Callees:
 *     ExpFreePoolChecks @ 0x14035B160 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     MmDeterminePoolType @ 0x14035B710 (MmDeterminePoolType.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14035B760 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPoolTrackerReturnLimit @ 0x14035BA20 (ExpPoolTrackerReturnLimit.c)
 *     EtwTracePool @ 0x1403971E8 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140BAAFD0 (ViFreeTrackedPool.c)
 */

__int64 __fastcall ExpFreeHeapSpecialPool(__int64 a1, unsigned __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  unsigned int *v6; // rbx
  ULONG_PTR v7; // rbp
  unsigned __int8 CurrentIrql; // dl
  ULONG_PTR v9; // rdx
  unsigned __int64 v10; // r14
  _BYTE *v11; // r8
  _BYTE *i; // r8
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // r10d
  __int16 v16; // si
  __int64 v17; // rdi
  unsigned int v18; // edx
  unsigned int v19; // r11d
  __int64 v20; // r8
  unsigned int v21; // r8d
  int v23; // r9d
  __int64 v24; // r9
  __int16 v25; // dx
  char v26; // [rsp+68h] [rbp+10h] BYREF
  char v27; // [rsp+70h] [rbp+18h] BYREF
  int v28; // [rsp+78h] [rbp+20h] BYREF

  v4 = MmDeterminePoolType(a2);
  v6 = (unsigned int *)(v5 & 0xFFFFFFFFFFFFF000uLL);
  if ( byte_140FCECA8 )
  {
    if ( (unsigned __int64)v6 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, (ULONG_PTR)v6, 0LL);
    if ( v6 + 1024 < v6 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)v6, 0x1000uLL);
    memset_0((void *)(KasaniShadow + ((unsigned __int64)(v6 + 0x200000000000LL) >> 3)), 0, 0x200uLL);
  }
  v7 = 4096 - (unsigned int)(a2 & 0xFFF);
  ExpFreePoolChecks(a2, v6[1], v7, 128, a2);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - ((v4 & 0x100) != 0LL)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 0x100uLL, a2, 0x31uLL);
  v9 = *(_WORD *)v6 & 0x1FFF;
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v10 != v7 )
    KeBugCheckEx(0xC1u, a2, *(_WORD *)v6 & 0x1FFF, v7, 0x21uLL);
  v11 = v6 + 4;
  if ( (*v6 & 0x4000) != 0 )
    v11 = v6 + 6;
  while ( (unsigned __int64)v11 < a2 )
  {
    if ( *v11 != *((_BYTE *)v6 + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)v11, *v6, 0x23uLL);
    ++v11;
  }
  for ( i = (_BYTE *)(v9 + a2); (unsigned __int64)i < ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL); ++i )
  {
    if ( *i != *((_BYTE *)v6 + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, *v6, 0x24uLL);
  }
  if ( (*v6 & 0x4000) != 0 )
    ViFreeTrackedPool(a2, v9);
  v13 = v6[1];
  v28 = 0;
  v26 = 0;
  v27 = 0;
  if ( (_DWORD)v13 == PoolHitTag )
    __debugbreak();
  v14 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v14 = ExpPoolFlagsToPoolType(v4, v4 & 0x10, (unsigned int)&v28, (unsigned int)&v26, (__int64)&v27);
    if ( (int)v14 >= 0 )
    {
      v25 = v28;
      if ( v26 )
      {
        v25 = v28 | 8;
        v28 |= 8u;
      }
      EtwTracePool(3618, v25, v13, a2, v10);
    }
  }
  LODWORD(v14) = KeGetPcr()->Prcb.Number;
  v15 = PoolTrackTableMask;
  v16 = v4 & 0xFFFB;
  v17 = (__int64)*(&ExPoolTagTables + v14);
  v18 = PoolTrackTableMask & ((40543 * v13) ^ ((unsigned __int64)(40543 * v13) >> 32));
  v19 = v18;
  while ( 1 )
  {
    v20 = v17 + 80LL * v18;
    if ( *(_DWORD *)v20 == (_DWORD)v13 )
      break;
    if ( *(_DWORD *)v20 || (v23 = *(_DWORD *)(PoolTrackTable + 80LL * v18)) == 0 )
    {
      v18 = v15 & (v18 + 1);
      if ( v18 == v19 )
      {
        ExpRemovePoolTrackerExpansion(v13, v10, v16);
        return RtlpHpFreeHeap(a1, (unsigned __int64)v6, v21);
      }
    }
    else
    {
      *(_DWORD *)v20 = v23;
      v24 = *(_QWORD *)(PoolTrackTable + 80LL * v18 + 72);
      if ( v24 )
        *(_QWORD *)(v20 + 72) = v24;
    }
  }
  ExpPoolTrackerReturnLimit((v16 & 0x100) == 0, v10, v20);
  return RtlpHpFreeHeap(a1, (unsigned __int64)v6, v21);
}
