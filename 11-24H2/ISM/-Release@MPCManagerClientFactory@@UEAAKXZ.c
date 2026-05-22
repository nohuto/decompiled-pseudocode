/*
 * XREFs of ?Release@MPCManagerClientFactory@@UEAAKXZ @ 0x180165BE0
 * Callers:
 *     ?Release@MPCManagerClientFactory@@W7EAAKXZ @ 0x180165BF0 (-Release@MPCManagerClientFactory@@W7EAAKXZ.c)
 *     ?Release@MPCManagerClientFactory@@WCI@EAAKXZ @ 0x180165C00 (-Release@MPCManagerClientFactory@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClientFactory::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Input::MPCManager::IMPCManagerClientStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
           this,
           a2);
}
