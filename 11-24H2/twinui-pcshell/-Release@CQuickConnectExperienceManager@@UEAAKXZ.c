/*
 * XREFs of ?Release@CQuickConnectExperienceManager@@UEAAKXZ @ 0x18039A6E0
 * Callers:
 *     ?Release@CQuickConnectExperienceManager@@W7EAAKXZ @ 0x18039A6F0 (-Release@CQuickConnectExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CQuickConnectExperienceManager@@WBA@EAAKXZ @ 0x18039A700 (-Release@CQuickConnectExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CQuickConnectExperienceManager@@WBI@EAAKXZ @ 0x18039A710 (-Release@CQuickConnectExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CQuickConnectExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(this);
}
