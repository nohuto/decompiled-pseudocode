/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18001D520
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18001D3DC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     wil_details_RtlUnregisterFeatureConfigurationChangeNotification @ 0x18002777C (wil_details_RtlUnregisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::UnregisterWilFeatureConfigurationChange(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::UnregisterWilFeatureConfigurationChange(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return wil_details_RtlUnregisterFeatureConfigurationChangeNotification();
  return result;
}
