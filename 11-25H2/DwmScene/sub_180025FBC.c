/*
 * XREFs of sub_180025FBC @ 0x180025FBC
 * Callers:
 *     sub_1800BDB30 @ 0x1800BDB30 (sub_1800BDB30.c)
 * Callees:
 *     sub_180025E70 @ 0x180025E70 (sub_180025E70.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 */

__int64 __fastcall sub_180025FBC(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 )
    sub_180025E70(1);
  if ( *((_BYTE *)a1 + 8) )
    sub_180025E70(36);
  result = sub_180027FBC(v2);
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
