/*
 * XREFs of sub_180026050 @ 0x180026050
 * Callers:
 *     sub_1800BDB30 @ 0x1800BDB30 (sub_1800BDB30.c)
 * Callees:
 *     sub_180025E70 @ 0x180025E70 (sub_180025E70.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 */

__int64 __fastcall sub_180026050(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 || !*((_BYTE *)a1 + 8) )
    sub_180025E70(1);
  result = sub_18002815C(v2);
  *((_BYTE *)a1 + 8) = 0;
  return result;
}
