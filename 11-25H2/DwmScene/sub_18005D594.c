/*
 * XREFs of sub_18005D594 @ 0x18005D594
 * Callers:
 *     sub_18005CA04 @ 0x18005CA04 (sub_18005CA04.c)
 *     sub_18005D20C @ 0x18005D20C (sub_18005D20C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18005E038 @ 0x18005E038 (sub_18005E038.c)
 */

_QWORD *__fastcall sub_18005D594(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r14
  _QWORD *i; // rbx
  _QWORD *v6; // rbp
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  _QWORD v12[3]; // [rsp+38h] [rbp-30h] BYREF

  sub_18003BCDC(a1);
  v4 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v4; i += 2 )
  {
    v6 = unknown_libname_81(v12, i);
    sub_18005E038(&v10, v6);
    v7 = v10 != 0;
    if ( v11 )
      sub_18001050C(v11);
    v8 = v6[1];
    if ( v8 )
      sub_18001050C(v8);
    if ( v7 )
      break;
  }
  if ( i == *(_QWORD **)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18005E038(a2, i);
  }
  return a2;
}
