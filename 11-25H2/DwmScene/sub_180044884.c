/*
 * XREFs of sub_180044884 @ 0x180044884
 * Callers:
 *     sub_1800464A8 @ 0x1800464A8 (sub_1800464A8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800444D0 @ 0x1800444D0 (sub_1800444D0.c)
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 */

__int64 __fastcall sub_180044884(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 *v10; // rax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v10 = sub_1800444D0(a6, &v13);
    sub_180011010(a1, v10);
    if ( v14 )
      sub_18001050C(v14);
    sub_180027C70(*a1, 8, 0);
  }
  v11 = sub_18004596C(8LL);
  return sub_18007F7D4(*a1, a2, a3, a4 * v11, a5, 8);
}
