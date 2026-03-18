/*
 * XREFs of ?Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z @ 0x1401B1408
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x14012BEC0 (UpdateTPCurrentActiveState.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333@Z @ 0x1400033A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U_ea_1400033A8.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::PTP::Settings(const struct tagTOUCHPAD_PARAMETERS_V3 *a1)
{
  _DWORD *v1; // r8
  __int64 v2; // r9
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // [rsp+110h] [rbp-80h] BYREF
  int v7; // [rsp+114h] [rbp-7Ch] BYREF
  int v8; // [rsp+118h] [rbp-78h] BYREF
  int v9; // [rsp+11Ch] [rbp-74h] BYREF
  int v10; // [rsp+120h] [rbp-70h] BYREF
  int v11; // [rsp+124h] [rbp-6Ch] BYREF
  int v12; // [rsp+128h] [rbp-68h] BYREF
  int v13; // [rsp+12Ch] [rbp-64h] BYREF
  int v14; // [rsp+130h] [rbp-60h] BYREF
  int v15; // [rsp+134h] [rbp-5Ch] BYREF
  int v16; // [rsp+138h] [rbp-58h] BYREF
  int v17; // [rsp+13Ch] [rbp-54h] BYREF
  int v18; // [rsp+140h] [rbp-50h] BYREF
  int v19; // [rsp+144h] [rbp-4Ch] BYREF
  int v20; // [rsp+148h] [rbp-48h] BYREF
  int v21; // [rsp+14Ch] [rbp-44h] BYREF
  int v22; // [rsp+150h] [rbp-40h] BYREF
  int v23; // [rsp+154h] [rbp-3Ch] BYREF
  int v24; // [rsp+158h] [rbp-38h] BYREF
  int v25; // [rsp+15Ch] [rbp-34h] BYREF
  int v26; // [rsp+160h] [rbp-30h] BYREF
  int v27; // [rsp+164h] [rbp-2Ch] BYREF
  int v28; // [rsp+168h] [rbp-28h] BYREF
  int v29; // [rsp+16Ch] [rbp-24h] BYREF
  int v30; // [rsp+170h] [rbp-20h] BYREF
  _DWORD v31[3]; // [rsp+174h] [rbp-1Ch] BYREF
  int v32; // [rsp+198h] [rbp+8h] BYREF
  int v33; // [rsp+1A0h] [rbp+10h] BYREF
  int v34; // [rsp+1A8h] [rbp+18h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 128LL) )
  {
    v3 = v1[11];
    v32 = -(v1[12] & 1);
    v33 = -__CFSHR__(v3, 3);
    v34 = -__CFSHR__(v3, 2);
    v7 = v1[10];
    v8 = v1[9];
    v9 = v1[8];
    v10 = v1[7];
    v11 = v1[6];
    v6 = -(v3 & 1);
    v4 = v1[4];
    v12 = -__CFSHR__(v4, 10);
    v13 = -__CFSHR__(v4, 9);
    v14 = -__CFSHR__(v4, 8);
    v15 = -__CFSHR__(v4, 7);
    v16 = -__CFSHR__(v4, 6);
    v17 = -__CFSHR__(v4, 5);
    v18 = -__CFSHR__(v4, 4);
    v19 = -__CFSHR__(v4, 3);
    v20 = -__CFSHR__(v4, 2);
    v21 = -(v4 & 1);
    v5 = v1[3];
    v22 = -__CFSHR__(v5, 7);
    v23 = -__CFSHR__(v5, 6);
    v24 = -__CFSHR__(v5, 5);
    v25 = -__CFSHR__(v5, 4);
    v26 = -__CFSHR__(v5, 3);
    v27 = -__CFSHR__(v5, 2);
    v29 = v1[2];
    v30 = v1[1];
    v31[0] = *v1;
    v28 = -(v5 & 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_1402752ED,
      (__int64)v1,
      v2,
      (__int64)v31,
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
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32);
  }
}
