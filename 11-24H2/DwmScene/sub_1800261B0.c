/*
 * XREFs of sub_1800261B0 @ 0x1800261B0
 * Callers:
 *     sub_1800BDC90 @ 0x1800BDC90 (sub_1800BDC90.c)
 * Callees:
 *     sub_180025FD0 @ 0x180025FD0 (sub_180025FD0.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 */

__int64 __fastcall sub_1800261B0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 || !*((_BYTE *)a1 + 8) )
    sub_180025FD0(1);
  result = sub_1800282BC(v2);
  *((_BYTE *)a1 + 8) = 0;
  return result;
}
