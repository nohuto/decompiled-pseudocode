/*
 * XREFs of ?Release@CSplashScreen@@UEAAKXZ @ 0x1802C6500
 * Callers:
 *     ?Release@CSplashScreen@@W7EAAKXZ @ 0x18030BD30 (-Release@CSplashScreen@@W7EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBA@EAAKXZ @ 0x18030BD40 (-Release@CSplashScreen@@WBA@EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBI@EAAKXZ @ 0x18030BD50 (-Release@CSplashScreen@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSplashScreen::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(this);
}
