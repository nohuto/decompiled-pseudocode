/*
 * XREFs of ?get_Uri@CProtocolActivatedEventArgs@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x1806788E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtocolActivatedEventArgs::get_Uri(
        CProtocolActivatedEventArgs *this,
        struct Windows::Foundation::IUriRuntimeClass **a2)
{
  return Microsoft::WRL::AgileRef::InternalResolve(
           (CProtocolActivatedEventArgs *)((char *)this + 328),
           &GUID_9e365e57_48b2_4160_956f_c7385120bbfc,
           (void **)a2);
}
