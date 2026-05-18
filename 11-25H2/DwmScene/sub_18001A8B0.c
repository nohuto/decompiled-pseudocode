/*
 * XREFs of sub_18001A8B0 @ 0x18001A8B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017960 @ 0x180017960 (sub_180017960.c)
 */

_QWORD *__fastcall sub_18001A8B0(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
    return sub_180017960(v1, 1);
  return result;
}
