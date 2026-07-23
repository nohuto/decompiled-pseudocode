/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1402F8BBC
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402F89EC (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x1402E129C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1402E2180 (RtlpHpSegFreeRangeInsert.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     RtlpHpSegHeapAddSegment @ 0x1402F78EC (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402F8E24 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeSplit @ 0x1402F8F30 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1402F8FE0 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402F971C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rbx
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // edi
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v16; // rax
  unsigned int v17; // r14d
  unsigned int v18; // edx
  _BYTE *v19; // rax

  v5 = (unsigned int)(a2 - 1 + (1 << *(_BYTE *)(a1 + 9))) >> *(_BYTE *)(a1 + 9);
  RtlpHpSegLockAcquire(a1);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = v5 << 24;
  if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v6 )
    v6 ^= a1 + 96;
  v8 = 0LL;
  while ( v6 )
  {
    if ( v7 < *(_DWORD *)(v6 + 28) )
    {
      v9 = *(_QWORD *)v6;
      v8 = v6;
    }
    else
    {
      if ( v7 <= *(_DWORD *)(v6 + 28) )
      {
        v10 = a3 & 0x800000;
        goto LABEL_11;
      }
      v9 = *(_QWORD *)(v6 + 8);
    }
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v9 )
      v6 ^= v9;
    else
      v6 = v9;
  }
  v6 = v8;
  v10 = a3 & 0x800000;
  if ( !v8 )
    goto LABEL_16;
LABEL_11:
  if ( v10 )
  {
    v6 = RtlpHpSegLargeRangeAllocate(a1, v6, v5, 1LL);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v6);
    *(_OWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    v11 = ~(unsigned __int16)*(_DWORD *)(v6 + 28);
    *(_DWORD *)v6 = -857879331;
    v12 = -(__int64)v11;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), v12);
  }
  if ( v6 )
    goto LABEL_21;
LABEL_16:
  RtlpHpReleaseLockExclusive(a1 + 64);
  v13 = RtlpHpSegSegmentAllocate(a1, 0LL, v10 != 0 ? 2 : 0);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  RtlpHpSegSegmentInitialize(a1, v13, 0LL);
  v6 = v14 + 32LL * *(unsigned __int8 *)(a1 + 10);
  RtlpHpSegLockAcquire(a1);
  RtlpHpSegHeapAddSegment(a1, v14);
  if ( v10 )
    v6 = RtlpHpSegLargeRangeAllocate(a1, v6, v5, 0LL);
LABEL_21:
  v16 = RtlpHpSegPageRangeSplit(v12, v6, v5);
  if ( v16 )
    RtlpHpSegFreeRangeInsert((_RTL_RB_TREE *)a1, v16, 0);
  *(_BYTE *)(v6 + 24) |= HIBYTE(a3) & 0xC | 1;
  v17 = v5 - 1;
  *(_BYTE *)(32LL * v17 + v6 + 24) |= 1u;
  RtlpHpReleaseLockExclusive(a1 + 64);
  *(_BYTE *)(v6 + 26) = 0;
  v18 = 1;
  if ( v17 > 1 )
  {
    v19 = (_BYTE *)(v6 + 56);
    do
    {
      v19[2] = v18++;
      *v19 |= 1u;
      v19 += 32;
    }
    while ( v18 < v17 );
  }
  return v6;
}
