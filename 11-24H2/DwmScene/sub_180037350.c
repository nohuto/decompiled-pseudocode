/*
 * XREFs of sub_180037350 @ 0x180037350
 * Callers:
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800371C0 @ 0x1800371C0 (sub_1800371C0.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180094390 @ 0x180094390 (sub_180094390.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180037350(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  sub_180011C04((__int64)(a1 + 9), &v6);
  v4 = sub_18001B1F8(14688LL);
  v8 = v4;
  if ( v4 )
    v4 = sub_180094390(v4, v6, a2);
  v8 = v4;
  sub_1800371C0(a1 + 12, &v8);
  sub_1800371F0(&v8);
  if ( v7 )
    sub_18001060C(v7);
  (*(void (__fastcall **)(__int64 *))(*a1 + 48))(a1);
  return 1;
}
