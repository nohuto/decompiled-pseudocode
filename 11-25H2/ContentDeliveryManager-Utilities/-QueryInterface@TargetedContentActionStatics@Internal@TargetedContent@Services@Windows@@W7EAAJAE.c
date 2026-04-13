/*
 * XREFs of ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
