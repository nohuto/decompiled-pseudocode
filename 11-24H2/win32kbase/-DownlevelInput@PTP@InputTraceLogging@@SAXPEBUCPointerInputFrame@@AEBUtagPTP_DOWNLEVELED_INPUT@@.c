/*
 * XREFs of ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x14013A094
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D33A8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@43@Z @ 0x1400092A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@@-$_tlgWrit.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z @ 0x14020E124 (-PTPDownlevelActionToString@InputTraceLogging@@CAPEBDW4tagPTP_DOWNLEVEL_ACTION@@@Z.c)
 */

void __fastcall InputTraceLogging::PTP::DownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2,
        __int64 a3)
{
  unsigned int v3; // r11d
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h] BYREF
  int v17; // [rsp+88h] [rbp+18h] BYREF
  int v18; // [rsp+98h] [rbp+28h] BYREF

  v3 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 && v3 != 1 )
  {
    if ( v3 == 2 && (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 128LL) )
    {
      v18 = *((_DWORD *)a2 + 1);
      v14 = v6;
      v15 = InputTraceLogging::PTPDownlevelActionToString((unsigned int)(v5 - 126));
      if ( v9 )
      {
        v8 = *(_QWORD *)(v9 + 216);
        v17 = *(_DWORD *)(v9 + 40);
        v13 = *(_QWORD *)(v9 + 72);
      }
      else
      {
        v17 = v8;
        v13 = v8;
      }
      v16 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14029AE30,
        (__int64)&unk_14027D826,
        v7,
        v8,
        (__int64)&v16,
        (__int64)&v13,
        (__int64)&v17,
        (void **)&v15,
        (__int64)&v18,
        (__int64)&v14);
    }
  }
  else if ( (unsigned int)dword_14029AE30 > 4
         && (qword_14029AE40 & 0x80u) != 0LL
         && (qword_14029AE48 & 0x80) == qword_14029AE48 )
  {
    v18 = *((_DWORD *)a2 + 1);
    v16 = a3;
    v15 = InputTraceLogging::PTPDownlevelActionToString(v3);
    if ( v12 )
    {
      v11 = *(_QWORD *)(v12 + 216);
      v17 = *(_DWORD *)(v12 + 40);
      v13 = *(_QWORD *)(v12 + 72);
    }
    else
    {
      v17 = v11;
      v13 = v11;
    }
    v14 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027D88C,
      v10,
      v11,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v17,
      (void **)&v15,
      (__int64)&v18,
      (__int64)&v16);
  }
}
