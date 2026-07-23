/*
 * XREFs of RtlInternTableIntern @ 0x1408DEF40
 * Callers:
 *     PopEtAppIdIntern @ 0x1408DEE00 (PopEtAppIdIntern.c)
 *     PopEtStringIntern @ 0x14099D320 (PopEtStringIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpInternHashBucketsAllocate @ 0x140787704 (RtlpInternHashBucketsAllocate.c)
 *     RtlpInternHashBucketsFree @ 0x14078772C (RtlpInternHashBucketsFree.c)
 *     RtlpInternEntryCreate @ 0x1408DD3EC (RtlpInternEntryCreate.c)
 *     RtlpInternEntryFind @ 0x1408DF320 (RtlpInternEntryFind.c)
 *     RtlpInternEntryHash @ 0x1408DF468 (RtlpInternEntryHash.c)
 */

__int64 __fastcall RtlInternTableIntern(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // r15
  _BYTE *v13; // r14
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  char *v18; // r8
  char v19; // cl
  unsigned __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // r10
  __int64 v23; // r12
  _QWORD *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  v30 = 0LL;
  v2 = (_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = 0;
  v5 = RtlpInternEntryHash(a2, &v30);
  LOBYTE(v6) = 1;
  guard_dispatch_icall_no_overrides(a1, v6);
  v7 = v30;
  v8 = RtlpInternEntryFind(a1, a2, v5, v30);
  LOBYTE(v9) = 1;
  if ( !v8 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    guard_dispatch_icall_no_overrides(a1, v9);
    v12 = RtlpInternEntryCreate(a1, a2, v5, v7);
    if ( !v12 )
    {
      v8 = 0LL;
      goto LABEL_3;
    }
    guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v11 != *(_QWORD *)(a1 + 24) )
    {
      v8 = RtlpInternEntryFind(a1, a2, v5, v7);
      if ( v8 )
      {
        guard_dispatch_icall_no_overrides(a1, 0LL);
        goto LABEL_12;
      }
    }
    v13 = (_BYTE *)(a1 + 4);
    v14 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
    if ( *(_DWORD *)a1 >= (unsigned int)v14 )
    {
      if ( (unsigned int)v14 < 4 )
        v14 = 4LL;
      v18 = (char *)RtlpInternHashBucketsAllocate(8LL * (unsigned int)v14, a1);
      if ( v18 )
      {
        if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
        {
          v19 = -1;
          do
          {
            ++v19;
            LODWORD(v14) = (unsigned int)v14 >> 1;
          }
          while ( (_DWORD)v14 );
          v14 = (unsigned int)(1 << v19);
        }
        if ( (unsigned int)v14 > 0x4000000 )
          v14 = 0x4000000LL;
        v20 = (unsigned int)v14;
        if ( v18 > &v18[8 * v14] )
          v20 = 0LL;
        if ( v20 )
          memset64(v18, a1 | 1, v20);
        v21 = 0;
        v22 = -1LL << (*v13 & 0x1F);
        if ( (*(_DWORD *)v13 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v23 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v24 = *(_QWORD **)(v23 + 8LL * v21);
              if ( ((unsigned __int8)v24 & 1) != 0 )
                break;
              *(_QWORD *)(v23 + 8LL * v21) = *v24;
              v30 = v22 & v24[1];
              v25 = (37
                   * (BYTE6(v30)
                    + 37
                    * (BYTE5(v30)
                     + 37
                     * (BYTE4(v30)
                      + 37
                      * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                   + HIBYTE(v30)) & (unsigned int)(v14 - 1);
              *v24 = *(_QWORD *)&v18[8 * v25];
              *(_QWORD *)&v18[8 * v25] = v24;
            }
            ++v21;
          }
          while ( v21 < *(_DWORD *)v13 >> 5 );
        }
        v26 = *(_QWORD *)(a1 + 8);
        v27 = (32 * v14) | *(_DWORD *)(a1 + 4) & 0x1F;
        *(_QWORD *)(a1 + 8) = v18;
        *(_DWORD *)(a1 + 4) = v27;
        if ( v26 )
          RtlpInternHashBucketsFree(v26, a1);
        v13 = (_BYTE *)(a1 + 4);
      }
      else if ( *(_DWORD *)v13 < 0x20u )
      {
        v8 = 0LL;
        goto LABEL_11;
      }
    }
    v15 = *(_DWORD *)v13 >> 5;
    v30 = v12[1] & (-1LL << (*(_DWORD *)v13 & 0x1F));
    v16 = *(_QWORD *)(a1 + 8);
    v17 = (37
         * (BYTE6(v30)
          + 37
          * (BYTE5(v30)
           + 37
           * (BYTE4(v30)
            + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
         + HIBYTE(v30)) & (unsigned int)(v15 - 1);
    *v12 = *(_QWORD *)(v16 + 8 * v17);
    *(_QWORD *)(v16 + 8 * v17) = v12;
    ++*(_DWORD *)a1;
    ++*(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 24) |= 2u;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
      guard_dispatch_icall_no_overrides(a1, v12);
    v8 = (__int64)v12;
    v12 = 0LL;
LABEL_11:
    guard_dispatch_icall_no_overrides(a1, 0LL);
    v2 = (_DWORD *)(a2 + 24);
    if ( !v12 )
      goto LABEL_3;
LABEL_12:
    guard_dispatch_icall_no_overrides(a1, v12);
    goto LABEL_3;
  }
  guard_dispatch_icall_no_overrides(a1, v9);
LABEL_3:
  if ( (*v2 & 1) != 0 && (*v2 & 2) == 0 )
  {
    v28 = 0LL;
    if ( *(_QWORD *)(a2 + 16) )
    {
      v29 = 0LL;
      do
      {
        v29 += 32LL;
        ++v28;
        *(_QWORD *)(v29 + *(_QWORD *)(a2 + 8) - 24) = 0LL;
      }
      while ( v28 < *(_QWORD *)(a2 + 16) );
      v2 = (_DWORD *)(a2 + 24);
    }
    *v2 &= ~1u;
  }
  return v8;
}
