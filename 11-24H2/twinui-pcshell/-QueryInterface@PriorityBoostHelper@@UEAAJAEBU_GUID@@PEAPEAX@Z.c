/*
 * XREFs of ?QueryInterface@PriorityBoostHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180391B50
 * Callers:
 *     ?QueryInterface@PriorityBoostHelper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C6C50 (-QueryInterface@PriorityBoostHelper@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PriorityBoostHelper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C6C60 (-QueryInterface@PriorityBoostHelper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C6C70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExper.c)
 *     ?QueryInterface@PriorityBoostHelper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C6C80 (-QueryInterface@PriorityBoostHelper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PriorityBoostHelper::QueryInterface(__int64 this, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>>(
           this,
           a2,
           a3);
}
