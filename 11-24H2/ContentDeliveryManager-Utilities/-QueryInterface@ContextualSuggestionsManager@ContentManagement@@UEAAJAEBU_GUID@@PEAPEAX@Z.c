/*
 * XREFs of ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036BB0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContextualSuggestionsManager@ContentManagement@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036BC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180036BC0.c)
 *     ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036BD0 (-QueryInterface@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036BE0 (-QueryInterface@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContextualSuggestionsManager::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContextualSuggestionsManager>>(
           this,
           a2,
           a3);
}
