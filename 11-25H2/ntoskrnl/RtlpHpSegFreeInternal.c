/*
 * XREFs of RtlpHpSegFreeInternal @ 0x1403CBADC
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     RtlpHpSegLfhVsFree @ 0x1403CBA30 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpHpVsContextFree @ 0x1402E0830 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402E0DA0 (RtlpHpSegPageRangeShrink.c)
 */

__int64 __fastcall RtlpHpSegFreeInternal(__int64 a1, ULONG_PTR a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  _WORD *v9; // rdx
  unsigned int v10; // r10d
  __int64 v11; // r9
  unsigned int v12; // r11d
  signed __int64 v13; // rcx
  signed __int64 v14; // rdx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF
  signed __int64 v17; // [rsp+50h] [rbp+18h]
  signed __int64 v18; // [rsp+58h] [rbp+20h]

  v4 = *(_QWORD *)a1;
  v16 = 0;
  v9 = (_WORD *)((a3 & v4) + ((a3 - (a3 & v4)) >> 5 << *(_BYTE *)(a1 + 8)));
  if ( (*(_BYTE *)(a3 + 24) & 3) != 3 )
    goto LABEL_17;
  if ( (_WORD *)a2 == v9 )
  {
LABEL_13:
    RtlpHpSegPageRangeShrink(a1, a3, a2);
    v10 = 1;
    goto LABEL_14;
  }
  if ( *(_BYTE *)(a3 + 24) != 15 )
  {
LABEL_17:
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0LL, 0LL, 0LL);
    v10 = 0;
    goto LABEL_14;
  }
  if ( a2 <= (unsigned __int64)v9 )
    goto LABEL_13;
  v10 = RtlpHpVsContextFree(*(_QWORD *)(a1 + 32), v9, a2, &v16);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( v16 < *(unsigned __int16 *)(v11 + 68) )
    {
      v12 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(v16 + 15) >> 4)) - 1;
      do
      {
        v13 = *(_QWORD *)(v11 + 8LL * v12 + 448);
        v18 = v13;
        v14 = v13;
        v17 = v13;
        if ( (v13 & 1) == 0 )
          break;
        if ( WORD1(v18) > 1u )
        {
          WORD1(v17) = WORD1(v18) - 1;
          v14 = v17;
        }
      }
      while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v12 + 448), v14, v13) != v13 );
    }
  }
LABEL_14:
  if ( a4 )
    *a4 = 3;
  return v10;
}
