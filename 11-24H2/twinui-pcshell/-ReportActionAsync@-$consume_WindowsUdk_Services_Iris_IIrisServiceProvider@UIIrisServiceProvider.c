/*
 * XREFs of ?ReportActionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@AEBW4IrisAction@5673@@Z @ 0x1805FD528
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x1805FD600 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_Resume.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportActionAsync(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax
  int v11; // [rsp+38h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v4 = *a1;
  v13 = 0LL;
  v11 = 0;
  v7 = *v4;
  v8 = *a4;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v7 + 64))(v4, *a3, v8, &v13);
  winrt::check_hresult((int *)&v14, v9, (__int64)&v11);
  *a2 = v13;
  return a2;
}
