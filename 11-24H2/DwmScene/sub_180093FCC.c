/*
 * XREFs of sub_180093FCC @ 0x180093FCC
 * Callers:
 *     sub_180094060 @ 0x180094060 (sub_180094060.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

_QWORD *__fastcall sub_180093FCC(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *result; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 136);
  v3 = 8LL;
  do
  {
    *(_OWORD *)v5 = 0LL;
    sub_180011110(v2, v5);
    if ( v5[1] )
      sub_18001060C(v5[1]);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v5 = 0LL;
  result = sub_180011110((_QWORD *)(a1 + 408), v5);
  if ( v5[1] )
    return (_QWORD *)sub_18001060C(v5[1]);
  return result;
}
