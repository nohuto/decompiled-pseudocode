/*
 * XREFs of ?QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
