/*
 * XREFs of ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009094C
 * Callers:
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x180091B40 (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x180091CC0 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 *     ?Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800920A0 (-Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?LaunchApp@LaunchAppByIdService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009A78C (-LaunchApp@LaunchAppByIdService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009A890 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?DismissNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009DFC0 (-DismissNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009E0FC (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800A05BC (-WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?PublishSystemState@PublishSystemStateService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800A09D0 (-PublishSystemState@PublishSystemStateService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800A1E68 (-NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIContentManagementBroker@ContentManagement@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@1@XZ @ 0x180066A00 (--$query@UIContentManagementBroker@ContentManagement@@@-$com_ptr_t@UIInspectable@@Uerr_exception.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18006ACF0 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

_QWORD *__fastcall wil::ActivateInstance<ContentManagement::IContentManagementBroker>(_QWORD *a1)
{
  unsigned int v2; // r8d
  HSTRING_HEADER *v3; // rax
  int v4; // eax
  __int64 (__fastcall ***v6[2])(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v7; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = L"ContentManagement.ContentManagementBroker";
  v6[0] = 0LL;
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset((__int64 *)v6);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, &v7, v2);
  v4 = RoActivateInstance(v3[1].Reserved.Reserved1, v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v4,
      (int)v6[0]);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<ContentManagement::IContentManagementBroker>(v6, a1);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)v6);
  return a1;
}
