/*
 * XREFs of ?HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x14009418C
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x14005FAA0 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400944F0 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x140094508 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U4@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@446444444444444444444@Z @ 0x140094B04 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U3.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x140094EE4 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestResult(
        __int64 a1,
        int a2,
        const struct _InputHitTestResult *a3,
        const struct CInputDest *a4)
{
  int v4; // edi
  CInputDest *v9; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v11; // r8
  __int64 WindowDetails; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp+128h] [rbp-80h] BYREF
  int v19; // [rsp+12Ch] [rbp-7Ch] BYREF
  int v20; // [rsp+130h] [rbp-78h] BYREF
  int v21; // [rsp+134h] [rbp-74h] BYREF
  int v22; // [rsp+138h] [rbp-70h] BYREF
  int v23; // [rsp+13Ch] [rbp-6Ch] BYREF
  int v24; // [rsp+140h] [rbp-68h] BYREF
  int v25; // [rsp+144h] [rbp-64h] BYREF
  int v26; // [rsp+148h] [rbp-60h] BYREF
  int v27; // [rsp+14Ch] [rbp-5Ch] BYREF
  int v28; // [rsp+150h] [rbp-58h] BYREF
  int v29; // [rsp+154h] [rbp-54h] BYREF
  int v30; // [rsp+158h] [rbp-50h] BYREF
  int v31; // [rsp+15Ch] [rbp-4Ch] BYREF
  int v32; // [rsp+160h] [rbp-48h] BYREF
  int v33; // [rsp+164h] [rbp-44h] BYREF
  int v34; // [rsp+168h] [rbp-40h] BYREF
  int v35; // [rsp+16Ch] [rbp-3Ch] BYREF
  int v36; // [rsp+170h] [rbp-38h] BYREF
  int v37; // [rsp+174h] [rbp-34h] BYREF
  int v38; // [rsp+178h] [rbp-30h] BYREF
  int v39; // [rsp+17Ch] [rbp-2Ch] BYREF
  int v40; // [rsp+180h] [rbp-28h] BYREF
  int v41; // [rsp+184h] [rbp-24h] BYREF
  int v42; // [rsp+188h] [rbp-20h] BYREF
  __int64 v43; // [rsp+190h] [rbp-18h] BYREF
  __int128 v44; // [rsp+198h] [rbp-10h] BYREF
  __int64 v45; // [rsp+1A8h] [rbp+0h] BYREF
  __int64 v46; // [rsp+1B0h] [rbp+8h] BYREF
  __int64 v47; // [rsp+1B8h] [rbp+10h] BYREF
  __int64 v48; // [rsp+1C0h] [rbp+18h] BYREF
  __int128 v49; // [rsp+1C8h] [rbp+20h]
  __int128 v50; // [rsp+1D8h] [rbp+30h]
  __int64 v51; // [rsp+1E8h] [rbp+40h]
  _BYTE v52[120]; // [rsp+1F0h] [rbp+48h] BYREF
  __int128 v53; // [rsp+268h] [rbp+C0h]

  v4 = 0;
  if ( dword_14029AE30 )
  {
    if ( (qword_14029AE40 & 2) != 0 && (qword_14029AE48 & 2) == qword_14029AE48 )
    {
      CInputDest::GetBaseWindow(a4);
      UserWindow = CInputDest::GetUserWindow(v9);
      WindowDetails = InputTraceLogging::GetWindowDetails(v52, UserWindow, v11);
      v13 = *(_OWORD *)(WindowDetails + 16);
      v49 = *(_OWORD *)WindowDetails;
      v51 = *(_QWORD *)(WindowDetails + 32);
      v14 = *((_OWORD *)a4 + 5);
      v50 = v13;
      v53 = v14;
      if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 2) != 0 && (qword_14029AE48 & 2) == qword_14029AE48 )
      {
        v15 = *((unsigned int *)a3 + 25);
        v18 = *((_DWORD *)a3 + 19);
        v19 = *((_DWORD *)a3 + 18);
        v20 = *((_DWORD *)a3 + 17);
        v21 = *((_DWORD *)a3 + 16);
        v22 = *((_DWORD *)a3 + 15);
        v23 = *((_DWORD *)a3 + 14);
        v24 = *((_DWORD *)a3 + 13);
        v25 = *((_DWORD *)a3 + 12);
        v26 = *((_DWORD *)a3 + 11);
        v27 = *((_DWORD *)a3 + 10);
        v28 = *((_DWORD *)a3 + 9);
        v29 = *((_DWORD *)a3 + 8);
        v30 = *((_DWORD *)a3 + 7);
        v31 = *((_DWORD *)a3 + 6);
        v32 = *((_DWORD *)a3 + 5);
        v33 = *((_DWORD *)a3 + 4);
        v34 = *((_DWORD *)a3 + 26);
        v35 = *((_DWORD *)a3 + 24);
        v43 = InputTraceLogging::RoutingModeToString(v15);
        v36 = *((_DWORD *)a3 + 20);
        if ( HIDWORD(v53) == 2 )
          v4 = -(BYTE8(v53) & 1);
        v44 = v49;
        v38 = HIDWORD(v51);
        v39 = v51;
        v37 = v4;
        v40 = HIDWORD(v50);
        v45 = v50;
        v46 = *(_QWORD *)a3;
        v47 = *((_QWORD *)a3 + 1);
        v41 = DWORD2(v50);
        v42 = a2;
        v48 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_14029AE30,
          (unsigned int)&unk_14027E1B2,
          v16,
          v17,
          (__int64)&v48,
          (__int64)&v42,
          (__int64)&v47,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v44 + 8,
          (__int64)&v44,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v43,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18);
      }
    }
  }
}
