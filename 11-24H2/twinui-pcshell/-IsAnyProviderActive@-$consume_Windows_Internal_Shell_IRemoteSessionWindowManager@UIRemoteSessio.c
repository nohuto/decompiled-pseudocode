/*
 * XREFs of ?IsAnyProviderActive@?$consume_Windows_Internal_Shell_IRemoteSessionWindowManager@UIRemoteSessionWindowManager@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180243C88
 * Callers:
 *     ?AreAnimationsEnabled@CUndockedSearchAppExperienceManagerConfig@@UEAA_NXZ @ 0x1803B74C0 (-AreAnimationsEnabled@CUndockedSearchAppExperienceManagerConfig@@UEAA_NXZ.c)
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x18063F1B0 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x1806AB9A0 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x1806AD6A0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_Shell_IRemoteSessionWindowManager<winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsAnyProviderActive(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v4 = 0;
  v6 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 96LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, &v4);
  return v6;
}
