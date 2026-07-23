/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x18000D260
 * Callers:
 *     RtlpHpSegAlloc @ 0x18000D080 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x18000D500 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18000D8A0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18000F5C0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegSegmentInitialize @ 0x1800B9AA4 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x1800B9B78 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800BA444 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1800D54A0 (RtlpHpSegLargeRangeAllocate.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // esi
  int v13; // ecx
  int v14; // ecx
  char v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  __int16 v18; // ax
  unsigned int v19; // esi
  char *v20; // rcx
  char v21; // dl
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // r14

  v4 = 1;
  v6 = (unsigned int)(a2 - 1 + (1 << *(_BYTE *)(a1 + 9))) >> *(_BYTE *)(a1 + 9);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = v6 << 24;
  if ( (v7 & 1) != 0 && v8 )
    v8 ^= a1 + 96;
  v10 = v7 & 1;
  v11 = 0LL;
  while ( v8 )
  {
    if ( v9 > *(_DWORD *)(v8 + 28) )
    {
      v23 = *(_QWORD *)(v8 + 8);
      if ( !v10 || !v23 )
        goto LABEL_18;
      v8 ^= v23;
    }
    else
    {
      if ( v9 >= *(_DWORD *)(v8 + 28) )
      {
        v12 = a3 & 0x800000;
        goto LABEL_7;
      }
      v23 = *(_QWORD *)v8;
      v11 = v8;
      if ( v10 && v23 )
        v8 ^= v23;
      else
LABEL_18:
        v8 = v23;
    }
  }
  v8 = v11;
  v12 = a3 & 0x800000;
  if ( !v11 )
    goto LABEL_20;
LABEL_7:
  if ( v12 )
    v8 = RtlpHpSegLargeRangeAllocate(a1, v8, v6, 1LL);
  else
    RtlpHpSegFreeRangeRemove(a1, v8, v11);
  if ( v8 )
    goto LABEL_10;
LABEL_20:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  result = RtlpHpSegSegmentAllocate(a1, 0LL, v12 != 0 ? 2 : 0);
  v24 = result;
  if ( !result )
    return result;
  RtlpHpSegSegmentInitialize(a1, result, 0LL);
  v8 = v24 + 32LL * *(unsigned __int8 *)(a1 + 10);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  RtlpHpSegHeapAddSegment(a1, v24);
  if ( v12 )
    v8 = RtlpHpSegLargeRangeAllocate(a1, v8, v6, 0LL);
LABEL_10:
  v13 = *(unsigned __int8 *)(v8 + 31);
  if ( v13 == v6 )
  {
    v19 = v6 - 1;
  }
  else
  {
    v14 = v13 - v6;
    v15 = v14;
    v16 = 32LL * (unsigned int)(v14 - 1);
    v17 = v8 + 32LL * v6;
    *(_BYTE *)(v17 + 24) |= 2u;
    *(_BYTE *)(v16 + v17 + 26) = v15 - 1;
    *(_BYTE *)(v17 + 31) = v15;
    v18 = RtlpHpSegPageRangeCountCommittedPages(v16, v17);
    *(_DWORD *)v17 = -857879331;
    *(_WORD *)(v17 + 28) = ~v18;
    *(_BYTE *)(32LL * (v6 - 1) + v8 + 26) = v6 - 1;
    *(_BYTE *)(v8 + 31) = v6;
    *(_WORD *)(v8 + 28) = ~(*(_WORD *)(v17 + 28) - *(_WORD *)(v8 + 28));
    v19 = v6 - 1;
    if ( v17 )
      RtlpHpSegFreeRangeInsert(a1, v8 + 32LL * v6, 0LL);
  }
  *(_BYTE *)(v8 + 24) |= HIBYTE(a3) & 0xC | 1;
  *(_BYTE *)(32LL * v19 + v8 + 24) |= 1u;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  *(_BYTE *)(v8 + 26) = 0;
  if ( v19 > 1 )
  {
    v20 = (char *)(v8 + 56);
    do
    {
      v20[2] = v4++;
      v21 = *v20;
      v20 += 32;
      *(v20 - 32) = v21 | 1;
    }
    while ( v4 < v19 );
  }
  return v8;
}
