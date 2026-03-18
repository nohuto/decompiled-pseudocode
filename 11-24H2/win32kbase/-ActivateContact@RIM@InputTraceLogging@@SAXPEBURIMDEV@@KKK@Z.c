/*
 * XREFs of ?ActivateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK@Z @ 0x1401F1680
 * Callers:
 *     RIMCmActivateContact @ 0x1401F1828 (RIMCmActivateContact.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1400067FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RIM::ActivateContact(const struct RIMDEV *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  __int64 v4; // r11
  int v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+44h] [rbp-24h] BYREF
  int v7; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 256LL) )
  {
    v5 = v2;
    v6 = v1;
    v7 = v3;
    v8[0] = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027A539,
      v1,
      v2,
      (__int64)v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5);
  }
}
