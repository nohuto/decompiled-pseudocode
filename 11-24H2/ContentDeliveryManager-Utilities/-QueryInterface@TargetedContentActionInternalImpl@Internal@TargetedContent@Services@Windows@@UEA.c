/*
 * XREFs of ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006EC30
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006EC40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18006EC40.c)
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006EC50 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCI.c)
 *     ?QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006EC60 (-QueryInterface@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::QueryInterface(
        __int64 this,
        struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>>(
           this,
           a2,
           a3);
}
