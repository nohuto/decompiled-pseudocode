/*
 * XREFs of sub_1800CA960 @ 0x1800CA960
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_1800BEDD0 @ 0x1800BEDD0 (sub_1800BEDD0.c)
 *     sub_1800CAA7C @ 0x1800CAA7C (sub_1800CAA7C.c)
 */

__int64 __fastcall sub_1800CA960(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // r11d
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  sub_180011C04(a1 + 72, &v8);
  v6 = (__int64 *)sub_1800CAA7C((unsigned int)&v10, v4, v8, v5, a2, 2);
  sub_1800BEDD0((__int64 *)(a1 + 104), v6);
  sub_18000E954(&v10);
  if ( v9 )
    sub_18001060C(v9);
  return sub_180027D18(a1, *(unsigned int *)(*(_QWORD *)(a1 + 96) + 12LL), 6);
}
