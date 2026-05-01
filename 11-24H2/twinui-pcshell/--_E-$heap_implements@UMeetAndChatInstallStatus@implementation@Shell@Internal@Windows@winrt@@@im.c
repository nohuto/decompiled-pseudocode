/*
 * XREFs of ??_E?$heap_implements@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805F3250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1804566F8 (--1MeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus::~MeetAndChatInstallStatus(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
