/*
 * XREFs of PopDiagTraceCsExitReason @ 0x140ABCB20
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceCsExitReason(int *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int8 v6; // cl
  unsigned int v7; // ecx
  int v8; // esi
  struct _EVENT_DATA_DESCRIPTOR *Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  bool v11; // zf
  char v12; // [rsp+38h] [rbp-D0h] BYREF
  char v13; // [rsp+39h] [rbp-CFh] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  BOOL v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+5Ch] [rbp-ACh] BYREF
  int v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+64h] [rbp-A4h] BYREF
  int v25; // [rsp+68h] [rbp-A0h] BYREF
  int v26; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v27; // [rsp+70h] [rbp-98h] BYREF
  int v28; // [rsp+74h] [rbp-94h] BYREF
  int v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v31; // [rsp+80h] [rbp-88h] BYREF
  int v32; // [rsp+84h] [rbp-84h] BYREF
  BOOL v33; // [rsp+88h] [rbp-80h] BYREF
  int v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v35; // [rsp+90h] [rbp-78h] BYREF
  int v36; // [rsp+94h] [rbp-74h] BYREF
  int v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A4h] [rbp-64h] BYREF
  int v41; // [rsp+A8h] [rbp-60h] BYREF
  int v42; // [rsp+ACh] [rbp-5Ch] BYREF
  int v43; // [rsp+B0h] [rbp-58h] BYREF
  int v44; // [rsp+B4h] [rbp-54h] BYREF
  int v45; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v54; // [rsp+100h] [rbp-8h] BYREF
  __int64 v55; // [rsp+108h] [rbp+0h] BYREF
  __int64 v56; // [rsp+110h] [rbp+8h] BYREF
  __int64 v57; // [rsp+118h] [rbp+10h] BYREF
  __int64 v58; // [rsp+120h] [rbp+18h] BYREF
  __int64 v59; // [rsp+128h] [rbp+20h] BYREF
  __int64 v60; // [rsp+130h] [rbp+28h] BYREF
  __int64 v61; // [rsp+138h] [rbp+30h] BYREF
  __int64 v62; // [rsp+140h] [rbp+38h] BYREF
  __int64 v63; // [rsp+148h] [rbp+40h] BYREF
  __int64 v64; // [rsp+150h] [rbp+48h] BYREF
  __int64 v65; // [rsp+158h] [rbp+50h] BYREF
  __int64 v66; // [rsp+160h] [rbp+58h] BYREF
  __int64 v67; // [rsp+168h] [rbp+60h] BYREF
  __int64 v68; // [rsp+170h] [rbp+68h] BYREF
  __int64 v69; // [rsp+178h] [rbp+70h] BYREF
  __int64 v70; // [rsp+180h] [rbp+78h] BYREF
  __int64 v71; // [rsp+188h] [rbp+80h] BYREF
  __int64 v72; // [rsp+190h] [rbp+88h] BYREF
  __int64 v73; // [rsp+198h] [rbp+90h] BYREF
  __int64 v74; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v75; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v76; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v77; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v78; // [rsp+1C0h] [rbp+B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  int *v82; // [rsp+1F8h] [rbp+F0h]
  __int64 v83; // [rsp+200h] [rbp+F8h]
  __int64 *v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  __int64 *v86; // [rsp+218h] [rbp+110h]
  __int64 v87; // [rsp+220h] [rbp+118h]
  __int64 *v88; // [rsp+228h] [rbp+120h]
  __int64 v89; // [rsp+230h] [rbp+128h]
  __int64 *v90; // [rsp+238h] [rbp+130h]
  __int64 v91; // [rsp+240h] [rbp+138h]
  __int64 *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  int *v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  char *v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  BOOL *v98; // [rsp+278h] [rbp+170h]
  __int64 v99; // [rsp+280h] [rbp+178h]
  int *v100; // [rsp+288h] [rbp+180h]
  __int64 v101; // [rsp+290h] [rbp+188h]
  __int64 *v102; // [rsp+298h] [rbp+190h]
  __int64 v103; // [rsp+2A0h] [rbp+198h]
  __int64 *v104; // [rsp+2A8h] [rbp+1A0h]
  __int64 v105; // [rsp+2B0h] [rbp+1A8h]
  int *v106; // [rsp+2B8h] [rbp+1B0h]
  __int64 v107; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v108; // [rsp+2C8h] [rbp+1C0h]
  __int64 v109; // [rsp+2D0h] [rbp+1C8h]
  __int64 *v110; // [rsp+2D8h] [rbp+1D0h]
  __int64 v111; // [rsp+2E0h] [rbp+1D8h]
  int *v112; // [rsp+2E8h] [rbp+1E0h]
  __int64 v113; // [rsp+2F0h] [rbp+1E8h]
  int *v114; // [rsp+2F8h] [rbp+1F0h]
  __int64 v115; // [rsp+300h] [rbp+1F8h]
  __int64 *v116; // [rsp+308h] [rbp+200h]
  __int64 v117; // [rsp+310h] [rbp+208h]
  int *v118; // [rsp+318h] [rbp+210h]
  __int64 v119; // [rsp+320h] [rbp+218h]
  int *v120; // [rsp+328h] [rbp+220h]
  __int64 v121; // [rsp+330h] [rbp+228h]
  int *v122; // [rsp+338h] [rbp+230h]
  __int64 v123; // [rsp+340h] [rbp+238h]
  int *v124; // [rsp+348h] [rbp+240h]
  __int64 v125; // [rsp+350h] [rbp+248h]
  int *v126; // [rsp+358h] [rbp+250h]
  __int64 v127; // [rsp+360h] [rbp+258h]
  int *v128; // [rsp+368h] [rbp+260h]
  __int64 v129; // [rsp+370h] [rbp+268h]
  __int64 *v130; // [rsp+378h] [rbp+270h]
  __int64 v131; // [rsp+380h] [rbp+278h]
  __int64 *v132; // [rsp+388h] [rbp+280h]
  __int64 v133; // [rsp+390h] [rbp+288h]
  __int64 *v134; // [rsp+398h] [rbp+290h]
  __int64 v135; // [rsp+3A0h] [rbp+298h]
  __int64 *v136; // [rsp+3A8h] [rbp+2A0h]
  __int64 v137; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v138; // [rsp+3B8h] [rbp+2B0h]
  __int64 v139; // [rsp+3C0h] [rbp+2B8h]
  __int64 *v140; // [rsp+3C8h] [rbp+2C0h]
  __int64 v141; // [rsp+3D0h] [rbp+2C8h]
  int *v142; // [rsp+3D8h] [rbp+2D0h]
  __int64 v143; // [rsp+3E0h] [rbp+2D8h]
  int *v144; // [rsp+3E8h] [rbp+2E0h]
  __int64 v145; // [rsp+3F0h] [rbp+2E8h]
  __int64 v146; // [rsp+440h] [rbp+338h] BYREF

  v146 = a2;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 11);
  v15 = *a1;
  v49 = *((_QWORD *)a1 + 5);
  v46 = *((_QWORD *)a1 + 6);
  v16 = a1[14];
  v48 = *((_QWORD *)a1 + 8);
  v47 = *((_QWORD *)a1 + 9);
  v52 = *((_QWORD *)a1 + 12);
  v55 = *((_QWORD *)a1 + 13);
  v56 = *((_QWORD *)a1 + 10);
  v5 = *((_QWORD *)a1 + 18);
  v6 = *((_BYTE *)a1 + 136);
  v53 = v5;
  v12 = v6 >> 1;
  v18 = a1[32];
  v54 = *((_QWORD *)a1 + 21);
  v19 = v6 & 1;
  v7 = *((unsigned __int8 *)a1 + 137);
  LOBYTE(v5) = *((_BYTE *)a1 + 137);
  v14 = 0;
  v21 = v5 & 1;
  v58 = *((_QWORD *)a1 + 31);
  v57 = *((_QWORD *)a1 + 32);
  v59 = *((_QWORD *)a1 + 33);
  v60 = *((_QWORD *)a1 + 34);
  v61 = *((_QWORD *)a1 + 35);
  v28 = a1[50];
  v29 = a1[51];
  v23 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v22 = (unsigned __int8)PopLidOpened;
  v30 = *((unsigned __int8 *)a1 + 208);
  v24 = a1[53];
  v25 = a1[54];
  v26 = a1[60];
  v27 = a1[86];
  v51 = v3;
  v50 = v4;
  v20 = (v7 >> 1) & 1;
  if ( !v3 )
  {
    v46 = 0LL;
    v4 = 0LL;
    v49 = 0LL;
    v48 = 0LL;
    v47 = 0LL;
    v50 = 0LL;
  }
  v17 = v4 != 0;
  v8 = 0;
  Pool2 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(0x100uLL, 0x340uLL, 0x50455654u);
  UserData = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)&Pool2->Size = 4LL;
    Pool2->Ptr = (ULONGLONG)&v15;
    Pool2[1].Ptr = (ULONGLONG)&v46;
    *(_QWORD *)&Pool2[1].Size = 8LL;
    Pool2[2].Ptr = (ULONGLONG)&v47;
    *(_QWORD *)&Pool2[2].Size = 8LL;
    Pool2[3].Ptr = (ULONGLONG)&v48;
    *(_QWORD *)&Pool2[3].Size = 8LL;
    Pool2[4].Ptr = (ULONGLONG)&v49;
    *(_QWORD *)&Pool2[4].Size = 8LL;
    Pool2[5].Ptr = (ULONGLONG)&v51;
    *(_QWORD *)&Pool2[5].Size = 8LL;
    Pool2[6].Ptr = (ULONGLONG)&v16;
    *(_QWORD *)&Pool2[6].Size = 4LL;
    Pool2[7].Ptr = (ULONGLONG)&v12;
    *(_QWORD *)&Pool2[7].Size = 1LL;
    Pool2[8].Ptr = (ULONGLONG)&v17;
    *(_QWORD *)&Pool2[8].Size = 4LL;
    Pool2[9].Ptr = (ULONGLONG)&v18;
    *(_QWORD *)&Pool2[9].Size = 4LL;
    Pool2[10].Ptr = (ULONGLONG)&v50;
    *(_QWORD *)&Pool2[10].Size = 8LL;
    Pool2[11].Ptr = (ULONGLONG)&v52;
    *(_QWORD *)&Pool2[11].Size = 8LL;
    Pool2[12].Ptr = (ULONGLONG)&v19;
    *(_QWORD *)&Pool2[12].Size = 4LL;
    Pool2[13].Ptr = (ULONGLONG)&v53;
    *(_QWORD *)&Pool2[13].Size = 8LL;
    Pool2[14].Ptr = (ULONGLONG)&v54;
    *(_QWORD *)&Pool2[14].Size = 8LL;
    Pool2[15].Ptr = (ULONGLONG)&v20;
    *(_QWORD *)&Pool2[15].Size = 4LL;
    Pool2[16].Ptr = (ULONGLONG)&v21;
    *(_QWORD *)&Pool2[16].Size = 4LL;
    Pool2[17].Ptr = (ULONGLONG)&v55;
    *(_QWORD *)&Pool2[17].Size = 8LL;
    Pool2[18].Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&Pool2[18].Size = 4LL;
    Pool2[19].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&Pool2[19].Size = 4LL;
    Pool2[20].Ptr = (ULONGLONG)&v22;
    *(_QWORD *)&Pool2[20].Size = 4LL;
    Pool2[21].Ptr = (ULONGLONG)&v23;
    *(_QWORD *)&Pool2[21].Size = 4LL;
    Pool2[22].Ptr = (ULONGLONG)&v146;
    *(_QWORD *)&Pool2[22].Size = 1LL;
    Pool2[23].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&Pool2[23].Size = 4LL;
    Pool2[24].Ptr = (ULONGLONG)&v24;
    *(_QWORD *)&Pool2[24].Size = 4LL;
    Pool2[25].Ptr = (ULONGLONG)&v25;
    *(_QWORD *)&Pool2[25].Size = 4LL;
    Pool2[26].Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
    *(_QWORD *)&Pool2[26].Size = 8LL;
    v11 = PopDiagHandleRegistered == 0;
    Pool2[27].Ptr = 0xFFFFF780000002C4uLL;
    *(_QWORD *)&Pool2[27].Size = 4LL;
    Pool2[28].Ptr = (ULONGLONG)&v26;
    *(_QWORD *)&Pool2[28].Size = 4LL;
    Pool2[29].Ptr = (ULONGLONG)&v56;
    *(_QWORD *)&Pool2[29].Size = 8LL;
    Pool2[30].Ptr = (ULONGLONG)&v57;
    *(_QWORD *)&Pool2[30].Size = 8LL;
    Pool2[31].Ptr = (ULONGLONG)&v58;
    *(_QWORD *)&Pool2[31].Size = 8LL;
    Pool2[32].Ptr = (ULONGLONG)&v59;
    *(_QWORD *)&Pool2[32].Size = 8LL;
    Pool2[33].Ptr = (ULONGLONG)&v60;
    *(_QWORD *)&Pool2[33].Size = 8LL;
    Pool2[34].Ptr = (ULONGLONG)&v61;
    *(_QWORD *)&Pool2[34].Size = 8LL;
    v14 = *((unsigned __int8 *)a1 + 288);
    Pool2[35].Ptr = (ULONGLONG)&v14;
    *(_QWORD *)&Pool2[35].Size = 4LL;
    Pool2[36].Ptr = (ULONGLONG)(a1 + 76);
    *(_QWORD *)&Pool2[36].Size = 4LL;
    Pool2[37].Ptr = (ULONGLONG)(a1 + 77);
    *(_QWORD *)&Pool2[37].Size = 4LL;
    Pool2[38].Ptr = (ULONGLONG)(a1 + 74);
    *(_QWORD *)&Pool2[38].Size = 8LL;
    Pool2[39].Ptr = (ULONGLONG)(a1 + 82);
    *(_QWORD *)&Pool2[39].Size = 4LL;
    Pool2[40].Ptr = (ULONGLONG)(a1 + 83);
    *(_QWORD *)&Pool2[40].Size = 4LL;
    Pool2[41].Ptr = (ULONGLONG)(a1 + 80);
    *(_QWORD *)&Pool2[41].Size = 8LL;
    Pool2[42].Ptr = (ULONGLONG)(a1 + 78);
    *(_QWORD *)&Pool2[42].Size = 4LL;
    Pool2[43].Ptr = (ULONGLONG)(a1 + 79);
    *(_QWORD *)&Pool2[43].Size = 4LL;
    Pool2[44].Ptr = (ULONGLONG)(a1 + 84);
    *(_QWORD *)&Pool2[44].Size = 4LL;
    Pool2[45].Ptr = (ULONGLONG)(a1 + 85);
    *(_QWORD *)&Pool2[45].Size = 4LL;
    Pool2[46].Ptr = (ULONGLONG)(a1 + 59);
    *(_QWORD *)&Pool2[46].Size = 4LL;
    Pool2[47].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&Pool2[47].Size = 4LL;
    Pool2[48].Ptr = (ULONGLONG)(a1 + 100);
    *(_QWORD *)&Pool2[48].Size = 8LL;
    Pool2[49].Ptr = (ULONGLONG)(a1 + 102);
    *(_QWORD *)&Pool2[49].Size = 8LL;
    Pool2[50].Ptr = (ULONGLONG)(a1 + 104);
    *(_QWORD *)&Pool2[50].Size = 8LL;
    Pool2[51].Ptr = (ULONGLONG)(a1 + 106);
    *(_QWORD *)&Pool2[51].Size = 8LL;
    if ( !v11 && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON) && SSHSupportIsPlatformAoAc() )
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON, 0LL, 0x34u, UserData);
    if ( PopDiagSleepStudyHandleRegistered
      && EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_EXIT_REASON)
      && SSHSupportIsPlatformAoAc() )
    {
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_EXIT_REASON, 0LL, 0x34u, UserData);
    }
    ExFreePoolWithTag(UserData, 0x50455654u);
  }
  else
  {
    v8 = -1073741670;
  }
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v62 = PopWnfCsEnterScenarioId;
    v80 = &v62;
    v31 = v15;
    v82 = &v31;
    v63 = v46;
    v84 = &v63;
    v64 = v47;
    v86 = &v64;
    v65 = v48;
    v88 = &v65;
    v66 = v49;
    v90 = &v66;
    v67 = v51;
    v92 = &v67;
    v32 = v16;
    v94 = &v32;
    v13 = v12;
    v96 = &v13;
    v33 = v17;
    v98 = &v33;
    v34 = v18;
    v100 = &v34;
    v68 = v50;
    v102 = &v68;
    v69 = v52;
    v104 = &v69;
    v35 = v19;
    v106 = &v35;
    v70 = v53;
    v108 = &v70;
    v71 = v54;
    v110 = &v71;
    v81 = 8LL;
    v83 = 4LL;
    v85 = 8LL;
    v87 = 8LL;
    v89 = 8LL;
    v91 = 8LL;
    v93 = 8LL;
    v95 = 4LL;
    v97 = 1LL;
    v99 = 4LL;
    v101 = 4LL;
    v103 = 8LL;
    v105 = 8LL;
    v107 = 4LL;
    v109 = 8LL;
    v111 = 8LL;
    v36 = v20;
    v112 = &v36;
    v37 = v21;
    v114 = &v37;
    v72 = v55;
    v116 = &v72;
    v38 = v22;
    v118 = &v38;
    v39 = v23;
    v120 = &v39;
    v40 = v24;
    v122 = &v40;
    v41 = v25;
    v124 = &v41;
    v126 = &v42;
    v43 = v26;
    v128 = &v43;
    v73 = v56;
    v130 = &v73;
    v74 = v57;
    v132 = &v74;
    v75 = v58;
    v134 = &v75;
    v76 = v59;
    v136 = &v76;
    v77 = v60;
    v138 = &v77;
    v78 = v61;
    v140 = &v78;
    v44 = v27;
    v142 = &v44;
    v45 = a1[87];
    v113 = 4LL;
    v115 = 4LL;
    v117 = 8LL;
    v119 = 4LL;
    v121 = 4LL;
    v123 = 4LL;
    v125 = 4LL;
    v42 = v8;
    v127 = 4LL;
    v129 = 4LL;
    v131 = 8LL;
    v133 = 8LL;
    v135 = 8LL;
    v137 = 8LL;
    v139 = 8LL;
    v141 = 8LL;
    v143 = 4LL;
    v144 = &v45;
    v145 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)byte_14004A9A5,
      0LL,
      0LL,
      0x23u,
      &v79);
  }
}
