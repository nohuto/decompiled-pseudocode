/*
 * XREFs of ?GenerateFrameMessages@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x14011C4BC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400F4BD8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::Pointer::GenerateFrameMessages(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+68h] [rbp+10h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 0x20) != 0 && (qword_14029AE48 & 0x20) == qword_14029AE48 )
  {
    v5 = *((_DWORD *)a1 + 12);
    v6 = *((_DWORD *)a1 + 10);
    v7 = *((_QWORD *)a1 + 9);
    v4[0] = *((_QWORD *)a1 + 27);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      byte_14027C4E3,
      a3,
      a4,
      (__int64)v4,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5);
  }
}
