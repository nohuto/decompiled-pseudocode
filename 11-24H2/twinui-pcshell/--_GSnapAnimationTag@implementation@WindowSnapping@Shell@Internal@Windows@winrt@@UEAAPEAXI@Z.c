/*
 * XREFs of ??_GSnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805A5DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801DFBEC (--1SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *__fastcall winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *this,
        char a2)
{
  winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::~SnapAnimationTag(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
