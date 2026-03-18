/*
 * XREFs of ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x14013DD00
 * Callers:
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x14013DA30 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333333333333333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400017A4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall TraceLoggingPTPGestureUsageEvent(const struct tagTPTELEMSTATE *a1)
{
  __int64 v1; // rcx
  int *v2; // r8
  __int64 v3; // r9
  int v4; // [rsp+F0h] [rbp-80h] BYREF
  int v5; // [rsp+F4h] [rbp-7Ch] BYREF
  int v6; // [rsp+F8h] [rbp-78h] BYREF
  int v7; // [rsp+FCh] [rbp-74h] BYREF
  int v8; // [rsp+100h] [rbp-70h] BYREF
  int v9; // [rsp+104h] [rbp-6Ch] BYREF
  int v10; // [rsp+108h] [rbp-68h] BYREF
  int v11; // [rsp+10Ch] [rbp-64h] BYREF
  int v12; // [rsp+110h] [rbp-60h] BYREF
  int v13; // [rsp+114h] [rbp-5Ch] BYREF
  int v14; // [rsp+118h] [rbp-58h] BYREF
  int v15; // [rsp+11Ch] [rbp-54h] BYREF
  int v16; // [rsp+120h] [rbp-50h] BYREF
  int v17; // [rsp+124h] [rbp-4Ch] BYREF
  int v18; // [rsp+128h] [rbp-48h] BYREF
  int v19; // [rsp+12Ch] [rbp-44h] BYREF
  int v20; // [rsp+130h] [rbp-40h] BYREF
  int v21; // [rsp+134h] [rbp-3Ch] BYREF
  int v22; // [rsp+138h] [rbp-38h] BYREF
  int v23; // [rsp+13Ch] [rbp-34h] BYREF
  int v24; // [rsp+140h] [rbp-30h] BYREF
  int v25; // [rsp+144h] [rbp-2Ch] BYREF
  __int64 v26; // [rsp+148h] [rbp-28h] BYREF
  int v27; // [rsp+168h] [rbp-8h] BYREF
  int v28; // [rsp+170h] [rbp+0h] BYREF
  int v29; // [rsp+178h] [rbp+8h] BYREF

  if ( (unsigned int)dword_14029AE68 > 5 && tlgKeywordOn((__int64)&dword_14029AE68, 0x400000000000LL) )
  {
    v27 = v2[24];
    v28 = v2[23];
    v29 = v2[22];
    v4 = v2[21];
    v5 = v2[20];
    v6 = v2[19];
    v7 = v2[18];
    v8 = v2[17];
    v9 = v2[16];
    v10 = v2[15];
    v11 = v2[14];
    v12 = v2[13];
    v13 = v2[12];
    v14 = v2[11];
    v15 = v2[10];
    v16 = v2[9];
    v17 = v2[8];
    v18 = v2[7];
    v19 = v2[6];
    v20 = v2[5];
    v21 = v2[4];
    v22 = v2[3];
    v23 = v2[2];
    v24 = v2[1];
    v25 = *v2;
    v26 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v1,
      (__int64)&unk_14027D1F8,
      (__int64)v2,
      v3,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
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
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26);
  }
}
