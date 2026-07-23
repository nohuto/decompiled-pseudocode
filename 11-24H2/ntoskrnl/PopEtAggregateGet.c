/*
 * XREFs of PopEtAggregateGet @ 0x14099CA3C
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x14099C280 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopEtBucketsFree @ 0x14075C844 (PopEtBucketsFree.c)
 *     PopEtAggregateKeyCleanup @ 0x14099BE60 (PopEtAggregateKeyCleanup.c)
 *     PopEtAggregateKeyCopy @ 0x14099BED8 (PopEtAggregateKeyCopy.c)
 *     PopEtAggregateFind @ 0x14099CD44 (PopEtAggregateFind.c)
 *     PopEtAllocate @ 0x14099D3A0 (PopEtAllocate.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtAggregateGet(__int64 a1, _OWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  __int64 *Pool2; // rax
  __int64 *v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned __int8 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  char *v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // edi
  __int64 v20; // r10
  __int64 v21; // r13
  _QWORD *v22; // r9
  __int64 v23; // rdx
  void *v24; // rcx
  __int64 *v25; // r8
  unsigned int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // [rsp+68h] [rbp+20h] BYREF

  v29 = 0LL;
  result = PopEtAggregateFind(a1, a2, &v29);
  if ( result )
  {
    *a3 = result;
    return result;
  }
  v7 = a1 + 48;
  if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 32) )
  {
    ++*(_DWORD *)(a1 + 624);
  }
  else
  {
    Pool2 = (__int64 *)ExAllocatePool2(0x100uLL, 0x208uLL, 0x54456F50u);
    v9 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 0x208uLL);
      PopEtAggregateKeyCopy(v9 + 2, a2);
      v9[1] = v29;
      v10 = (unsigned int)(2 * (*(_DWORD *)(a1 + 52) >> 5));
      if ( *(_DWORD *)v7 < (unsigned int)v10 )
        goto LABEL_5;
      if ( (unsigned int)v10 < 4 )
        v10 = 4LL;
      v15 = (char *)PopEtAllocate(8LL * (unsigned int)v10, 0LL);
      if ( v15 )
      {
        if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
        {
          v16 = -1;
          do
          {
            ++v16;
            LODWORD(v10) = (unsigned int)v10 >> 1;
          }
          while ( (_DWORD)v10 );
          v10 = (unsigned int)(1 << v16);
        }
        if ( (unsigned int)v10 > 0x4000000 )
          v10 = 0x4000000LL;
        v17 = (unsigned int)v10;
        if ( v15 > &v15[8 * v10] )
          v17 = 0LL;
        if ( v17 )
          memset64(v15, v7 | 1, v17);
        v18 = *(_DWORD *)(a1 + 52);
        v19 = 0;
        v20 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
        if ( (v18 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v21 = *(_QWORD *)(a1 + 56);
            while ( 1 )
            {
              v22 = *(_QWORD **)(v21 + 8LL * v19);
              if ( ((unsigned __int8)v22 & 1) != 0 )
                break;
              *(_QWORD *)(v21 + 8LL * v19) = *v22;
              v29 = v20 & v22[1];
              v23 = (37
                   * (BYTE6(v29)
                    + 37
                    * (BYTE5(v29)
                     + 37
                     * (BYTE4(v29)
                      + 37
                      * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
                   + HIBYTE(v29)) & (unsigned int)(v10 - 1);
              *v22 = *(_QWORD *)&v15[8 * v23];
              *(_QWORD *)&v15[8 * v23] = v22;
            }
            v18 = *(_DWORD *)(a1 + 52);
            ++v19;
          }
          while ( v19 < v18 >> 5 );
        }
        v24 = *(void **)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v15;
        *(_DWORD *)(a1 + 52) = (32 * v10) | v18 & 0x1F;
        if ( v24 )
          PopEtBucketsFree(v24);
        goto LABEL_5;
      }
      if ( *(_DWORD *)(a1 + 52) >= 0x20u )
      {
LABEL_5:
        v11 = *(_DWORD *)(a1 + 52);
        v29 = v9[1] & (-1LL << (v11 & 0x1F));
        v12 = v29;
        *a3 = (__int64)v9;
        v13 = *(_QWORD *)(a1 + 56);
        v14 = (37
             * (BYTE6(v29)
              + 37
              * (BYTE5(v29)
               + 37 * (BYTE4(v29) + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * (v12 + 11623883)))))))
             + HIBYTE(v29)) & ((v11 >> 5) - 1);
        result = *(_QWORD *)(v13 + 8 * v14);
        *v9 = result;
        *(_QWORD *)(v13 + 8 * v14) = v9;
LABEL_6:
        ++*(_DWORD *)(a1 + 48);
        return result;
      }
      PopEtAggregateKeyCleanup(v9 + 2);
      ExFreePoolWithTag(v9, 0x54456F50u);
    }
  }
  ++*(_DWORD *)(a1 + 612);
  v25 = (__int64 *)(a1 + 80);
  result = *(unsigned int *)(a1 + 644);
  *a3 = a1 + 80;
  if ( (result & 4) == 0 )
  {
    *(_DWORD *)(a1 + 644) = result | 4;
    v26 = *(_DWORD *)(a1 + 52);
    v29 = *(_QWORD *)(a1 + 88) & (-1LL << (v26 & 0x1F));
    v27 = *(_QWORD *)(a1 + 56);
    v28 = (37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
         + HIBYTE(v29)) & ((v26 >> 5) - 1);
    result = *(_QWORD *)(v27 + 8 * v28);
    *v25 = result;
    *(_QWORD *)(v27 + 8 * v28) = v25;
    goto LABEL_6;
  }
  return result;
}
