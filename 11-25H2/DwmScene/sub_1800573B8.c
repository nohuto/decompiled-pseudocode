/*
 * XREFs of sub_1800573B8 @ 0x1800573B8
 * Callers:
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 * Callees:
 *     sub_180058F40 @ 0x180058F40 (sub_180058F40.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 */

_QWORD *__fastcall sub_1800573B8(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_1800595F0() )
    sub_180058F40(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1596);
  return result;
}
