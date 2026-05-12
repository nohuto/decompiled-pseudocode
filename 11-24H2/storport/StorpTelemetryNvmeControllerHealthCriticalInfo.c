/*
 * XREFs of StorpTelemetryNvmeControllerHealthCriticalInfo @ 0x1400B6704
 * Callers:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400BA758 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140035A2C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryNvmeControllerHealthCriticalInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7,
        __int16 a8,
        __int64 a9,
        unsigned __int16 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  char v19; // al
  _BYTE *v20; // r10
  _BYTE *v21; // r11
  __int64 v22; // r9
  __int64 v23; // r8
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+31h] [rbp-CFh] BYREF
  char v26; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  int *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  _BYTE v42[16]; // [rsp+C0h] [rbp-40h] BYREF
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  _BYTE v45[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v46[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v47[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v48[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  char *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  _DWORD *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  __int64 v55; // [rsp+150h] [rbp+50h]
  _DWORD v56[2]; // [rsp+158h] [rbp+58h] BYREF
  char *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  __int16 *v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  _DWORD *v61; // [rsp+180h] [rbp+80h]
  __int64 v62; // [rsp+188h] [rbp+88h]
  __int64 v63; // [rsp+190h] [rbp+90h]
  _DWORD v64[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 *v65; // [rsp+1A0h] [rbp+A0h]
  __int64 v66; // [rsp+1A8h] [rbp+A8h]
  __int64 *v67; // [rsp+1B0h] [rbp+B0h]
  __int64 v68; // [rsp+1B8h] [rbp+B8h]
  __int64 *v69; // [rsp+1C0h] [rbp+C0h]
  __int64 v70; // [rsp+1C8h] [rbp+C8h]
  __int64 *v71; // [rsp+1D0h] [rbp+D0h]
  __int64 v72; // [rsp+1D8h] [rbp+D8h]

  if ( (unsigned int)dword_140170178 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x800000000000LL) )
    {
      v16 = *(_QWORD *)(v15 + 128);
      v37 = 16LL;
      v36 = v16 + 1032;
      v28 = *(_DWORD *)(v16 + 56);
      v38 = &v28;
      v29 = *(unsigned __int16 *)(v15 + 4);
      v40 = &v29;
      v39 = 4LL;
      v41 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v42, *(const wchar_t **)(v16 + 1016));
      v18 = *(_QWORD *)(v17 + 128);
      v19 = *(_BYTE *)(v18 + 144) & 1;
      v44 = 1LL;
      v24 = v19 != 0 ? 20 : 17;
      v43 = &v24;
      tlgCreate1Sz_wchar_t((__int64)v45, *(const wchar_t **)(v18 + 1024));
      tlgCreate1Sz_char((__int64)v46, v20);
      tlgCreate1Sz_char((__int64)v47, v21);
      tlgCreate1Sz_char((__int64)v48, a4);
      v49 = &v30;
      v25 = *(_BYTE *)(v22 + 946);
      v51 = &v25;
      v53 = v56;
      v55 = a5;
      v56[0] = a6;
      v26 = a7;
      v57 = &v26;
      v27 = a8;
      v59 = &v27;
      v61 = v64;
      v63 = a9;
      v64[0] = a10;
      v31 = a11;
      v65 = &v31;
      v30 = *(_QWORD *)&g_SystemUptime_s;
      v50 = 8LL;
      v52 = 1LL;
      v54 = 2LL;
      v56[1] = 0;
      v58 = 1LL;
      v60 = 2LL;
      v62 = 2LL;
      v64[1] = 0;
      v66 = 8LL;
      v32 = a12;
      v67 = &v32;
      v33 = a13;
      v69 = &v33;
      v34 = a14;
      v71 = &v34;
      v68 = 8LL;
      v70 = 8LL;
      v72 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        *(__int64 *)&g_SystemUptime_s,
        (unsigned __int8 *)dword_1401625F8,
        v23,
        v22,
        0x17u,
        &v35);
    }
  }
}
