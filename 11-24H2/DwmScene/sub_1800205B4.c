/*
 * XREFs of sub_1800205B4 @ 0x1800205B4
 * Callers:
 *     sub_180020644 @ 0x180020644 (sub_180020644.c)
 *     sub_1800208E4 @ 0x1800208E4 (sub_1800208E4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_180020398 @ 0x180020398 (sub_180020398.c)
 */

char __fastcall sub_1800205B4(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 17LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1300000000LL;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_180020398((unsigned __int8 *)&v5, 0xCuLL, a1);
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
