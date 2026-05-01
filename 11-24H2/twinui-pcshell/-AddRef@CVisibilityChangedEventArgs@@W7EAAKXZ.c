/*
 * XREFs of ?AddRef@CVisibilityChangedEventArgs@@W7EAAKXZ @ 0x180323C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisibilityChangedEventArgs::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::AddRef(a1 - 8);
}
