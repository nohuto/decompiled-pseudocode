/*
 * XREFs of sub_18005DE48 @ 0x18005DE48
 * Callers:
 *     sub_1800632D4 @ 0x1800632D4 (sub_1800632D4.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 */

_BOOL8 __fastcall sub_18005DE48(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r11
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_1800130AC(a2);
  v6 = sub_18001E480(v5, v3, 2LL * *(_QWORD *)(v4 + 16));
  return sub_18005DBD8(a1, v9, v7, v6)[1] != 0LL;
}
