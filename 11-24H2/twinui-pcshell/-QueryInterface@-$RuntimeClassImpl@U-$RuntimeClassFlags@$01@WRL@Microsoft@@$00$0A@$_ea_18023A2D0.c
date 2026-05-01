/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18023A2D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180436E00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180436E00.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId>,Microsoft::WRL::FtmBase>>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId>,Microsoft::WRL::FtmBase>>>(
           a1,
           a2,
           a3);
}
