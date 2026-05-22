/*
 * XREFs of _InjectionRawInputProvider::OnAttachDevice_::_1_::dtor$1 @ 0x1801D60C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InjectionRawInputProvider::OnAttachDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<InputInfoValidator>::~unique_ptr<InputInfoValidator>((__int64 *)(a2 + 112));
}
