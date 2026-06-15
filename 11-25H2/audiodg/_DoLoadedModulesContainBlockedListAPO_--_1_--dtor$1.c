/*
 * XREFs of _DoLoadedModulesContainBlockedListAPO_::_1_::dtor$1 @ 0x140096A68
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DoLoadedModulesContainBlockedListAPO_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter>::~unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter>(a2 + 72);
}
