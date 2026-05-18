/*
 * XREFs of sub_18001A970 @ 0x18001A970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017A20 @ 0x180017A20 (sub_180017A20.c)
 */

_QWORD *__fastcall sub_18001A970(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
    return sub_180017A20(v1, 1);
  return result;
}
