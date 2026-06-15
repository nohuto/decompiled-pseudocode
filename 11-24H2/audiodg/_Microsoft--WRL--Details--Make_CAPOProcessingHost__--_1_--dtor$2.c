/*
 * XREFs of _Microsoft::WRL::Details::Make_CAPOProcessingHost__::_1_::dtor$2 @ 0x140093906
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045410 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_CAPOProcessingHost__::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(*(Windows::Media::Devices::SendCommandAsyncOperation **)(a2 + 104));
}
