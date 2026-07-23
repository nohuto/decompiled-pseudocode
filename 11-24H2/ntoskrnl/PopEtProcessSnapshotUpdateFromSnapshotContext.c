/*
 * XREFs of PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x14099C6E8
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x14099BF8C (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 *     PopEtStringReference @ 0x14099C99C (PopEtStringReference.c)
 */

__int16 __fastcall PopEtProcessSnapshotUpdateFromSnapshotContext(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdi
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int16 result; // ax

  v3 = a2[1];
  v5 = a2[2];
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v3 + 1640);
  v9 = *(_QWORD *)(v8 + 464);
  if ( v7 )
    RtlInternEntryDereference(PopEtGlobals + 56);
  *(_QWORD *)(a1 + 24) = v9;
  if ( v9 )
    PopEtStringReference(v9, v7, a3);
  v10 = (_OWORD *)a2[3];
  v11 = (_OWORD *)(a1 + 48);
  v12 = 3LL;
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    v13 = v10[7];
    v10 += 8;
    *(v11 - 1) = v13;
    --v12;
  }
  while ( v12 );
  *v11 = *v10;
  v11[1] = v10[1];
  v11[2] = v10[2];
  *((_QWORD *)v11 + 6) = *((_QWORD *)v10 + 6);
  *(_DWORD *)(a1 + 488) = *(_DWORD *)(v8 + 476);
  result = *(_WORD *)(v5 + 36) & *(_WORD *)(v8 + 472);
  *(_WORD *)(a1 + 44) = result;
  return result;
}
