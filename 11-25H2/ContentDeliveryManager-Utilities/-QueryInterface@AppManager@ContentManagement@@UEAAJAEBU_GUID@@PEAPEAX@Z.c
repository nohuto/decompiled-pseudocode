/*
 * XREFs of ?QueryInterface@AppManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800753E0
 * Callers:
 *     ?QueryInterface@AppManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800753F0 (-QueryInterface@AppManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075400 (-QueryInterface@AppManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075410 (-QueryInterface@AppManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppManager::QueryInterface(__int64 this, struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>>(
           this,
           a2,
           a3);
}
