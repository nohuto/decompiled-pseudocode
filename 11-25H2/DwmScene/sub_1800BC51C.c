/*
 * XREFs of sub_1800BC51C @ 0x1800BC51C
 * Callers:
 *     sub_1800BD804 @ 0x1800BD804 (sub_1800BD804.c)
 *     sub_1800BEBEC @ 0x1800BEBEC (sub_1800BEBEC.c)
 *     sub_1800C6E70 @ 0x1800C6E70 (sub_1800C6E70.c)
 *     sub_1800C7C60 @ 0x1800C7C60 (sub_1800C7C60.c)
 *     sub_1800C9950 @ 0x1800C9950 (sub_1800C9950.c)
 *     sub_1800C9BB0 @ 0x1800C9BB0 (sub_1800C9BB0.c)
 *     sub_1800C9E10 @ 0x1800C9E10 (sub_1800C9E10.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800BC51C(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  v3 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a1[1] = a2[1];
  result = a1;
  *a1 = v3;
  return result;
}
