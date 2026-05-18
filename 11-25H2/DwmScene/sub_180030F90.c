/*
 * XREFs of sub_180030F90 @ 0x180030F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18002E4B8 @ 0x18002E4B8 (sub_18002E4B8.c)
 */

_QWORD *__fastcall sub_180030F90(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v3 = sub_18002E4B8(&v7);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  v5 = v3[1];
  v3[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
