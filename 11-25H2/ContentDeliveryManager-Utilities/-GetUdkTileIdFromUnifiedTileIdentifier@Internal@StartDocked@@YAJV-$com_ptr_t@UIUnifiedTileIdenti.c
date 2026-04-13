/*
 * XREFs of ?GetUdkTileIdFromUnifiedTileIdentifier@Internal@StartDocked@@YAJV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAPEAUITileId@StartScreen@UI@WindowsUdk@@@Z @ 0x180095538
 * Callers:
 *     ?IsPinnedToStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@PEAE@Z @ 0x1800957CC (-IsPinnedToStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@U.c)
 *     ?SwapTilesInStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@1PEAE@Z @ 0x1800966B0 (-SwapTilesInStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall StartDocked::Internal::GetUdkTileIdFromUnifiedTileIdentifier(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int ActivationFactory; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  HSTRING string[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  string[1] = (HSTRING)a1;
  *a2 = 0LL;
  string[0] = 0LL;
  v4 = *a1;
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)*a1 + 56LL);
  WindowsDeleteString(0LL);
  string[0] = 0LL;
  v6 = v5(v4, string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v11 = 0LL;
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsUdk.UI.StartScreen.TileId",
      0x21u,
      0x20u);
    ActivationFactory = RoGetActivationFactory(v14, &GUID_a04afcd6_91ec_52d7_ab03_75f8cc65a086, &v11);
    v7 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v11 + 72LL))(
                            v11,
                            string[0],
                            a2);
      v7 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v11);
        v7 = 0;
        goto LABEL_9;
      }
      v9 = 28LL;
    }
    else
    {
      v9 = 26LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"ShellCommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)ActivationFactory);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"ShellCommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v6);
  }
LABEL_9:
  WindowsDeleteString(string[0]);
  string[0] = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a1);
  return v7;
}
