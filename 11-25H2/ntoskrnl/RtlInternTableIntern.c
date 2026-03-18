/*
 * XREFs of RtlInternTableIntern @ 0x14083BB88
 * Callers:
 *     PopEtAppIdIntern @ 0x14083BA48 (PopEtAppIdIntern.c)
 *     PopEtStringIntern @ 0x1409611FC (PopEtStringIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpInternHashBucketsAllocate @ 0x140778584 (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x1407785AC (RtlpInternHashBucketsFree.c)
 *     RtlpInternEntryCreate @ 0x14083B1F8 (RtlpInternEntryCreate.c)
 *     RtlpInternEntryFind @ 0x14083BF60 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x14083C0A8 (RtlpInternEntryHash.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v9; // rbx
  _QWORD *v10; // r15
  _BYTE *v11; // r14
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  char *v16; // r8
  char v17; // cl
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // r10
  __int64 v21; // r12
  _QWORD *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF

  v28 = 0LL;
  v2 = (_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = 0;
  v5 = RtlpInternEntryHash(a2, &v28);
  guard_dispatch_icall_no_overrides(a1);
  v6 = v28;
  v7 = RtlpInternEntryFind(a1, a2, v5, v28);
  if ( v7 )
    goto LABEL_2;
  v9 = *(_QWORD *)(a1 + 24);
  guard_dispatch_icall_no_overrides(a1);
  v10 = RtlpInternEntryCreate(a1, a2, v5, v6);
  if ( !v10 )
  {
    v7 = 0LL;
    goto LABEL_3;
  }
  guard_dispatch_icall_no_overrides(a1);
  if ( v9 != *(_QWORD *)(a1 + 24) )
  {
    v7 = RtlpInternEntryFind(a1, a2, v5, v6);
    if ( v7 )
    {
      guard_dispatch_icall_no_overrides(a1);
LABEL_2:
      guard_dispatch_icall_no_overrides(a1);
      goto LABEL_3;
    }
  }
  v11 = (_BYTE *)(a1 + 4);
  v12 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v12 )
  {
    if ( (unsigned int)v12 < 4 )
      v12 = 4LL;
    v16 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v12, a1);
    if ( v16 )
    {
      if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
      {
        v17 = -1;
        do
        {
          ++v17;
          LODWORD(v12) = (unsigned int)v12 >> 1;
        }
        while ( (_DWORD)v12 );
        v12 = (unsigned int)(1 << v17);
      }
      if ( (unsigned int)v12 > 0x4000000 )
        v12 = 0x4000000LL;
      v18 = (unsigned int)v12;
      if ( v16 > &v16[8 * v12] )
        v18 = 0LL;
      if ( v18 )
        memset64(v16, a1 | 1, v18);
      v19 = 0;
      v20 = -1LL << (*v11 & 0x1F);
      if ( (*(_DWORD *)v11 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v21 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v22 = *(_QWORD **)(v21 + 8LL * v19);
            if ( ((unsigned __int8)v22 & 1) != 0 )
              break;
            *(_QWORD *)(v21 + 8LL * v19) = *v22;
            v28 = v20 & v22[1];
            v23 = (37
                 * (BYTE6(v28)
                  + 37
                  * (BYTE5(v28)
                   + 37
                   * (BYTE4(v28)
                    + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                 + HIBYTE(v28)) & (unsigned int)(v12 - 1);
            *v22 = *(_QWORD *)&v16[8 * v23];
            *(_QWORD *)&v16[8 * v23] = v22;
          }
          ++v19;
        }
        while ( v19 < *(_DWORD *)v11 >> 5 );
      }
      v24 = *(_QWORD *)(a1 + 8);
      v25 = (32 * v12) | *(_DWORD *)(a1 + 4) & 0x1F;
      *(_QWORD *)(a1 + 8) = v16;
      *(_DWORD *)(a1 + 4) = v25;
      if ( v24 )
        RtlpInternHashBucketsFree(v24, a1);
      v11 = (_BYTE *)(a1 + 4);
    }
    else if ( *(_DWORD *)v11 < 0x20u )
    {
      v7 = 0LL;
      goto LABEL_11;
    }
  }
  v13 = *(_DWORD *)v11 >> 5;
  v28 = v10[1] & (-1LL << (*(_DWORD *)v11 & 0x1F));
  v14 = *(_QWORD *)(a1 + 8);
  v15 = (37
       * (BYTE6(v28)
        + 37
        * (BYTE5(v28)
         + 37
         * (BYTE4(v28)
          + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
       + HIBYTE(v28)) & (unsigned int)(v13 - 1);
  *v10 = *(_QWORD *)(v14 + 8 * v15);
  *(_QWORD *)(v14 + 8 * v15) = v10;
  ++*(_DWORD *)a1;
  ++*(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 24) |= 2u;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
    guard_dispatch_icall_no_overrides(a1);
  v7 = (__int64)v10;
  v10 = 0LL;
LABEL_11:
  guard_dispatch_icall_no_overrides(a1);
  v2 = (_DWORD *)(a2 + 24);
  if ( v10 )
    goto LABEL_2;
LABEL_3:
  if ( (*v2 & 3) == 1 )
  {
    v26 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v27 = 0LL;
      do
      {
        v27 += 32LL;
        ++v26;
        *(_QWORD *)(v27 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v26 < *(_QWORD *)(a2 + 16) );
      v2 = (_DWORD *)(a2 + 24);
    }
    *v2 &= ~1u;
  }
  return v7;
}
