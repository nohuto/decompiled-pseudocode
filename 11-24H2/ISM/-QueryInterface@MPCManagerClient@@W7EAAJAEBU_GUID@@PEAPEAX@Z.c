/*
 * XREFs of ?QueryInterface@MPCManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
