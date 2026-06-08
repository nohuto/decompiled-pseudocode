/*
 * XREFs of sub_140031188 @ 0x140031188
 * Callers:
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140009398 @ 0x140009398 (sub_140009398.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140033E48 @ 0x140033E48 (sub_140033E48.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall sub_140031188(__int64 a1, _QWORD *a2)
{
  int v4; // r15d
  _DWORD *Pool2; // rdi
  int v6; // edx
  int v7; // ebx
  _DWORD *v8; // rsi
  int v9; // edx
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  unsigned int *v15; // r14
  __int64 v16; // r15
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+62h] [rbp-9Eh]
  const char *v24; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v25)(); // [rsp+70h] [rbp-90h]
  char v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ah] [rbp-86h]
  const char *v28; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v29)(); // [rsp+88h] [rbp-78h]
  char v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+92h] [rbp-6Eh]
  const char *v32; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v33)(); // [rsp+A0h] [rbp-60h]
  char v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+AAh] [rbp-56h]
  const char *v36; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v37)(); // [rsp+B8h] [rbp-48h]
  char v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C2h] [rbp-3Eh]
  const char *v40; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v41)(); // [rsp+D0h] [rbp-30h]
  char v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DAh] [rbp-26h]
  const char *v44; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v45)(); // [rsp+E8h] [rbp-18h]
  char v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F2h] [rbp-Eh]
  const char *v48; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v49)(); // [rsp+100h] [rbp+0h]
  char v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ah] [rbp+Ah]
  const char *v52; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v53)(); // [rsp+118h] [rbp+18h]
  char v54; // [rsp+120h] [rbp+20h]
  int v55; // [rsp+122h] [rbp+22h]
  const char *v56; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v57)(); // [rsp+130h] [rbp+30h]
  char v58; // [rsp+138h] [rbp+38h]
  int v59; // [rsp+13Ah] [rbp+3Ah]
  const char *v60; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v61)(); // [rsp+148h] [rbp+48h]
  char v62; // [rsp+150h] [rbp+50h]
  int v63; // [rsp+152h] [rbp+52h]
  const char *v64; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v65)(); // [rsp+160h] [rbp+60h]
  char v66; // [rsp+168h] [rbp+68h]
  int v67; // [rsp+16Ah] [rbp+6Ah]
  const char *v68; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v69)(); // [rsp+178h] [rbp+78h]
  char v70; // [rsp+180h] [rbp+80h]
  int v71; // [rsp+182h] [rbp+82h]
  const char *v72; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v73)(); // [rsp+190h] [rbp+90h]
  char v74; // [rsp+198h] [rbp+98h]
  int v75; // [rsp+19Ah] [rbp+9Ah]
  const char *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v77)(); // [rsp+1A8h] [rbp+A8h]
  char v78; // [rsp+1B0h] [rbp+B0h]
  int v79; // [rsp+1B2h] [rbp+B2h]
  const char *v80; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v81)(); // [rsp+1C0h] [rbp+C0h]
  char v82; // [rsp+1C8h] [rbp+C8h]
  int v83; // [rsp+1CAh] [rbp+CAh]
  const char *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v85)(); // [rsp+1D8h] [rbp+D8h]
  char v86; // [rsp+1E0h] [rbp+E0h]
  int v87; // [rsp+1E2h] [rbp+E2h]
  const char *v88; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v89)(); // [rsp+1F0h] [rbp+F0h]
  char v90; // [rsp+1F8h] [rbp+F8h]
  int v91; // [rsp+1FAh] [rbp+FAh]
  const char *v92; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v93)(); // [rsp+208h] [rbp+108h]
  char v94; // [rsp+210h] [rbp+110h]
  int v95; // [rsp+212h] [rbp+112h]
  const char *v96; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v97)(); // [rsp+220h] [rbp+120h]
  char v98; // [rsp+228h] [rbp+128h]
  int v99; // [rsp+22Ah] [rbp+12Ah]
  const char *v100; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v101)(); // [rsp+238h] [rbp+138h]
  char v102; // [rsp+240h] [rbp+140h]
  int v103; // [rsp+242h] [rbp+142h]
  const char *v104; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v105)(); // [rsp+250h] [rbp+150h]
  char v106; // [rsp+258h] [rbp+158h]
  int v107; // [rsp+25Ah] [rbp+15Ah]
  const char *v108; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v109)(); // [rsp+268h] [rbp+168h]
  char v110; // [rsp+270h] [rbp+170h]
  int v111; // [rsp+272h] [rbp+172h]
  const char *v112; // [rsp+278h] [rbp+178h]
  __int64 (__fastcall *v113)(); // [rsp+280h] [rbp+180h]
  char v114; // [rsp+288h] [rbp+188h]
  int v115; // [rsp+28Ah] [rbp+18Ah]
  const char *v116; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v117)(); // [rsp+298h] [rbp+198h]
  char v118; // [rsp+2A0h] [rbp+1A0h]
  int v119; // [rsp+2A2h] [rbp+1A2h]
  const char *v120; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v121)(); // [rsp+2B0h] [rbp+1B0h]
  char v122; // [rsp+2B8h] [rbp+1B8h]
  int v123; // [rsp+2BAh] [rbp+1BAh]
  const char *v124; // [rsp+2C0h] [rbp+1C0h]
  __int64 (__fastcall *v125)(); // [rsp+2C8h] [rbp+1C8h]
  char v126; // [rsp+2D0h] [rbp+1D0h]
  int v127; // [rsp+2D2h] [rbp+1D2h]
  const char *v128; // [rsp+2D8h] [rbp+1D8h]
  __int64 (__fastcall *v129)(); // [rsp+2E0h] [rbp+1E0h]
  char v130; // [rsp+2E8h] [rbp+1E8h]
  int v131; // [rsp+2EAh] [rbp+1EAh]
  const char *v132; // [rsp+2F0h] [rbp+1F0h]
  __int64 (__fastcall *v133)(); // [rsp+2F8h] [rbp+1F8h]
  char v134; // [rsp+300h] [rbp+200h]
  int v135; // [rsp+302h] [rbp+202h]
  const char *v136; // [rsp+308h] [rbp+208h]
  __int64 (__fastcall *v137)(); // [rsp+310h] [rbp+210h]
  char v138; // [rsp+318h] [rbp+218h]
  int v139; // [rsp+31Ah] [rbp+21Ah]
  const char *v140; // [rsp+320h] [rbp+220h]
  __int64 (__fastcall *v141)(); // [rsp+328h] [rbp+228h]
  char v142; // [rsp+330h] [rbp+230h]
  int v143; // [rsp+332h] [rbp+232h]
  const char *v144; // [rsp+338h] [rbp+238h]
  __int64 (__fastcall *v145)(); // [rsp+340h] [rbp+240h]
  char v146; // [rsp+348h] [rbp+248h]
  int v147; // [rsp+34Ah] [rbp+24Ah]
  const char *v148; // [rsp+350h] [rbp+250h]
  __int64 (__fastcall *v149)(); // [rsp+358h] [rbp+258h]
  char v150; // [rsp+360h] [rbp+260h]
  int v151; // [rsp+362h] [rbp+262h]
  const char *v152; // [rsp+368h] [rbp+268h]
  __int64 (__fastcall *v153)(); // [rsp+370h] [rbp+270h]

  v26 = 1;
  v21 = 0LL;
  v19 = 0;
  v18 = 0;
  v24 = "NumEntries";
  v22[0] = 0;
  v28 = "Revision";
  v23 = 0;
  v32 = "HighestPerformance";
  v36 = "HighestPerformance";
  v27 = 0x40000;
  v40 = "NominalPerformance";
  v44 = "NominalPerformance";
  v30 = 2;
  v48 = "LowestNonlinearPerformance";
  v52 = "LowestNonlinearPerformance";
  v56 = "LowestPerformance";
  v60 = "LowestPerformance";
  v64 = "GuaranteedPerformance";
  v68 = "DesiredPerformance";
  v72 = "MinimumPerformance";
  v76 = "MaximumPerformance";
  v25 = sub_140045530;
  v29 = sub_140045530;
  v31 = 0x80000;
  v33 = sub_140033AC0;
  v34 = 2;
  v35 = 524290;
  v37 = sub_140045480;
  v38 = 3;
  v39 = 0x200000;
  v41 = sub_140033AC0;
  v42 = 3;
  v43 = 2097154;
  v45 = sub_140045480;
  v46 = 4;
  v47 = 3670016;
  v49 = sub_140033AC0;
  v50 = 4;
  v51 = 3670018;
  v53 = sub_140045480;
  v54 = 5;
  v55 = 5242880;
  v57 = sub_140033AC0;
  v58 = 5;
  v59 = 5242882;
  v61 = sub_140045480;
  v62 = 6;
  v63 = 6815746;
  v65 = sub_140045480;
  v66 = 7;
  v67 = 8388610;
  v69 = sub_140045480;
  v70 = 8;
  v71 = 9961474;
  v73 = sub_140045480;
  v74 = 9;
  v75 = 11534338;
  v77 = sub_140045480;
  v78 = 10;
  v79 = 13107202;
  v81 = sub_140045480;
  v80 = "PerformanceReductionTolerance";
  v4 = 21;
  v82 = 11;
  v84 = "TimeWindow";
  v88 = "CounterWraparound";
  v92 = "ReferenceCounter";
  v96 = "DeliveredCounter";
  v100 = "PerformanceLimited";
  v104 = "Enable";
  v108 = "AutonomousEnable";
  v112 = "AutonomousEnable";
  v116 = "AutonomousActivityWindow";
  v120 = "EnergyPerformancePreference";
  v124 = "ReferencePerformance";
  v128 = "ReferencePerformance";
  v132 = "LowestFrequency";
  v136 = "LowestFrequency";
  v140 = "NominalFrequency";
  v144 = "NominalFrequency";
  v83 = 14680066;
  v85 = sub_140045480;
  v86 = 12;
  v87 = 16252930;
  v89 = sub_140045480;
  v90 = 13;
  v91 = 17825794;
  v93 = sub_140045480;
  v94 = 14;
  v95 = 19398658;
  v97 = sub_140045480;
  v98 = 15;
  v99 = 20971522;
  v101 = sub_140045480;
  v102 = 16;
  v103 = 22544386;
  v105 = sub_140045480;
  v106 = 17;
  v107 = 24117248;
  v109 = sub_140033AC0;
  v110 = 17;
  v111 = 24117250;
  v113 = sub_140045480;
  v114 = 18;
  v115 = 25690114;
  v117 = sub_140045480;
  v118 = 19;
  v119 = 27262978;
  v121 = sub_140045480;
  v122 = 20;
  v123 = 28835840;
  v125 = sub_140033AC0;
  v126 = 20;
  v127 = 28835842;
  v129 = sub_140045480;
  v130 = 21;
  v131 = 30408704;
  v133 = sub_140033AC0;
  v134 = 21;
  v135 = 30408706;
  v137 = sub_140045480;
  v138 = 22;
  v139 = 31981568;
  v141 = sub_140033AC0;
  v142 = 22;
  v143 = 31981570;
  v145 = sub_140045480;
  v146 = 23;
  v147 = 33554434;
  v148 = "OSPMNominalPerformance";
  Pool2 = 0LL;
  v149 = sub_140045480;
  v152 = "ResourcePriorities";
  v153 = sub_140032AE0;
  v150 = 24;
  v151 = 35127299;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40000u);
  v7 = sub_140040DB8(a1, 1129333599, 0, (unsigned int)&P, (__int64)&v18);
  if ( v7 < 0 )
    goto LABEL_30;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x8000000;
  if ( !v18 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v6) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v6, 1, 47, (__int64)&unk_140012FE8);
    }
    v7 = -1073741275;
    goto LABEL_30;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 544LL, 1919119952LL);
  if ( !Pool2 )
  {
    v7 = -1073741670;
LABEL_30:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v8 = P;
    goto LABEL_33;
  }
  v8 = P;
  v7 = sub_14003F9A0(
         (unsigned int)v22,
         2,
         (int)P + 12,
         *((_DWORD *)P + 1) - 12,
         (__int64)Pool2,
         544,
         (__int64)"_CPC",
         1);
  if ( v7 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_30;
    v10 = 48;
LABEL_11:
    LOBYTE(v9) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v9, 1, v10, (__int64)&unk_140012FE8);
    goto LABEL_30;
  }
  v11 = Pool2[1];
  if ( !v11 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v9) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v9, 1, 49, (__int64)&unk_140012FE8);
    }
    v7 = -1072431089;
    goto LABEL_30;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        v14 = 1;
        v4 = 33;
        goto LABEL_20;
      }
      v4 = 31;
    }
    else
    {
      v4 = 27;
    }
  }
  v14 = 0;
LABEL_20:
  v7 = sub_14003F9A0((unsigned int)v22, v4, (int)v8 + 12, v8[1] - 12, (__int64)Pool2, 544, (__int64)"_CPC", v14);
  if ( v7 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_30;
    v10 = 50;
    goto LABEL_11;
  }
  sub_140009398((__int64)Pool2, &v21, &v19);
  if ( v19 )
  {
    v15 = v21;
    v16 = v19;
    do
    {
      sub_140033E48((char *)Pool2 + *v15);
      v15 += 6;
      --v16;
    }
    while ( v16 );
  }
  *a2 = Pool2;
LABEL_33:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v7;
}
