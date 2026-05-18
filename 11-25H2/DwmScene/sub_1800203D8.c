/*
 * XREFs of sub_1800203D8 @ 0x1800203D8
 * Callers:
 *     sub_1800207F8 @ 0x1800207F8 (sub_1800207F8.c)
 *     sub_180022C00 @ 0x180022C00 (sub_180022C00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_180020238 @ 0x180020238 (sub_180020238.c)
 */

char __fastcall sub_1800203D8(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 23LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1900000000LL;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_180020238((unsigned __int8 *)&v5, 0x10uLL, a1);
  *(_WORD *)(a1 + 22) = 46;
  return result;
}
