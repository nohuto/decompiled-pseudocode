/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1402C17F4
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402C162C (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpSegLockAcquire @ 0x1402BC9B4 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1402BD890 (RtlpHpSegFreeRangeInsert.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402C1530 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402C1ABC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x1402C1BC0 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1402C2C60 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegHeapAddSegment @ 0x140485E90 (RtlpHpSegHeapAddSegment.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // r14d
  unsigned int v6; // ebp
  char v7; // al
  __int64 v8; // rbx
  char v9; // r12
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  int v13; // esi
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  unsigned int v21; // ebp
  unsigned int v22; // edx
  _BYTE *v23; // rax
  int v24; // ecx
  char v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int16 v28; // ax

  v4 = (unsigned int)(a2 - 1);
  v5 = a3;
  v6 = (unsigned int)(v4 + (1 << *(_BYTE *)(a1 + 9))) >> *(_BYTE *)(a1 + 9);
  v7 = RtlpHpSegLockAcquire(a1, v4, a3);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = v7;
  v10 = v6 << 24;
  if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v8 )
    v8 ^= a1 + 96;
  v11 = 0LL;
  while ( v8 )
  {
    if ( v10 < *(_DWORD *)(v8 + 28) )
    {
      v12 = *(_QWORD *)v8;
      v11 = v8;
    }
    else
    {
      if ( v10 <= *(_DWORD *)(v8 + 28) )
      {
        v13 = v5 & 0x800000;
        goto LABEL_11;
      }
      v12 = *(_QWORD *)(v8 + 8);
    }
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v12 )
      v8 ^= v12;
    else
      v8 = v12;
  }
  v8 = v11;
  v13 = v5 & 0x800000;
  if ( !v11 )
    goto LABEL_16;
LABEL_11:
  if ( v13 )
  {
    v8 = RtlpHpSegLargeRangeAllocate(a1, v8, v6, 1LL);
  }
  else
  {
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 96), (unsigned __int64 *)v8);
    *(_OWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    v14 = ~(unsigned __int16)*(_DWORD *)(v8 + 28);
    *(_DWORD *)v8 = -857879331;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v14);
  }
  if ( v8 )
    goto LABEL_21;
LABEL_16:
  RtlpHpReleaseLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1, v9);
  v15 = RtlpHpSegSegmentAllocate(a1, 0LL, v13 != 0 ? 2 : 0);
  v16 = v15;
  if ( !v15 )
    return 0LL;
  RtlpHpSegSegmentInitialize((_BYTE *)a1, v15, 0);
  v8 = v16 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v9 = RtlpHpSegLockAcquire(a1, v18, v19);
  RtlpHpSegHeapAddSegment(a1, v16);
  if ( v13 )
    v8 = RtlpHpSegLargeRangeAllocate(a1, v8, v6, 0LL);
LABEL_21:
  v20 = *(unsigned __int8 *)(v8 + 31);
  if ( v20 == v6 )
  {
    v21 = v6 - 1;
  }
  else
  {
    v24 = v20 - v6;
    v25 = v24;
    v26 = 32LL * (unsigned int)(v24 - 1);
    v27 = v8 + 32LL * v6;
    *(_BYTE *)(v27 + 24) |= 2u;
    *(_BYTE *)(v26 + v27 + 26) = v25 - 1;
    *(_BYTE *)(v27 + 31) = v25;
    v28 = RtlpHpSegPageRangeCountCommittedPages(v26, v27);
    *(_DWORD *)v27 = -857879331;
    *(_WORD *)(v27 + 28) = ~v28;
    *(_BYTE *)(32LL * (v6 - 1) + v8 + 26) = v6 - 1;
    *(_BYTE *)(v8 + 31) = v6;
    *(_WORD *)(v8 + 28) = ~(*(_WORD *)(v27 + 28) - *(_WORD *)(v8 + 28));
    v21 = v6 - 1;
    if ( v27 )
      RtlpHpSegFreeRangeInsert((__int64 *)a1, v27, 0);
  }
  *(_BYTE *)(v8 + 24) |= HIBYTE(v5) & 0xC | 1;
  *(_BYTE *)(32LL * v21 + v8 + 24) |= 1u;
  RtlpHpReleaseLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1, v9);
  *(_BYTE *)(v8 + 26) = 0;
  v22 = 1;
  if ( v21 > 1 )
  {
    v23 = (_BYTE *)(v8 + 56);
    do
    {
      v23[2] = v22++;
      *v23 |= 1u;
      v23 += 32;
    }
    while ( v22 < v21 );
  }
  return v8;
}
