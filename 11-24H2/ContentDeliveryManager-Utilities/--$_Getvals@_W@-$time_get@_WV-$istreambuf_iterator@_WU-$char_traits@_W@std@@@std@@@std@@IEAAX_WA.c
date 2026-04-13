/*
 * XREFs of ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800B2F0C
 * Callers:
 *     ?_Init@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800B3A18 (-_Init@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinf.c)
 * Callees:
 *     _Getcvt @ 0x180005F08 (_Getcvt.c)
 *     ?_Maklocwcs@std@@YAPEA_WPEB_W@Z @ 0x1800B3A54 (-_Maklocwcs@std@@YAPEA_WPEB_W@Z.c)
 *     ?_W_Getdays@_Locinfo@std@@QEBAPEBGXZ @ 0x1800B3B00 (-_W_Getdays@_Locinfo@std@@QEBAPEBGXZ.c)
 *     ?_W_Getmonths@_Locinfo@std@@QEBAPEBGXZ @ 0x1800B3B60 (-_W_Getmonths@_Locinfo@std@@QEBAPEBGXZ.c)
 */

wchar_t *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getvals<wchar_t>(
        __int64 a1,
        __int64 a2,
        std::_Locinfo *a3)
{
  _Cvtvec *v5; // rax
  const wchar_t *v6; // rax
  const wchar_t *v7; // rax
  wchar_t *result; // rax
  _Cvtvec v9; // [rsp+20h] [rbp-38h] BYREF

  v5 = Getcvt(&v9);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 60) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 76) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = std::_Locinfo::_W_Getdays(a3);
  *(_QWORD *)(a1 + 16) = std::_Maklocwcs(v6);
  v7 = std::_Locinfo::_W_Getmonths(a3);
  *(_QWORD *)(a1 + 24) = std::_Maklocwcs(v7);
  result = std::_Maklocwcs(L":AM:am:PM:pm");
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
