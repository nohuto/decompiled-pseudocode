/*
 * XREFs of ??1?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEAA@XZ @ 0x1800B3098
 * Callers:
 *     ??_G?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEAAPEAXI@Z @ 0x1800B3170 (--_G-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEAAXXZ @ 0x1800B3ABC (-_Tidy@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEAAXXZ.c)
 */

void **__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::~time_get<wchar_t,std::istreambuf_iterator<wchar_t>>(
        _QWORD *a1)
{
  void **result; // rax

  *a1 = &std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::`vftable';
  std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Tidy();
  result = &std::_Facet_base::`vftable';
  *a1 = &std::_Facet_base::`vftable';
  return result;
}
