/*
 * XREFs of ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x14002BF48
 * Callers:
 *     LockCaptureWindow @ 0x14002BE08 (LockCaptureWindow.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@@Z @ 0x14000146C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U-.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14002C0A4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140090C9C (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 */

void __fastcall InputTraceLogging::Mouse::SetCapture(const struct tagQ *a1, struct tagWND *a2, unsigned __int8 a3)
{
  int v4; // esi
  __int64 v6; // rbx
  __int64 WindowDetails; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // xmm1
  int v11; // [rsp+70h] [rbp-49h] BYREF
  int v12; // [rsp+74h] [rbp-45h] BYREF
  int v13; // [rsp+78h] [rbp-41h] BYREF
  int v14; // [rsp+7Ch] [rbp-3Dh] BYREF
  __int128 v15; // [rsp+80h] [rbp-39h] BYREF
  __int64 v16; // [rsp+90h] [rbp-29h] BYREF
  __int64 v17; // [rsp+98h] [rbp-21h] BYREF
  const struct tagQ *v18; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v19; // [rsp+A8h] [rbp-11h]
  __int128 v20; // [rsp+B8h] [rbp-1h]
  __int64 v21; // [rsp+C8h] [rbp+Fh]
  _BYTE v22[48]; // [rsp+D0h] [rbp+17h] BYREF
  int v23; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = a3;
  v6 = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(64LL) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails(v22, a2);
    v10 = *(_OWORD *)(WindowDetails + 16);
    v19 = *(_OWORD *)WindowDetails;
    v21 = *(_QWORD *)(WindowDetails + 32);
    v20 = v10;
    if ( (unsigned int)dword_140398B80 > 4
      && (qword_140398B90 & 0x40) != 0
      && (qword_140398B98 & 0x40) == qword_140398B98 )
    {
      v15 = v19;
      v23 = HIDWORD(v21);
      v11 = v21;
      v12 = HIDWORD(v20);
      v16 = v20;
      v13 = DWORD2(v20);
      if ( a2 )
        v6 = *(_QWORD *)a2;
      v17 = v6;
      v14 = v4;
      v18 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        (__int64)&dword_140398B80,
        (__int64)&unk_140368597,
        v8,
        v9,
        (__int64)&v18,
        (__int64)&v14,
        (__int64)&v17,
        &v16,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v23,
        (_QWORD *)&v15 + 1,
        &v15);
    }
  }
}
