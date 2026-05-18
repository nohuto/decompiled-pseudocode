/*
 * XREFs of sub_1800371F0 @ 0x1800371F0
 * Callers:
 *     sub_1800C2A60 @ 0x1800C2A60 (sub_1800C2A60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180037060 @ 0x180037060 (sub_180037060.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 *     sub_180094230 @ 0x180094230 (sub_180094230.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800371F0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  sub_180011B04((__int64)(a1 + 9), &v6);
  v4 = sub_18001B098(14688LL);
  v8 = v4;
  if ( v4 )
    v4 = sub_180094230(v4, v6, a2);
  v8 = v4;
  sub_180037060(a1 + 12, &v8);
  sub_180037090(&v8);
  if ( v7 )
    sub_18001050C(v7);
  (*(void (__fastcall **)(__int64 *))(*a1 + 48))(a1);
  return 1;
}
