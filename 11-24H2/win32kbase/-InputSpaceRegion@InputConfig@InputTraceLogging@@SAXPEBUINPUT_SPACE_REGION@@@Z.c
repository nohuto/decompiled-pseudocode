/*
 * XREFs of ?InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z @ 0x14012C3C0
 * Callers:
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14012C280 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x140006940 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$07@@U1@U3@U1@U?$_tlgWrapSz@D@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$07@@353AEBU?$_tlgWrapSz@D@@33333333@Z @ 0x140006A08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapperByVal@$0.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401F405C (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::InputConfig::InputSpaceRegion(const struct INPUT_SPACE_REGION *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  _DWORD *v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+C0h] [rbp-80h] BYREF
  int v8; // [rsp+C4h] [rbp-7Ch] BYREF
  int v9; // [rsp+C8h] [rbp-78h] BYREF
  int v10; // [rsp+CCh] [rbp-74h] BYREF
  int v11; // [rsp+D0h] [rbp-70h] BYREF
  int v12; // [rsp+D4h] [rbp-6Ch] BYREF
  int v13; // [rsp+D8h] [rbp-68h] BYREF
  int v14; // [rsp+DCh] [rbp-64h] BYREF
  int v15; // [rsp+E0h] [rbp-60h] BYREF
  int v16; // [rsp+E4h] [rbp-5Ch] BYREF
  int v17; // [rsp+E8h] [rbp-58h] BYREF
  int v18; // [rsp+ECh] [rbp-54h] BYREF
  int v19; // [rsp+F0h] [rbp-50h] BYREF
  const char *v20; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+100h] [rbp-40h] BYREF
  __int64 v22; // [rsp+108h] [rbp-38h] BYREF
  __int16 v23; // [rsp+120h] [rbp-20h] BYREF
  __int16 v24; // [rsp+128h] [rbp-18h] BYREF
  int v25; // [rsp+130h] [rbp-10h] BYREF
  int v26; // [rsp+138h] [rbp-8h] BYREF

  if ( (*((_DWORD *)a1 + 4) & 2) != 0 )
  {
    if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 2LL) )
    {
      v4 = v3[41];
      v25 = v3[49];
      v26 = v3[48];
      v10 = v3[47];
      v11 = v3[46];
      v12 = v3[45];
      v13 = v3[44];
      v14 = v3[43];
      v15 = v3[42];
      v20 = InputTraceLogging::OrientationToString(v4);
      v16 = *(_DWORD *)(v5 + 44);
      v21 = *(_QWORD *)(v5 + 36);
      v17 = *(_DWORD *)(v5 + 32);
      v22 = *(_QWORD *)(v5 + 24);
      v23 = *(_WORD *)(v5 + 22);
      v24 = *(_WORD *)(v5 + 20);
      v19 = *(_DWORD *)(v5 + 12);
      v7 = *(_DWORD *)(v5 + 8);
      v8 = *(_DWORD *)(v5 + 4);
      v9 = *(_DWORD *)v5;
      v18 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14029AE30,
        (__int64)&unk_14027A79F,
        v5,
        v6,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v17,
        (__int64)&v21,
        (__int64)&v16,
        (void **)&v20,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v26,
        (__int64)&v25);
    }
  }
  else if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 2LL) )
  {
    v23 = *(_WORD *)(v1 + 22);
    v24 = *(_WORD *)(v1 + 20);
    v26 = *(_DWORD *)(v1 + 12);
    v9 = *(_DWORD *)(v1 + 8);
    v8 = *(_DWORD *)(v1 + 4);
    v7 = *(_DWORD *)v1;
    v25 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_14027A720,
      v1,
      v2,
      (__int64)&v7,
      (__int64)&v8,
      (__int64)&v9,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
  }
}
