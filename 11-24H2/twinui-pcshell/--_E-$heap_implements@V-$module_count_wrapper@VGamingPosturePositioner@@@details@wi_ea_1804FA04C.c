/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x1804FA04C
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winrt@@WGI@EAAPEAXI@Z @ 0x1804F9F10 (--_E-$heap_implements@V-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@@impl@winr.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ @ 0x1804F8DAC (--1-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ.c)
 */

GamingPosturePositioner *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<GamingPosturePositioner>>::`vector deleting destructor'(
        GamingPosturePositioner *a1,
        char a2)
{
  wil::details::module_count_wrapper<GamingPosturePositioner>::~module_count_wrapper<GamingPosturePositioner>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x3E8);
  return a1;
}
