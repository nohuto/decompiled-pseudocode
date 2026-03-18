/*
 * XREFs of ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x140104C6C
 * Callers:
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x14020212C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 * Callees:
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1400AF81C (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400AF8C8 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@44444444443343445@Z @ 0x140143688 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U2@U_ea_140143688.c)
 */

void __fastcall InputTraceLogging::Pointer::GetPointerInfo(const struct tagPOINTER_INFO *a1)
{
  const char *v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // r9d
  int v8; // [rsp+D0h] [rbp-80h] BYREF
  int v9; // [rsp+D4h] [rbp-7Ch] BYREF
  int v10; // [rsp+D8h] [rbp-78h] BYREF
  int v11; // [rsp+DCh] [rbp-74h] BYREF
  int v12; // [rsp+E0h] [rbp-70h] BYREF
  int v13; // [rsp+E4h] [rbp-6Ch] BYREF
  int v14; // [rsp+E8h] [rbp-68h] BYREF
  int v15; // [rsp+ECh] [rbp-64h] BYREF
  int v16; // [rsp+F0h] [rbp-60h] BYREF
  int v17; // [rsp+F4h] [rbp-5Ch] BYREF
  int v18; // [rsp+F8h] [rbp-58h] BYREF
  int v19; // [rsp+FCh] [rbp-54h] BYREF
  const char *v20; // [rsp+100h] [rbp-50h] BYREF
  __int64 v21; // [rsp+108h] [rbp-48h] BYREF
  __int64 v22; // [rsp+110h] [rbp-40h] BYREF
  __int64 v23; // [rsp+118h] [rbp-38h] BYREF
  const char *v24; // [rsp+120h] [rbp-30h] BYREF
  __int64 v25; // [rsp+128h] [rbp-28h] BYREF
  int v26; // [rsp+148h] [rbp-8h] BYREF
  int v27; // [rsp+150h] [rbp+0h] BYREF
  int v28; // [rsp+158h] [rbp+8h] BYREF

  if ( (unsigned int)dword_14029AE30 > 5 && (qword_14029AE40 & 0x20) != 0 && (qword_14029AE48 & 0x20) == qword_14029AE48 )
  {
    v1 = InputTraceLogging::ButtonChangeTypeToString(*((_DWORD *)a1 + 22));
    v3 = *(_QWORD *)(v2 + 80);
    v4 = *(_DWORD *)v2;
    v20 = v1;
    v26 = *(_DWORD *)(v2 + 76);
    v27 = *(_DWORD *)(v2 + 68);
    v28 = *(_DWORD *)(v2 + 64);
    v22 = *(_QWORD *)(v2 + 24);
    v23 = *(_QWORD *)(v2 + 16);
    v8 = *(_DWORD *)(v2 + 72);
    v9 = *(_DWORD *)(v2 + 60);
    v10 = *(_DWORD *)(v2 + 56);
    v11 = *(_DWORD *)(v2 + 44);
    v12 = *(_DWORD *)(v2 + 40);
    v13 = *(_DWORD *)(v2 + 52);
    v14 = *(_DWORD *)(v2 + 48);
    v15 = *(_DWORD *)(v2 + 36);
    v16 = *(_DWORD *)(v2 + 32);
    v17 = *(_DWORD *)(v2 + 12);
    v21 = v3;
    v24 = InputTraceLogging::PointerTypeToString(v4);
    v18 = *(_DWORD *)(v5 + 8);
    v19 = *(_DWORD *)(v5 + 4);
    v25 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_14027AE29,
      v5,
      v7,
      (__int64)&v25,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v24,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v28,
      (__int64)&v21,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v20);
  }
}
