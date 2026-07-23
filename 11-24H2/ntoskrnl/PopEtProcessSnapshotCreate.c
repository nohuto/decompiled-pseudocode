/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x14099D018
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x14099BF8C (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopEtBucketsFree @ 0x14075C844 (PopEtBucketsFree.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x14099BC30 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAggregateKeyCleanup @ 0x14099BE60 (PopEtAggregateKeyCleanup.c)
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 *     PopEtAllocate @ 0x14099D3A0 (PopEtAllocate.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, __int64 **a2)
{
  __int64 v2; // r14
  struct _KPROCESS *v4; // rdi
  __int64 *Pool2; // rax
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // edi
  int v10; // edx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  char *v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // edi
  __int64 v20; // r10
  __int64 v21; // r15
  _QWORD *v22; // r9
  __int64 v23; // rdx
  void *v24; // rcx
  __int64 v25; // [rsp+50h] [rbp+8h]
  __int64 v26; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(struct _KPROCESS **)(a1 + 8);
  Pool2 = (__int64 *)ExAllocatePool2(0x100uLL, 0x1F8uLL, 0x54456F50u);
  v6 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x1F8uLL);
    v6[1] = (__int64)v4;
    PopEtAggregateKeyCopyFromProcess((__int64)(v6 + 2), v4, v2 + 32);
    v7 = v6[3];
    if ( v7 )
      RtlInternEntryDereference(PopEtGlobals + 56, v7);
    v6[3] = 0LL;
    v8 = (unsigned int)(2 * (*(_DWORD *)(v2 + 68) >> 5));
    if ( *(_DWORD *)(v2 + 64) < (unsigned int)v8 )
      goto LABEL_5;
    if ( (unsigned int)v8 < 4 )
      v8 = 4LL;
    v15 = (char *)PopEtAllocate(8LL * (unsigned int)v8, 0LL);
    if ( v15 )
    {
      if ( (((_DWORD)v8 - 1) & (unsigned int)v8) != 0 )
      {
        v16 = -1;
        do
        {
          ++v16;
          LODWORD(v8) = (unsigned int)v8 >> 1;
        }
        while ( (_DWORD)v8 );
        v8 = (unsigned int)(1 << v16);
      }
      if ( (unsigned int)v8 > 0x4000000 )
        v8 = 0x4000000LL;
      v17 = (unsigned int)v8;
      if ( v15 > &v15[8 * v8] )
        v17 = 0LL;
      if ( v17 )
        memset64(v15, (v2 + 64) | 1, v17);
      v18 = *(_DWORD *)(v2 + 68);
      v19 = 0;
      v20 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (v18 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v21 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v22 = *(_QWORD **)(v21 + 8LL * v19);
            if ( ((unsigned __int8)v22 & 1) != 0 )
              break;
            *(_QWORD *)(v21 + 8LL * v19) = *v22;
            v26 = v20 & v22[1];
            v23 = (37
                 * (BYTE6(v26)
                  + 37
                  * (BYTE5(v26)
                   + 37
                   * (BYTE4(v26)
                    + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                 + HIBYTE(v26)) & (unsigned int)(v8 - 1);
            *v22 = *(_QWORD *)&v15[8 * v23];
            *(_QWORD *)&v15[8 * v23] = v22;
          }
          v18 = *(_DWORD *)(v2 + 68);
          ++v19;
        }
        while ( v19 < v18 >> 5 );
      }
      v24 = *(void **)(v2 + 72);
      *(_QWORD *)(v2 + 72) = v15;
      *(_DWORD *)(v2 + 68) = (32 * v8) | v18 & 0x1F;
      if ( v24 )
        PopEtBucketsFree(v24);
      goto LABEL_5;
    }
    if ( *(_DWORD *)(v2 + 68) >= 0x20u )
    {
LABEL_5:
      v9 = *(_DWORD *)(v2 + 68);
      v25 = v6[1] & (-1LL << (v9 & 0x1F));
      *a2 = v6;
      v10 = (v9 >> 5) - 1;
      v11 = 0;
      v12 = *(_QWORD *)(v2 + 72);
      v13 = (37
           * (BYTE6(v25)
            + 37
            * (BYTE5(v25)
             + 37
             * (BYTE4(v25)
              + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
           + HIBYTE(v25)) & (unsigned int)v10;
      *v6 = *(_QWORD *)(v12 + 8 * v13);
      *(_QWORD *)(v12 + 8 * v13) = v6;
      ++*(_DWORD *)(v2 + 64);
      return v11;
    }
  }
  ++*(_DWORD *)(v2 + 620);
  v11 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v11;
}
