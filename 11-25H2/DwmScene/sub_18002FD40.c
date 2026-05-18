/*
 * XREFs of sub_18002FD40 @ 0x18002FD40
 * Callers:
 *     sub_1800D6A93 @ 0x1800D6A93 (sub_1800D6A93.c)
 *     sub_1800D6D96 @ 0x1800D6D96 (sub_1800D6D96.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_18002FD40(void **a1)
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
        sub_18001050C(v4);
      sub_180010134(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  return sub_180010134(*a1, 0x20uLL);
}
