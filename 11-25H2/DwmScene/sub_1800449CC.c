/*
 * XREFs of sub_1800449CC @ 0x1800449CC
 * Callers:
 *     sub_180046454 @ 0x180046454 (sub_180046454.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800444D0 @ 0x1800444D0 (sub_1800444D0.c)
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 */

__int64 __fastcall sub_1800449CC(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 *v10; // rax
  int v11; // eax
  int v12; // r10d
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v10 = sub_1800444D0(a6, &v14);
    sub_180011010(a1, v10);
    if ( v15 )
      sub_18001050C(v15);
    sub_180027C70(*a1, 8, 0);
  }
  v11 = sub_18004596C(12LL);
  return sub_18007F7D4(*a1, a2, a3, a4 * v11, a5, v12);
}
