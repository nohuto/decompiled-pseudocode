/*
 * XREFs of KiQueryHeteroSetFromSubNode @ 0x14042C290
 * Callers:
 *     KiTraceLogHeteroRundown @ 0x14042BA28 (KiTraceLogHeteroRundown.c)
 *     PpmEventTraceHeteroSets @ 0x14042BE28 (PpmEventTraceHeteroSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiQueryHeteroSetFromSubNode(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  _QWORD *v5; // r8
  __int64 v6; // xmm1_8
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-28h]

  v5 = (_QWORD *)(*(_QWORD *)(a1 + 192) + 24LL * (a4 + (unsigned int)*(unsigned __int8 *)(a1 + 185) * (a3 + 2 * a2)));
  v6 = v5[2];
  *(_QWORD *)&v8 = v6 & v5[1] & *v5;
  result = a5;
  *((_QWORD *)&v8 + 1) = v6 & v5[1];
  *(_OWORD *)a5 = v8;
  *(_QWORD *)(a5 + 16) = v6;
  return result;
}
