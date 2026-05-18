/*
 * XREFs of sub_1800305D8 @ 0x1800305D8
 * Callers:
 *     sub_180031E24 @ 0x180031E24 (sub_180031E24.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800305D8(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = v1[3];
      v3 = (_QWORD *)*v1;
      if ( v2 )
        sub_18001060C(v2);
      result = sub_180010234(v1, 0x20uLL);
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
