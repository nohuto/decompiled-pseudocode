/*
 * XREFs of ?DeliverInputToObserver@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURawInputManagerInputObserverObject@@@Z @ 0x14019EB64
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1401EFE74 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1400F2040 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverInputToObserver(
        const struct RIMDEV *a1,
        const struct RawInputManagerInputObserverObject *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 256LL) )
  {
    v4 = v2;
    v5 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_14029AE30,
      byte_14027A3D2,
      v2,
      v3,
      (__int64)&v5,
      (__int64)&v4);
  }
}
