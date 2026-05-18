/*
 * XREFs of sub_18004C220 @ 0x18004C220
 * Callers:
 *     sub_180042358 @ 0x180042358 (sub_180042358.c)
 *     sub_1800431B4 @ 0x1800431B4 (sub_1800431B4.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180043C14 @ 0x180043C14 (sub_180043C14.c)
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_18004D35C @ 0x18004D35C (sub_18004D35C.c)
 *     sub_18005B7F4 @ 0x18005B7F4 (sub_18005B7F4.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_18004B0E0 @ 0x18004B0E0 (sub_18004B0E0.c)
 */

_QWORD *__fastcall sub_18004C220(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  sub_1800407EC(a1, &v5);
  sub_18004B0E0(a2, (__int64)&v5, &v7);
  if ( v6 )
    sub_18001050C(v6);
  return a2;
}
