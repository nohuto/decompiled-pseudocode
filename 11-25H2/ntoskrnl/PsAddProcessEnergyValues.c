/*
 * XREFs of PsAddProcessEnergyValues @ 0x140410CE8
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408DC284 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1408DE040 (PspQueryProcessAccountingInformationCallback.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140961A30 (PopEtEnergyTrackerUpdateAggregate.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409F043C (PspFoldProcessAccountingIntoJob.c)
 * Callees:
 *     RtlTimelineBitmapMerge @ 0x140411080 (RtlTimelineBitmapMerge.c)
 *     Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x1404F1730 (Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PsAddProcessEnergyValues(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  _DWORD *v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // eax
  _DWORD *v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // r8d
  int *v17; // rdx
  int v18; // ecx
  int v19; // eax
  int *v20; // rdx
  int v21; // r8d
  int v22; // eax
  int *v23; // rdx
  int v24; // r8d
  int v25; // eax
  int *v26; // rdx
  int v27; // r8d
  int v28; // eax
  int *v29; // rdx
  int v30; // r8d
  __int64 v31; // r11
  _QWORD *v32; // r10
  __int64 v33; // rsi
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 result; // rax

  v2 = a1;
  v3 = a1 + 8;
  v4 = 4LL;
  v6 = a2 - (_QWORD)v2;
  v7 = 4LL;
  do
  {
    *v3 += *(_QWORD *)((char *)v3 + v6);
    ++v3;
    --v7;
  }
  while ( v7 );
  v2[12] += *(_QWORD *)(a2 + 96);
  if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline(v3) )
    v2[54] += *(_QWORD *)(a2 + 432);
  v8 = (_DWORD *)v2 + 27;
  v9 = 3LL;
  do
  {
    *v8 ^= (*v8 ^ (*v8 + *(_DWORD *)((char *)v8 + v6))) & 0x7FFFFFFF;
    v10 = *(v8 - 1);
    v11 = *(_DWORD *)((char *)v8 + v6 - 4);
    v8 += 2;
    if ( v10 <= v11 )
      v10 = v11;
    *(v8 - 3) = v10;
    --v9;
  }
  while ( v9 );
  v12 = (_DWORD *)v2 + 97;
  v13 = 5LL;
  do
  {
    *v12 ^= (*v12 ^ (*v12 + *(_DWORD *)((char *)v12 + v6))) & 0x7FFFFFFF;
    v14 = *(v12 - 1);
    v15 = *(_DWORD *)((char *)v12 + v6 - 4);
    v12 += 2;
    if ( v14 <= v15 )
      v14 = v15;
    *(v12 - 3) = v14;
    --v13;
  }
  while ( v13 );
  v16 = *(_DWORD *)(a2 + 128);
  v17 = (int *)(v2 + 16);
  v18 = -1;
  if ( v16 == -1 || (v19 = *v17 + v16, ~v16 < (unsigned int)*v17) )
    v19 = -1;
  *v17 = v19;
  v20 = (int *)v2 + 33;
  v21 = *(_DWORD *)(a2 + 132);
  if ( v21 == -1 || (v22 = *v20 + v21, ~v21 < (unsigned int)*v20) )
    v22 = -1;
  *v20 = v22;
  v23 = (int *)(v2 + 17);
  v24 = *(_DWORD *)(a2 + 136);
  if ( v24 == -1 || (v25 = *v23 + v24, ~v24 < (unsigned int)*v23) )
    v25 = -1;
  *v23 = v25;
  v26 = (int *)(v2 + 53);
  v27 = *(_DWORD *)(a2 + 424);
  if ( v27 == -1 || (v28 = *v26 + v27, ~v27 < (unsigned int)*v26) )
    v28 = -1;
  *v26 = v28;
  v29 = (int *)v2 + 107;
  v30 = *(_DWORD *)(a2 + 428);
  if ( v30 != -1 && ~v30 >= (unsigned int)*v29 )
    v18 = *v29 + v30;
  *v29 = v18;
  v31 = a2 - (_QWORD)v2;
  v32 = v2 + 34;
  v33 = 14LL;
  do
  {
    RtlTimelineBitmapMerge(v32, (char *)v32 + v31);
    v32 = (_QWORD *)(v34 + 8);
    --v33;
  }
  while ( v33 );
  v35 = a2 - (_QWORD)v2;
  v36 = a2 - (_QWORD)v2;
  do
  {
    v37 = 2LL;
    do
    {
      *v2 += *(_QWORD *)((char *)v2 + v36);
      v2[18] += *(_QWORD *)((char *)v2 + v35 + 144);
      result = *(_QWORD *)((char *)v2 + v36 + 208);
      v2[26] += result;
      ++v2;
      --v37;
    }
    while ( v37 );
    --v4;
  }
  while ( v4 );
  return result;
}
