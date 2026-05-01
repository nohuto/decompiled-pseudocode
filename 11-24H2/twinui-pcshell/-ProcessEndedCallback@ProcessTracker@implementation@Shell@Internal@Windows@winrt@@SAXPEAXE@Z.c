/*
 * XREFs of ?ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z @ 0x180660850
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z @ 0x18066060C (-CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z.c)
 *     ?Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18066073C (-Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessEndedCallback(int *a1, char a2)
{
  __int64 *v3; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v3 = winrt::Windows::Internal::Shell::implementation::ProcessTracker::Current(&v4);
    winrt::Windows::Internal::Shell::implementation::ProcessTracker::CheckAndRaiseEvent(
      (RTL_SRWLOCK *)((*v3 - 16) & -(__int64)(*v3 != 0)),
      *a1);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  }
}
