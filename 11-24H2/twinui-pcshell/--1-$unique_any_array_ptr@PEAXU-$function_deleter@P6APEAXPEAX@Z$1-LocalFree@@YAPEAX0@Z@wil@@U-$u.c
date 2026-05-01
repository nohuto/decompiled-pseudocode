/*
 * XREFs of ??1?$unique_any_array_ptr@PEAXU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@U?$unique_any_array_deleter@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@2@_K@wil@@QEAA@XZ @ 0x18033A5EC
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::HasGamingAppCapability_::_1_::dtor$9 @ 0x1806E1632 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1632.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::HasGamingAppCapability_::_1_::dtor$11 @ 0x1806E1656 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1656.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::HasGamingAppCapability_::_1_::dtor$12 @ 0x1806E1668 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1668.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>,unsigned __int64>::~unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>,unsigned __int64>()
{
  return wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>,unsigned __int64>::reset();
}
