/*
 * XREFs of ?GetIids@CScreenClippingExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803A3200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScreenClippingExperienceManager::GetIids(__int64 a1, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::GetIids(
           a1 - 16,
           a2,
           a3);
}
