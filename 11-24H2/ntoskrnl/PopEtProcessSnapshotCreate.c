/*
 * XREFs of PopEtProcessSnapshotCreate @ 0x140906398
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x140905308 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopEtBucketsFree @ 0x14075D8A4 (PopEtBucketsFree.c)
 *     PopEtAllocate @ 0x1409044A0 (PopEtAllocate.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x140904FAC (PopEtAggregateKeyCopyFromProcess.c)
 *     PopEtAggregateKeyCleanup @ 0x1409051DC (PopEtAggregateKeyCleanup.c)
 *     RtlInternEntryDereference @ 0x140905B7C (RtlInternEntryDereference.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotCreate(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  struct _KPROCESS *v4; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // edi
  int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  char *v17; // r8
  char v18; // cl
  unsigned __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // edi
  __int64 v22; // r10
  __int64 v23; // r15
  _QWORD *v24; // r9
  __int64 v25; // rdx
  void *v26; // rcx
  __int64 v27; // [rsp+50h] [rbp+8h]
  __int64 v28; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(struct _KPROCESS **)(a1 + 8);
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x1F8uLL);
    v6[1] = v4;
    PopEtAggregateKeyCopyFromProcess((__int64)(v6 + 2), v4, v2 + 32);
    v9 = v6[3];
    if ( v9 )
      RtlInternEntryDereference(PopEtGlobals + 56, v9, v7, v8);
    v6[3] = 0LL;
    v10 = (unsigned int)(2 * (*(_DWORD *)(v2 + 68) >> 5));
    if ( *(_DWORD *)(v2 + 64) < (unsigned int)v10 )
      goto LABEL_5;
    if ( (unsigned int)v10 < 4 )
      v10 = 4LL;
    v17 = (char *)PopEtAllocate();
    if ( v17 )
    {
      if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
      {
        v18 = -1;
        do
        {
          ++v18;
          LODWORD(v10) = (unsigned int)v10 >> 1;
        }
        while ( (_DWORD)v10 );
        v10 = (unsigned int)(1 << v18);
      }
      if ( (unsigned int)v10 > 0x4000000 )
        v10 = 0x4000000LL;
      v19 = (unsigned int)v10;
      if ( v17 > &v17[8 * v10] )
        v19 = 0LL;
      if ( v19 )
        memset64(v17, (v2 + 64) | 1, v19);
      v20 = *(_DWORD *)(v2 + 68);
      v21 = 0;
      v22 = -1LL << (*(_BYTE *)(v2 + 68) & 0x1F);
      if ( (v20 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v23 = *(_QWORD *)(v2 + 72);
          while ( 1 )
          {
            v24 = *(_QWORD **)(v23 + 8LL * v21);
            if ( ((unsigned __int8)v24 & 1) != 0 )
              break;
            *(_QWORD *)(v23 + 8LL * v21) = *v24;
            v28 = v22 & v24[1];
            v25 = (37
                 * (BYTE6(v28)
                  + 37
                  * (BYTE5(v28)
                   + 37
                   * (BYTE4(v28)
                    + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                 + HIBYTE(v28)) & (unsigned int)(v10 - 1);
            *v24 = *(_QWORD *)&v17[8 * v25];
            *(_QWORD *)&v17[8 * v25] = v24;
          }
          v20 = *(_DWORD *)(v2 + 68);
          ++v21;
        }
        while ( v21 < v20 >> 5 );
      }
      v26 = *(void **)(v2 + 72);
      *(_QWORD *)(v2 + 72) = v17;
      *(_DWORD *)(v2 + 68) = (32 * v10) | v20 & 0x1F;
      if ( v26 )
        PopEtBucketsFree(v26);
      goto LABEL_5;
    }
    if ( *(_DWORD *)(v2 + 68) >= 0x20u )
    {
LABEL_5:
      v11 = *(_DWORD *)(v2 + 68);
      v27 = v6[1] & (-1LL << (v11 & 0x1F));
      *a2 = v6;
      v12 = (v11 >> 5) - 1;
      v13 = 0;
      v14 = *(_QWORD *)(v2 + 72);
      v15 = (37
           * (BYTE6(v27)
            + 37
            * (BYTE5(v27)
             + 37
             * (BYTE4(v27)
              + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
           + HIBYTE(v27)) & (unsigned int)v12;
      *v6 = *(_QWORD *)(v14 + 8 * v15);
      *(_QWORD *)(v14 + 8 * v15) = v6;
      ++*(_DWORD *)(v2 + 64);
      return v13;
    }
  }
  ++*(_DWORD *)(v2 + 620);
  v13 = -1073741670;
  if ( v6 )
  {
    PopEtAggregateKeyCleanup(v6 + 2);
    ExFreePoolWithTag(v6, 0x54456F50u);
  }
  return v13;
}
