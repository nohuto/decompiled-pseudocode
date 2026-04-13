/*
 * XREFs of ??_G?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEAAPEAXI@Z @ 0x1800B2E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEAA@XZ @ 0x1800B2D78 (--1-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEAA@XZ.c)
 */

_QWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::~time_get<wchar_t,std::istreambuf_iterator<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
