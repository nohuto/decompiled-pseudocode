/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_InitCoro$2 @ 0x1802564CC
 * Callers:
 *     ?ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@W4MeetAndChatUsageType@3456@@Z @ 0x180256834 (-ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x180256590 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_Resume.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 122) = a5;
  *(_DWORD *)(a2 + 130) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 121) = 0;
  return winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__ResumeCoro_1(a2);
}
