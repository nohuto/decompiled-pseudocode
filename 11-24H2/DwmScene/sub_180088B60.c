/*
 * XREFs of sub_180088B60 @ 0x180088B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

_QWORD *__fastcall sub_180088B60(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 1768);
  if ( *v1 )
  {
    *(_BYTE *)(*v1 + 168LL) = 1;
    *(_OWORD *)v3 = 0LL;
    result = sub_180011110(v1, v3);
    if ( v3[1] )
      return (_QWORD *)sub_18001060C(v3[1]);
  }
  return result;
}
