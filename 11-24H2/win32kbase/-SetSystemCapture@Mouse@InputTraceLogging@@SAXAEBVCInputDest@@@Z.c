/*
 * XREFs of ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x1400934E0
 * Callers:
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x14021E884 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4443AEBU?$_tlgWrapSz@D@@@Z @ 0x140009838 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemp.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140093B30 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400944F0 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140094508 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Mouse::SetSystemCapture(const struct CInputDest *a1)
{
  CInputDest *v1; // r9
  CInputDest *v2; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v4; // r8
  __int64 WindowDetails; // rax
  __int128 v6; // xmm1
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+60h] [rbp-19h] BYREF
  __int128 v10; // [rsp+68h] [rbp-11h] BYREF
  const WCHAR *v11; // [rsp+78h] [rbp-1h] BYREF
  __int128 v12; // [rsp+80h] [rbp+7h]
  __int128 v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+A0h] [rbp+27h]
  _BYTE v15[40]; // [rsp+A8h] [rbp+2Fh] BYREF
  int v16; // [rsp+E8h] [rbp+6Fh] BYREF
  int v17; // [rsp+F0h] [rbp+77h] BYREF
  int v18; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( (unsigned __int8)InputTraceLogging::Enabled(64LL) )
  {
    CInputDest::GetBaseWindow(v1);
    UserWindow = CInputDest::GetUserWindow(v2);
    WindowDetails = InputTraceLogging::GetWindowDetails(v15, UserWindow, v4);
    v6 = *(_OWORD *)(WindowDetails + 16);
    v12 = *(_OWORD *)WindowDetails;
    v14 = *(_QWORD *)(WindowDetails + 32);
    v13 = v6;
    if ( (unsigned int)dword_14029AE30 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_14029AE30, 64LL) )
      {
        v10 = v12;
        v16 = HIDWORD(v14);
        v17 = v14;
        v18 = HIDWORD(v13);
        v11 = (const WCHAR *)v13;
        v9 = DWORD2(v13);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (__int64)&dword_14029AE30,
          (__int64)&unk_14027E6AE,
          v7,
          v8,
          &v11,
          (__int64)&v9,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (const WCHAR **)&v10 + 1,
          (void **)&v10);
      }
    }
  }
}
