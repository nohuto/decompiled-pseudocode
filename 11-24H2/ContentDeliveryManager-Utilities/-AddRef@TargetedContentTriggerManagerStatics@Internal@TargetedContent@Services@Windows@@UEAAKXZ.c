/*
 * XREFs of ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180043060
 * Callers:
 *     ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180043070 (-AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 *     ?AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ @ 0x180043080 (-AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef(
        __int64 this,
        volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
           this,
           a2);
}
