/*
 * XREFs of ?QueryInterface@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804055C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804055D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1804055D0.c)
 *     ?QueryInterface@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804055E0 (-QueryInterface@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAJAEBU_GU.c)
 *     ?QueryInterface@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804055F0 (-QueryInterface@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJAEBU_GU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>>(
           this,
           a2,
           a3);
}
