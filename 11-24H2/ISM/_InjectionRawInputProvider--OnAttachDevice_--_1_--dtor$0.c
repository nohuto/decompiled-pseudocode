/*
 * XREFs of _InjectionRawInputProvider::OnAttachDevice_::_1_::dtor$0 @ 0x1801D60B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InjectionRawInputProvider::OnAttachDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>((void **)(a2 + 104));
}
