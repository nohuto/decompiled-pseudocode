/*
 * XREFs of ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044900
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIAppInstallInfoRecord@ContentManagement@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044910 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180044910.c)
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044920 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIAppInstallInfoRecord@ContentManagement@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044930 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180044930.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::QueryInterface(
        __int64 this,
        struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>>(
           this,
           a2,
           a3);
}
