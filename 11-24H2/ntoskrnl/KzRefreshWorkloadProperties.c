/*
 * XREFs of KzRefreshWorkloadProperties @ 0x1403A0E1C
 * Callers:
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 * Callees:
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 */

__int64 KzRefreshWorkloadProperties(__int64 a1, unsigned __int8 a2, __int64 a3, ...)
{
  int v4; // esi
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int v8; // r10d
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r10d
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-10h] BYREF
  __int64 v28; // [rsp+28h] [rbp-8h] BYREF
  __int64 *v29; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v30; // [rsp+58h] [rbp+28h] BYREF
  __int64 v31; // [rsp+68h] [rbp+38h] BYREF
  va_list va; // [rsp+68h] [rbp+38h]
  __int64 v33; // [rsp+70h] [rbp+40h] BYREF
  va_list va1; // [rsp+70h] [rbp+40h]
  va_list va2; // [rsp+78h] [rbp+48h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  v4 = a2;
  result = KiComputeThreadQos(a1);
  if ( (_DWORD)result != *(unsigned __int8 *)(a1 + 516) )
    *(_BYTE *)(a1 + 516) = result;
  if ( v4 == 2 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
    {
      v17 = (*(_DWORD *)(a1 + 120) >> 1) & 1;
      v28 = a3;
      v33 = 0LL;
      LODWORD(v31) = 0;
      result = KiPrcbArrayForIsolationWidth(&v28, v17, (__int64 *)va1, (__int64 *)va);
      if ( (unsigned int)v31 > v18 )
      {
        v19 = v33;
        v20 = (unsigned int)v31;
        do
        {
          v21 = *(unsigned int *)(a1 + 84);
          v22 = *(unsigned int *)(a1 + 80);
          v23 = *(_QWORD *)(*(_QWORD *)v19 + 56LL);
          v24 = (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v23 + 64)) & 7 ^ *(_BYTE *)(v23 + 64);
          v25 = (v24 ^ (8 * *(_BYTE *)(a1 + 517))) & 0x38 ^ v24;
          v26 = *(_QWORD *)v19;
          if ( (unsigned int)v22 <= (unsigned int)v21 )
            v22 = (unsigned int)v21;
          LOBYTE(v21) = (unsigned int)v22 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0;
          *(_BYTE *)(v23 + 64) = v21 | v25 & 0xBF;
          result = KiUpdateThreadQosGroupingSummaries(v26, v21, v22, v23);
          v19 += 8LL;
          --v20;
        }
        while ( v20 );
      }
    }
  }
  else if ( v4 == 3 )
  {
    v7 = (*(_DWORD *)(a1 + 120) >> 1) & 1;
    v27 = a3;
    v29 = 0LL;
    v30 = 0;
    result = KiPrcbArrayForIsolationWidth(&v27, v7, &v29, &v30);
    if ( v30 > v8 )
    {
      v9 = v29;
      v10 = v30;
      do
      {
        v11 = *(unsigned int *)(a1 + 84);
        v12 = *(unsigned int *)(a1 + 80);
        v13 = *(_QWORD *)(*v9 + 56);
        v14 = (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v13 + 64)) & 7 ^ *(_BYTE *)(v13 + 64);
        v15 = (v14 ^ (8 * *(_BYTE *)(a1 + 517))) & 0x38 ^ v14;
        v16 = *v9;
        if ( (unsigned int)v12 <= (unsigned int)v11 )
          v12 = (unsigned int)v11;
        LOBYTE(v11) = (unsigned int)v12 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0;
        *(_BYTE *)(v13 + 64) = v11 | v15 & 0xBF;
        result = KiUpdateThreadQosGroupingSummaries(v16, v11, v12, v13);
        ++v9;
        --v10;
      }
      while ( v10 );
    }
  }
  return result;
}
