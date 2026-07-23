/*
 * XREFs of KiGenerateHeteroSets @ 0x14032A750
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1402AC3E0 (KiCheckPreferredHeteroProcessor.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x1403296A0 (KiEvaluatePreemptionSwapTarget.c)
 *     KiTallyHeteroSoftParkElectionVotes @ 0x140329FC0 (KiTallyHeteroSoftParkElectionVotes.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14041592C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 *     KiHeteroSelectIdleProcessorFromSubNode @ 0x1404E0130 (KiHeteroSelectIdleProcessorFromSubNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGenerateHeteroSets(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, int a5, __int64 a6)
{
  _QWORD *v7; // r9
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // r8d
  __int64 result; // rax
  __int128 v14; // [rsp+0h] [rbp-28h]

  v7 = (_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL * (a3 + (unsigned int)*(unsigned __int8 *)(a1 + 185) * (a5 + 2 * a4)));
  v8 = v7[2];
  *(_QWORD *)&v14 = v8 & v7[1] & *v7;
  *((_QWORD *)&v14 + 1) = v8 & v7[1];
  *(_OWORD *)a6 = v14;
  *(_QWORD *)(a6 + 16) = v8;
  v9 = a2 & *(_QWORD *)a6;
  v10 = a2 & *(_QWORD *)(a6 + 8);
  v11 = a2 & *(_QWORD *)(a6 + 16);
  if ( v11 )
  {
    v12 = 0;
    if ( v10 )
    {
      if ( !v9 )
        v9 = v10;
    }
    else
    {
      v10 = a2 & *(_QWORD *)(a6 + 16);
      v9 = v10;
    }
  }
  else
  {
    v12 = 1;
    v11 = a2 & *(_QWORD *)(a1 + 128);
    v10 = v11;
    v9 = v11;
  }
  *(_QWORD *)a6 = v9;
  result = v12;
  *(_QWORD *)(a6 + 8) = v10;
  *(_QWORD *)(a6 + 16) = v11;
  return result;
}
