/*
 * XREFs of ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1400F5238
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x14005FAA0 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400AF8C8 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapSz@G@@U4@U4@U4@U4@U4@U4@U4@U4@U2@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapSz@G@@6666666644344@Z @ 0x140128BA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U2@U-$_tlgWrapSz@.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestRequest(__int64 a1, const struct _InputHitTestRequest *a2)
{
  int v2; // ecx
  const wchar_t *v3; // rax
  const wchar_t *v4; // rax
  const wchar_t *v5; // rax
  const wchar_t *v6; // rax
  const wchar_t *v7; // rax
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  bool v11; // zf
  int v12; // ecx
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // r8d
  int v17; // [rsp+C0h] [rbp-80h] BYREF
  int v18; // [rsp+C4h] [rbp-7Ch] BYREF
  int v19; // [rsp+C8h] [rbp-78h] BYREF
  int v20; // [rsp+CCh] [rbp-74h] BYREF
  int v21; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-68h] BYREF
  const wchar_t *v23; // [rsp+E0h] [rbp-60h] BYREF
  const wchar_t *v24; // [rsp+E8h] [rbp-58h] BYREF
  const wchar_t *v25; // [rsp+F0h] [rbp-50h] BYREF
  const wchar_t *v26; // [rsp+F8h] [rbp-48h] BYREF
  const wchar_t *v27; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v28; // [rsp+108h] [rbp-38h] BYREF
  const wchar_t *v29; // [rsp+110h] [rbp-30h] BYREF
  const wchar_t *v30; // [rsp+118h] [rbp-28h] BYREF
  const wchar_t *v31; // [rsp+120h] [rbp-20h] BYREF
  const char *v32; // [rsp+128h] [rbp-18h] BYREF
  __int64 v33; // [rsp+130h] [rbp-10h] BYREF
  int v34; // [rsp+160h] [rbp+20h] BYREF
  int v35; // [rsp+168h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 2) != 0 && (qword_14029AE48 & 2) == qword_14029AE48 )
  {
    v2 = *((_DWORD *)a2 + 16);
    v34 = *((_DWORD *)a2 + 14);
    v35 = *((_DWORD *)a2 + 20);
    v22 = *((_QWORD *)a2 + 9);
    v17 = *((_DWORD *)a2 + 17);
    v3 = L"ControlDown";
    if ( (v2 & 0x100) == 0 )
      v3 = &word_14025E168;
    v18 = v2;
    v23 = v3;
    v4 = L"EraserDown";
    if ( (v2 & 0x80u) == 0 )
      v4 = &word_14025E168;
    v24 = v4;
    v5 = L"BarrelButtonDown";
    if ( (v2 & 0x40) == 0 )
      v5 = &word_14025E168;
    v25 = v5;
    v6 = L"NoHoverPointer";
    if ( (v2 & 0x20) == 0 )
      v6 = &word_14025E168;
    v26 = v6;
    v7 = L"TouchTargeting";
    if ( (v2 & 0x10) == 0 )
      v7 = &word_14025E168;
    v27 = v7;
    v8 = L"ButtonDown";
    if ( (v2 & 8) == 0 )
      v8 = &word_14025E168;
    v28 = v8;
    v9 = L"WheelHorizontal";
    if ( (v2 & 4) == 0 )
      v9 = &word_14025E168;
    v29 = v9;
    v10 = L"WheelIncreasing";
    if ( (v2 & 2) == 0 )
      v10 = &word_14025E168;
    v11 = (v2 & 1) == 0;
    v12 = *(_DWORD *)a2;
    v30 = v10;
    v13 = L"MouseWheel";
    if ( v11 )
      v13 = &word_14025E168;
    v31 = v13;
    v19 = *((_DWORD *)a2 + 6);
    v20 = *((_DWORD *)a2 + 5);
    v32 = InputTraceLogging::PointerTypeToString(v12);
    v21 = *(_DWORD *)(v14 + 12);
    v33 = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_14027E306,
      v16,
      v15,
      (__int64)&v33,
      (__int64)&v21,
      (__int64)&v32,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v22,
      (__int64)&v35,
      (__int64)&v34);
  }
}
