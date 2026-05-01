/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack @ 0x1806FB500
 * Callers:
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806FB448 (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool winrt::Windows::Internal::Shell::implementation::IsMiracastSupportedByWlanStack()
{
  bool v0; // bl
  HMODULE Library; // rax
  HMODULE v2; // rdi
  unsigned int (*ProcAddress)(void); // rax

  v0 = 0;
  Library = LoadLibraryExW(L"WiFiDisplay.dll", 0LL, 0x800u);
  v2 = Library;
  if ( Library )
  {
    ProcAddress = (unsigned int (*)(void))GetProcAddress(Library, "IsMiracastSupportedByWlan");
    if ( ProcAddress )
      v0 = ProcAddress() != 0;
    FreeLibrary(v2);
  }
  return v0;
}
