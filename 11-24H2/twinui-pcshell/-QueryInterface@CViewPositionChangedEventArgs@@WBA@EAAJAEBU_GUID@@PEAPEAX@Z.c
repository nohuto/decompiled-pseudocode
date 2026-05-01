/*
 * XREFs of ?QueryInterface@CViewPositionChangedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180375F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewPositionChangedEventArgs::QueryInterface(__int64 a1, const struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
           a1 - 16,
           a2,
           a3);
}
