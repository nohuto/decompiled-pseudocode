/*
 * XREFs of RtlpHpSegFreeInternal @ 0x1800653A0
 * Callers:
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlpHpSegLfhVsFree @ 0x180065050 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180065860 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800669B0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsSlotFreeList @ 0x180119648 (RtlpHpVsSlotFreeList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180163E00 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180163E40 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpSegFreeInternal(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rax
  __int64 v8; // r8
  char v9; // cl
  _WORD *v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r15
  char v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // ecx
  unsigned int v17; // r14d
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  signed __int64 v21; // rcx
  signed __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  int v26; // ecx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r10
  __int64 v29; // rcx
  signed __int64 v30; // [rsp+60h] [rbp+8h]

  v5 = a3 & *(_QWORD *)a1;
  v8 = (a3 - v5) >> 5 << *(_BYTE *)(a1 + 8);
  v9 = *(_BYTE *)(a3 + 24);
  v10 = (_WORD *)(v5 + v8);
  if ( (v9 & 3) != 3 )
    goto LABEL_10;
  if ( (_WORD *)a2 == v10 )
  {
LABEL_24:
    RtlpHpSegPageRangeShrink(a1, a3, 0LL);
    LODWORD(v14) = 1;
    goto LABEL_20;
  }
  if ( v9 != 15 )
  {
LABEL_10:
    LODWORD(v14) = 0;
    v10 = (_WORD *)a2;
    v15 = *(_QWORD *)(a1 + 56);
    v16 = 9;
LABEL_11:
    RtlpLogHeapFailure(v16, v15, (__int64)v10, 0LL, 0LL, 0LL);
    goto LABEL_20;
  }
  if ( a2 <= (unsigned __int64)v10 )
    goto LABEL_24;
  v11 = *(_QWORD *)(a1 + 32);
  v12 = a2 - 16;
  v13 = *(_BYTE *)(v11 + 4);
  if ( (v13 & 1) != 0 && (a2 & 0xFFF) == 0 )
    v12 = a2 - 32;
  v14 = 0LL;
  if ( !v10 )
  {
    v24 = v12;
    v25 = (v12 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v12) >> 32;
    if ( (v25 & 0xFF0000) != 0 )
    {
      v26 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v12 + 8) ^ v12);
LABEL_35:
      v10 = (_WORD *)((v24 - (unsigned int)(v26 << 12)) & 0xFFFFFFFFFFFFF000uLL);
      goto LABEL_7;
    }
    if ( (_WORD)v25 )
    {
      v24 = v12 - 16LL * (unsigned __int16)v25;
      v27 = RtlpHpHeapGlobals ^ *(_QWORD *)v24 ^ v24;
      if ( (v27 & 0xFF000000000000LL) != 0 )
      {
LABEL_33:
        v26 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v24 + 8) ^ v24);
        goto LABEL_35;
      }
      v28 = HIDWORD(v27);
      if ( (_WORD)v28 )
      {
        v24 -= 16LL * (unsigned __int16)v28;
        goto LABEL_33;
      }
    }
    v26 = 0;
    goto LABEL_35;
  }
LABEL_7:
  if ( (((unsigned __int16)(v10[16] ^ v10[18]) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v16 = 18;
    v15 = *(_QWORD *)(v11 + 8) ^ v11;
    goto LABEL_11;
  }
  if ( ((v12 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v12) & 0xFF000000000000LL) == 0 )
  {
    RtlpLogHeapFailure(8, *(_QWORD *)(v11 + 8) ^ v11, a2, v12, 0LL, 0LL);
    goto LABEL_20;
  }
  v17 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v12 ^ (unsigned int)*(_QWORD *)v12) >> 16)) - 16;
  v18 = v11 + ((unsigned __int64)(unsigned __int16)v10[17] << 6);
  if ( (v13 & 2) == 0 || v17 >= 0x1000 )
    goto LABEL_13;
  v29 = v18 + 64;
  if ( *(_WORD *)(v18 + 64) >= 0x20u )
  {
    v14 = RtlpInterlockedFlushSList(v29);
LABEL_13:
    *(_QWORD *)(v12 + 16) = v14;
    RtlpHpVsSlotFreeList(v11, v18);
    goto LABEL_14;
  }
  RtlpInterlockedPushEntrySList(v29, v12 + 16);
LABEL_14:
  v19 = *(_QWORD *)(a1 + 24);
  LODWORD(v14) = 1;
  if ( v17 < *(unsigned __int16 *)(v19 + 68) )
  {
    v20 = v19 + 8LL * ((unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)v17 >> 4] - 1);
    do
    {
      v30 = *(_QWORD *)(v20 + 448);
      v21 = v30;
      v22 = v30;
      if ( (v30 & 1) == 0 )
        break;
      if ( WORD1(v30) > 1u )
      {
        --WORD1(v30);
        v22 = v30;
      }
    }
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 448), v22, v21) != v21 );
  }
LABEL_20:
  result = (unsigned int)v14;
  if ( a4 )
    *a4 = 3;
  return result;
}
