/*
 * XREFs of MiChangePageHeatImmediate @ 0x140435AC8
 * Callers:
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiLargeFreePageToMdl @ 0x1402EF600 (MiLargeFreePageToMdl.c)
 * Callees:
 *     MiInitializePageHeatList @ 0x140435B60 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiChangePageHeatImmediate(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v5; // r11d
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    if ( (HvlEnlightenments & 0x200000) == 0 )
      return result;
    goto LABEL_7;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 0x8400000) != 0 && (a2 <= 1 || (HvlEnlightenments & 0x8000000) == 0) )
  {
LABEL_7:
    MiInitializePageHeatList(&v6, a3, 0LL, 1LL);
    return MiAddPageToHeatList(&v6, a1, v5);
  }
  return result;
}
