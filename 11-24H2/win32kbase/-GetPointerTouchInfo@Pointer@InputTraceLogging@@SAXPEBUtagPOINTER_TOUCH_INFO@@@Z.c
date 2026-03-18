/*
 * XREFs of ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x14012CC40
 * Callers:
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x14020212C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@44444444443343445444444444444@Z @ 0x140008A30 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U2@U_ea_140008A30.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1400AF81C (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400AF8C8 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::Pointer::GetPointerTouchInfo(const struct tagPOINTER_TOUCH_INFO *a1)
{
  int v1; // eax
  int v2; // ecx
  const char *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // [rsp+130h] [rbp-80h] BYREF
  int v11; // [rsp+134h] [rbp-7Ch] BYREF
  int v12; // [rsp+138h] [rbp-78h] BYREF
  int v13; // [rsp+13Ch] [rbp-74h] BYREF
  int v14; // [rsp+140h] [rbp-70h] BYREF
  int v15; // [rsp+144h] [rbp-6Ch] BYREF
  int v16; // [rsp+148h] [rbp-68h] BYREF
  int v17; // [rsp+14Ch] [rbp-64h] BYREF
  int v18; // [rsp+150h] [rbp-60h] BYREF
  int v19; // [rsp+154h] [rbp-5Ch] BYREF
  int v20; // [rsp+158h] [rbp-58h] BYREF
  int v21; // [rsp+15Ch] [rbp-54h] BYREF
  int v22; // [rsp+160h] [rbp-50h] BYREF
  int v23; // [rsp+164h] [rbp-4Ch] BYREF
  int v24; // [rsp+168h] [rbp-48h] BYREF
  int v25; // [rsp+16Ch] [rbp-44h] BYREF
  int v26; // [rsp+170h] [rbp-40h] BYREF
  int v27; // [rsp+174h] [rbp-3Ch] BYREF
  int v28; // [rsp+178h] [rbp-38h] BYREF
  int v29; // [rsp+17Ch] [rbp-34h] BYREF
  int v30; // [rsp+180h] [rbp-30h] BYREF
  int v31; // [rsp+184h] [rbp-2Ch] BYREF
  int v32; // [rsp+188h] [rbp-28h] BYREF
  int v33; // [rsp+18Ch] [rbp-24h] BYREF
  const char *v34; // [rsp+190h] [rbp-20h] BYREF
  __int64 v35; // [rsp+198h] [rbp-18h] BYREF
  __int64 v36; // [rsp+1A0h] [rbp-10h] BYREF
  __int64 v37; // [rsp+1A8h] [rbp-8h] BYREF
  const char *v38; // [rsp+1B0h] [rbp+0h] BYREF
  __int64 v39; // [rsp+1B8h] [rbp+8h] BYREF
  int v40; // [rsp+1D8h] [rbp+28h] BYREF
  int v41; // [rsp+1E0h] [rbp+30h] BYREF
  int v42; // [rsp+1E8h] [rbp+38h] BYREF

  if ( (unsigned int)dword_14029AE30 > 5 && (qword_14029AE40 & 0x20) != 0 && (qword_14029AE48 & 0x20) == qword_14029AE48 )
  {
    v40 = *((_DWORD *)a1 + 35);
    v41 = *((_DWORD *)a1 + 34);
    v42 = *((_DWORD *)a1 + 33);
    v10 = *((_DWORD *)a1 + 32);
    v11 = *((_DWORD *)a1 + 31);
    v12 = *((_DWORD *)a1 + 30);
    v13 = *((_DWORD *)a1 + 29);
    v14 = *((_DWORD *)a1 + 28);
    v15 = *((_DWORD *)a1 + 27);
    v16 = *((_DWORD *)a1 + 26);
    v17 = *((_DWORD *)a1 + 25);
    v1 = *((_DWORD *)a1 + 24);
    v2 = *((_DWORD *)a1 + 22);
    v18 = v1;
    v3 = InputTraceLogging::ButtonChangeTypeToString(v2);
    v5 = *(_QWORD *)(v4 + 80);
    v6 = *(_DWORD *)v4;
    v34 = v3;
    v19 = *(_DWORD *)(v4 + 76);
    v20 = *(_DWORD *)(v4 + 68);
    v21 = *(_DWORD *)(v4 + 64);
    v36 = *(_QWORD *)(v4 + 24);
    v37 = *(_QWORD *)(v4 + 16);
    v22 = *(_DWORD *)(v4 + 72);
    v23 = *(_DWORD *)(v4 + 60);
    v24 = *(_DWORD *)(v4 + 56);
    v25 = *(_DWORD *)(v4 + 44);
    v26 = *(_DWORD *)(v4 + 40);
    v27 = *(_DWORD *)(v4 + 52);
    v28 = *(_DWORD *)(v4 + 48);
    v29 = *(_DWORD *)(v4 + 36);
    v30 = *(_DWORD *)(v4 + 32);
    v31 = *(_DWORD *)(v4 + 12);
    v35 = v5;
    v38 = InputTraceLogging::PointerTypeToString(v6);
    v32 = *(_DWORD *)(v7 + 8);
    v33 = *(_DWORD *)(v7 + 4);
    v39 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027B0B9,
      v7,
      v9,
      (__int64)&v39,
      (__int64)&v33,
      (__int64)&v32,
      (void **)&v38,
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
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v21,
      (__int64)&v35,
      (__int64)&v20,
      (__int64)&v19,
      (void **)&v34,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40);
  }
}
