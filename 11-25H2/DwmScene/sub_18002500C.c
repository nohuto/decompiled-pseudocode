/*
 * XREFs of sub_18002500C @ 0x18002500C
 * Callers:
 *     sub_1800258CC @ 0x1800258CC (sub_1800258CC.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 *     sub_1800B92C0 @ 0x1800B92C0 (sub_1800B92C0.c)
 *     sub_1800BADB0 @ 0x1800BADB0 (sub_1800BADB0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002500C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax
  __int64 v4; // [rsp+8h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 144);
  else
    v4 = 0LL;
  result = a2;
  *a2 = v4;
  return result;
}
