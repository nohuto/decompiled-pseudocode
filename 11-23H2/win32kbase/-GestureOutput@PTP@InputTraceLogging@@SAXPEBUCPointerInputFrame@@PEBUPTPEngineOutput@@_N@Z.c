/*
 * XREFs of ?GestureOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUPTPEngineOutput@@_N@Z @ 0x1C01DEF38
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DF570 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C019D674 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall InputTraceLogging::PTP::GestureOutput(
        const struct CPointerInputFrame *a1,
        const struct PTPEngineOutput *a2)
{
  bool v2; // al
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  bool v7; // zf
  int v8; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+54h] [rbp-1Ch] BYREF
  int v10; // [rsp+58h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h] BYREF
  __int64 v12; // [rsp+68h] [rbp-8h] BYREF
  int v13; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C0289810 > 4 )
  {
    v2 = tlgKeywordOn((__int64)&dword_1C0289810, 128LL);
    v6 = 0LL;
    if ( v2 )
    {
      v7 = *(_DWORD *)(v5 + 8) == 0;
      v13 = (unsigned __int8)v3;
      LOBYTE(v6) = !v7;
      v9 = *(_DWORD *)(v5 + 16);
      v10 = *(_DWORD *)(v4 + 40);
      v11 = *(_QWORD *)(v4 + 72);
      v12 = *(_QWORD *)(v4 + 216);
      v8 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0289810,
        byte_1C025D738,
        v3,
        v6,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v13);
    }
  }
}
