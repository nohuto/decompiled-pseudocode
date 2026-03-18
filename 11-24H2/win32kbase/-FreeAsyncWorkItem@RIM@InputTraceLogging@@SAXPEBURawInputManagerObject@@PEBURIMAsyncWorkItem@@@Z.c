/*
 * XREFs of ?FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x140197DE8
 * Callers:
 *     RIMFreeAsyncWorkItem @ 0x140197D7C (RIMFreeAsyncWorkItem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1400ECFCC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?WorkItemTypeToString@InputTraceLogging@@CAPEBDW4ASYNC_INPUT_WORKITEM@@@Z @ 0x1401D4288 (-WorkItemTypeToString@InputTraceLogging@@CAPEBDW4ASYNC_INPUT_WORKITEM@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::FreeAsyncWorkItem(
        const struct RawInputManagerObject *a1,
        const struct RIMAsyncWorkItem *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 256LL) )
  {
    v6 = InputTraceLogging::WorkItemTypeToString(*(unsigned int *)(v2 + 16));
    v7 = v3;
    v5[0] = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_14029AE30,
      byte_140278DBB,
      v3,
      v4,
      (__int64)v5,
      (__int64)&v7,
      (void **)&v6);
  }
}
