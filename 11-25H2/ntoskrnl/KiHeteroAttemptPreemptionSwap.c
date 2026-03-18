/*
 * XREFs of KiHeteroAttemptPreemptionSwap @ 0x140311FF4
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiIsThreadEligibleForPreemptionSwap @ 0x140312170 (KiIsThreadEligibleForPreemptionSwap.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14031280C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 */

__int64 __fastcall KiHeteroAttemptPreemptionSwap(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  int v6; // r15d
  __int64 v7; // rbx
  _WORD *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  BOOL v21; // r14d
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 192);
  v6 = a1;
  v7 = a2[24];
  if ( !(unsigned __int8)KiIsThreadEligibleForPreemptionSwap(a4) )
    return 3221225473LL;
  v13 = *(unsigned __int16 *)(v7 + 136);
  v14 = (unsigned __int16)v13 >= *v11 ? 0LL : *(_QWORD *)&v11[4 * v13 + 4];
  v15 = *(_QWORD *)(v7 + 192);
  v16 = 3LL
      * (*(unsigned __int8 *)(v12 + 16)
       + (unsigned int)*(unsigned __int8 *)(v7 + 185) * (*(_DWORD *)(v12 + 8) + 2 * *(_DWORD *)(v12 + 4)));
  v17 = *(_QWORD *)(v15
                  + 24LL
                  * (*(unsigned __int8 *)(v12 + 16)
                   + (unsigned int)*(unsigned __int8 *)(v7 + 185) * (*(_DWORD *)(v12 + 8) + 2 * *(_DWORD *)(v12 + 4)))
                  + 16);
  v18 = v14 & v17 & *(_QWORD *)(v15 + 8 * v16 + 8);
  v19 = v14 & v17;
  if ( v19 )
  {
    if ( !v18 )
      v18 = v19;
  }
  else
  {
    v18 = v14 & *(_QWORD *)(v7 + 128);
  }
  v20 = *(_QWORD *)(v7 + 16);
  if ( (v18 & a2[25]) != 0 && (v20 & a2[4556]) == a2[4556] )
    return 3221225473LL;
  v21 = (v20 & a2[4556]) == a2[4556];
  result = KiHeteroAttemptPreemptionSwapOnSubNode(v5, v6, (_DWORD)a2, a3, a4, v21, a5);
  if ( (int)result < 0 )
  {
    if ( v5 == v7 )
      return 3221225473LL;
    result = KiHeteroAttemptPreemptionSwapOnSubNode(v7, v6, (_DWORD)a2, a3, a4, v21, a5);
    if ( (int)result < 0 )
      return 3221225473LL;
  }
  return result;
}
