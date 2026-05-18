/*
 * XREFs of sub_18002516C @ 0x18002516C
 * Callers:
 *     sub_180025A2C @ 0x180025A2C (sub_180025A2C.c)
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 *     sub_1800B9420 @ 0x1800B9420 (sub_1800B9420.c)
 *     sub_1800BAF10 @ 0x1800BAF10 (sub_1800BAF10.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002516C(__int64 a1, _QWORD *a2)
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
