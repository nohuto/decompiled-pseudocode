/*
 * XREFs of ?HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ @ 0x1401111C4
 * Callers:
 *     _lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_ @ 0x140111190 (_lambda_c9e4fec9532ca8e5b5101c78de254c3e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x14004FFA8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

void InputTraceLogging::KST::HandleRefreshRateUnboostTimer(void)
{
  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 2) != 0 && (qword_14029AE48 & 2) == qword_14029AE48 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027DF5D);
}
