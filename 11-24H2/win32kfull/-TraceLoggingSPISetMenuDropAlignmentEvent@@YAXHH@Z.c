/*
 * XREFs of ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x14020EDE4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x14020EE5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall TraceLoggingSPISetMenuDropAlignmentEvent(int a1, char a2, int a3)
{
  __int64 v3[3]; // [rsp+40h] [rbp-18h] BYREF
  char v4; // [rsp+70h] [rbp+18h] BYREF
  char v5; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_140398BB8 > 5
    && (qword_140398BC8 & 0x200000000000LL) != 0
    && (qword_140398BD0 & 0x200000000000LL) == qword_140398BD0 )
  {
    v4 = a2;
    v5 = a1;
    v3[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      a1,
      (unsigned int)&unk_1403680C8,
      a3,
      0,
      (__int64)v3,
      (__int64)&v5,
      (__int64)&v4);
  }
}
