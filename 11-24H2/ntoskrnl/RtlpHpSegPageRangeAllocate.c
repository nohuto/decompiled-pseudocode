/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x14035DE94
 * Callers:
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegLargeRangeAllocate @ 0x14035D204 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x14035D894 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x14035E15C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x14035E260 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpSegLockAcquire @ 0x1403640F4 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140364FD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     RtlpHpSegHeapAddSegment @ 0x140481480 (RtlpHpSegHeapAddSegment.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // rbx
  unsigned int v7; // edx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  int v10; // esi
  unsigned __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // r15
  int v15; // ecx
  unsigned int v16; // ebp
  unsigned int v17; // edx
  _BYTE *v18; // rax
  int v19; // ecx
  char v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int16 v23; // ax

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
    v6 = RtlpHpSegLargeRangeAllocate(a1, v6, v5, 1);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v6);
    *(_OWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    v11 = ~(unsigned __int16)*(_DWORD *)(v6 + 28);
    *(_DWORD *)v6 = -857879331;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v11);
  }
  if ( v6 )
    goto LABEL_21;
LABEL_16:
  RtlpHpReleaseLockExclusive(a1 + 64);
  v12 = RtlpHpSegSegmentAllocate(a1, 0LL, v10 != 0 ? 2 : 0);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  RtlpHpSegSegmentInitialize((_BYTE *)a1, v12, 0);
  v6 = v13 + 32LL * *(unsigned __int8 *)(a1 + 10);
  RtlpHpSegLockAcquire(a1);
  RtlpHpSegHeapAddSegment(a1, v13);
  if ( v10 )
    v6 = RtlpHpSegLargeRangeAllocate(a1, v6, v5, 0);
LABEL_21:
  v15 = *(unsigned __int8 *)(v6 + 31);
  if ( v15 == v5 )
  {
    v16 = v5 - 1;
  }
  else
  {
    v19 = v15 - v5;
    v20 = v19;
    v21 = 32LL * (unsigned int)(v19 - 1);
    v22 = v6 + 32LL * v5;
    *(_BYTE *)(v22 + 24) |= 2u;
    *(_BYTE *)(v21 + v22 + 26) = v20 - 1;
    *(_BYTE *)(v22 + 31) = v20;
    v23 = RtlpHpSegPageRangeCountCommittedPages(v21, v22);
    *(_DWORD *)v22 = -857879331;
    *(_WORD *)(v22 + 28) = ~v23;
    *(_BYTE *)(32LL * (v5 - 1) + v6 + 26) = v5 - 1;
    *(_BYTE *)(v6 + 31) = v5;
    *(_WORD *)(v6 + 28) = ~(*(_WORD *)(v22 + 28) - *(_WORD *)(v6 + 28));
    v16 = v5 - 1;
    if ( v22 )
      RtlpHpSegFreeRangeInsert(a1, v22, 0LL);
  }
  *(_BYTE *)(v6 + 24) |= HIBYTE(a3) & 0xC | 1;
  *(_BYTE *)(32LL * v16 + v6 + 24) |= 1u;
  RtlpHpReleaseLockExclusive(a1 + 64);
  *(_BYTE *)(v6 + 26) = 0;
  v17 = 1;
  if ( v16 > 1 )
  {
    v18 = (_BYTE *)(v6 + 56);
    do
    {
      v18[2] = v17++;
      *v18 |= 1u;
      v18 += 32;
    }
    while ( v17 < v16 );
  }
  return v6;
}
