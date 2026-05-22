/*
 * XREFs of _HotKeyProcessor::RegisterHotKey_::_1_::dtor$1 @ 0x1801D9D1A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HotKeyProcessor::RegisterHotKey_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::list<std::shared_ptr<HotKeyInfo>>::~list<std::shared_ptr<HotKeyInfo>>((char **)(a2 + 160));
}
