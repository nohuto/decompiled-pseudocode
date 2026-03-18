/*
 * XREFs of KiTallyHeteroSoftParkElectionVotes @ 0x140312BF0
 * Callers:
 *     KiPerformHeteroSoftParkElection @ 0x140312A14 (KiPerformHeteroSoftParkElection.c)
 * Callees:
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x14031219C (KiHeteroReduceToMaximallyPreferredByClass.c)
 *     KiReduceAffinityToRankListMaximums @ 0x1403124B0 (KiReduceAffinityToRankListMaximums.c)
 *     KiGenerateHeteroSets @ 0x140313310 (KiGenerateHeteroSets.c)
 *     KiReduceAffinityToRankListMinimums @ 0x1403133E0 (KiReduceAffinityToRankListMinimums.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiTallyHeteroSoftParkElectionVotes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        void *a6,
        _QWORD *a7)
{
  __int64 v7; // r12
  unsigned int i; // r8d
  __int64 result; // rax
  int v11; // esi
  __int64 v12; // r15
  int v13; // edi
  __int64 v14; // r14
  unsigned __int8 v15; // bl
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rbp
  _QWORD *v19; // rdx
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  __int128 v24; // [rsp+48h] [rbp-50h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h]

  v7 = a2;
  v24 = 0LL;
  v25 = 0LL;
  memset_0(a6, 0, 0x200uLL);
  result = (__int64)a7;
  v11 = 0;
  *a7 = 0LL;
  v12 = 0LL;
  v23 = 0LL;
  do
  {
    v13 = 0;
    v14 = 0LL;
    v22 = 0LL;
    do
    {
      v15 = 0;
      if ( !*(_BYTE *)(a1 + 185) )
        goto LABEL_8;
      v16 = v12 + v14;
      v17 = 8 * v16;
      do
      {
        result = v17 + v15;
        v18 = *(_QWORD *)(v7 + 8 * result);
        if ( !v18 )
          goto LABEL_6;
        v20 = KiDynamicHeteroCpuPolicy[v16];
        LOBYTE(i) = v15;
        KiGenerateHeteroSets(a1, a4, i, v11, v13, (__int64)&v24);
        v21 = a3 & v25;
        if ( (a3 & v25) != 0 )
        {
          if ( KeSoftParkSmtPolicy && KeSoftParkSmtPolicy == 3 )
            result = KiReduceAffinityToRankListMaximums(v21, a5);
          else
            result = KiReduceAffinityToRankListMinimums(v21, a5);
        }
        else
        {
          result = 0LL;
        }
        if ( (result & (unsigned __int64)v24) != 0 )
        {
          result &= v24;
        }
        else
        {
          if ( (result & *((_QWORD *)&v24 + 1)) != 0 )
            result = KiHeteroReduceToMaximallyPreferredByClass(a1, result & *((_QWORD *)&v24 + 1), v20, v15);
          if ( !result )
            goto LABEL_19;
        }
        v19 = a6;
        for ( i = 0; i < 0x40; ++i )
        {
          if ( _bittest64(&result, i) )
            *v19 += v18;
          ++v19;
        }
        *a7 += v18;
LABEL_19:
        v7 = a2;
        v17 = 8 * v16;
LABEL_6:
        ++v15;
      }
      while ( v15 < *(_BYTE *)(a1 + 185) );
      v14 = v22;
      v12 = v23;
LABEL_8:
      ++v14;
      ++v13;
      v22 = v14;
    }
    while ( v13 < 2 );
    v12 += 2LL;
    ++v11;
    v23 = v12;
  }
  while ( v11 < 7 );
  return result;
}
