/*
 * XREFs of RtlpHpSegFreeInternal @ 0x14035BF90
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x14035CC90 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsContextFree @ 0x14035BAE0 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 */

__int64 __fastcall RtlpHpSegFreeInternal(__int64 *a1, ULONG_PTR a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  _WORD *v9; // rdx
  unsigned int v10; // r10d
  __int64 v11; // r9
  unsigned int v13; // r11d
  signed __int64 v14; // rcx
  signed __int64 v15; // rdx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF
  signed __int64 v17; // [rsp+50h] [rbp+18h]
  signed __int64 v18; // [rsp+58h] [rbp+20h]

  v4 = *a1;
  v16 = 0;
  v9 = (_WORD *)((a3 & v4) + ((a3 - (a3 & v4)) >> 5 << *((_BYTE *)a1 + 8)));
  if ( (*(_BYTE *)(a3 + 24) & 3) != 3 )
    goto LABEL_11;
  if ( (_WORD *)a2 == v9 )
  {
LABEL_10:
    RtlpHpSegPageRangeShrink(a1, a3);
    v10 = 1;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a3 + 24) != 15 )
  {
LABEL_11:
    RtlpLogHeapFailure(9, a1[7], a2, 0LL, 0LL, 0LL);
    v10 = 0;
    goto LABEL_7;
  }
  if ( a2 <= (unsigned __int64)v9 )
    goto LABEL_10;
  v10 = RtlpHpVsContextFree(a1[4], v9, a2, &v16);
  if ( v10 )
  {
    v11 = a1[3];
    if ( v16 < *(unsigned __int16 *)(v11 + 68) )
    {
      v13 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(v16 + 15) >> 4)) - 1;
      do
      {
        v14 = *(_QWORD *)(v11 + 8LL * v13 + 448);
        v18 = v14;
        v15 = v14;
        v17 = v14;
        if ( (v14 & 1) == 0 )
          break;
        if ( WORD1(v18) > 1u )
        {
          WORD1(v17) = WORD1(v18) - 1;
          v15 = v17;
        }
      }
      while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v13 + 448), v15, v14) != v14 );
    }
  }
LABEL_7:
  if ( a4 )
    *a4 = 3;
  return v10;
}
