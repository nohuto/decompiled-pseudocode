/*
 * XREFs of KiTallyHeteroSoftParkElectionVotes @ 0x140329FC0
 * Callers:
 *     KiPerformHeteroSoftParkElection @ 0x140329E98 (KiPerformHeteroSoftParkElection.c)
 * Callees:
 *     KiGenerateHeteroSets @ 0x14032A750 (KiGenerateHeteroSets.c)
 *     KiReduceAffinityToRankListMinimums @ 0x14032A9B0 (KiReduceAffinityToRankListMinimums.c)
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x14032AA14 (KiHeteroReduceToMaximallyPreferredByClass.c)
 *     KiReduceAffinityToRankListMaximums @ 0x14032AD30 (KiReduceAffinityToRankListMaximums.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned int v20; // r12d
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-68h]
  __int64 v24; // [rsp+38h] [rbp-60h]
  __int128 v25; // [rsp+48h] [rbp-50h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h]

  v7 = a2;
  v25 = 0LL;
  v26 = 0LL;
  memset_0(a6, 0, 0x200uLL);
  result = (__int64)a7;
  v11 = 0;
  *a7 = 0LL;
  v12 = 0LL;
  v24 = 0LL;
  do
  {
    v13 = 0;
    v14 = 0LL;
    v23 = 0LL;
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
        KiGenerateHeteroSets(a1, a4, i, v11, v13, (__int64)&v25);
        v22 = a3 & v26;
        if ( (a3 & v26) != 0 )
        {
          if ( KeSoftParkSmtPolicy && KeSoftParkSmtPolicy == 3 )
            result = KiReduceAffinityToRankListMaximums(v22, a5);
          else
            result = KiReduceAffinityToRankListMinimums(v22, a5);
        }
        else
        {
          result = 0LL;
        }
        if ( (result & (unsigned __int64)v25) != 0 )
        {
          result &= v25;
        }
        else
        {
          if ( (result & *((_QWORD *)&v25 + 1)) != 0 )
          {
            LOBYTE(v21) = v15;
            result = KiHeteroReduceToMaximallyPreferredByClass(a1, result & *((_QWORD *)&v25 + 1), v20, v21);
          }
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
      v14 = v23;
      v12 = v24;
LABEL_8:
      ++v14;
      ++v13;
      v23 = v14;
    }
    while ( v13 < 2 );
    v12 += 2LL;
    ++v11;
    v24 = v12;
  }
  while ( v11 < 7 );
  return result;
}
