/*
 * XREFs of sub_18008D988 @ 0x18008D988
 * Callers:
 *     sub_18008DD18 @ 0x18008DD18 (sub_18008DD18.c)
 *     sub_18008DDD0 @ 0x18008DDD0 (sub_18008DDD0.c)
 *     sub_18008DE6C @ 0x18008DE6C (sub_18008DE6C.c)
 * Callees:
 *     sub_18008D9BC @ 0x18008D9BC (sub_18008D9BC.c)
 */

_QWORD *__fastcall sub_18008D988(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_18008D9BC();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
