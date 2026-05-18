/*
 * XREFs of sub_18007F710 @ 0x18007F710
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 *     sub_180050CA0 @ 0x180050CA0 (sub_180050CA0.c)
 */

_QWORD *__fastcall sub_18007F710(__int64 *a1, unsigned int a2)
{
  _QWORD *result; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = a2;
    sub_180050CA0(a1 + 15, &v6);
    v6 = a2;
    return (_QWORD *)sub_180027EDC(a1 + 10, &v6);
  }
  else
  {
    *(_OWORD *)v5 = 0LL;
    result = sub_180011110(a1 + 17, v5);
    if ( v5[1] )
      return (_QWORD *)sub_18001060C(v5[1]);
  }
  return result;
}
