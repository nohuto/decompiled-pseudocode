/*
 * XREFs of ?TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z @ 0x1400FCEAC
 * Callers:
 *     CoreMsgObjectCallout @ 0x1400FCD24 (CoreMsgObjectCallout.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400B1FE8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

NTSTATUS __fastcall CoreMessagingK::Log::TraceObjectCalloutStart(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14029B140 > 5 )
  {
    v5 = a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
             (__int64)&dword_14029B140,
             byte_140280AC2,
             a3,
             a4,
             (__int64)&v5);
  }
  return result;
}
