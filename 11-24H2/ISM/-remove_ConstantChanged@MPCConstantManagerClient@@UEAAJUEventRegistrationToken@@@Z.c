/*
 * XREFs of ?remove_ConstantChanged@MPCConstantManagerClient@@UEAAJUEventRegistrationToken@@@Z @ 0x180172F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCConstantManagerClient::remove_ConstantChanged(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
           this + 15,
           (struct IUnknown *)a2.value);
}
