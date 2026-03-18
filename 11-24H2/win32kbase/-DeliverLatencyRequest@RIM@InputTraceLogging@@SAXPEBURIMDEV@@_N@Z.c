/*
 * XREFs of ?DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1400B144C
 * Callers:
 *     RIMSendLatencyMgtDeviceRequest @ 0x1400B0D94 (RIMSendLatencyMgtDeviceRequest.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400B0814 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverLatencyRequest(const struct RIMDEV *a1, unsigned __int8 a2, __int64 a3)
{
  int v3; // [rsp+50h] [rbp+18h] BYREF
  const struct RIMDEV *v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4
    && (qword_14029AE40 & 0x100) != 0
    && (qword_14029AE48 & 0x100) == qword_14029AE48 )
  {
    v3 = a2;
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      byte_140277B95,
      a3,
      256LL,
      (__int64)&v4,
      (__int64)&v3);
  }
}
