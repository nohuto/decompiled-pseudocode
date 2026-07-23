/*
 * XREFs of KiHeteroAttemptPreemptionSwap @ 0x14041576C
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiIsThreadEligibleForPreemptionSwap @ 0x140415900 (KiIsThreadEligibleForPreemptionSwap.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14041592C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 */

__int64 __fastcall KiHeteroAttemptPreemptionSwap(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  int v6; // r15d
  __int64 v7; // rbx
  _WORD *v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r8
  BOOL v22; // r14d

  v5 = *(_QWORD *)(a1 + 192);
  v6 = a1;
  v7 = a2[24];
  if ( !(unsigned __int8)KiIsThreadEligibleForPreemptionSwap(a4) )
    return 3221225473LL;
  v14 = *(unsigned __int16 *)(v7 + 136);
  v15 = (unsigned __int16)v14 >= *v11 ? 0LL : *(_QWORD *)&v11[4 * v14 + 4];
  v16 = *(_QWORD *)(v7 + 192);
  v17 = 3LL
      * (*(unsigned __int8 *)(v12 + 16)
       + (unsigned int)*(unsigned __int8 *)(v7 + 185) * (*(_DWORD *)(v12 + 8) + 2 * *(_DWORD *)(v12 + 4)));
  v18 = *(_QWORD *)(v16
                  + 24LL
                  * (*(unsigned __int8 *)(v12 + 16)
                   + (unsigned int)*(unsigned __int8 *)(v7 + 185) * (*(_DWORD *)(v12 + 8) + 2 * *(_DWORD *)(v12 + 4)))
                  + 16);
  v19 = v15 & v18 & *(_QWORD *)(v16 + 8 * v17 + 8);
  v20 = v15 & v18;
  if ( v20 )
  {
    if ( !v19 )
      v19 = v20;
  }
  else
  {
    v19 = v15 & *(_QWORD *)(v7 + 128);
  }
  v21 = *(_QWORD *)(v7 + 16);
  if ( (v19 & a2[25]) != 0 && (v21 & a2[4556]) == a2[4556] )
    return 3221225473LL;
  v22 = (v21 & a2[4556]) == a2[4556];
  result = KiHeteroAttemptPreemptionSwapOnSubNode(v5, v6, (_DWORD)a2, a3, a4, v22, a5);
  if ( (int)result < 0 )
  {
    if ( v5 == v7 )
      return 3221225473LL;
    result = KiHeteroAttemptPreemptionSwapOnSubNode(v7, v6, (_DWORD)a2, a3, a4, v22, a5);
    if ( (int)result < 0 )
      return 3221225473LL;
  }
  return result;
}
