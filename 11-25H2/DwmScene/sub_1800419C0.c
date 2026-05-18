/*
 * XREFs of sub_1800419C0 @ 0x1800419C0
 * Callers:
 *     sub_1800419A4 @ 0x1800419A4 (sub_1800419A4.c)
 *     sub_18008B290 @ 0x18008B290 (sub_18008B290.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 *     sub_1800912C0 @ 0x1800912C0 (sub_1800912C0.c)
 *     sub_180091560 @ 0x180091560 (sub_180091560.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800419C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 152);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_QWORD *)(a1 + 152) = result;
  return result;
}
