/*
 * XREFs of PopEtEnergyTrackerUpdateAggregate @ 0x14099C280
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x14099BF8C (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     PsAddProcessEnergyValues @ 0x1404E5EF8 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopEtEnergyValuesDeltaCalculate @ 0x14099C458 (PopEtEnergyValuesDeltaCalculate.c)
 *     PopEtAggregateGet @ 0x14099CA3C (PopEtAggregateGet.c)
 */

__int64 __fastcall PopEtEnergyTrackerUpdateAggregate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  int v17; // [rsp+20h] [rbp-208h] BYREF
  __int64 v18; // [rsp+28h] [rbp-200h] BYREF
  _BYTE v19[448]; // [rsp+30h] [rbp-1F8h] BYREF

  v18 = 0LL;
  memset_0(v19, 0, 0x1B8uLL);
  v17 = 0;
  result = PopEtEnergyValuesDeltaCalculate(a2 + 48, a3, v19, &v17);
  if ( !v17 )
  {
    PopEtAggregateGet(a1, a2 + 16, &v18);
    v9 = (_DWORD *)v18;
    PsAddProcessEnergyValues((_QWORD *)(v18 + 48), (__int64)v19);
    v10 = *(_DWORD *)(a2 + 492);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a2 + 492) = v10 | 0x80000000;
      ++v9[125];
    }
    ++v9[122];
    v11 = *(_DWORD *)(a2 + 492);
    *(_DWORD *)(a2 + 492) = v11 ^ (v11 ^ (v11 + 1)) & 0x7FFFFFFF;
    if ( ((v11 + 1) & 0x7FFFFFFF) == 1 )
      ++v9[126];
    switch ( a4 )
    {
      case 2:
        ++v9[123];
        break;
      case 3:
        ++v9[124];
        break;
      case 4:
        ++v9[127];
        break;
    }
    if ( (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) != 0 )
      v9[129] |= 1u;
    if ( (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) != 0 )
      v9[129] |= 2u;
    v12 = *(_DWORD *)(a1 + 604);
    v13 = v18;
    v14 = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
    result = (unsigned int)(v14 - *(_DWORD *)(a2 + 496));
    v15 = v14 - v12;
    if ( (unsigned int)result <= (int)v14 - v12 )
      v12 = *(_DWORD *)(a2 + 496);
    v16 = v14 + *(_DWORD *)(v18 + 512) - v12;
    *(_DWORD *)(v18 + 512) = v16;
    if ( v16 > v15 )
      *(_DWORD *)(v13 + 512) = v15;
    *(_DWORD *)(a2 + 496) = v14;
  }
  return result;
}
