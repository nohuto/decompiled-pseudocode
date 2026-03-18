/*
 * XREFs of ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x140118A6C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x140005E68 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall InputTraceLogging::PTP::GestureOutput(
        const struct CPointerInputFrame *a1,
        const struct PTPEngineOutput *a2,
        __int64 a3,
        __int64 a4)
{
  BOOL v4; // [rsp+50h] [rbp-20h] BYREF
  int v5; // [rsp+54h] [rbp-1Ch] BYREF
  int v6; // [rsp+58h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp-10h] BYREF
  __int64 v8; // [rsp+68h] [rbp-8h] BYREF
  int v9; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4
    && (qword_14029AE40 & 0x80u) != 0LL
    && (qword_14029AE48 & 0x80) == qword_14029AE48 )
  {
    v9 = (unsigned __int8)a3;
    v4 = *((_DWORD *)a2 + 2) != 0;
    v5 = *((_DWORD *)a2 + 4);
    v6 = *((_DWORD *)a1 + 10);
    v7 = *((_QWORD *)a1 + 9);
    v8 = *((_QWORD *)a1 + 27);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027D751,
      a3,
      a4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v9);
  }
}
