/*
 * XREFs of sub_18000F61C @ 0x18000F61C
 * Callers:
 *     sub_18000DA9C @ 0x18000DA9C (sub_18000DA9C.c)
 *     sub_18000F7EC @ 0x18000F7EC (sub_18000F7EC.c)
 * Callees:
 *     sub_18000F6D4 @ 0x18000F6D4 (sub_18000F6D4.c)
 */

__int64 __fastcall sub_18000F61C(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
  {
    v6 = (260 - v4) & -(__int64)(v4 != 0);
    return sub_18000F6D4(&a1[v6], 260 - v6, v6, a3);
  }
  return result;
}
