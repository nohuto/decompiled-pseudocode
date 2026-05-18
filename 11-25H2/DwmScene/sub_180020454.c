/*
 * XREFs of sub_180020454 @ 0x180020454
 * Callers:
 *     sub_1800204E4 @ 0x1800204E4 (sub_1800204E4.c)
 *     sub_180020784 @ 0x180020784 (sub_180020784.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_180020238 @ 0x180020238 (sub_180020238.c)
 */

char __fastcall sub_180020454(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 17LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1300000000LL;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_180020238((unsigned __int8 *)&v5, 0xCuLL, a1);
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
