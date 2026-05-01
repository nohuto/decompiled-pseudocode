/*
 * XREFs of ??_G?$heap_implements@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1806605D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ProcessTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18066057C (--1ProcessTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::ProcessTracker *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::ProcessTracker>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::ProcessTracker *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::ProcessTracker::~ProcessTracker(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x78);
  return a1;
}
