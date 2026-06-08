/*
 * XREFs of sub_14000EE18 @ 0x14000EE18
 * Callers:
 *     sub_14004B874 @ 0x14004B874 (sub_14004B874.c)
 * Callees:
 *     sub_1400067D0 @ 0x1400067D0 (sub_1400067D0.c)
 */

__int64 __fastcall sub_14000EE18(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  v4 = 192LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v6 = (192 - v4) & -(__int64)(v4 != 0);
    return sub_1400067D0(&a1[v6], 192 - v6, v6, a3);
  }
  return result;
}
