/*
 * XREFs of sub_18007F5B0 @ 0x18007F5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 *     sub_180050B40 @ 0x180050B40 (sub_180050B40.c)
 */

_QWORD *__fastcall sub_18007F5B0(__int64 *a1, unsigned int a2)
{
  _QWORD *result; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = a2;
    sub_180050B40(a1 + 15, &v6);
    v6 = a2;
    return (_QWORD *)sub_180027D7C(a1 + 10, &v6);
  }
  else
  {
    *(_OWORD *)v5 = 0LL;
    result = sub_180011010(a1 + 17, v5);
    if ( v5[1] )
      return (_QWORD *)sub_18001050C(v5[1]);
  }
  return result;
}
