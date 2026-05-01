/*
 * XREFs of ??_G?$heap_implements@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18065E960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18065E868 (--1NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils::~NetworkConnectionUtils(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
