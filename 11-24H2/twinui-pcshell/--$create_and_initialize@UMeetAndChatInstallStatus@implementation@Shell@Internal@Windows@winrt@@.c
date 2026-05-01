/*
 * XREFs of ??$create_and_initialize@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@W4AsyncStatus@Foundation@56@AEAUMeetAndChatInstallProgress@MeetAndChat@3456@AEAUMeetAndChatInstallResult@MeetAndChat@3456@@impl@winrt@@YAPEAUMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@1@$$QEAW4AsyncStatus@Foundation@61@AEAUMeetAndChatInstallProgress@MeetAndChat@4561@AEAUMeetAndChatInstallResult@MeetAndChat@4561@@Z @ 0x1805F1794
 * Callers:
 *     ?TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUMeetAndChatInstallStatus@3456@XZ @ 0x1805F6FF0 (-TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUMeet.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UMeetAndChatInstallStatus@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1805F2B6C (--0-$producers_base@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@V-$tu.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,enum winrt::Windows::Foundation::AsyncStatus,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress &,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult &>(
        unsigned int *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  _QWORD *v10; // [rsp+48h] [rbp+20h]

  v10 = operator new(0x30uLL);
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,std::tuple<winrt::Windows::Internal::Shell::MeetAndChatInstallStatus>>::producers_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,std::tuple<winrt::Windows::Internal::Shell::MeetAndChatInstallStatus>>(
    v10 + 2,
    v6,
    v7,
    *a1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v10[1] = 1LL;
  *v10 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus>::`vftable';
  *((_DWORD *)v10 + 6) = v8;
  *(_QWORD *)((char *)v10 + 28) = *(_QWORD *)a2;
  *((_DWORD *)v10 + 9) = *(_DWORD *)(a2 + 8);
  v10[5] = *a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v10 + 5);
  *v10 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus>::`vftable';
  return v10;
}
