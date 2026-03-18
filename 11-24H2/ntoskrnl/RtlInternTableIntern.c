/*
 * XREFs of RtlInternTableIntern @ 0x140907824
 * Callers:
 *     PopEtStringIntern @ 0x1409066A0 (PopEtStringIntern.c)
 *     PopEtAppIdIntern @ 0x1409076E4 (PopEtAppIdIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpInternHashBucketsAllocate @ 0x1407877D4 (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x1407877FC (RtlpInternHashBucketsFree.c)
 *     RtlpInternEntryCreate @ 0x140906B28 (RtlpInternEntryCreate.c)
 *     RtlpInternEntryFind @ 0x140907C04 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x140907D4C (RtlpInternEntryHash.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // r15
  char *v19; // r8
  __int64 v20; // r9
  _BYTE *v21; // r14
  __int64 v22; // rbx
  int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // cl
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // r10
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // [rsp+50h] [rbp+8h] BYREF

  v38 = 0LL;
  v2 = (_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = 0;
  v5 = RtlpInternEntryHash(a2, &v38);
  LOBYTE(v6) = 1;
  guard_dispatch_icall_no_overrides(a1, v6, v7, v8);
  v9 = v38;
  v10 = RtlpInternEntryFind(a1, a2, v5, v38);
  LOBYTE(v13) = 1;
  if ( !v10 )
  {
    v15 = *(_QWORD *)(a1 + 24);
    guard_dispatch_icall_no_overrides(a1, v13, v11, v12);
    v18 = RtlpInternEntryCreate(a1, a2, v5, v9);
    if ( !v18 )
    {
      v10 = 0LL;
      goto LABEL_3;
    }
    guard_dispatch_icall_no_overrides(a1, 0LL, v16, v17);
    if ( v15 != *(_QWORD *)(a1 + 24) )
    {
      v10 = RtlpInternEntryFind(a1, a2, v5, v9);
      if ( v10 )
      {
        guard_dispatch_icall_no_overrides(a1, 0LL, v19, v20);
        goto LABEL_12;
      }
    }
    v21 = (_BYTE *)(a1 + 4);
    v22 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
    if ( *(_DWORD *)a1 >= (unsigned int)v22 )
    {
      if ( (unsigned int)v22 < 4 )
        v22 = 4LL;
      v19 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v22, a1, (__int64)v19, v20);
      if ( v19 )
      {
        if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
        {
          v28 = -1;
          do
          {
            ++v28;
            LODWORD(v22) = (unsigned int)v22 >> 1;
          }
          while ( (_DWORD)v22 );
          v22 = (unsigned int)(1 << v28);
        }
        if ( (unsigned int)v22 > 0x4000000 )
          v22 = 0x4000000LL;
        v29 = (unsigned int)v22;
        if ( v19 > &v19[8 * v22] )
          v29 = 0LL;
        if ( v29 )
          memset64(v19, a1 | 1, v29);
        v30 = 0;
        v31 = -1LL << (*v21 & 0x1F);
        if ( (*(_DWORD *)v21 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v32 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v20 = *(_QWORD *)(v32 + 8LL * v30);
              if ( (v20 & 1) != 0 )
                break;
              *(_QWORD *)(v32 + 8LL * v30) = *(_QWORD *)v20;
              v38 = v31 & *(_QWORD *)(v20 + 8);
              v33 = (37
                   * (BYTE6(v38)
                    + 37
                    * (BYTE5(v38)
                     + 37
                     * (BYTE4(v38)
                      + 37
                      * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
                   + HIBYTE(v38)) & (unsigned int)(v22 - 1);
              *(_QWORD *)v20 = *(_QWORD *)&v19[8 * v33];
              *(_QWORD *)&v19[8 * v33] = v20;
            }
            ++v30;
          }
          while ( v30 < *(_DWORD *)v21 >> 5 );
        }
        v34 = *(_QWORD *)(a1 + 8);
        v35 = (32 * v22) | *(_DWORD *)(a1 + 4) & 0x1F;
        *(_QWORD *)(a1 + 8) = v19;
        *(_DWORD *)(a1 + 4) = v35;
        if ( v34 )
          RtlpInternHashBucketsFree(v34, a1, (__int64)v19, v20);
        v21 = (_BYTE *)(a1 + 4);
      }
      else if ( *(_DWORD *)v21 < 0x20u )
      {
        v10 = 0LL;
        goto LABEL_11;
      }
    }
    v23 = *(_DWORD *)v21 >> 5;
    v38 = v18[1] & (-1LL << (*(_DWORD *)v21 & 0x1F));
    v24 = *(_QWORD *)(a1 + 8);
    v25 = (37
         * (BYTE6(v38)
          + 37
          * (BYTE5(v38)
           + 37
           * (BYTE4(v38)
            + 37 * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
         + HIBYTE(v38)) & (unsigned int)(v23 - 1);
    *v18 = *(_QWORD *)(v24 + 8 * v25);
    *(_QWORD *)(v24 + 8 * v25) = v18;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
      guard_dispatch_icall_no_overrides(a1, v18, a2, v20);
    v10 = (__int64)v18;
    v18 = 0LL;
LABEL_11:
    guard_dispatch_icall_no_overrides(a1, 0LL, v19, v20);
    v2 = (_DWORD *)(a2 + 24);
    if ( !v18 )
      goto LABEL_3;
LABEL_12:
    guard_dispatch_icall_no_overrides(a1, v18, v26, v27);
    goto LABEL_3;
  }
  guard_dispatch_icall_no_overrides(a1, v13, v11, v12);
LABEL_3:
  if ( (*v2 & 1) != 0 && (*v2 & 2) == 0 )
  {
    v36 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v37 = 0LL;
      do
      {
        v37 += 32LL;
        ++v36;
        *(_QWORD *)(v37 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v36 < *(_QWORD *)(a2 + 16) );
      v2 = (_DWORD *)(a2 + 24);
    }
    *v2 &= ~1u;
  }
  return v10;
}
