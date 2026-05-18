/*
 * XREFs of sub_180030478 @ 0x180030478
 * Callers:
 *     sub_180031CC4 @ 0x180031CC4 (sub_180031CC4.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180030478(__int64 a1)
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
        sub_18001050C(v2);
      result = sub_180010134(v1, 0x20uLL);
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
