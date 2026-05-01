/*
 * XREFs of ??0TouchEdgeGestureProcessor@@QEAA@XZ @ 0x1802B9B1C
 * Callers:
 *     ??0TouchEdgeGestureManager@@QEAA@XZ @ 0x18004D778 (--0TouchEdgeGestureManager@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@XZ @ 0x1801CDC64 (-Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA-AU1.c)
 */

// Hidden C++ exception states: #wind=6
TouchEdgeGestureProcessor *__fastcall TouchEdgeGestureProcessor::TouchEdgeGestureProcessor(
        TouchEdgeGestureProcessor *this)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 30;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::Create(&v3);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 14, &v3);
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v3);
  return this;
}
