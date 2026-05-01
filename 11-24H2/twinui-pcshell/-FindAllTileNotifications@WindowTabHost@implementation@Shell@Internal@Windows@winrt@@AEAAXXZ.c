/*
 * XREFs of ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180051A30
 * Callers:
 *     ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x18021DD70 (-TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18057E180 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x1800519AC (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D18 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?Id@?$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051DB0 (-Id@-$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows.c)
 *     ?FindTileNotifications@?$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@_JAEBUTileQueryFilter@Tiles@Internal@Windows@3@@Z @ 0x180051DFC (-FindTileNotifications@-$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Wi.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052ABC (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800E6AB0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801C9A54 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?WindowTabHostNewPinnedSite@WindowTabHostTelemetry@@SAXXZ @ 0x18020FA68 (-WindowTabHostNewPinnedSite@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240684 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ??$WindowTabHostFoundPinnedSites@AEAI@WindowTabHostTelemetry@@SAXAEAI@Z @ 0x1802B89EC (--$WindowTabHostFoundPinnedSites@AEAI@WindowTabHostTelemetry@@SAXAEAI@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?HideFromTaskbar@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180581630 (-HideFromTaskbar@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(
        RTL_SRWLOCK *this)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebx
  int NetworkConnectivityLevel; // eax
  int v5; // eax
  __int64 v6; // rax
  int v7; // ebx
  bool v8; // dl
  _QWORD *Ptr; // r14
  _QWORD *i; // rbx
  _QWORD *v11; // rsi
  _QWORD *j; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r10
  const WCHAR *v17; // rcx
  __int64 v18; // r8
  const WCHAR *v19; // rcx
  __int64 v20; // r8
  const WCHAR *v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  int v25; // [rsp+30h] [rbp-40h]
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-18h] BYREF

  v28 = 0LL;
  winrt::impl::consume_Windows_Internal_Tiles_ITileStore<winrt::Windows::Internal::Tiles::ITileStore>::FindTileNotifications(
    &this[54],
    &v27,
    this[56].Ptr,
    &v28);
  v2 = 0;
  v3 = 0;
  v23 = 0;
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v27);
  v25 = NetworkConnectivityLevel;
  while ( v3 != NetworkConnectivityLevel )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::GetAt(
      &v27,
      (winrt *)&v24,
      v3);
    v5 = winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason(&v24);
    if ( v5 == 1 )
    {
      winrt::impl::consume_Windows_Internal_Tiles_ITileNotification<winrt::Windows::Internal::Tiles::ITileNotification>::Id(
        &v24,
        v30);
      AcquireSRWLockExclusive(this + 77);
      Ptr = this[79].Ptr;
      for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
      {
        v11 = (_QWORD *)i[7];
        for ( j = (_QWORD *)*v11; j != v11; j = (_QWORD *)*j )
        {
          v13 = j[4];
          v14 = *(_QWORD *)(v13 + 72) - v30[0];
          if ( !v14 )
            v14 = _mm_srli_si128(*(__m128i *)(v13 + 72), 8).m128i_u64[0] - v30[1];
          if ( !v14 )
            winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromTaskbar(
              (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)v13,
              v8);
        }
      }
      if ( this != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockExclusive(this + 77);
    }
    else
    {
      if ( v5 )
        goto LABEL_9;
      v6 = winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
             &v24,
             &v29);
      v7 = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v6);
      if ( v29 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v29);
      if ( v7 == 1 )
      {
        v15 = winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
                &v24,
                &v28);
        winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
          v15,
          &v26);
        if ( v28 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
        v16 = v26;
        if ( v26 )
        {
          v17 = *(const WCHAR **)(v26 + 16);
          v18 = *(unsigned int *)(v26 + 4);
        }
        else
        {
          v17 = &pvData;
          v18 = 0LL;
        }
        if ( v18 == 48
          && !(unsigned int)std::_WChar_traits<unsigned short>::compare(
                              v17,
                              L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App")
          || (!v16 ? (v19 = &pvData, v20 = 0LL) : (v19 = *(const WCHAR **)(v16 + 16), v20 = *(unsigned int *)(v16 + 4)),
              v20 == 46
           && !(unsigned int)std::_WChar_traits<unsigned short>::compare(
                               v19,
                               L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App")
           || (!v16 ? (v21 = &pvData, v22 = 0LL) : (v21 = *(const WCHAR **)(v16 + 16), v22 = *(unsigned int *)(v16 + 4)),
               v22 == 45
            && !(unsigned int)std::_WChar_traits<unsigned short>::compare(
                                v21,
                                L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App")
            || (unsigned __int8)winrt::operator==(&v26, L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App")
            || (unsigned __int8)winrt::operator==(&v26, L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App"))) )
        {
          ++v2;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
      }
    }
    v3 = v23;
LABEL_9:
    if ( v24 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
    v23 = ++v3;
    NetworkConnectivityLevel = v25;
  }
  v23 = v2;
  if ( LOBYTE(this[109].Ptr) )
  {
    WindowTabHostTelemetry::WindowTabHostFoundPinnedSites<unsigned int &>(&v23);
    LOBYTE(this[109].Ptr) = 0;
  }
  else if ( v2 )
  {
    WindowTabHostTelemetry::WindowTabHostNewPinnedSite();
  }
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
}
