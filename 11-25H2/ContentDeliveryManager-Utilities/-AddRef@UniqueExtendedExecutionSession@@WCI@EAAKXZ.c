/*
 * XREFs of ?AddRef@UniqueExtendedExecutionSession@@WCI@EAAKXZ @ 0x18008D1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UniqueExtendedExecutionSession::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::AddRef(a1 - 40);
}
