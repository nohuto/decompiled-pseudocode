/*
 * XREFs of ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x140093810
 * Callers:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140093B30 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1400953B0 (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400953F8 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$01@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4444AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$01@@444@Z @ 0x140095590 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U-$_t.c)
 */

void __fastcall InputTraceLogging::Keyboard::KeyEvent(
        const struct tagINPUT_MESSAGE_SOURCE *a1,
        int a2,
        void *a3,
        int a4,
        int a5,
        int a6,
        HKL a7,
        char a8)
{
  __int64 v11; // rcx
  int v12; // r14d
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rcx
  int v32; // ebx
  unsigned __int64 v33; // rcx
  __int16 v34; // di
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  _BYTE v41[2]; // [rsp+98h] [rbp-29h] BYREF
  __int16 v42; // [rsp+9Ah] [rbp-27h] BYREF
  unsigned int v43; // [rsp+9Ch] [rbp-25h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp-21h] BYREF
  int v45; // [rsp+A4h] [rbp-1Dh] BYREF
  int v46; // [rsp+A8h] [rbp-19h] BYREF
  int v47; // [rsp+ACh] [rbp-15h] BYREF
  int v48; // [rsp+B0h] [rbp-11h] BYREF
  int v49; // [rsp+B4h] [rbp-Dh] BYREF
  int v50; // [rsp+B8h] [rbp-9h] BYREF
  void *v51; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v52; // [rsp+C8h] [rbp+7h] BYREF
  const char *v53; // [rsp+D0h] [rbp+Fh] BYREF

  v12 = 0;
  if ( (unsigned __int8)InputTraceLogging::Enabled(0x4000LL) )
  {
    v13 = *(_BYTE *)(W32GetUserSessionState(v11) + 14340) & 1;
    v16 = v13 | 2;
    if ( (*(_BYTE *)(W32GetUserSessionState(v14) + 14376) & 1) == 0 )
      v16 = v13;
    v18 = v16 | 4;
    if ( (*(_BYTE *)(W32GetUserSessionState(v15) + 14376) & 4) == 0 )
      v18 = v16;
    v20 = v18 | 8;
    if ( (*(_BYTE *)(W32GetUserSessionState(v17) + 14340) & 0x10) == 0 )
      v20 = v18;
    v22 = v20 | 0x10;
    if ( (*(_BYTE *)(W32GetUserSessionState(v19) + 14377) & 1) == 0 )
      v22 = v20;
    v24 = v22 | 0x20;
    if ( (*(_BYTE *)(W32GetUserSessionState(v21) + 14377) & 4) == 0 )
      v24 = v22;
    v26 = v24 | 0x40;
    if ( (*(_BYTE *)(W32GetUserSessionState(v23) + 14340) & 4) == 0 )
      v26 = v24;
    v28 = v26 | 0x80;
    if ( (*(_BYTE *)(W32GetUserSessionState(v25) + 14376) & 0x10) == 0 )
      v28 = v26;
    v30 = v28 | 0x100;
    if ( (*(_BYTE *)(W32GetUserSessionState(v27) + 14376) & 0x40) == 0 )
      v30 = v28;
    v32 = v30 | 0x200;
    if ( (*(_BYTE *)(W32GetUserSessionState(v29) + 14358) & 0x40) == 0 )
      v32 = v30;
    v34 = v32 | 0x400;
    if ( (*(_BYTE *)(W32GetUserSessionState(v31) + 14359) & 1) == 0 )
      v34 = v32;
    LOBYTE(v32) = a8;
    if ( (v34 & 0x648) == 0 )
    {
      if ( (unsigned __int8)(a8 - 48) <= 0x3Fu
        && (v33 = 0xFFFF07FFFFFFFFFFuLL, _bittest64((const __int64 *)&v33, (unsigned int)(v32 - 48)))
        || (unsigned __int8)(a8 + 70) <= 6u
        || (unsigned __int8)(a8 + 37) <= 7u )
      {
        LOBYTE(v32) = -1;
      }
    }
    if ( (unsigned int)dword_14029AE30 > 4
      && (qword_14029AE40 & 0x4000) != 0
      && (qword_14029AE48 & 0x4000) == qword_14029AE48 )
    {
      v43 = *(_DWORD *)(W32GetUserSessionState(v33) + 20524);
      v44 = *(_DWORD *)(W32GetUserSessionState(v43) + 20628);
      LOBYTE(v12) = a2 == 0;
      v35 = *(unsigned __int16 *)(W32GetUserSessionState(v44) + 12862);
      v46 = (int)a7;
      v47 = a6;
      v45 = v35;
      v36 = *((unsigned int *)a1 + 1);
      v48 = a5;
      v42 = v34;
      v41[0] = v32;
      v49 = a4;
      v51 = a3;
      v50 = v12;
      v37 = InputTraceLogging::OriginIdToString(v36);
      v38 = *(_DWORD *)a1;
      v52 = v37;
      v53 = InputTraceLogging::DeviceTypeToString(v38);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_14029AE30,
        (unsigned int)&unk_14027DDD1,
        v39,
        v40,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v50,
        (__int64)&v51,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)v41,
        (__int64)&v42,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v43);
    }
  }
}
