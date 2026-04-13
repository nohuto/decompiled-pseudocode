/*
 * XREFs of ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBX@Z @ 0x18000B520
 * Callers:
 *     <none>
 * Callees:
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x180009554 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     sprintf_s_0 @ 0x180022798 (sprintf_s_0.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int8 a5,
        const void *a6)
{
  int v10; // eax
  __int128 v12; // [rsp+40h] [rbp-78h] BYREF
  char Buffer[64]; // [rsp+50h] [rbp-68h] BYREF

  v10 = sprintf_s_0(Buffer, 0x40uLL, "%p", a6);
  v12 = *a3;
  std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(a1, a2, &v12, a4, a5, Buffer, v10);
  return a2;
}
