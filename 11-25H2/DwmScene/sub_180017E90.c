/*
 * XREFs of sub_180017E90 @ 0x180017E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_180016350 @ 0x180016350 (sub_180016350.c)
 */

__int64 __fastcall sub_180017E90(__int64 a1, __int64 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  sub_180015D88(*(__int64 **)(a1 + 56), &v7);
  v10 = 0LL;
  sub_18000E854((__int64 *)&v10);
  v3 = sub_180016350(&v10, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v10;
    v10 = 0LL;
    *a2 = v6;
    sub_18000E854((__int64 *)&v10);
    if ( v8 )
      sub_18001050C(v8);
    return 0LL;
  }
  else
  {
    sub_18000F0E4(
      retaddr,
      361LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v3);
    sub_18000E854((__int64 *)&v10);
    if ( v8 )
      sub_18001050C(v8);
    return v4;
  }
}
