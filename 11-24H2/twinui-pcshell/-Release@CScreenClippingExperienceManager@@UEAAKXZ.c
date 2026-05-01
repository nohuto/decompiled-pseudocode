/*
 * XREFs of ?Release@CScreenClippingExperienceManager@@UEAAKXZ @ 0x1802316F0
 * Callers:
 *     ?Release@CScreenClippingExperienceManager@@W7EAAKXZ @ 0x1803A40A0 (-Release@CScreenClippingExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WBA@EAAKXZ @ 0x1803A40B0 (-Release@CScreenClippingExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WBI@EAAKXZ @ 0x1803A40C0 (-Release@CScreenClippingExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CScreenClippingExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::Release(this);
}
