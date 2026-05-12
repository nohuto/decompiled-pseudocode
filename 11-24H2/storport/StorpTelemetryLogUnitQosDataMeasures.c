/*
 * XREFs of StorpTelemetryLogUnitQosDataMeasures @ 0x1400B50B4
 * Callers:
 *     StorpTelemetrySendUnitQos @ 0x1400BBDBC (StorpTelemetrySendUnitQos.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140035A2C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitQosDataMeasures(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r11
  char v9; // al
  int *v10; // r10
  __int64 v11; // r8
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  char v14; // [rsp+32h] [rbp-CEh] BYREF
  char v15; // [rsp+33h] [rbp-CDh] BYREF
  char v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  char *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  char *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  _BYTE v44[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v45[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v46[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v47[16]; // [rsp+130h] [rbp+30h] BYREF
  int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  int *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  int *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  int *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  int *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  int *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  char *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  __int64 *v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  __int64 *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  char *v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  __int64 *v68; // [rsp+1E0h] [rbp+E0h]
  __int64 v69; // [rsp+1E8h] [rbp+E8h]
  __int64 *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]
  int *v72; // [rsp+200h] [rbp+100h]
  __int64 v73; // [rsp+208h] [rbp+108h]
  int *v74; // [rsp+210h] [rbp+110h]
  __int64 v75; // [rsp+218h] [rbp+118h]
  int *v76; // [rsp+220h] [rbp+120h]
  __int64 v77; // [rsp+228h] [rbp+128h]

  if ( (unsigned int)dword_140170178 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x400000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 24);
      v33 = 16LL;
      v35 = 16LL;
      v32 = v2 + 5064;
      v34 = v1 + 2104;
      v17 = *(_DWORD *)(v2 + 56);
      v36 = &v17;
      v12 = *(_BYTE *)(v1 + 104);
      v38 = &v12;
      v13 = *(_BYTE *)(v1 + 105);
      v40 = &v13;
      v14 = *(_BYTE *)(v1 + 106);
      v42 = &v14;
      v37 = 4LL;
      v39 = 1LL;
      v41 = 1LL;
      v43 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v44, *(const wchar_t **)(v2 + 4720));
      tlgCreate1Sz_char((__int64)v45, (_BYTE *)(v3 + 168));
      tlgCreate1Sz_char((__int64)v46, (_BYTE *)(v4 + 177));
      tlgCreate1Sz_char((__int64)v47, (_BYTE *)(v5 + 242));
      v7 = *(unsigned int *)(v6 + 3372);
      v48 = &v18;
      v19 = *(_DWORD *)(v6 + 3376);
      v50 = &v19;
      v20 = *(_DWORD *)(v6 + 3380);
      v52 = &v20;
      v21 = *(_DWORD *)(v6 + 3384);
      v54 = &v21;
      v22 = *(_DWORD *)(v6 + 3388);
      v56 = &v22;
      v23 = *(_DWORD *)(v6 + 3392);
      v58 = &v23;
      v9 = v8 & (*(_BYTE *)(v6 + 506) >> 1);
      v18 = v7;
      v15 = v9;
      v60 = &v15;
      v27 = *(_QWORD *)(v6 + 2232);
      v62 = &v27;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = v8;
      v28 = *(_QWORD *)(v6 + 2240);
      v64 = &v28;
      v16 = *((_BYTE *)v10 + 8);
      v66 = &v16;
      v29 = *(_QWORD *)(v6 + 2248);
      v68 = &v29;
      v30 = *(_QWORD *)(v6 + 2256);
      v70 = &v30;
      v24 = *(_DWORD *)(v6 + 2264);
      v72 = &v24;
      v25 = *(_DWORD *)(v6 + 2268);
      v74 = &v25;
      v26 = *v10;
      v76 = &v26;
      v63 = 8LL;
      v65 = 8LL;
      v67 = v8;
      v69 = 8LL;
      v71 = 8LL;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v7, (unsigned __int8 *)dword_140162366, v11, v6, 0x1Bu, &v31);
    }
  }
}
