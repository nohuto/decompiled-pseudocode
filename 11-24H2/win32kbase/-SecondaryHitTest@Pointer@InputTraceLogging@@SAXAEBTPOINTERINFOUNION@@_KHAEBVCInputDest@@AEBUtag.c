/*
 * XREFs of ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x14009306C
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FA358 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3443AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@44@Z @ 0x140008120 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U-$_tlgWrapSz@G@@U2@U2@U2.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140093B30 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140094508 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Pointer::SecondaryHitTest(
        const union POINTERINFOUNION *a1,
        __int64 a2,
        int a3,
        const struct CInputDest *a4,
        const struct tagPOINT *a5)
{
  struct tagWND *UserWindow; // rax
  __int64 WindowDetails; // rax
  __int128 v11; // xmm1
  __int64 v12; // r8
  __int64 v13; // r9
  LONG y; // [rsp+A8h] [rbp-80h] BYREF
  LONG x; // [rsp+ACh] [rbp-7Ch] BYREF
  int v16; // [rsp+B0h] [rbp-78h] BYREF
  int v17; // [rsp+B4h] [rbp-74h] BYREF
  int v18; // [rsp+B8h] [rbp-70h] BYREF
  int v19; // [rsp+BCh] [rbp-6Ch] BYREF
  int v20; // [rsp+C0h] [rbp-68h] BYREF
  int v21; // [rsp+C4h] [rbp-64h] BYREF
  int v22; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v23; // [rsp+D0h] [rbp-58h] BYREF
  const WCHAR *v24; // [rsp+E0h] [rbp-48h] BYREF
  HWND WindowHandle; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-30h] BYREF
  __int128 v28; // [rsp+100h] [rbp-28h]
  __int128 v29; // [rsp+110h] [rbp-18h]
  __int64 v30; // [rsp+120h] [rbp-8h]
  _BYTE v31[48]; // [rsp+128h] [rbp+0h] BYREF

  if ( (unsigned __int8)InputTraceLogging::Enabled(32LL) )
  {
    UserWindow = CInputDest::GetUserWindow(a4);
    WindowDetails = InputTraceLogging::GetWindowDetails(v31, UserWindow, 0LL);
    v11 = *(_OWORD *)(WindowDetails + 16);
    v28 = *(_OWORD *)WindowDetails;
    v30 = *(_QWORD *)(WindowDetails + 32);
    v29 = v11;
    if ( (unsigned int)dword_14029AE30 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_14029AE30, 32LL) )
      {
        y = a5->y;
        x = a5->x;
        v23 = v28;
        v16 = HIDWORD(v30);
        v17 = v30;
        v18 = HIDWORD(v29);
        v19 = DWORD2(v29);
        v24 = (const WCHAR *)v29;
        WindowHandle = CInputDest::GetWindowHandle(a4);
        v21 = *((_DWORD *)a1 + 3);
        v22 = *((_DWORD *)a1 + 1);
        v27 = *((_QWORD *)a1 + 10);
        v20 = a3;
        v26 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14029AE30,
          (__int64)&unk_14027B418,
          v12,
          v13,
          (__int64)&v27,
          (__int64)&v22,
          (__int64)&v26,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&WindowHandle,
          &v24,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (const WCHAR **)&v23 + 1,
          (void **)&v23,
          (__int64)&x,
          (__int64)&y);
      }
    }
  }
}
