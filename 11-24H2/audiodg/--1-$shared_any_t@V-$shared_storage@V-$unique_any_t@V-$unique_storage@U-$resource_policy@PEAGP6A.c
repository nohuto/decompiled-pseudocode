/*
 * XREFs of ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140008338
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1400469D0 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$0 @ 0x14009282C (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$0.c)
 *     _PublishApoTelemetry_::_1_::dtor$39 @ 0x1400949CD (_PublishApoTelemetry_--_1_--dtor$39.c)
 *     _PublishApoTelemetry_::_1_::dtor$41 @ 0x1400949F1 (_PublishApoTelemetry_--_1_--dtor$41.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$2 @ 0x140095A4F (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$2.c)
 *     _QueueInitialMicBoostNotification_::_1_::dtor$0 @ 0x140095A73 (_QueueInitialMicBoostNotification_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$2 @ 0x140096C86 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$2.c)
 *     _util::MakeAtomicObj_ClockingSection_util::ReaderLockPolicy_util::AtomicObjBase_ClockingSection_util::AtomicObj_ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::Storage__::_1_::dtor$0 @ 0x140096EE9 (_util--MakeAtomicObj_ClockingSection_util--ReaderLockPolicy_util--AtomicObjBase_ClockingSection_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
