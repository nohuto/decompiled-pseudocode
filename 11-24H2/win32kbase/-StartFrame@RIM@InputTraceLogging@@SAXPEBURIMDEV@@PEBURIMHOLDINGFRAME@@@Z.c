/*
 * XREFs of ?StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z @ 0x1400F4B34
 * Callers:
 *     RIMStartPointerDeviceFrame @ 0x1400574B8 (RIMStartPointerDeviceFrame.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400F4BD8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::RIM::StartFrame(const struct RIMDEV *a1, const struct RIMHOLDINGFRAME *a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  const struct RIMDEV *v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4
    && (qword_14029AE40 & 0x100) != 0
    && (qword_14029AE48 & 0x100) == qword_14029AE48 )
  {
    v4 = *((_QWORD *)a1 + 56);
    v7 = *(unsigned __int16 *)(v4 + 18);
    v8 = *(unsigned __int16 *)(v4 + 16);
    v5 = *((_QWORD *)a2 + 4);
    v6 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_140278BB3,
      a3,
      (_DWORD)a1,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v8,
      (__int64)&v7);
  }
}
