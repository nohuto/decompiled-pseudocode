/*
 * XREFs of KiHeteroSelectIdleProcessorFromSubNode @ 0x1404E0130
 * Callers:
 *     KiHeteroSelectIdleProcessorFromNode @ 0x1402A34F0 (KiHeteroSelectIdleProcessorFromNode.c)
 * Callees:
 *     KiGenerateHeteroSets @ 0x14032A750 (KiGenerateHeteroSets.c)
 *     KiHeteroIdleSetReduction @ 0x14032AA50 (KiHeteroIdleSetReduction.c)
 *     KiFindBiasedProcessorIndex @ 0x14032AD94 (KiFindBiasedProcessorIndex.c)
 */

__int64 __fastcall KiHeteroSelectIdleProcessorFromSubNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        __int64 a5,
        int a6)
{
  __int64 v7; // rax
  __int64 v10; // rbx
  int HeteroSets; // eax
  int v12; // edx
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  bool v17; // zf
  char v19; // cl
  unsigned __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-28h]

  v22 = 0LL;
  v7 = *(unsigned __int16 *)(a2 + 136);
  v21 = 0LL;
  if ( (unsigned __int16)v7 >= *a4 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a4[4 * v7 + 4];
  if ( (v10 & *(_QWORD *)(a2 + 128)) == 0 )
    return 0LL;
  HeteroSets = KiGenerateHeteroSets(
                 a2,
                 v10,
                 *(_BYTE *)(a5 + 16),
                 *(_DWORD *)(a5 + 4),
                 *(_DWORD *)(a5 + 8),
                 (__int64)&v21);
  v12 = *(_DWORD *)(a5 + 20);
  if ( a6 > v12 )
    v12 = a6;
  v13 = v22;
  v14 = *(_QWORD *)(a2 + 8LL * v12 + 16) & *(_QWORD *)(a2 + 8);
  if ( (v22 & v14) == 0 && !HeteroSets )
  {
    v13 = v22;
    if ( (*(_QWORD *)(a2 + 80) & v22) == 0 )
    {
      v13 = v10;
      v22 = v10;
      *((_QWORD *)&v21 + 1) = v10;
      *(_QWORD *)&v21 = v10;
    }
  }
  v15 = v13 & v14;
  if ( !v15 )
    return 0LL;
  if ( *(_QWORD *)(a3 + 192) != a2 )
    a3 = KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                          *(unsigned __int16 *)(a2 + 136),
                                          *(unsigned __int8 *)(a3 + 209),
                                          v13)];
  v16 = KiHeteroIdleSetReduction(a2, (_QWORD *)a3, v15, a5, &v21);
  if ( (KiHeteroSchedulerOptionsMask & 4) != 0 )
    v17 = (KiHeteroSchedulerOptions & 4) == 0;
  else
    v17 = (KiDynamicHeteroCpuPolicyMask & 0x10) == 0;
  if ( !v17 )
    return KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                            *(unsigned __int8 *)(a3 + 208),
                                            (*(_QWORD *)(a1 + 72) >> KiFavoredCoreCycleTimeBits)
                                          + *(unsigned __int8 *)(a3 + 209),
                                            v16)];
  v19 = *(_BYTE *)(a3 + 209);
  _BitScanForward64(&v20, __ROR8__(v16, v19));
  return KiProcessorBlock[*((unsigned int *)qword_140F22998
                          + 64 * *(unsigned __int8 *)(a3 + 208)
                          + (((unsigned __int8)v20 + v19) & 0x3F))];
}
