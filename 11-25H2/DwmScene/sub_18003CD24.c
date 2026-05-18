/*
 * XREFs of sub_18003CD24 @ 0x18003CD24
 * Callers:
 *     sub_18003CD24 @ 0x18003CD24 (sub_18003CD24.c)
 *     sub_18003D828 @ 0x18003D828 (sub_18003D828.c)
 *     sub_18005BDE0 @ 0x18005BDE0 (sub_18005BDE0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18003CD24 @ 0x18003CD24 (sub_18003CD24.c)
 */

__int64 __fastcall sub_18003CD24(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_180010134(v6, 0x38uLL) )
  {
    sub_18003CD24(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = v6[6];
    if ( v7 )
      sub_18001050C(v7);
  }
  return result;
}
