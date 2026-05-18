/*
 * XREFs of sub_18004468C @ 0x18004468C
 * Callers:
 *     sub_180046B80 @ 0x180046B80 (sub_180046B80.c)
 *     sub_180046CA8 @ 0x180046CA8 (sub_180046CA8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800444F0 @ 0x1800444F0 (sub_1800444F0.c)
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 */

__int64 __fastcall sub_18004468C(__int64 *a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 *v11; // rax
  int v12; // eax
  int v13; // r10d
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v11 = (__int64 *)sub_1800444F0(a6, (__int64)&v15, a7);
    sub_180011010(a1, v11);
    if ( v16 )
      sub_18001050C(v16);
    sub_180027C70(*a1, 8, 0);
  }
  v12 = sub_18004596C(4LL);
  return sub_18007F7D4(*a1, a2, a3, a4 * v12, a5, v13);
}
