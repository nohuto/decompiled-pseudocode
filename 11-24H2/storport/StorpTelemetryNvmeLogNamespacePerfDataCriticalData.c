/*
 * XREFs of StorpTelemetryNvmeLogNamespacePerfDataCriticalData @ 0x1400B7118
 * Callers:
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400B835C (StorpTelemetryNvmeSendNamespacePerfData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140035A2C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryNvmeLogNamespacePerfDataCriticalData(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned __int64 *v12; // r9
  unsigned __int64 v13; // kr00_8
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  _BYTE v39[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v40[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  int *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  _BYTE v45[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  char *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  __int64 *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  int *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  int *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  __int64 *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  __int64 *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  _BYTE v62[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v63[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v64[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v65[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  __int16 *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  unsigned __int64 v70; // [rsp+210h] [rbp+110h]
  int v71; // [rsp+218h] [rbp+118h]
  int v72; // [rsp+21Ch] [rbp+11Ch]

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_140170178 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x800000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = *(_QWORD *)(v2 + 128);
      v32 = 16LL;
      v31 = v3 + 1032;
      v33 = v1 + 160;
      v18 = *(_DWORD *)(v1 + 56);
      v35 = &v18;
      v34 = 16LL;
      v36 = 4LL;
      v19 = *(_DWORD *)(*(_QWORD *)(v2 + 128) + 56LL);
      v37 = &v19;
      v38 = 4LL;
      tlgCreate1Sz_char((__int64)v39, *(_BYTE **)(v2 + 752));
      tlgCreate1Sz_char((__int64)v40, *(_BYTE **)(*(_QWORD *)(v4 + 16) + 792LL));
      v6 = *(_QWORD *)(v5 + 16);
      v20 = *(unsigned __int16 *)(v6 + 4);
      v41 = &v20;
      v42 = 4LL;
      v7 = *(_BYTE *)(v6 + 136) & 2;
      v44 = 4LL;
      v21 = v7 != 0 ? 20 : 17;
      v43 = &v21;
      tlgCreate1Sz_wchar_t((__int64)v45, *(const wchar_t **)(*(_QWORD *)(v6 + 128) + 1016LL));
      v46 = &v25;
      v16 = *(_BYTE *)(v8 + 8);
      v48 = &v16;
      v26 = *(_QWORD *)(v8 + 360);
      v50 = &v26;
      v22 = *(_DWORD *)(v8 + 376);
      v52 = &v22;
      v25 = *(_QWORD *)&g_SystemUptime_s;
      v10 = *(_QWORD *)(v9 + 608);
      v47 = 8LL;
      v49 = 1LL;
      v51 = 8LL;
      v53 = 4LL;
      v23 = *(_DWORD *)(v10 + 88);
      v54 = &v23;
      v55 = 4LL;
      v24 = *(_DWORD *)(v10 + 96);
      v56 = &v24;
      v27 = *(_QWORD *)(v8 + 384);
      v58 = &v27;
      v57 = 4LL;
      v28 = *(_QWORD *)(v8 + 392);
      v59 = 8LL;
      v60 = &v28;
      v61 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v62, L"Read, Write");
      tlgCreate1Sz_wchar_t((__int64)v63, *(const wchar_t **)(v11 + 16));
      tlgCreate1Sz_wchar_t((__int64)v64, L"Flush, Unmap");
      tlgCreate1Sz_wchar_t((__int64)v65, L"64ms, 256ms, 1024ms, 5120ms, 5120+ms");
      v67 = 8LL;
      v13 = *v12;
      v69 = 2LL;
      v66 = &v29;
      v29 = v13 / 0x2710;
      v72 = 0;
      v68 = &v17;
      v14 = v12[46];
      v17 = 3 * qword_140170E30;
      v70 = v14;
      v71 = 8 * (unsigned __int16)(3 * qword_140170E30);
      tlgWriteTransfer_EtwWriteTransfer(
        (3 * qword_140170E30) & 0x1FFFFFFFFFFFFFFFLL,
        (unsigned __int8 *)dword_140161FB9,
        v15,
        (__int64)v12,
        0x1Au,
        &v30);
    }
  }
}
