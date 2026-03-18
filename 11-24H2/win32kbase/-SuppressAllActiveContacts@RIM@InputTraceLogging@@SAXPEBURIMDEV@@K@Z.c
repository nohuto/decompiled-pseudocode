/*
 * XREFs of ?SuppressAllActiveContacts@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x140056190
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1400D799C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SuppressionReasonToString@InputTraceLogging@@CAPEBDK@Z @ 0x140154FF8 (-SuppressionReasonToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::SuppressAllActiveContacts(const struct RIMDEV *a1, unsigned int a2)
{
  __int64 v2; // r9
  int v3; // r8d
  const char *v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4
    && (qword_14029AE40 & 0x100) != 0
    && (qword_14029AE48 & 0x100) == qword_14029AE48 )
  {
    v4 = InputTraceLogging::SuppressionReasonToString(a2);
    v5 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_140277C83,
      v3,
      v2,
      (__int64)&v5,
      (__int64)&v4);
  }
}
