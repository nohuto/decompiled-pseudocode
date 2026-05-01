/*
 * XREFs of _TouchKeyboardExperienceManager::ApplyRequestedRect_::_1_::dtor$1 @ 0x18050E7A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall TouchKeyboardExperienceManager::ApplyRequestedRect_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>>((void **)(a2 + 40));
}
