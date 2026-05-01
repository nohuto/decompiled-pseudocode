/*
 * XREFs of ?Release@CImmersiveWindowFactory@@UEAAKXZ @ 0x18020F990
 * Callers:
 *     ?Release@CImmersiveWindowFactory@@W7EAAKXZ @ 0x1806C7A50 (-Release@CImmersiveWindowFactory@@W7EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x1806C7A60 (-Release@CImmersiveWindowFactory@@WDA@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WEI@EAAKXZ @ 0x1806C7A70 (-Release@CImmersiveWindowFactory@@WEI@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WFA@EAAKXZ @ 0x1806C7A80 (-Release@CImmersiveWindowFactory@@WFA@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WLA@EAAKXZ @ 0x1806C7A90 (-Release@CImmersiveWindowFactory@@WLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CImmersiveWindowFactory::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::Release(this);
}
