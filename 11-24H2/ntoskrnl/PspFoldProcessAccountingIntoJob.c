/*
 * XREFs of PspFoldProcessAccountingIntoJob @ 0x1409E5458
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140440E80 (PoEnergyEstimationEnabled.c)
 *     PsAddProcessEnergyValues @ 0x1404E5EF8 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 *     PspUpdateJobPeakProcessMemory @ 0x1409E55F8 (PspUpdateJobPeakProcessMemory.c)
 */

char __fastcall PspFoldProcessAccountingIntoJob(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __m128i v10; // xmm0
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  char result; // al
  _OWORD v14[28]; // [rsp+20h] [rbp-1D8h] BYREF

  memset_0(v14, 0, 0x1B8uLL);
  v6 = a3[1];
  v7 = *a3;
  *(_QWORD *)(a1 + 1256) += a3[2];
  *(_QWORD *)(a1 + 176) += a3[3];
  *(_QWORD *)(a1 + 160) += v6;
  *(_QWORD *)(a1 + 168) += v7;
  *(_QWORD *)(a1 + 184) += v6;
  v8 = 6LL;
  *(_QWORD *)(a1 + 192) += v7;
  v9 = (_QWORD *)(a1 + 584);
  *(_QWORD *)(a1 + 200) += a3[4];
  do
  {
    *v9 += *(_QWORD *)((char *)v9 + (_QWORD)a3 - a1 - 544);
    ++v9;
    --v8;
  }
  while ( v8 );
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 1816));
  *(_DWORD *)(a1 + 208) += *(_DWORD *)(a2 + 1028);
  *(__m128i *)(a1 + 1816) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a3 + 11)), v10);
  v11 = *(_QWORD **)(a2 + 1592);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 632) += *v11;
    *(_QWORD *)(a1 + 640) += v11[1];
    *(_QWORD *)(a1 + 648) += v11[2];
    *(_QWORD *)(a1 + 656) += v11[3];
    *(_QWORD *)(a1 + 664) += v11[4];
  }
  v12 = *(_QWORD **)(a2 + 2032);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 672) += *v12;
    *(_QWORD *)(a1 + 680) += *(_QWORD *)(*(_QWORD *)(a2 + 2032) + 8LL);
  }
  PspUpdateJobPeakProcessMemory(a1, *(_QWORD *)(a2 + 992));
  result = PoEnergyEstimationEnabled();
  if ( result )
  {
    PsQueryProcessEnergyValues((_QWORD *)a2, v14);
    return PsAddProcessEnergyValues(*(_QWORD **)(a1 + 1560), (__int64)v14);
  }
  return result;
}
