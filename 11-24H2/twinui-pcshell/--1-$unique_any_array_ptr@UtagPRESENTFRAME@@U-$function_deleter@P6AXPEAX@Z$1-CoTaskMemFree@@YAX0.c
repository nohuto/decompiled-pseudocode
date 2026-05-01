/*
 * XREFs of ??1?$unique_any_array_ptr@UtagPRESENTFRAME@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x180347DD4
 * Callers:
 *     _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$0 @ 0x1806E36EB (_GamingOverlayExperienceManager--PerfDataCollectionThread_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 wil::unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>()
{
  return wil::unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset();
}
