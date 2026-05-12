/*
 * XREFs of StorpMeasuresMiniportEventUnit @ 0x1400B18B8
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x140039E04 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140035A2C (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140035A60 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall StorpMeasuresMiniportEventUnit(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r9
  wchar_t *v11; // rdx
  _BYTE *v12; // r8
  __int64 v13; // r10
  _BYTE *v14; // rdx
  _BYTE *v15; // r8
  __int64 v16; // r10
  _BYTE *v17; // rdx
  _BYTE *v18; // r8
  __int64 v19; // r10
  __int64 v20; // r10
  __int64 v21; // r11
  _BYTE *v22; // rax
  char v23; // al
  __int16 v24; // ax
  __int16 v25; // cx
  __int16 v26; // cx
  __int16 v27; // cx
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // [rsp+20h] [rbp-E0h]
  int v35; // [rsp+28h] [rbp-D8h]
  char v36; // [rsp+40h] [rbp-C0h] BYREF
  char v37; // [rsp+41h] [rbp-BFh] BYREF
  __int16 v38; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v39; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v40; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+C0h] [rbp-40h] BYREF
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  char v60[16]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  __int128 *v63; // [rsp+120h] [rbp+20h]
  int v64; // [rsp+128h] [rbp+28h]
  int v65; // [rsp+12Ch] [rbp+2Ch]
  char v66[16]; // [rsp+130h] [rbp+30h] BYREF
  char v67[16]; // [rsp+140h] [rbp+40h] BYREF
  char v68[16]; // [rsp+150h] [rbp+50h] BYREF
  char v69[16]; // [rsp+160h] [rbp+60h] BYREF
  char *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  __int16 *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  __int16 *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  __int16 *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  __int16 *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  int *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  char v82[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  int *v85; // [rsp+1F0h] [rbp+F0h]
  __int64 v86; // [rsp+1F8h] [rbp+F8h]
  int *v87; // [rsp+200h] [rbp+100h]
  __int64 v88; // [rsp+208h] [rbp+108h]
  _DWORD *v89; // [rsp+210h] [rbp+110h]
  __int64 v90; // [rsp+218h] [rbp+118h]
  __int64 v91; // [rsp+220h] [rbp+120h]
  _DWORD v92[2]; // [rsp+228h] [rbp+128h] BYREF
  char v93[16]; // [rsp+230h] [rbp+130h] BYREF
  __int64 *v94; // [rsp+240h] [rbp+140h]
  __int64 v95; // [rsp+248h] [rbp+148h]
  char v96[16]; // [rsp+250h] [rbp+150h] BYREF
  __int64 *v97; // [rsp+260h] [rbp+160h]
  __int64 v98; // [rsp+268h] [rbp+168h]
  char v99[16]; // [rsp+270h] [rbp+170h] BYREF
  __int64 *v100; // [rsp+280h] [rbp+180h]
  __int64 v101; // [rsp+288h] [rbp+188h]
  char v102[16]; // [rsp+290h] [rbp+190h] BYREF
  __int64 *v103; // [rsp+2A0h] [rbp+1A0h]
  __int64 v104; // [rsp+2A8h] [rbp+1A8h]
  char v105[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 *v106; // [rsp+2C0h] [rbp+1C0h]
  __int64 v107; // [rsp+2C8h] [rbp+1C8h]
  char v108[16]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 *v109; // [rsp+2E0h] [rbp+1E0h]
  __int64 v110; // [rsp+2E8h] [rbp+1E8h]
  char v111[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 *v112; // [rsp+300h] [rbp+200h]
  __int64 v113; // [rsp+308h] [rbp+208h]
  char v114[16]; // [rsp+310h] [rbp+210h] BYREF
  __int64 *v115; // [rsp+320h] [rbp+220h]
  __int64 v116; // [rsp+328h] [rbp+228h]
  __int128 v117; // [rsp+330h] [rbp+230h] BYREF
  char v118; // [rsp+340h] [rbp+240h]

  LOBYTE(v4) = 0;
  v118 = 0;
  v117 = 0LL;
  v54 = 0LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 160);
    if ( v4 )
      v117 = *(_OWORD *)(v4 + 90);
  }
  if ( (unsigned int)dword_140170178 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v7 = *(const wchar_t **)(v6 + 4720);
      v56 = &v36;
      v36 = 2;
      v58 = v6 + 5064;
      v57 = 1LL;
      v59 = 16LL;
      tlgCreate1Sz_wchar_t((__int64)v60, v7);
      v9 = -1LL;
      v61 = v10;
      v62 = 16LL;
      do
        ++v9;
      while ( *((_BYTE *)&v117 + v9) );
      v65 = 0;
      v64 = v9 + 1;
      v63 = &v117;
      v11 = (wchar_t *)(v8 + 168);
      if ( !v8 )
        v11 = (wchar_t *)&word_140150F48;
      tlgCreate1Sz_char((__int64)v66, v11);
      v14 = (_BYTE *)(v13 + 177);
      if ( !v13 )
        v14 = v12;
      tlgCreate1Sz_char((__int64)v67, v14);
      v17 = (_BYTE *)(v16 + 242);
      if ( !v16 )
        v17 = v15;
      tlgCreate1Sz_char((__int64)v68, v17);
      if ( v19 )
        v18 = (_BYTE *)(v19 + 498);
      tlgCreate1Sz_char((__int64)v69, v18);
      if ( v20 && (v22 = *(_BYTE **)(v20 + 112)) != 0LL )
        v23 = *v22 & 0x1F;
      else
        v23 = 31;
      v37 = v23;
      v70 = &v37;
      v24 = -1;
      v71 = 1LL;
      if ( v21 )
        v25 = *(_WORD *)(v21 + 2);
      else
        v25 = -1;
      v38 = v25;
      v72 = &v38;
      v73 = 2LL;
      if ( v21 )
        v26 = *(unsigned __int8 *)(v21 + 8);
      else
        v26 = -1;
      v39 = v26;
      v74 = &v39;
      v75 = 2LL;
      if ( v21 )
        v27 = *(unsigned __int8 *)(v21 + 9);
      else
        v27 = -1;
      v40 = v27;
      v76 = &v40;
      v77 = 2LL;
      if ( v21 )
        v24 = *(unsigned __int8 *)(v21 + 10);
      v41 = v24;
      v79 = 2LL;
      v78 = &v41;
      v42 = *a4;
      v80 = &v42;
      v81 = 4LL;
      tlgCreate1Sz_char((__int64)v82, (_BYTE *)a4 + 8);
      v28 = a4[1];
      v83 = &v43;
      v44 = a4[10];
      v85 = &v44;
      v45 = a4[11];
      v87 = &v45;
      v89 = v92;
      v91 = *((_QWORD *)a4 + 7);
      v29 = *((unsigned __int16 *)a4 + 24);
      v43 = v28;
      v92[0] = v29;
      v84 = 4LL;
      v86 = 4LL;
      v88 = 4LL;
      v90 = 2LL;
      v92[1] = 0;
      tlgCreate1Sz_char((__int64)v93, (_BYTE *)a4 + 64);
      v46 = *((_QWORD *)a4 + 12);
      v94 = &v46;
      v95 = 8LL;
      tlgCreate1Sz_char((__int64)v96, (_BYTE *)a4 + 104);
      v47 = *((_QWORD *)a4 + 17);
      v97 = &v47;
      v98 = 8LL;
      tlgCreate1Sz_char((__int64)v99, (_BYTE *)a4 + 144);
      v48 = *((_QWORD *)a4 + 22);
      v100 = &v48;
      v101 = 8LL;
      tlgCreate1Sz_char((__int64)v102, (_BYTE *)a4 + 184);
      v49 = *((_QWORD *)a4 + 27);
      v103 = &v49;
      v104 = 8LL;
      tlgCreate1Sz_char((__int64)v105, (_BYTE *)a4 + 224);
      v50 = *((_QWORD *)a4 + 32);
      v106 = &v50;
      v107 = 8LL;
      tlgCreate1Sz_char((__int64)v108, (_BYTE *)a4 + 264);
      v51 = *((_QWORD *)a4 + 37);
      v109 = &v51;
      v110 = 8LL;
      tlgCreate1Sz_char((__int64)v111, (_BYTE *)a4 + 304);
      v52 = *((_QWORD *)a4 + 42);
      v112 = &v52;
      v113 = 8LL;
      tlgCreate1Sz_char((__int64)v114, (_BYTE *)a4 + 344);
      v30 = *((_QWORD *)a4 + 47);
      v115 = &v53;
      v53 = v30;
      v116 = 8LL;
      LOBYTE(v4) = tlgWriteEx_EtwWriteEx(v30, (unsigned __int8 *)dword_14015EB02, v31, v32, v34, v35, 0x27u, &v55);
    }
  }
  return v4;
}
