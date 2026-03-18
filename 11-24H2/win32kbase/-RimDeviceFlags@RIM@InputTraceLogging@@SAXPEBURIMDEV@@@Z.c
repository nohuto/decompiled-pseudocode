/*
 * XREFs of ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400B16FC
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017A974 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444444444444444444444444@Z @ 0x1400B0894 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1400B0894.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceFlags(const struct RIMDEV *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // [rsp+168h] [rbp-80h] BYREF
  int v9; // [rsp+16Ch] [rbp-7Ch] BYREF
  int v10; // [rsp+170h] [rbp-78h] BYREF
  int v11; // [rsp+174h] [rbp-74h] BYREF
  int v12; // [rsp+178h] [rbp-70h] BYREF
  int v13; // [rsp+17Ch] [rbp-6Ch] BYREF
  int v14; // [rsp+180h] [rbp-68h] BYREF
  int v15; // [rsp+184h] [rbp-64h] BYREF
  int v16; // [rsp+188h] [rbp-60h] BYREF
  int v17; // [rsp+18Ch] [rbp-5Ch] BYREF
  int v18; // [rsp+190h] [rbp-58h] BYREF
  int v19; // [rsp+194h] [rbp-54h] BYREF
  int v20; // [rsp+198h] [rbp-50h] BYREF
  int v21; // [rsp+19Ch] [rbp-4Ch] BYREF
  int v22; // [rsp+1A0h] [rbp-48h] BYREF
  int v23; // [rsp+1A4h] [rbp-44h] BYREF
  int v24; // [rsp+1A8h] [rbp-40h] BYREF
  int v25; // [rsp+1ACh] [rbp-3Ch] BYREF
  int v26; // [rsp+1B0h] [rbp-38h] BYREF
  int v27; // [rsp+1B4h] [rbp-34h] BYREF
  int v28; // [rsp+1B8h] [rbp-30h] BYREF
  int v29; // [rsp+1BCh] [rbp-2Ch] BYREF
  int v30; // [rsp+1C0h] [rbp-28h] BYREF
  int v31; // [rsp+1C4h] [rbp-24h] BYREF
  int v32; // [rsp+1C8h] [rbp-20h] BYREF
  int v33; // [rsp+1CCh] [rbp-1Ch] BYREF
  int v34; // [rsp+1D0h] [rbp-18h] BYREF
  int v35; // [rsp+1D4h] [rbp-14h] BYREF
  int v36; // [rsp+1D8h] [rbp-10h] BYREF
  int v37; // [rsp+1DCh] [rbp-Ch] BYREF
  int v38; // [rsp+1E0h] [rbp-8h] BYREF
  int v39; // [rsp+1E4h] [rbp-4h] BYREF
  int v40; // [rsp+1E8h] [rbp+0h] BYREF
  int v41; // [rsp+1ECh] [rbp+4h] BYREF
  int v42; // [rsp+1F0h] [rbp+8h] BYREF
  int v43; // [rsp+1F4h] [rbp+Ch] BYREF
  const struct RIMDEV *v44; // [rsp+1F8h] [rbp+10h] BYREF
  int v45; // [rsp+220h] [rbp+38h] BYREF
  int v46; // [rsp+228h] [rbp+40h] BYREF
  int v47; // [rsp+230h] [rbp+48h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4
    && (qword_14029AE40 & 0x100) != 0
    && (qword_14029AE48 & 0x100) == qword_14029AE48 )
  {
    v5 = *((_DWORD *)a1 + 46);
    v45 = -__CFSHR__(*((_DWORD *)a1 + 46), 10);
    v46 = -__CFSHR__(v5, 9);
    v47 = -__CFSHR__(v5, 8);
    v8 = -__CFSHR__(v5, 7);
    v9 = -__CFSHR__(v5, 6);
    v10 = -__CFSHR__(v5, 5);
    v11 = -__CFSHR__(v5, 4);
    v12 = -__CFSHR__(v5, 3);
    v13 = -__CFSHR__(v5, 2);
    v14 = -(v5 & 1);
    v6 = *((_DWORD *)a1 + 43);
    v15 = -__CFSHR__(v6, 5);
    v16 = -__CFSHR__(v6, 4);
    v7 = *((_DWORD *)a1 + 42);
    v17 = (2 * v7) >> 31;
    v18 = (4 * v7) >> 31;
    v19 = (8 * v7) >> 31;
    v20 = -__CFSHR__(v7, 28);
    v21 = -__CFSHR__(v7, 27);
    v22 = -__CFSHR__(v7, 26);
    v23 = -__CFSHR__(v7, 25);
    v24 = -__CFSHR__(v7, 24);
    v25 = -__CFSHR__(v7, 23);
    v44 = a1;
    v26 = -__CFSHR__(v7, 22);
    v27 = -__CFSHR__(v7, 21);
    v28 = -__CFSHR__(v7, 20);
    v29 = -__CFSHR__(v7, 19);
    v30 = -__CFSHR__(v7, 17);
    v31 = -__CFSHR__(v7, 14);
    v32 = -__CFSHR__(v7, 13);
    v33 = -__CFSHR__(v7, 12);
    v34 = -__CFSHR__(v7, 11);
    v35 = -__CFSHR__(v7, 10);
    v36 = -__CFSHR__(v7, 9);
    v37 = -__CFSHR__(v7, 8);
    v38 = -__CFSHR__(v7, 6);
    v39 = -__CFSHR__(v7, 5);
    v40 = -__CFSHR__(v7, 4);
    v41 = -__CFSHR__(v7, 3);
    v42 = -__CFSHR__(v7, 2);
    v43 = -(v7 & 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      byte_140276E31,
      (__int64)a1,
      a4,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
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
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45);
  }
}
