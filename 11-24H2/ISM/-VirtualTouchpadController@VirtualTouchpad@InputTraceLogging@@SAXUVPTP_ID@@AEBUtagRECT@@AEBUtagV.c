/*
 * XREFs of ?VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagVIRTUAL_PTP_CONFIG@@AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUPhysicalClickZone@789Windows@@4@Z @ 0x18013758C
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180134E04 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180136CF4 (-TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$07@@44333333333333333333333333333333333333333333333333@Z @ 0x1800063B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U1@U1@U1@U1@U1@U.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

char __fastcall InputTraceLogging::VirtualTouchpad::VirtualTouchpadController(
        int a1,
        int *a2,
        int *a3,
        __int64 *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // ecx
  int v16; // [rsp+1E8h] [rbp-80h] BYREF
  int v17; // [rsp+1ECh] [rbp-7Ch] BYREF
  int v18; // [rsp+1F0h] [rbp-78h] BYREF
  int v19; // [rsp+1F4h] [rbp-74h] BYREF
  int v20; // [rsp+1F8h] [rbp-70h] BYREF
  int v21; // [rsp+1FCh] [rbp-6Ch] BYREF
  int v22; // [rsp+200h] [rbp-68h] BYREF
  int v23; // [rsp+204h] [rbp-64h] BYREF
  int v24; // [rsp+208h] [rbp-60h] BYREF
  int v25; // [rsp+20Ch] [rbp-5Ch] BYREF
  int v26; // [rsp+210h] [rbp-58h] BYREF
  int v27; // [rsp+214h] [rbp-54h] BYREF
  int v28; // [rsp+218h] [rbp-50h] BYREF
  int v29; // [rsp+21Ch] [rbp-4Ch] BYREF
  int v30; // [rsp+220h] [rbp-48h] BYREF
  int v31; // [rsp+224h] [rbp-44h] BYREF
  int v32; // [rsp+228h] [rbp-40h] BYREF
  int v33; // [rsp+22Ch] [rbp-3Ch] BYREF
  int v34; // [rsp+230h] [rbp-38h] BYREF
  int v35; // [rsp+234h] [rbp-34h] BYREF
  int v36; // [rsp+238h] [rbp-30h] BYREF
  int v37; // [rsp+23Ch] [rbp-2Ch] BYREF
  int v38; // [rsp+240h] [rbp-28h] BYREF
  int v39; // [rsp+244h] [rbp-24h] BYREF
  int v40; // [rsp+248h] [rbp-20h] BYREF
  int v41; // [rsp+24Ch] [rbp-1Ch] BYREF
  int v42; // [rsp+250h] [rbp-18h] BYREF
  int v43; // [rsp+254h] [rbp-14h] BYREF
  int v44; // [rsp+258h] [rbp-10h] BYREF
  int v45; // [rsp+25Ch] [rbp-Ch] BYREF
  int v46; // [rsp+260h] [rbp-8h] BYREF
  int v47; // [rsp+264h] [rbp-4h] BYREF
  int v48; // [rsp+268h] [rbp+0h] BYREF
  int v49; // [rsp+26Ch] [rbp+4h] BYREF
  int v50; // [rsp+270h] [rbp+8h] BYREF
  int v51; // [rsp+274h] [rbp+Ch] BYREF
  int v52; // [rsp+278h] [rbp+10h] BYREF
  int v53; // [rsp+27Ch] [rbp+14h] BYREF
  int v54; // [rsp+280h] [rbp+18h] BYREF
  int v55; // [rsp+284h] [rbp+1Ch] BYREF
  int v56; // [rsp+288h] [rbp+20h] BYREF
  int v57; // [rsp+28Ch] [rbp+24h] BYREF
  int v58; // [rsp+290h] [rbp+28h] BYREF
  int v59; // [rsp+294h] [rbp+2Ch] BYREF
  int v60; // [rsp+298h] [rbp+30h] BYREF
  int v61; // [rsp+29Ch] [rbp+34h] BYREF
  int v62; // [rsp+2A0h] [rbp+38h] BYREF
  int v63; // [rsp+2A4h] [rbp+3Ch] BYREF
  int v64; // [rsp+2A8h] [rbp+40h] BYREF
  int v65; // [rsp+2ACh] [rbp+44h] BYREF
  int v66; // [rsp+2B0h] [rbp+48h] BYREF
  int v67; // [rsp+2B4h] [rbp+4Ch] BYREF
  int v68; // [rsp+2B8h] [rbp+50h] BYREF
  __int64 v69; // [rsp+2C0h] [rbp+58h] BYREF
  __int64 v70; // [rsp+2C8h] [rbp+60h] BYREF
  __int64 v71; // [rsp+2D0h] [rbp+68h] BYREF

  v10 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v10 > 4u )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)v10, 512LL);
    if ( (_BYTE)v10 )
    {
      v18 = a3[27];
      v19 = a3[26];
      v20 = a3[25];
      v21 = a3[24];
      v14 = a3[29];
      v22 = a3[23];
      v23 = a3[22];
      v24 = a3[21];
      v25 = a3[20];
      v26 = a3[19];
      v27 = a3[18];
      v28 = a3[17];
      v29 = a3[16];
      v30 = a3[15];
      v31 = a3[14];
      v32 = a3[13];
      v33 = a3[12];
      v34 = a3[11];
      v35 = a3[10];
      v36 = a3[9];
      v37 = a3[8];
      v38 = a3[7];
      v39 = a3[6];
      v40 = a3[5];
      v41 = a3[4];
      v42 = a3[3];
      v43 = a3[2];
      v44 = a3[1];
      v45 = *a3;
      v46 = a3[37];
      v47 = a3[36];
      v48 = a3[35];
      v49 = a3[34];
      v16 = v14;
      v17 = a3[28];
      v50 = a6[4];
      v51 = a6[3];
      v52 = a6[2];
      v53 = a6[1];
      v54 = *(unsigned __int8 *)a6;
      v55 = a3[33];
      v56 = a3[32];
      v57 = a3[31];
      v58 = a3[30];
      v59 = a5[4];
      v60 = a5[3];
      v61 = a5[2];
      v62 = a5[1];
      v63 = *(unsigned __int8 *)a5;
      v69 = a4[2];
      v70 = a4[1];
      v71 = *a4;
      v64 = a2[3];
      v65 = a2[2];
      v66 = a2[1];
      v67 = *a2;
      v68 = a1;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v13,
                      (__int64)&unk_18021D74C,
                      v11,
                      v12,
                      (__int64)&v68,
                      (__int64)&v67,
                      (__int64)&v66,
                      (__int64)&v65,
                      (__int64)&v64,
                      (__int64)&v71,
                      (__int64)&v70,
                      (__int64)&v69,
                      (__int64)&v63,
                      (__int64)&v62,
                      (__int64)&v61,
                      (__int64)&v60,
                      (__int64)&v59,
                      (__int64)&v58,
                      (__int64)&v57,
                      (__int64)&v56,
                      (__int64)&v55,
                      (__int64)&v54,
                      (__int64)&v53,
                      (__int64)&v52,
                      (__int64)&v51,
                      (__int64)&v50,
                      (__int64)&v49,
                      (__int64)&v48,
                      (__int64)&v47,
                      (__int64)&v46,
                      (__int64)&v45,
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
                      (__int64)&v16);
    }
  }
  return (char)v10;
}
