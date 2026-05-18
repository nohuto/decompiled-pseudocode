/*
 * XREFs of sub_180093E6C @ 0x180093E6C
 * Callers:
 *     sub_180093F00 @ 0x180093F00 (sub_180093F00.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

_QWORD *__fastcall sub_180093E6C(__int64 a1)
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
    sub_180011010(v2, v5);
    if ( v5[1] )
      sub_18001050C(v5[1]);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v5 = 0LL;
  result = sub_180011010((_QWORD *)(a1 + 408), v5);
  if ( v5[1] )
    return (_QWORD *)sub_18001050C(v5[1]);
  return result;
}
