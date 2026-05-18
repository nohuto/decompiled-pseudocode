/*
 * XREFs of sub_18003CE84 @ 0x18003CE84
 * Callers:
 *     sub_18003CE84 @ 0x18003CE84 (sub_18003CE84.c)
 *     sub_18003D988 @ 0x18003D988 (sub_18003D988.c)
 *     sub_18005BF40 @ 0x18005BF40 (sub_18005BF40.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18003CE84 @ 0x18003CE84 (sub_18003CE84.c)
 */

__int64 __fastcall sub_18003CE84(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_180010234(v6, 0x38uLL) )
  {
    sub_18003CE84(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = v6[6];
    if ( v7 )
      sub_18001060C(v7);
  }
  return result;
}
