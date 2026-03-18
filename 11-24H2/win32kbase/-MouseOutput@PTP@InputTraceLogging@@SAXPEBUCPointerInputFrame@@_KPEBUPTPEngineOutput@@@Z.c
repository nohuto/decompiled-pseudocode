/*
 * XREFs of ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x140107BEC
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@44@Z @ 0x140009110 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgW.c)
 *     ?PTPMouseActionToString@InputTraceLogging@@CAPEBDW4Action@Mouse@Payload@PTPEngineOutput@@@Z @ 0x14020E15C (-PTPMouseActionToString@InputTraceLogging@@CAPEBDW4Action@Mouse@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall InputTraceLogging::PTP::MouseOutput(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        const struct PTPEngineOutput *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h] BYREF
  int v14; // [rsp+90h] [rbp+10h] BYREF
  __int64 v15; // [rsp+98h] [rbp+18h] BYREF
  int v16; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a2;
  if ( a1 )
  {
    v3 = *((_QWORD *)a1 + 9);
    v4 = *((unsigned int *)a1 + 10);
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
  }
  if ( (unsigned int)dword_14029AE30 > 4
    && (qword_14029AE40 & 0x80u) != 0LL
    && (qword_14029AE48 & 0x80) == qword_14029AE48 )
  {
    v5 = *((unsigned int *)a3 + 1);
    LODWORD(v15) = *((_DWORD *)a3 + 3);
    v14 = *((_DWORD *)a3 + 2);
    v11 = 0LL;
    v10 = InputTraceLogging::PTPMouseActionToString(v5, v4, a3, v3);
    v16 = v6;
    v12 = v7;
    v13 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027D7C1,
      v9,
      v7,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v16,
      (__int64)&v11,
      (void **)&v10,
      (__int64)&v14,
      (__int64)&v15);
  }
}
