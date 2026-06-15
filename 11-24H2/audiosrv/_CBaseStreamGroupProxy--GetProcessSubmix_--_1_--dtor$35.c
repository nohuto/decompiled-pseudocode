/*
 * XREFs of _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$35 @ 0x1801690B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor_35(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>((_QWORD *)(a2 + 80));
}
