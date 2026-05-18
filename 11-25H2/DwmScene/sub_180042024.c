/*
 * XREFs of sub_180042024 @ 0x180042024
 * Callers:
 *     sub_1800431B4 @ 0x1800431B4 (sub_1800431B4.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180041DF8 @ 0x180041DF8 (sub_180041DF8.c)
 */

__int64 __fastcall sub_180042024(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  _QWORD v7[5]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v7[2] = a1;
  v7[4] = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  v8 = *a4;
  v7[0] = &v8;
  v7[1] = &v9;
  sub_180041DF8((__int64 *)(a1 + 40), (__int64)v7, a3);
  sub_180011A5C(a2);
  return a1;
}
