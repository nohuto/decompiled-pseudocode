/*
 * XREFs of PopPotsLogHibernatePerformance @ 0x140A59D2C
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140A594AC (PopDiagTraceHiberStats.c)
 * Callees:
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     Feature_PerfTrackSummary__private_IsEnabledDeviceUsageNoInline @ 0x1405D81E4 (Feature_PerfTrackSummary__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PopPotsLogHibernatePerformance(__int64 a1, char a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // rcx
  bool v10; // si
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r14
  unsigned __int8 *v23; // rdx
  ULONG v25; // [rsp+28h] [rbp-E0h]
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v47; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v50; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v51; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v52; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v53; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v54; // [rsp+118h] [rbp+10h] BYREF
  __int64 v55; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v56[2]; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  __int64 *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  __int64 *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  __int64 *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 *v70; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]
  __int64 *v72; // [rsp+1C8h] [rbp+C0h]
  __int64 v73; // [rsp+1D0h] [rbp+C8h]
  __int64 *v74; // [rsp+1D8h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 *v76; // [rsp+1E8h] [rbp+E0h]
  __int64 v77; // [rsp+1F0h] [rbp+E8h]
  __int64 *v78; // [rsp+1F8h] [rbp+F0h]
  __int64 v79; // [rsp+200h] [rbp+F8h]
  unsigned __int64 *v80; // [rsp+208h] [rbp+100h]
  __int64 v81; // [rsp+210h] [rbp+108h]
  unsigned __int64 *v82; // [rsp+218h] [rbp+110h]
  __int64 v83; // [rsp+220h] [rbp+118h]
  unsigned __int64 *v84; // [rsp+228h] [rbp+120h]
  __int64 v85; // [rsp+230h] [rbp+128h]
  unsigned __int64 *v86; // [rsp+238h] [rbp+130h]
  __int64 v87; // [rsp+240h] [rbp+138h]
  unsigned __int64 *v88; // [rsp+248h] [rbp+140h]
  __int64 v89; // [rsp+250h] [rbp+148h]
  unsigned __int64 *v90; // [rsp+258h] [rbp+150h]
  __int64 v91; // [rsp+260h] [rbp+158h]
  unsigned __int64 *v92; // [rsp+268h] [rbp+160h]
  __int64 v93; // [rsp+270h] [rbp+168h]
  unsigned __int64 *v94; // [rsp+278h] [rbp+170h]
  __int64 v95; // [rsp+280h] [rbp+178h]
  unsigned __int64 *v96; // [rsp+288h] [rbp+180h]
  __int64 v97; // [rsp+290h] [rbp+188h]
  unsigned __int64 *v98; // [rsp+298h] [rbp+190h]
  __int64 v99; // [rsp+2A0h] [rbp+198h]
  unsigned __int64 *v100; // [rsp+2A8h] [rbp+1A0h]
  __int64 v101; // [rsp+2B0h] [rbp+1A8h]
  __int64 v102; // [rsp+2B8h] [rbp+1B0h]
  __int64 v103; // [rsp+2C0h] [rbp+1B8h]
  __int64 v104; // [rsp+2C8h] [rbp+1C0h]
  __int64 v105; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 *v106; // [rsp+2D8h] [rbp+1D0h]
  __int64 v107; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int64 *v108; // [rsp+2E8h] [rbp+1E0h]
  __int64 v109; // [rsp+2F0h] [rbp+1E8h]
  unsigned __int64 *v110; // [rsp+2F8h] [rbp+1F0h]
  __int64 v111; // [rsp+300h] [rbp+1F8h]
  unsigned __int64 *v112; // [rsp+308h] [rbp+200h]
  __int64 v113; // [rsp+310h] [rbp+208h]
  __int64 *v114; // [rsp+318h] [rbp+210h]
  __int64 v115; // [rsp+320h] [rbp+218h]
  unsigned __int64 *v116; // [rsp+328h] [rbp+220h]
  __int64 v117; // [rsp+330h] [rbp+228h]
  unsigned __int64 *v118; // [rsp+338h] [rbp+230h]
  __int64 v119; // [rsp+340h] [rbp+238h]
  __int64 *v120; // [rsp+348h] [rbp+240h]
  __int64 v121; // [rsp+350h] [rbp+248h]
  _QWORD *v122; // [rsp+358h] [rbp+250h]
  __int64 v123; // [rsp+360h] [rbp+258h]
  _UNKNOWN *retaddr; // [rsp+3A0h] [rbp+298h] BYREF

  v2 = &retaddr;
  if ( PotsPowerTransitionsHandleRegistered )
  {
    v5 = *(_QWORD *)(a1 + 224);
    v6 = PopQpcFrequency;
    v38 = PpmConvertTime(*(_QWORD *)(a1 + 232), PopQpcFrequency, 0x3E8uLL);
    v28 = *(_QWORD *)(a1 + 448);
    v7 = *(_QWORD *)(a1 + 512);
    v29 = *(_QWORD *)(a1 + 312) / v5;
    v8 = *(_QWORD *)(a1 + 456);
    v9 = v7 - *(_QWORD *)(a1 + 112);
    v36 = *(_QWORD *)(a1 + 704) / v5;
    v31 = *(_QWORD *)(a1 + 152) / v5;
    v10 = (a2 & 8) != 0;
    v11 = v8 << 12;
    v35 = *(_QWORD *)(a1 + 696) / v5;
    v37 = *(_QWORD *)(a1 + 712) / v5;
    v12 = PpmConvertTime(v9, v6, 0x3E8uLL);
    v13 = *(_QWORD *)(a1 + 528) - *(_QWORD *)(a1 + 520);
    v27 = v12;
    v14 = PpmConvertTime(v13, v6, 0x3E8uLL);
    v15 = *(_QWORD *)(a1 + 528);
    v16 = *(_QWORD *)(a1 + 216);
    v41 = v14;
    if ( v15 )
      v17 = v16 - v15;
    else
      v17 = v16 - *(_QWORD *)(a1 + 512);
    v18 = PpmConvertTime(v17, v6, 0x3E8uLL);
    v19 = *(_QWORD *)(a1 + 232) - *(_QWORD *)(a1 + 288);
    v20 = *(_QWORD *)(a1 + 32) / v5;
    v34 = *(_QWORD *)(a1 + 40) / v5;
    v30 = *(_QWORD *)(a1 + 304) / v5;
    v32 = *(_QWORD *)(a1 + 160) / v5;
    v33 = *(_QWORD *)(a1 + 600) / v5;
    v39 = *(_QWORD *)(a1 + 720) / v5;
    v40 = *(_QWORD *)(a1 + 728) / v5;
    v21 = *(_QWORD *)(a1 + 736) / v5;
    v22 = PpmConvertTime(v19, v6, 0x3E8uLL);
    LODWORD(v2) = Feature_PerfTrackSummary__private_IsEnabledDeviceUsageNoInline();
    if ( (_DWORD)v2 )
    {
      if ( (unsigned int)dword_140E08220 > 5 )
      {
        LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E08220, 0x400000000000LL);
        if ( (_BYTE)v2 )
        {
          v42 = *(_QWORD *)(a1 + 256);
          v58 = (__int64 *)&v42;
          v43 = *(unsigned int *)(a1 + 264);
          v60 = (__int64 *)&v43;
          v44 = *(unsigned int *)(a1 + 88);
          v62 = &v44;
          v45 = *(unsigned int *)(a1 + 92);
          v64 = (__int64 *)&v45;
          v46 = v27;
          v66 = &v46;
          v68 = &v41;
          v70 = &v47;
          v48 = *(_QWORD *)(a1 + 432);
          v72 = &v48;
          v49 = *(_QWORD *)(a1 + 424);
          v74 = &v49;
          v50 = *(_QWORD *)(a1 + 416);
          v76 = &v50;
          v78 = &v28;
          v80 = &v29;
          v82 = &v30;
          v84 = &v51;
          v86 = &v31;
          v88 = &v32;
          v59 = 8LL;
          v61 = 8LL;
          v63 = 8LL;
          v65 = 8LL;
          v67 = 8LL;
          v69 = 8LL;
          v47 = v18;
          v71 = 8LL;
          v73 = 8LL;
          v75 = 8LL;
          v77 = 8LL;
          v79 = 8LL;
          v81 = 8LL;
          v83 = 8LL;
          v51 = v11;
          v85 = 8LL;
          v87 = 8LL;
          v89 = 8LL;
          v90 = &v33;
          v23 = (unsigned __int8 *)&dword_14004D9AC;
          v91 = 8LL;
          v92 = &v52;
          v94 = &v34;
          v96 = &v35;
          v98 = &v36;
          v100 = &v37;
          v102 = a1 + 616;
          v104 = a1 + 656;
          v106 = &v38;
          v108 = &v39;
          v110 = &v40;
          v112 = &v53;
          v114 = &v26;
          LODWORD(v27) = *(_DWORD *)(a1 + 408);
          v116 = &v27;
          v118 = &v54;
          v55 = *(unsigned int *)(a1 + 96);
          v120 = &v55;
          v122 = v56;
          v25 = 35;
          v52 = v20;
          v93 = 8LL;
          v95 = 8LL;
          v97 = 8LL;
          v99 = 8LL;
          v101 = 8LL;
          v103 = 40LL;
          v105 = 40LL;
          v107 = 8LL;
          v53 = v21;
          v54 = v22;
          v56[0] = 0x1000000LL;
          v123 = 8LL;
LABEL_12:
          v109 = 8LL;
          v113 = 8LL;
          v111 = 8LL;
          LOBYTE(v26) = v10;
          v115 = 1LL;
          v117 = 4LL;
          v119 = 8LL;
          v121 = 8LL;
          LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E08220, v23, 0LL, 0LL, v25, &v57);
        }
      }
    }
    else if ( (unsigned int)dword_140E08220 > 5 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E08220, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v56[0] = *(_QWORD *)(a1 + 256);
        v58 = v56;
        v55 = *(unsigned int *)(a1 + 264);
        v60 = &v55;
        v54 = *(unsigned int *)(a1 + 88);
        v62 = &v54;
        v53 = *(unsigned int *)(a1 + 92);
        v64 = (__int64 *)&v53;
        v52 = v27;
        v66 = (__int64 *)&v52;
        v51 = v41;
        v68 = &v51;
        v70 = &v50;
        v49 = *(_QWORD *)(a1 + 432);
        v72 = &v49;
        v48 = *(_QWORD *)(a1 + 424);
        v74 = &v48;
        v47 = *(_QWORD *)(a1 + 416);
        v76 = &v47;
        v46 = v28;
        v78 = &v46;
        v45 = v29;
        v80 = &v45;
        v44 = v30;
        v82 = &v44;
        v84 = &v43;
        v42 = v31;
        v86 = &v42;
        v88 = &v32;
        v59 = 8LL;
        v61 = 8LL;
        v63 = 8LL;
        v65 = 8LL;
        v67 = 8LL;
        v69 = 8LL;
        v50 = v18;
        v71 = 8LL;
        v73 = 8LL;
        v75 = 8LL;
        v77 = 8LL;
        v79 = 8LL;
        v81 = 8LL;
        v83 = 8LL;
        v43 = v11;
        v85 = 8LL;
        v87 = 8LL;
        v89 = 8LL;
        v90 = &v33;
        v23 = (unsigned __int8 *)byte_14004DCBD;
        v91 = 8LL;
        v92 = &v31;
        v94 = &v34;
        v96 = &v35;
        v98 = &v36;
        v100 = &v37;
        v102 = a1 + 616;
        v104 = a1 + 656;
        v106 = &v38;
        v108 = &v39;
        v110 = &v40;
        v112 = &v30;
        v114 = &v26;
        LODWORD(v27) = *(_DWORD *)(a1 + 408);
        v116 = &v27;
        v118 = &v29;
        v120 = &v28;
        v25 = 34;
        v31 = v20;
        v93 = 8LL;
        v95 = 8LL;
        v97 = 8LL;
        v99 = 8LL;
        v101 = 8LL;
        v103 = 40LL;
        v105 = 40LL;
        v107 = 8LL;
        v30 = v21;
        v29 = v22;
        v28 = 0x1000000LL;
        goto LABEL_12;
      }
    }
  }
  return (char)v2;
}
