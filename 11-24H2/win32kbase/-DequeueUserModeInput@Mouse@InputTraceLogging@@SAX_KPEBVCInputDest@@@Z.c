/*
 * XREFs of ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x14021C77C
 * Callers:
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x14021E78C (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5554AEBU?$_tlgWrapSz@D@@@Z @ 0x140009A44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U2@U-$_tlgW.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140093B30 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400944F0 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140094508 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400F38B0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::Mouse::DequeueUserModeInput(__int64 a1, const struct CInputDest *a2)
{
  __int64 v3; // rcx
  CInputDest *v4; // r9
  CInputDest *v5; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v7; // r8
  __int64 WindowDetails; // rax
  __int128 v9; // xmm1
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+60h] [rbp-29h] BYREF
  int v15; // [rsp+64h] [rbp-25h] BYREF
  __int128 v16; // [rsp+68h] [rbp-21h] BYREF
  const WCHAR *v17; // [rsp+78h] [rbp-11h] BYREF
  __int64 v18; // [rsp+80h] [rbp-9h] BYREF
  __int128 v19; // [rsp+88h] [rbp-1h]
  __int128 v20; // [rsp+98h] [rbp+Fh]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  _BYTE v22[48]; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v23; // [rsp+100h] [rbp+77h] BYREF
  int v24; // [rsp+108h] [rbp+7Fh] BYREF

  if ( InputTraceLogging::Enabled(64, 0) )
  {
    if ( v4 )
    {
      CInputDest::GetBaseWindow(v4);
      UserWindow = CInputDest::GetUserWindow(v5);
      WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v22, (__int64)UserWindow, v7);
      v9 = *(_OWORD *)(WindowDetails + 16);
      v19 = *(_OWORD *)WindowDetails;
      v21 = *(_QWORD *)(WindowDetails + 32);
      v20 = v9;
      if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 64LL) )
      {
        v16 = v19;
        LODWORD(v23) = HIDWORD(v21);
        v24 = v21;
        v14 = HIDWORD(v20);
        v17 = (const WCHAR *)v20;
        v15 = DWORD2(v20);
        v18 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)&dword_14029AE30,
          (__int64)&unk_14027E78E,
          v10,
          v11,
          (__int64)&v18,
          &v17,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v24,
          (__int64)&v23,
          (const WCHAR **)&v16 + 1,
          (void **)&v16);
      }
    }
    else if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, v3) )
    {
      v23 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)&dword_14029AE30,
        byte_14027E81E,
        v12,
        v13,
        (__int64)&v23);
    }
  }
}
