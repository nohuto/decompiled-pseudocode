/*
 * XREFs of sub_18002AED0 @ 0x18002AED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

_QWORD *__fastcall sub_18002AED0(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v2 = 0LL;
  result = sub_180011110((_QWORD *)(a1 + 208), v2);
  if ( v2[1] )
    return (_QWORD *)sub_18001060C(v2[1]);
  return result;
}
