/*
 * XREFs of ?Release@MPCConstantManagerClient@@UEAAKXZ @ 0x180165B80
 * Callers:
 *     ?Release@MPCConstantManagerClient@@W7EAAKXZ @ 0x180170DA0 (-Release@MPCConstantManagerClient@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCConstantManagerClient::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(this);
}
