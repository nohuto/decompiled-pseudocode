/*
 * XREFs of ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x140093E48
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14005EDC8 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400944F0 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140094508 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x140094EE4 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x140094F74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapSz@.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Mouse::SpeedHitTest(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        LONG *a4,
        LONG a5,
        bool a6)
{
  CInputDest *v10; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v12; // r8
  __int64 WindowDetails; // rax
  __int128 v14; // xmm1
  LONG v15; // eax
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r9d
  LONG y; // [rsp+A8h] [rbp-80h] BYREF
  LONG x; // [rsp+ACh] [rbp-7Ch] BYREF
  __int64 v24; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp-70h] BYREF
  LONG v26; // [rsp+C0h] [rbp-68h] BYREF
  LONG v27; // [rsp+C4h] [rbp-64h] BYREF
  LONG v28; // [rsp+C8h] [rbp-60h] BYREF
  LONG v29; // [rsp+CCh] [rbp-5Ch] BYREF
  __int128 v30; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-40h] BYREF
  HWND WindowHandle; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-30h] BYREF
  __int128 v35; // [rsp+100h] [rbp-28h]
  __int128 v36; // [rsp+110h] [rbp-18h]
  unsigned __int64 v37; // [rsp+120h] [rbp-8h]
  _BYTE v38[48]; // [rsp+128h] [rbp+0h] BYREF

  if ( dword_14029AE30 && (qword_14029AE40 & 0x40) != 0 && (qword_14029AE48 & 0x40) == qword_14029AE48 )
  {
    CInputDest::GetBaseWindow((CInputDest *)a4);
    UserWindow = CInputDest::GetUserWindow(v10);
    WindowDetails = InputTraceLogging::GetWindowDetails(v38, UserWindow, v12);
    v14 = *(_OWORD *)(WindowDetails + 16);
    v35 = *(_OWORD *)WindowDetails;
    v37 = *(_QWORD *)(WindowDetails + 32);
    v36 = v14;
    if ( a6 )
    {
      if ( (unsigned int)dword_14029AE30 > 4
        && (qword_14029AE40 & 0x40) != 0
        && (qword_14029AE48 & 0x40) == qword_14029AE48 )
      {
        y = a3->y;
        x = a3->x;
        LODWORD(v24) = a2->y;
        HIDWORD(v24) = a2->x;
        v30 = v35;
        v25 = __PAIR64__(v37, HIDWORD(v37));
        v26 = HIDWORD(v36);
        v31 = v36;
        v15 = a4[26];
        v27 = DWORD2(v36);
        v16 = (unsigned int)a4[1];
        v28 = v15;
        v32 = InputTraceLogging::RoutingModeToString(v16);
        v29 = a5;
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)a4);
        v34 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_14029AE30,
          (unsigned int)&unk_14027E8E7,
          v17,
          v18,
          (__int64)&v34,
          (__int64)&WindowHandle,
          (__int64)&v29,
          (__int64)&v32,
          (__int64)&v28,
          (__int64)&v31,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25 + 4,
          (__int64)&v25,
          (__int64)&v30 + 8,
          (__int64)&v30,
          (__int64)&v24 + 4,
          (__int64)&v24,
          (__int64)&x,
          (__int64)&y);
      }
    }
    else if ( (unsigned int)dword_14029AE30 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14029AE30, 64LL) )
    {
      v19 = (unsigned int)a4[1];
      v29 = a3->y;
      v28 = a3->x;
      v27 = a2->y;
      v26 = a2->x;
      WindowHandle = (HWND)*((_QWORD *)&v35 + 1);
      v34 = v35;
      v25 = v37;
      v24 = *((_QWORD *)&v36 + 1);
      v32 = v36;
      x = a4[26];
      v31 = InputTraceLogging::RoutingModeToString(v19);
      y = a5;
      *((_QWORD *)&v30 + 1) = CInputDest::GetWindowHandle((CInputDest *)a4);
      *(_QWORD *)&v30 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_14029AE30,
        (unsigned int)&unk_14027E9E1,
        v20,
        v21,
        (__int64)&v30,
        (__int64)&v30 + 8,
        (__int64)&y,
        (__int64)&v31,
        (__int64)&x,
        (__int64)&v32,
        (__int64)&v24,
        (__int64)&v24 + 4,
        (__int64)&v25,
        (__int64)&v25 + 4,
        (__int64)&WindowHandle,
        (__int64)&v34,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29);
    }
  }
}
