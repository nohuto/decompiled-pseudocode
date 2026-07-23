/*
 * XREFs of PnpTraceDeviceConfig @ 0x1406F5BE0
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PnpTraceDeviceConfig(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        const wchar_t *a11,
        const wchar_t *a12,
        const wchar_t *a13,
        const wchar_t *a14,
        const wchar_t *a15,
        const wchar_t *a16,
        const wchar_t *a17,
        char a18,
        const wchar_t *a19,
        const wchar_t *a20,
        char a21,
        char a22,
        unsigned __int16 *a23,
        char a24,
        char a25,
        const wchar_t *a26,
        int a27,
        int *a28)
{
  int v28; // eax
  const wchar_t *v29; // r10
  const wchar_t *v30; // r11
  char v32; // [rsp+30h] [rbp-D0h] BYREF
  char v33; // [rsp+31h] [rbp-CFh] BYREF
  char v34; // [rsp+32h] [rbp-CEh] BYREF
  char v35; // [rsp+33h] [rbp-CDh] BYREF
  char v36; // [rsp+34h] [rbp-CCh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  const wchar_t *v42; // [rsp+60h] [rbp-A0h]
  const wchar_t *v43; // [rsp+68h] [rbp-98h]
  const wchar_t *v44; // [rsp+70h] [rbp-90h]
  const wchar_t *v45; // [rsp+78h] [rbp-88h]
  const wchar_t *v46; // [rsp+80h] [rbp-80h]
  const wchar_t *v47; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  int *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  _DWORD *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  __int64 v58; // [rsp+E0h] [rbp-20h]
  _DWORD v59[2]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  __int64 v62; // [rsp+100h] [rbp+0h]
  _DWORD v63[2]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  __int64 v66; // [rsp+120h] [rbp+20h]
  _DWORD v67[2]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v68[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v69[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v70[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v71[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v72[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v73[16]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v74[16]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v75[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v76[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v77[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v78[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v79[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v80[16]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v81[16]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v82[16]; // [rsp+210h] [rbp+110h] BYREF
  char *v83; // [rsp+220h] [rbp+120h]
  __int64 v84; // [rsp+228h] [rbp+128h]
  _BYTE v85[16]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v86[16]; // [rsp+240h] [rbp+140h] BYREF
  char *v87; // [rsp+250h] [rbp+150h]
  __int64 v88; // [rsp+258h] [rbp+158h]
  char *v89; // [rsp+260h] [rbp+160h]
  __int64 v90; // [rsp+268h] [rbp+168h]
  char *v91; // [rsp+270h] [rbp+170h]
  __int64 v92; // [rsp+278h] [rbp+178h]
  char *v93; // [rsp+280h] [rbp+180h]
  __int64 v94; // [rsp+288h] [rbp+188h]
  const wchar_t **v95; // [rsp+290h] [rbp+190h]
  __int64 v96; // [rsp+298h] [rbp+198h]
  __int64 *v97; // [rsp+2A0h] [rbp+1A0h]
  __int64 v98; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v99; // [rsp+2B0h] [rbp+1B0h]
  __int64 v100; // [rsp+2B8h] [rbp+1B8h]

  v39 = 0LL;
  v42 = a13;
  v43 = a14;
  v44 = a15;
  v45 = a16;
  v46 = a17;
  v47 = a19;
  LOBYTE(v28) = (_BYTE)a20;
  v40 = a20;
  if ( a28 )
  {
    HIDWORD(v39) = a28[1];
    v28 = *a28;
    LODWORD(v39) = *a28;
  }
  if ( (unsigned int)dword_140E06F38 > 5 )
  {
    v38 = 0x800000000000LL;
    LOBYTE(v28) = (qword_140E06F48 & 0x800000000000LL) != 0 && (v38 & qword_140E06F50) == qword_140E06F50;
    if ( (_BYTE)v28 )
    {
      v51 = 0;
      v37 = 0;
      v54 = 0;
      v57 = 0;
      v49 = &v41;
      v52 = &v37;
      v55 = v59;
      v58 = *((_QWORD *)a1 + 1);
      v59[0] = *a1;
      v60 = v63;
      v62 = *((_QWORD *)a2 + 1);
      v63[0] = *a2;
      v56 = 2;
      v61 = 2LL;
      v65 = 2LL;
      v64 = v67;
      v41 = 2048LL;
      v50 = 8;
      v66 = *((_QWORD *)a23 + 1);
      v67[0] = *a23;
      v53 = 4;
      v59[1] = 0;
      v63[1] = 0;
      v67[1] = 0;
      tlgCreate1Sz_wchar_t((__int64)v68, a3);
      tlgCreate1Sz_wchar_t((__int64)v69, v29);
      tlgCreate1Sz_wchar_t((__int64)v70, v30);
      tlgCreate1Sz_wchar_t((__int64)v71, a6);
      tlgCreate1Sz_wchar_t((__int64)v72, a7);
      tlgCreate1Sz_wchar_t((__int64)v73, a8);
      tlgCreate1Sz_wchar_t((__int64)v74, a9);
      tlgCreate1Sz_wchar_t((__int64)v75, a10);
      tlgCreate1Sz_wchar_t((__int64)v76, a11);
      tlgCreate1Sz_wchar_t((__int64)v77, a12);
      tlgCreate1Sz_wchar_t((__int64)v78, v42);
      tlgCreate1Sz_wchar_t((__int64)v79, v43);
      tlgCreate1Sz_wchar_t((__int64)v80, v44);
      tlgCreate1Sz_wchar_t((__int64)v81, v45);
      tlgCreate1Sz_wchar_t((__int64)v82, v46);
      v32 = a18;
      v83 = &v32;
      v84 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v85, v47);
      tlgCreate1Sz_wchar_t((__int64)v86, v40);
      v87 = &v33;
      v34 = a22;
      v33 = a21;
      v89 = &v34;
      v35 = a24;
      v91 = &v35;
      v36 = a25;
      v93 = &v36;
      v40 = a26;
      v95 = &v40;
      LODWORD(v38) = a27;
      v97 = &v38;
      v99 = &v39;
      v88 = 1LL;
      v90 = 1LL;
      v92 = 1LL;
      v94 = 1LL;
      v96 = 8LL;
      v98 = 4LL;
      v100 = 8LL;
      LOBYTE(v28) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E06F38,
                      (unsigned __int8 *)&dword_1400469B4,
                      0LL,
                      0LL,
                      0x23u,
                      &v48);
    }
  }
  return v28;
}
