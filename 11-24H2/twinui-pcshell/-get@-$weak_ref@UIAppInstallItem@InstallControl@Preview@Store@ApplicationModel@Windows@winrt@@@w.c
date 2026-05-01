/*
 * XREFs of ?get@?$weak_ref@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1805DCB84
 * Callers:
 *     ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1805CAF68 (--1-$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@.c)
 *     ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805CAFC4 (--1-$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@W_ea_1805CAFC4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
