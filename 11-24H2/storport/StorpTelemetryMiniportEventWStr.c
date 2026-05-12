/*
 * XREFs of StorpTelemetryMiniportEventWStr @ 0x140035200
 * Callers:
 *     StorEtwRaidMiniportEvent @ 0x1400A9F58 (StorEtwRaidMiniportEvent.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140035A2C (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140035A60 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

char __fastcall StorpTelemetryMiniportEventWStr(
        int a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 *Unit; // rax
  unsigned int v14; // r12d
  _QWORD *v15; // r14
  _OWORD *v16; // r15
  _WORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const wchar_t *v20; // rdx
  int v21; // r11d
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  const int *v25; // rdx
  const wchar_t *v26; // rdx
  __int64 v27; // r9
  __int64 *v28; // r10
  int v29; // r11d
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r9
  int v34; // r11d
  __int64 v35; // r8
  char v36; // r14
  char v37; // r15
  char v38; // di
  __int64 v39; // rcx
  const wchar_t *v40; // rdx
  __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // r9
  __int64 *v44; // r10
  __int64 v45; // r9
  __int64 v46; // r9
  int v47; // r11d
  int v48; // r8d
  int v49; // r9d
  int v51; // [rsp+28h] [rbp-E0h]
  int v52; // [rsp+30h] [rbp-D8h]
  ULONG v53; // [rsp+38h] [rbp-D0h]
  char v54; // [rsp+48h] [rbp-C0h] BYREF
  char v55; // [rsp+49h] [rbp-BFh] BYREF
  char v56; // [rsp+4Ah] [rbp-BEh] BYREF
  char v57; // [rsp+4Bh] [rbp-BDh] BYREF
  int v58; // [rsp+4Ch] [rbp-BCh] BYREF
  int v59; // [rsp+50h] [rbp-B8h] BYREF
  int v60; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v61; // [rsp+58h] [rbp-B0h]
  __int64 v62; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+70h] [rbp-98h] BYREF
  __int64 v65; // [rsp+78h] [rbp-90h] BYREF
  __int64 v66; // [rsp+80h] [rbp-88h] BYREF
  __int64 v67; // [rsp+88h] [rbp-80h] BYREF
  __int64 v68; // [rsp+90h] [rbp-78h] BYREF
  __int64 v69; // [rsp+98h] [rbp-70h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v71; // [rsp+A8h] [rbp-60h]
  __int64 v72[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v73; // [rsp+D8h] [rbp-30h]
  __int64 v74; // [rsp+E0h] [rbp-28h]
  char *v75; // [rsp+E8h] [rbp-20h]
  __int64 v76; // [rsp+F0h] [rbp-18h]
  _BYTE v77[16]; // [rsp+F8h] [rbp-10h] BYREF
  int *v78; // [rsp+108h] [rbp+0h]
  __int64 v79; // [rsp+110h] [rbp+8h]
  int *v80; // [rsp+118h] [rbp+10h]
  __int64 v81; // [rsp+120h] [rbp+18h]
  __int64 v82; // [rsp+128h] [rbp+20h]
  __int64 v83; // [rsp+130h] [rbp+28h]
  int *v84; // [rsp+138h] [rbp+30h]
  __int64 v85; // [rsp+140h] [rbp+38h]
  __int64 *v86; // [rsp+148h] [rbp+40h] BYREF
  int v87; // [rsp+150h] [rbp+48h]
  int v88; // [rsp+154h] [rbp+4Ch]
  char *v89; // [rsp+158h] [rbp+50h] BYREF
  __int64 v90; // [rsp+160h] [rbp+58h]
  char *v91; // [rsp+168h] [rbp+60h]
  __int64 v92; // [rsp+170h] [rbp+68h]
  char *v93; // [rsp+178h] [rbp+70h] BYREF
  __int64 v94; // [rsp+180h] [rbp+78h]
  __int64 *v95; // [rsp+188h] [rbp+80h]
  __int64 v96; // [rsp+190h] [rbp+88h]
  _BYTE v97[16]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v98[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v99[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v100; // [rsp+1C8h] [rbp+C0h]
  __int64 v101; // [rsp+1D0h] [rbp+C8h]
  _BYTE v102[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v103; // [rsp+1E8h] [rbp+E0h]
  __int64 v104; // [rsp+1F0h] [rbp+E8h]
  _BYTE v105[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v106; // [rsp+208h] [rbp+100h]
  __int64 v107; // [rsp+210h] [rbp+108h]
  _BYTE v108[16]; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v109; // [rsp+228h] [rbp+120h]
  __int64 v110; // [rsp+230h] [rbp+128h]
  _BYTE v111[16]; // [rsp+238h] [rbp+130h] BYREF
  __int64 *v112; // [rsp+248h] [rbp+140h]
  __int64 v113; // [rsp+250h] [rbp+148h]
  _BYTE v114[16]; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v115; // [rsp+268h] [rbp+160h]
  __int64 v116; // [rsp+270h] [rbp+168h]
  _BYTE v117[16]; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v118; // [rsp+288h] [rbp+180h]
  __int64 v119; // [rsp+290h] [rbp+188h]
  _BYTE v120[16]; // [rsp+298h] [rbp+190h] BYREF
  __int64 *v121; // [rsp+2A8h] [rbp+1A0h]
  __int64 v122; // [rsp+2B0h] [rbp+1A8h]
  _BYTE v123[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 *v124; // [rsp+2C8h] [rbp+1C0h]
  __int64 v125; // [rsp+2D0h] [rbp+1C8h]
  _OWORD v126[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int64 v127; // [rsp+360h] [rbp+258h]
  wchar_t v128[68]; // [rsp+368h] [rbp+260h] BYREF
  __int64 v129; // [rsp+3F0h] [rbp+2E8h]
  wchar_t v130[68]; // [rsp+3F8h] [rbp+2F0h] BYREF
  __int64 v131; // [rsp+480h] [rbp+378h]
  wchar_t v132[68]; // [rsp+488h] [rbp+380h] BYREF
  __int64 v133; // [rsp+510h] [rbp+408h]
  wchar_t v134[68]; // [rsp+518h] [rbp+410h] BYREF
  __int64 v135; // [rsp+5A0h] [rbp+498h]
  wchar_t v136[68]; // [rsp+5A8h] [rbp+4A0h] BYREF
  __int64 v137; // [rsp+630h] [rbp+528h]
  wchar_t v138[68]; // [rsp+638h] [rbp+530h] BYREF
  __int64 v139; // [rsp+6C0h] [rbp+5B8h]
  wchar_t v140[68]; // [rsp+6C8h] [rbp+5C0h] BYREF
  int v141[2]; // [rsp+750h] [rbp+648h]
  __int128 v142; // [rsp+758h] [rbp+650h] BYREF
  char v143; // [rsp+768h] [rbp+660h]
  __int64 v144; // [rsp+778h] [rbp+670h] BYREF
  wchar_t v145; // [rsp+780h] [rbp+678h]

  LODWORD(v61) = a1;
  memset_0(v126, 0, 0x480uLL);
  memset_0(&v144, 0, 0x82uLL);
  v58 = 0;
  v11 = -1LL;
  v143 = 0;
  v12 = -1LL;
  v142 = 0LL;
  v71 = 0LL;
  do
    ++v12;
  while ( a2[v12] );
  if ( (_DWORD)v12 )
  {
    v35 = 64LL;
    if ( (unsigned int)v12 < 0x40 )
      v35 = (unsigned int)v12;
    memmove(&v144, a2, 2 * v35);
    LOWORD(Unit) = aNull_0[4];
  }
  else
  {
    LOWORD(Unit) = aNull_0[4];
    v145 = aNull_0[4];
    v144 = *(_QWORD *)L"NULL";
  }
  v14 = 0;
  if ( a6 )
  {
    v15 = a8;
    v16 = v126;
    do
    {
      v17 = *(_WORD **)((char *)v15 + a7 - (_QWORD)a8);
      if ( !v17 )
        goto LABEL_11;
      v18 = -1LL;
      do
        ++v18;
      while ( v17[v18] );
      if ( (_DWORD)v18 )
      {
        v19 = 64LL;
        if ( (unsigned int)v18 < 0x40 )
          v19 = (unsigned int)v18;
        memmove(&v126[9 * v14], v17, 2 * v19);
        *((_QWORD *)v16 + 17) = *v15;
        LOWORD(Unit) = aNull_0[4];
      }
      else
      {
LABEL_11:
        *(_QWORD *)v16 = *(_QWORD *)L"NULL";
        *((_WORD *)v16 + 4) = (_WORD)Unit;
      }
      ++v14;
      ++v15;
      v16 += 9;
    }
    while ( v14 < a6 );
  }
  if ( a4
    && *(_WORD *)a4 == 1
    && *(_DWORD *)(a4 + 4) >= 4u
    && (v36 = *(_BYTE *)(a4 + 8),
        v37 = *(_BYTE *)(a4 + 9),
        v38 = *(_BYTE *)(a4 + 10),
        BYTE2(v58) = v38,
        LOBYTE(v58) = v36,
        BYTE1(v58) = v37,
        (Unit = RaidAdapterFindUnit(a3, v58)) != 0LL) )
  {
    Unit = (__int64 *)Unit[20];
    if ( Unit )
      v142 = *(_OWORD *)((char *)Unit + 90);
    if ( a5 )
    {
      if ( (unsigned int)dword_140170178 > 5 )
      {
        if ( (qword_140170188 & 0x400000000000LL) == 0
          || (LOBYTE(Unit) = 1, (qword_140170190 & 0x400000000000LL) != qword_140170190) )
        {
          LOBYTE(Unit) = 0;
        }
        if ( (_BYTE)Unit )
        {
          v26 = *(const wchar_t **)(a3 + 4720);
          v73 = &v70;
          v70 = 0x1000000LL;
          v75 = &v54;
          v74 = 8LL;
          v54 = 1;
          v76 = 1LL;
          tlgCreate1Sz_wchar_t((__int64)v77, v26);
          v30 = *(_DWORD *)(v27 + 3432);
          v78 = &v60;
          v59 = *(_DWORD *)(a3 + 56);
          v80 = &v59;
          v82 = a3 + 5064;
          v58 = v61;
          v84 = &v58;
          v31 = -1LL;
          v60 = v30;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 16LL;
          v85 = 4LL;
          do
            ++v31;
          while ( *((_WORD *)&v144 + v31) != (_WORD)v29 );
          v88 = v29;
          v87 = 2 * v31 + 2;
          v86 = &v144;
          v89 = &v57;
          v57 = v36;
          v91 = &v56;
          v90 = 1LL;
          v93 = &v55;
          v56 = v37;
          v92 = 1LL;
          v55 = v38;
          v94 = 1LL;
          v95 = v28;
          v96 = 16LL;
          tlgCreate1Sz_char(v97, v27 + 168);
          tlgCreate1Sz_char(v98, v32 + 177);
          tlgCreate1Sz_char(v99, v33 + 242);
          do
            ++v11;
          while ( *((_BYTE *)&v142 + v11) != (_BYTE)v34 );
          HIDWORD(v101) = v34;
          v100 = (__int64 *)&v142;
          LODWORD(v101) = v11 + 1;
          tlgCreate1Sz_wchar_t((__int64)v102, (const wchar_t *)v126);
          v69 = v127;
          v103 = &v69;
          v104 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v105, v128);
          v68 = v129;
          v106 = &v68;
          v107 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v108, v130);
          v67 = v131;
          v109 = &v67;
          v110 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v111, v132);
          v66 = v133;
          v112 = &v66;
          v113 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v114, v134);
          v65 = v135;
          v115 = &v65;
          v116 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v117, v136);
          v64 = v137;
          v118 = &v64;
          v119 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v120, v138);
          v63 = v139;
          v121 = &v63;
          v122 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v123, v140);
          v125 = 8LL;
          v124 = &v62;
          v25 = &dword_14015F56B;
          v53 = 34;
          goto LABEL_37;
        }
      }
    }
    else if ( (unsigned int)dword_140170178 > 5 )
    {
      LOBYTE(Unit) = tlgKeywordOn(v39, 0x400000000000LL);
      if ( (_BYTE)Unit )
      {
        v40 = *(const wchar_t **)(a3 + 4720);
        v73 = &v62;
        v62 = 0x1000000LL;
        v75 = &v55;
        v74 = 8LL;
        v55 = 1;
        v76 = 1LL;
        tlgCreate1Sz_wchar_t((__int64)v77, v40);
        v42 = *(_DWORD *)(v41 + 3432);
        v78 = &v58;
        v59 = *(_DWORD *)(a3 + 56);
        v80 = &v59;
        v82 = a3 + 5064;
        v60 = v61;
        v58 = v42;
        v84 = &v60;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 16LL;
        v85 = 4LL;
        tlgCreate1Sz_wchar_t((__int64)&v86, (const wchar_t *)&v144);
        v56 = v36;
        v89 = &v56;
        v90 = 1LL;
        v91 = &v57;
        v57 = v37;
        v93 = &v54;
        v92 = 1LL;
        v54 = v38;
        v94 = 1LL;
        v95 = v44;
        v96 = 16LL;
        tlgCreate1Sz_char(v97, v43 + 168);
        tlgCreate1Sz_char(v98, v45 + 177);
        tlgCreate1Sz_char(v99, v46 + 242);
        do
          ++v11;
        while ( *((_BYTE *)&v142 + v11) != (_BYTE)v47 );
        HIDWORD(v101) = v47;
        v100 = (__int64 *)&v142;
        LODWORD(v101) = v11 + 1;
        tlgCreate1Sz_wchar_t((__int64)v102, (const wchar_t *)v126);
        v63 = v127;
        v103 = &v63;
        v104 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v105, v128);
        v64 = v129;
        v106 = &v64;
        v107 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v108, v130);
        v65 = v131;
        v109 = &v65;
        v110 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v111, v132);
        v66 = v133;
        v112 = &v66;
        v113 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v114, v134);
        v67 = v135;
        v115 = &v67;
        v116 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v117, v136);
        v68 = v137;
        v118 = &v68;
        v119 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v120, v138);
        v69 = v139;
        v121 = &v69;
        v122 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v123, v140);
        v124 = &v70;
        v70 = *(_QWORD *)v141;
        v125 = 8LL;
        LOBYTE(Unit) = tlgWriteEx_EtwWriteEx(v141[0], (int)&unk_140161DC4, v48, v49, v51, v52, 0x22u, (__int64)v72);
      }
    }
  }
  else if ( (unsigned int)dword_140170178 > 5 )
  {
    if ( (qword_140170188 & 0x400000000000LL) == 0
      || (LOBYTE(Unit) = 1, (qword_140170190 & 0x400000000000LL) != qword_140170190) )
    {
      LOBYTE(Unit) = 0;
    }
    if ( (_BYTE)Unit )
    {
      v20 = *(const wchar_t **)(a3 + 4720);
      v73 = &v70;
      v70 = 0x1000000LL;
      v75 = &v54;
      v74 = 8LL;
      v54 = 1;
      v76 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v77, v20);
      v22 = *(_DWORD *)(a3 + 4276);
      v78 = &v60;
      v59 = *(_DWORD *)(a3 + 56);
      v80 = &v59;
      v82 = a3 + 5064;
      v58 = v61;
      v84 = &v58;
      v60 = v22;
      v79 = 4LL;
      v81 = 4LL;
      v83 = 16LL;
      v85 = 4LL;
      do
        ++v11;
      while ( *((_WORD *)&v144 + v11) != (_WORD)v21 );
      v88 = v21;
      v86 = &v144;
      v87 = 2 * v11 + 2;
      tlgCreate1Sz_wchar_t((__int64)&v89, (const wchar_t *)v126);
      v69 = v127;
      v91 = (char *)&v69;
      v92 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)&v93, v128);
      v68 = v129;
      v95 = &v68;
      v96 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v97, v130);
      v67 = v131;
      v98[0] = &v67;
      v98[1] = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v99, v132);
      v66 = v133;
      v100 = &v66;
      v101 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v102, v134);
      v65 = v135;
      v103 = &v65;
      v104 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v105, v136);
      v64 = v137;
      v106 = &v64;
      v107 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v108, v138);
      v63 = v139;
      v109 = &v63;
      v110 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v111, v140);
      v113 = 8LL;
      v112 = &v62;
      v25 = (const int *)&unk_140162B97;
      v53 = 26;
LABEL_37:
      v62 = *(_QWORD *)v141;
      LOBYTE(Unit) = tlgWriteEx_EtwWriteEx(v141[0], (int)v25, v23, v24, v51, v52, v53, (__int64)v72);
    }
  }
  return (char)Unit;
}
