/*
 * XREFs of sub_1408F9924 @ 0x1408F9924
 * Callers:
 *     sub_1408FA884 @ 0x1408FA884 (sub_1408FA884.c)
 *     sub_1408FC59C @ 0x1408FC59C (sub_1408FC59C.c)
 *     sub_1409DFA70 @ 0x1409DFA70 (sub_1409DFA70.c)
 *     sub_1409E0444 @ 0x1409E0444 (sub_1409E0444.c)
 * Callees:
 *     sub_1408F980C @ 0x1408F980C (sub_1408F980C.c)
 *     sub_1408FCBC0 @ 0x1408FCBC0 (sub_1408FCBC0.c)
 */

__int64 __fastcall sub_1408F9924(unsigned int *a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  unsigned int v8; // r9d

  v8 = a6;
  if ( a6 == -1 )
  {
    sub_1408FCBC0((_DWORD)a1, a4, a5, 0, (__int64)&a6);
    v8 = a6;
  }
  return sub_1408F980C(a1, a2, a3, v8);
}
