/*
 * XREFs of KzRefreshWorkloadProperties @ 0x140201D1C
 * Callers:
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 * Callees:
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403F0F60 (KiPrcbArrayForIsolationWidth.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

_BYTE *__fastcall KzRefreshWorkloadProperties(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // esi
  _BYTE *result; // rax
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 *v11; // rdi
  __int64 v12; // rsi
  unsigned int v13; // r8d
  __int64 v14; // r9
  char v15; // al
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 *v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // r8d
  __int64 v23; // r9
  char v24; // al
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v28; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  result = (_BYTE *)KiComputeThreadQos(a1);
  if ( (_DWORD)result != *(unsigned __int8 *)(a1 + 516) )
    *(_BYTE *)(a1 + 516) = (_BYTE)result;
  if ( v6 == 2 )
  {
    if ( *(_QWORD *)(a3 + 16) )
      return result;
    v9 = *(_DWORD *)(a1 + 120) >> 1;
    v27 = a3;
    if ( (v9 & 1) != 0 )
    {
      result = *(_BYTE **)(a3 + 36440);
      v10 = (unsigned __int8)*result;
      v11 = (__int64 *)(result + 8);
      if ( !*result )
        return result;
    }
    else
    {
      v11 = &v27;
      v10 = 1;
    }
    v12 = v10;
    do
    {
      v13 = *(_DWORD *)(a1 + 80);
      v14 = *(_QWORD *)(*v11 + 56);
      v15 = (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v14 + 64)) & 7 ^ *(_BYTE *)(v14 + 64);
      v16 = (v15 ^ (8 * *(_BYTE *)(a1 + 517))) & 0x38 ^ v15;
      v17 = *v11;
      if ( v13 <= *(_DWORD *)(a1 + 84) )
        v13 = *(_DWORD *)(a1 + 84);
      *(_BYTE *)(v14 + 64) = (v13 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v16 & 0xBF;
      KiUpdateThreadQosGroupingSummaries(v17);
      result = (_BYTE *)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v18);
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  else if ( v6 == 3 )
  {
    v19 = *(_DWORD *)(a1 + 120);
    v28 = 0LL;
    v29 = 0;
    a5 = a3;
    result = (_BYTE *)KiPrcbArrayForIsolationWidth(&a5, (v19 >> 1) & 1, &v28, &v29);
    if ( v29 )
    {
      v20 = v28;
      v21 = v29;
      do
      {
        v22 = *(_DWORD *)(a1 + 80);
        v23 = *(_QWORD *)(*v20 + 56);
        v24 = (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v23 + 64)) & 7 ^ *(_BYTE *)(v23 + 64);
        v25 = (v24 ^ (8 * *(_BYTE *)(a1 + 517))) & 0x38 ^ v24;
        v26 = *v20;
        if ( v22 <= *(_DWORD *)(a1 + 84) )
          v22 = *(_DWORD *)(a1 + 84);
        *(_BYTE *)(v23 + 64) = (v22 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v25 & 0xBF;
        KiUpdateThreadQosGroupingSummaries(v26);
        result = (_BYTE *)((__int64 (*)(void))Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline)();
        ++v20;
        --v21;
      }
      while ( v21 );
    }
  }
  return result;
}
