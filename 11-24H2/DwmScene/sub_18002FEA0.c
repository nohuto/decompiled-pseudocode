/*
 * XREFs of sub_18002FEA0 @ 0x18002FEA0
 * Callers:
 *     sub_1800D6BF3 @ 0x1800D6BF3 (sub_1800D6BF3.c)
 *     sub_1800D6EF6 @ 0x1800D6EF6 (sub_1800D6EF6.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_18002FEA0(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rsi

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        sub_18001060C(v4);
      sub_180010234(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  return sub_180010234(*a1, 0x20uLL);
}
