/*
 * XREFs of sub_180099EC0 @ 0x180099EC0
 * Callers:
 *     sub_180099FC4 @ 0x180099FC4 (sub_180099FC4.c)
 *     sub_18009A018 @ 0x18009A018 (sub_18009A018.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

_QWORD *__fastcall sub_180099EC0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_180010134(v3, 0x38uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
