/*
 * XREFs of sub_18003D034 @ 0x18003D034
 * Callers:
 *     sub_18003D8B0 @ 0x18003D8B0 (sub_18003D8B0.c)
 *     sub_18003D9F4 @ 0x18003D9F4 (sub_18003D9F4.c)
 *     sub_18003DB68 @ 0x18003DB68 (sub_18003DB68.c)
 * Callees:
 *     sub_18003D068 @ 0x18003D068 (sub_18003D068.c)
 */

_QWORD *__fastcall sub_18003D034(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_18003D068();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
