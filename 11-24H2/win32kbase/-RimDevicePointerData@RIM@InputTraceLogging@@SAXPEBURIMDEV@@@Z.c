/*
 * XREFs of ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400AFDD8
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017A974 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400AF764 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?PointerInjectionType@InputTraceLogging@@CAPEBDW4tagPOINTER_INJECTION_TYPE@@@Z @ 0x1400B02D0 (-PointerInjectionType@InputTraceLogging@@CAPEBDW4tagPOINTER_INJECTION_TYPE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U1@U2@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5555555555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@63455555555555555555@Z @ 0x1400B0318 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444344443@Z @ 0x1400B1AA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U.c)
 */

void __fastcall InputTraceLogging::RIM::RimDevicePointerData(const struct RIMDEV *a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // edx
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+130h] [rbp-80h] BYREF
  int v14; // [rsp+134h] [rbp-7Ch] BYREF
  int v15; // [rsp+138h] [rbp-78h] BYREF
  int v16; // [rsp+13Ch] [rbp-74h] BYREF
  int v17; // [rsp+140h] [rbp-70h] BYREF
  int v18; // [rsp+144h] [rbp-6Ch] BYREF
  int v19; // [rsp+148h] [rbp-68h] BYREF
  int v20; // [rsp+14Ch] [rbp-64h] BYREF
  int v21; // [rsp+150h] [rbp-60h] BYREF
  int v22; // [rsp+154h] [rbp-5Ch] BYREF
  int v23; // [rsp+158h] [rbp-58h] BYREF
  int v24; // [rsp+15Ch] [rbp-54h] BYREF
  int v25; // [rsp+160h] [rbp-50h] BYREF
  int v26; // [rsp+164h] [rbp-4Ch] BYREF
  int v27; // [rsp+168h] [rbp-48h] BYREF
  int v28; // [rsp+16Ch] [rbp-44h] BYREF
  int v29; // [rsp+170h] [rbp-40h] BYREF
  int v30; // [rsp+174h] [rbp-3Ch] BYREF
  int v31; // [rsp+178h] [rbp-38h] BYREF
  int v32; // [rsp+17Ch] [rbp-34h] BYREF
  int v33; // [rsp+180h] [rbp-30h] BYREF
  int v34; // [rsp+184h] [rbp-2Ch] BYREF
  int v35; // [rsp+188h] [rbp-28h] BYREF
  int v36; // [rsp+18Ch] [rbp-24h] BYREF
  const struct RIMDEV *v37; // [rsp+190h] [rbp-20h] BYREF
  const char *v38; // [rsp+198h] [rbp-18h] BYREF
  const struct RIMDEV *v39; // [rsp+1A0h] [rbp-10h] BYREF
  __int64 v40; // [rsp+1A8h] [rbp-8h] BYREF
  __int64 v41; // [rsp+1B0h] [rbp+0h] BYREF
  _QWORD v42[5]; // [rsp+1B8h] [rbp+8h] BYREF
  int v43; // [rsp+1F0h] [rbp+40h] BYREF
  int v44; // [rsp+1F8h] [rbp+48h] BYREF
  int v45; // [rsp+200h] [rbp+50h] BYREF
  int v46; // [rsp+208h] [rbp+58h] BYREF

  v4 = dword_14029AE30;
  v6 = *((_QWORD *)a1 + 57);
  v7 = qword_14029AE48;
  if ( (unsigned int)dword_14029AE30 > 4
    && (qword_14029AE40 & 0x100) != 0
    && (qword_14029AE48 & 0x100) == qword_14029AE48 )
  {
    v8 = *(_DWORD *)(v6 + 368);
    v43 = -__CFSHR__(v8, 16);
    v44 = *(_DWORD *)(v6 + 1056);
    v45 = -__CFSHR__(v8, 15);
    v46 = -__CFSHR__(v8, 14);
    v25 = -__CFSHR__(v8, 13);
    v26 = -__CFSHR__(v8, 12);
    v27 = -__CFSHR__(v8, 11);
    v28 = -__CFSHR__(v8, 10);
    v29 = -__CFSHR__(v8, 9);
    v30 = -__CFSHR__(v8, 8);
    v31 = -__CFSHR__(v8, 7);
    v32 = -__CFSHR__(v8, 6);
    v33 = -__CFSHR__(v8, 5);
    v34 = -__CFSHR__(v8, 4);
    v35 = -__CFSHR__(v8, 3);
    v36 = -__CFSHR__(v8, 2);
    v13 = -(v8 & 1);
    v40 = InputTraceLogging::PointerInjectionType(*(unsigned int *)(v6 + 364));
    v41 = *(_QWORD *)(v6 + 792);
    v42[0] = v6 + 904;
    v37 = (const struct RIMDEV *)(v6 + 376);
    v14 = *(_DWORD *)(v6 + 152);
    v15 = *(_DWORD *)(v6 + 148);
    v16 = *(_DWORD *)(v6 + 144);
    v9 = *((_QWORD *)a1 + 56);
    v17 = *(_DWORD *)(v6 + 140);
    v18 = *(_DWORD *)(v6 + 136);
    v19 = *(_DWORD *)(v6 + 132);
    v20 = *(_DWORD *)(v6 + 128);
    v21 = *(_DWORD *)(v6 + 124);
    v22 = *(_DWORD *)(v6 + 776);
    v23 = *(unsigned __int16 *)(v9 + 18);
    v10 = *(unsigned __int16 *)(v9 + 16);
    LODWORD(v9) = *(_DWORD *)(v6 + 24);
    v24 = v10;
    v38 = InputTraceLogging::PointerDeviceTypeToString(v9);
    v39 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_14027721F,
      v11,
      v12,
      (__int64)&v39,
      (__int64)&v38,
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
      (__int64)&v37,
      (__int64)v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v13,
      (__int64)&v36,
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
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43);
    v7 = qword_14029AE48;
    v4 = dword_14029AE30;
  }
  if ( *(_DWORD *)(v6 + 156) && v4 > 4 && (qword_14029AE40 & 0x100) != 0 && (v7 & 0x100) == v7 )
  {
    v39 = *(const struct RIMDEV **)(v6 + 240);
    v43 = *(_DWORD *)(v6 + 264);
    v44 = *(_DWORD *)(v6 + 260);
    v45 = *(_DWORD *)(v6 + 256);
    v46 = *(_DWORD *)(v6 + 252);
    v38 = *(const char **)(v6 + 228);
    v24 = *(_DWORD *)(v6 + 220);
    v23 = *(_DWORD *)(v6 + 216);
    v22 = *(_DWORD *)(v6 + 212);
    v21 = *(_DWORD *)(v6 + 208);
    v20 = *(_DWORD *)(v6 + 188);
    v19 = *(_DWORD *)(v6 + 184);
    v18 = *(_DWORD *)(v6 + 180);
    v17 = *(_DWORD *)(v6 + 176);
    v16 = *(_DWORD *)(v6 + 172);
    v15 = *(_DWORD *)(v6 + 168);
    v14 = *(_DWORD *)(v6 + 164);
    v13 = *(_DWORD *)(v6 + 160);
    v37 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_140277112,
      a3,
      a4,
      (__int64)&v37,
      (__int64)&v13,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)&v18,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v22,
      (__int64)&v23,
      (__int64)&v24,
      (__int64)&v38,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v39);
  }
}
