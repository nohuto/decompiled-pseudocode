/*
 * XREFs of ??1?$size_address_ptr@K@?$unique_any_array_ptr@PEAXU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@U?$unique_any_array_deleter@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@2@_K@wil@@QEAA@XZ @ 0x18033A5D4
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::HasGamingAppCapability_::_1_::dtor$14 @ 0x1806E1644 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E1644.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::HasGamingAppCapability_::_1_::dtor$13 @ 0x1806E167A (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E167A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_array_ptr<void *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>,wil::details::unique_any_array_deleter<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>,unsigned __int64>::size_address_ptr<unsigned long>::~size_address_ptr<unsigned long>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 12) )
  {
    result = *a1;
    *(_QWORD *)(*a1 + 8) = *((unsigned int *)a1 + 2);
  }
  return result;
}
