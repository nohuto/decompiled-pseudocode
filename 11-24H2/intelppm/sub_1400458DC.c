/*
 * XREFs of sub_1400458DC @ 0x1400458DC
 * Callers:
 *     sub_1400373A8 @ 0x1400373A8 (sub_1400373A8.c)
 *     sub_1400457E0 @ 0x1400457E0 (sub_1400457E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400458DC(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r9d

  v3 = *(_DWORD *)(a1 + 68);
  if ( v3 )
  {
    if ( a2 != v3 - 1 )
      return *(unsigned __int8 *)(32LL * a2 + *(_QWORD *)(a1 + 56) + 24);
  }
  else
  {
    a2 = 0;
  }
  if ( *(_DWORD *)(a1 + 72) )
    a2 = v3 + a3;
  return *(unsigned __int8 *)(32LL * a2 + *(_QWORD *)(a1 + 56) + 24);
}
