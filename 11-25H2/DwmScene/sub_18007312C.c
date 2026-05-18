/*
 * XREFs of sub_18007312C @ 0x18007312C
 * Callers:
 *     sub_18007312C @ 0x18007312C (sub_18007312C.c)
 *     sub_18007337C @ 0x18007337C (sub_18007337C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18007312C @ 0x18007312C (sub_18007312C.c)
 */

__int64 __fastcall sub_18007312C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_180010134(v6, 0x38uLL) )
  {
    sub_18007312C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = v6[6];
    if ( v7 )
      sub_18001050C(v7);
  }
  return result;
}
