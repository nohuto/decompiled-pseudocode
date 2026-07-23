/*
 * XREFs of PsAddProcessEnergyValues @ 0x1404E5EF8
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x14085CE84 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x14085EBE0 (PspQueryProcessAccountingInformationCallback.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x14099C280 (PopEtEnergyTrackerUpdateAggregate.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409E5458 (PspFoldProcessAccountingIntoJob.c)
 * Callees:
 *     RtlTimelineBitmapMerge @ 0x140406BF0 (RtlTimelineBitmapMerge.c)
 */

__int64 __fastcall PsAddProcessEnergyValues(_QWORD *a1, __int64 a2)
{
  __int64 v5; // r9
  __int64 v6; // rax
  _DWORD *v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // r8d
  int *v16; // rdx
  int v17; // ecx
  int v18; // eax
  int *v19; // rdx
  int v20; // r8d
  int v21; // eax
  int *v22; // rdx
  int v23; // r8d
  int v24; // eax
  int *v25; // rdx
  int v26; // r8d
  int v27; // eax
  int *v28; // rdx
  int v29; // r8d
  __int64 v30; // rdi
  unsigned int *v31; // rbx
  __int64 v32; // rsi
  _QWORD *v33; // r10
  __int64 v34; // r11
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r11
  __int64 v38; // r8
  __int64 result; // rax

  a1[8] += *(_QWORD *)(a2 + 64);
  a1[9] += *(_QWORD *)(a2 + 72);
  v5 = 3LL;
  a1[10] += *(_QWORD *)(a2 + 80);
  a1[11] += *(_QWORD *)(a2 + 88);
  a1[12] += *(_QWORD *)(a2 + 96);
  v6 = *(_QWORD *)(a2 + 432);
  v7 = (_DWORD *)a1 + 27;
  a1[54] += v6;
  v8 = a2 - (_QWORD)a1;
  do
  {
    *v7 ^= (*v7 ^ (*v7 + *(_DWORD *)((char *)v7 + v8))) & 0x7FFFFFFF;
    v9 = *(v7 - 1);
    v10 = *(_DWORD *)((char *)v7 + v8 - 4);
    v7 += 2;
    if ( v9 <= v10 )
      v9 = v10;
    *(v7 - 3) = v9;
    --v5;
  }
  while ( v5 );
  v11 = (_DWORD *)a1 + 97;
  v12 = 5LL;
  do
  {
    *v11 ^= (*v11 ^ (*v11 + *(_DWORD *)((char *)v11 + v8))) & 0x7FFFFFFF;
    v13 = *(v11 - 1);
    v14 = *(_DWORD *)((char *)v11 + v8 - 4);
    v11 += 2;
    if ( v13 <= v14 )
      v13 = v14;
    *(v11 - 3) = v13;
    --v12;
  }
  while ( v12 );
  v15 = *(_DWORD *)(a2 + 128);
  v16 = (int *)(a1 + 16);
  v17 = -1;
  if ( v15 == -1 || (v18 = *v16 + v15, ~v15 < (unsigned int)*v16) )
    v18 = -1;
  *v16 = v18;
  v19 = (int *)a1 + 33;
  v20 = *(_DWORD *)(a2 + 132);
  if ( v20 == -1 || (v21 = *v19 + v20, ~v20 < (unsigned int)*v19) )
    v21 = -1;
  *v19 = v21;
  v22 = (int *)(a1 + 17);
  v23 = *(_DWORD *)(a2 + 136);
  if ( v23 == -1 || (v24 = *v22 + v23, ~v23 < (unsigned int)*v22) )
    v24 = -1;
  *v22 = v24;
  v25 = (int *)(a1 + 53);
  v26 = *(_DWORD *)(a2 + 424);
  if ( v26 == -1 || (v27 = *v25 + v26, ~v26 < (unsigned int)*v25) )
    v27 = -1;
  *v25 = v27;
  v28 = (int *)a1 + 107;
  v29 = *(_DWORD *)(a2 + 428);
  if ( v29 != -1 && ~v29 >= (unsigned int)*v28 )
    v17 = *v28 + v29;
  *v28 = v17;
  v30 = a2 - (_QWORD)a1;
  v31 = (unsigned int *)(a1 + 34);
  v32 = 14LL;
  do
  {
    RtlTimelineBitmapMerge(v31, (unsigned int *)((char *)v31 + v30));
    v31 += 2;
    --v32;
  }
  while ( v32 );
  v35 = 4LL;
  v36 = v34 - (_QWORD)v33;
  v37 = v34 - (_QWORD)v33;
  do
  {
    v38 = 2LL;
    do
    {
      *v33 += *(_QWORD *)((char *)v33 + v37);
      v33[18] += *(_QWORD *)((char *)v33 + v36 + 144);
      result = *(_QWORD *)((char *)v33 + v37 + 208);
      v33[26] += result;
      ++v33;
      --v38;
    }
    while ( v38 );
    --v35;
  }
  while ( v35 );
  return result;
}
