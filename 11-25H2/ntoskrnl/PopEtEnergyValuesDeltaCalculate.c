/*
 * XREFs of PopEtEnergyValuesDeltaCalculate @ 0x140961C08
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140961A30 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     RtlStateDurationDelta @ 0x14044A3AC (RtlStateDurationDelta.c)
 *     Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x1404F1730 (Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline.c)
 */

int *__fastcall PopEtEnergyValuesDeltaCalculate(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // r14
  _QWORD *v7; // rdx
  __int64 v8; // r15
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r12
  int *v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r15
  int *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int *result; // rax
  __int64 v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+68h] [rbp+10h]

  v4 = a2;
  v5 = 1;
  v6 = a1 - a2;
  v7 = (_QWORD *)(a2 + 64);
  v8 = a3 - v4;
  v28 = v6;
  v29 = a3 - v4;
  v11 = 4LL;
  do
  {
    *(_QWORD *)((char *)v7 + v8) = *v7 - *(_QWORD *)((char *)v7 + v6);
    ++v7;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)(a3 + 96) = *(_QWORD *)(v4 + 96) - *(_QWORD *)(a1 + 96);
  if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline() )
    v12 = *(_QWORD *)(v4 + 432) - *(_QWORD *)(a1 + 432);
  else
    v12 = 0LL;
  *(_QWORD *)(a3 + 432) = v12;
  v13 = v4 - a1;
  v14 = (int *)(a1 + 104);
  v15 = 3LL;
  v16 = a3 - a1;
  do
  {
    RtlStateDurationDelta((__int64)v14 + v16, v14, (unsigned int *)((char *)v14 + v13));
    v14 = (int *)(v17 + 8);
    --v15;
  }
  while ( v15 );
  v18 = 5LL;
  v19 = (int *)(a1 + 384);
  do
  {
    RtlStateDurationDelta((__int64)v19 + v16, v19, (unsigned int *)((char *)v19 + v13));
    v19 = (int *)(v20 + 8);
    --v18;
  }
  while ( v18 );
  *(_DWORD *)(a3 + 128) = *(_DWORD *)(v4 + 128) - *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a3 + 132) = *(_DWORD *)(v4 + 132) - *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a3 + 136) = *(_DWORD *)(v4 + 136) - *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a3 + 424) = *(_DWORD *)(v4 + 424) - *(_DWORD *)(a1 + 424);
  *(_DWORD *)(a3 + 428) = *(_DWORD *)(v4 + 428) - *(_DWORD *)(a1 + 428);
  v21 = 0LL;
  *(_OWORD *)(a3 + 272) = *(_OWORD *)(v4 + 272);
  v22 = 4LL;
  *(_OWORD *)(a3 + 288) = *(_OWORD *)(v4 + 288);
  *(_OWORD *)(a3 + 304) = *(_OWORD *)(v4 + 304);
  *(_OWORD *)(a3 + 320) = *(_OWORD *)(v4 + 320);
  *(_OWORD *)(a3 + 336) = *(_OWORD *)(v4 + 336);
  *(_OWORD *)(a3 + 352) = *(_OWORD *)(v4 + 352);
  *(_OWORD *)(a3 + 368) = *(_OWORD *)(v4 + 368);
  do
  {
    v23 = 2LL;
    do
    {
      v24 = *(_QWORD *)v4 - *(_QWORD *)(v28 + v4);
      v25 = v24 + v21;
      *(_QWORD *)(v29 + v4) = v24;
      v26 = *(_QWORD *)(v4 + 144) - *(_QWORD *)(v28 + v4 + 144);
      *(_QWORD *)(v29 + v4 + 144) = v26;
      v21 = v26 + v25;
      *(_QWORD *)(v29 + v4 + 208) = *(_QWORD *)(v4 + 208) - *(_QWORD *)(v28 + v4 + 208);
      v4 += 8LL;
      --v23;
    }
    while ( v23 );
    --v22;
  }
  while ( v22 );
  if ( v21
    || *(_QWORD *)(a3 + 64)
    || *(_QWORD *)(a3 + 72)
    || *(_QWORD *)(a3 + 80)
    || (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline() && *(_QWORD *)(a3 + 432)
    || (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 124) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 388) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 396) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 404) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 412) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 420) & 0x7FFFFFFF) != 0
    || *(_DWORD *)(a3 + 128)
    || *(_DWORD *)(a3 + 132)
    || *(_DWORD *)(a3 + 136) )
  {
    v5 = 0;
  }
  result = a4;
  *a4 = v5;
  return result;
}
