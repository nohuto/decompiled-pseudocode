/*
 * XREFs of ExpFreeHeapSpecialPool @ 0x1402F7C14
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402DAA10 (MmDeterminePoolType.c)
 *     ExpFreePoolChecks @ 0x1402DE730 (ExpFreePoolChecks.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402E0260 (ExpRemovePoolTrackerExpansion.c)
 *     ExpPoolTrackerReturnLimit @ 0x1402E0770 (ExpPoolTrackerReturnLimit.c)
 *     EtwTracePool @ 0x1402FE3D8 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpPoolFlagsToPoolType @ 0x140B64240 (ExpPoolFlagsToPoolType.c)
 *     ViFreeTrackedPool @ 0x140B98FF0 (ViFreeTrackedPool.c)
 */

__int64 __fastcall ExpFreeHeapSpecialPool(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int *v6; // rbx
  ULONG_PTR v7; // rbp
  unsigned __int8 CurrentIrql; // dl
  ULONG_PTR v9; // rdx
  unsigned __int64 v10; // r14
  _BYTE *v11; // r8
  unsigned __int64 v12; // r9
  _BYTE *i; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  int v16; // r10d
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // edx
  unsigned int v20; // r11d
  __int64 v21; // r8
  unsigned int v22; // r8d
  int v24; // edx
  char v25; // [rsp+68h] [rbp+10h] BYREF
  char v26; // [rsp+70h] [rbp+18h] BYREF
  int v27; // [rsp+78h] [rbp+20h] BYREF

  v4 = MmDeterminePoolType(a2);
  v6 = (unsigned int *)(v5 & 0xFFFFFFFFFFFFF000uLL);
  if ( byte_140FCDC68 )
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
  if ( CurrentIrql > (unsigned __int8)(2 - ((v4 & 0x100) != 0)) )
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
  v12 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  for ( i = (_BYTE *)(v9 + a2); (unsigned __int64)i < v12; ++i )
  {
    if ( *i != *((_BYTE *)v6 + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, *v6, 0x24uLL);
  }
  if ( (*v6 & 0x4000) != 0 )
    ViFreeTrackedPool(a2, v9);
  v14 = v6[1];
  v27 = 0;
  v25 = 0;
  v26 = 0;
  if ( (_DWORD)v14 == PoolHitTag )
    __debugbreak();
  v15 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
  {
    v15 = ExpPoolFlagsToPoolType(v4, v4 & 0x10, (unsigned int)&v27, (unsigned int)&v25, (__int64)&v26);
    if ( (int)v15 >= 0 )
    {
      v24 = v27;
      if ( v25 )
      {
        v24 = v27 | 8;
        v27 |= 8u;
      }
      v15 = EtwTracePool(3618, v24, v14, a2, v10);
    }
  }
  LODWORD(v15) = KeGetPcr()->Prcb.Number;
  v16 = PoolTrackTableMask;
  v17 = v4 & 0xFFFFFFFFFFFFFFFBuLL;
  v18 = (__int64)*(&ExPoolTagTables + v15);
  v19 = PoolTrackTableMask & ((40543 * v14) ^ ((unsigned __int64)(40543 * v14) >> 32));
  v20 = v19;
  while ( 1 )
  {
    v21 = v18 + 80LL * v19;
    if ( *(_DWORD *)v21 == (_DWORD)v14 )
      break;
    if ( *(_DWORD *)v21 || (v12 = *(unsigned int *)(PoolTrackTable + 80LL * v19), !(_DWORD)v12) )
    {
      v19 = v16 & (v19 + 1);
      if ( v19 == v20 )
      {
        ExpRemovePoolTrackerExpansion(v14, v10, v17, v12);
        return RtlpHpFreeHeap(a1, (ULONG_PTR)v6, v22);
      }
    }
    else
    {
      *(_DWORD *)v21 = v12;
      v12 = *(_QWORD *)(PoolTrackTable + 80LL * v19 + 72);
      if ( v12 )
        *(_QWORD *)(v21 + 72) = v12;
    }
  }
  ExpPoolTrackerReturnLimit((v17 & 0x100) == 0, v10, v21);
  return RtlpHpFreeHeap(a1, (ULONG_PTR)v6, v22);
}
