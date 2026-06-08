/*
 * XREFs of AcpiEval_CPC @ 0x14002874C
 * Callers:
 *     InitAcpiCpc @ 0x1400266B8 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     GetCpcRegisterDefinitionTable @ 0x140006890 (GetCpcRegisterDefinitionTable.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002AFD0 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x14002C6E8 (AcpiTranslateAccessSize.c)
 *     AcpiEvaluateMethod @ 0x140041208 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_CPC(__int64 a1, _QWORD *a2)
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
  __int64 v15; // rdx
  unsigned int *v16; // r14
  __int64 v17; // r15
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+62h] [rbp-9Eh]
  const char *v25; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v26)(); // [rsp+70h] [rbp-90h]
  char v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ah] [rbp-86h]
  const char *v29; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v30)(); // [rsp+88h] [rbp-78h]
  char v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+92h] [rbp-6Eh]
  const char *v33; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v34)(); // [rsp+A0h] [rbp-60h]
  char v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+AAh] [rbp-56h]
  const char *v37; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v38)(); // [rsp+B8h] [rbp-48h]
  char v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C2h] [rbp-3Eh]
  const char *v41; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v42)(); // [rsp+D0h] [rbp-30h]
  char v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DAh] [rbp-26h]
  const char *v45; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v46)(); // [rsp+E8h] [rbp-18h]
  char v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F2h] [rbp-Eh]
  const char *v49; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v50)(); // [rsp+100h] [rbp+0h]
  char v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ah] [rbp+Ah]
  const char *v53; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v54)(); // [rsp+118h] [rbp+18h]
  char v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+122h] [rbp+22h]
  const char *v57; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v58)(); // [rsp+130h] [rbp+30h]
  char v59; // [rsp+138h] [rbp+38h]
  int v60; // [rsp+13Ah] [rbp+3Ah]
  const char *v61; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v62)(); // [rsp+148h] [rbp+48h]
  char v63; // [rsp+150h] [rbp+50h]
  int v64; // [rsp+152h] [rbp+52h]
  const char *v65; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v66)(); // [rsp+160h] [rbp+60h]
  char v67; // [rsp+168h] [rbp+68h]
  int v68; // [rsp+16Ah] [rbp+6Ah]
  const char *v69; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v70)(); // [rsp+178h] [rbp+78h]
  char v71; // [rsp+180h] [rbp+80h]
  int v72; // [rsp+182h] [rbp+82h]
  const char *v73; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v74)(); // [rsp+190h] [rbp+90h]
  char v75; // [rsp+198h] [rbp+98h]
  int v76; // [rsp+19Ah] [rbp+9Ah]
  const char *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v78)(); // [rsp+1A8h] [rbp+A8h]
  char v79; // [rsp+1B0h] [rbp+B0h]
  int v80; // [rsp+1B2h] [rbp+B2h]
  const char *v81; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v82)(); // [rsp+1C0h] [rbp+C0h]
  char v83; // [rsp+1C8h] [rbp+C8h]
  int v84; // [rsp+1CAh] [rbp+CAh]
  const char *v85; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v86)(); // [rsp+1D8h] [rbp+D8h]
  char v87; // [rsp+1E0h] [rbp+E0h]
  int v88; // [rsp+1E2h] [rbp+E2h]
  const char *v89; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v90)(); // [rsp+1F0h] [rbp+F0h]
  char v91; // [rsp+1F8h] [rbp+F8h]
  int v92; // [rsp+1FAh] [rbp+FAh]
  const char *v93; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v94)(); // [rsp+208h] [rbp+108h]
  char v95; // [rsp+210h] [rbp+110h]
  int v96; // [rsp+212h] [rbp+112h]
  const char *v97; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v98)(); // [rsp+220h] [rbp+120h]
  char v99; // [rsp+228h] [rbp+128h]
  int v100; // [rsp+22Ah] [rbp+12Ah]
  const char *v101; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v102)(); // [rsp+238h] [rbp+138h]
  char v103; // [rsp+240h] [rbp+140h]
  int v104; // [rsp+242h] [rbp+142h]
  const char *v105; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v106)(); // [rsp+250h] [rbp+150h]
  char v107; // [rsp+258h] [rbp+158h]
  int v108; // [rsp+25Ah] [rbp+15Ah]
  const char *v109; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v110)(); // [rsp+268h] [rbp+168h]
  char v111; // [rsp+270h] [rbp+170h]
  int v112; // [rsp+272h] [rbp+172h]
  const char *v113; // [rsp+278h] [rbp+178h]
  __int64 (__fastcall *v114)(); // [rsp+280h] [rbp+180h]
  char v115; // [rsp+288h] [rbp+188h]
  int v116; // [rsp+28Ah] [rbp+18Ah]
  const char *v117; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v118)(); // [rsp+298h] [rbp+198h]
  char v119; // [rsp+2A0h] [rbp+1A0h]
  int v120; // [rsp+2A2h] [rbp+1A2h]
  const char *v121; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v122)(); // [rsp+2B0h] [rbp+1B0h]
  char v123; // [rsp+2B8h] [rbp+1B8h]
  int v124; // [rsp+2BAh] [rbp+1BAh]
  const char *v125; // [rsp+2C0h] [rbp+1C0h]
  __int64 (__fastcall *v126)(); // [rsp+2C8h] [rbp+1C8h]
  char v127; // [rsp+2D0h] [rbp+1D0h]
  int v128; // [rsp+2D2h] [rbp+1D2h]
  const char *v129; // [rsp+2D8h] [rbp+1D8h]
  __int64 (__fastcall *v130)(); // [rsp+2E0h] [rbp+1E0h]
  char v131; // [rsp+2E8h] [rbp+1E8h]
  int v132; // [rsp+2EAh] [rbp+1EAh]
  const char *v133; // [rsp+2F0h] [rbp+1F0h]
  __int64 (__fastcall *v134)(); // [rsp+2F8h] [rbp+1F8h]
  char v135; // [rsp+300h] [rbp+200h]
  int v136; // [rsp+302h] [rbp+202h]
  const char *v137; // [rsp+308h] [rbp+208h]
  __int64 (__fastcall *v138)(); // [rsp+310h] [rbp+210h]
  char v139; // [rsp+318h] [rbp+218h]
  int v140; // [rsp+31Ah] [rbp+21Ah]
  const char *v141; // [rsp+320h] [rbp+220h]
  __int64 (__fastcall *v142)(); // [rsp+328h] [rbp+228h]
  char v143; // [rsp+330h] [rbp+230h]
  int v144; // [rsp+332h] [rbp+232h]
  const char *v145; // [rsp+338h] [rbp+238h]
  __int64 (__fastcall *v146)(); // [rsp+340h] [rbp+240h]
  char v147; // [rsp+348h] [rbp+248h]
  int v148; // [rsp+34Ah] [rbp+24Ah]
  const char *v149; // [rsp+350h] [rbp+250h]
  __int64 (__fastcall *v150)(); // [rsp+358h] [rbp+258h]
  char v151; // [rsp+360h] [rbp+260h]
  int v152; // [rsp+362h] [rbp+262h]
  const char *v153; // [rsp+368h] [rbp+268h]
  __int64 (__fastcall *v154)(); // [rsp+370h] [rbp+270h]

  v27 = 1;
  v22 = 0LL;
  v20 = 0;
  v19 = 0;
  v25 = "NumEntries";
  v23[0] = 0;
  v29 = "Revision";
  v24 = 0;
  v33 = "HighestPerformance";
  v37 = "HighestPerformance";
  v28 = 0x40000;
  v41 = "NominalPerformance";
  v45 = "NominalPerformance";
  v31 = 2;
  v49 = "LowestNonlinearPerformance";
  v53 = "LowestNonlinearPerformance";
  v57 = "LowestPerformance";
  v61 = "LowestPerformance";
  v65 = "GuaranteedPerformance";
  v69 = "DesiredPerformance";
  v73 = "MinimumPerformance";
  v77 = "MaximumPerformance";
  v26 = AcpiParseULong;
  v30 = AcpiParseULong;
  v32 = 0x80000;
  v34 = AcpiParseStaticRegister;
  v35 = 2;
  v36 = 524290;
  v38 = AcpiParseRegister;
  v39 = 3;
  v40 = 0x200000;
  v42 = AcpiParseStaticRegister;
  v43 = 3;
  v44 = 2097154;
  v46 = AcpiParseRegister;
  v47 = 4;
  v48 = 3670016;
  v50 = AcpiParseStaticRegister;
  v51 = 4;
  v52 = 3670018;
  v54 = AcpiParseRegister;
  v55 = 5;
  v56 = 5242880;
  v58 = AcpiParseStaticRegister;
  v59 = 5;
  v60 = 5242882;
  v62 = AcpiParseRegister;
  v63 = 6;
  v64 = 6815746;
  v66 = AcpiParseRegister;
  v67 = 7;
  v68 = 8388610;
  v70 = AcpiParseRegister;
  v71 = 8;
  v72 = 9961474;
  v74 = AcpiParseRegister;
  v75 = 9;
  v76 = 11534338;
  v78 = AcpiParseRegister;
  v79 = 10;
  v80 = 13107202;
  v82 = AcpiParseRegister;
  v81 = "PerformanceReductionTolerance";
  v4 = 21;
  v83 = 11;
  v85 = "TimeWindow";
  v89 = "CounterWraparound";
  v93 = "ReferenceCounter";
  v97 = "DeliveredCounter";
  v101 = "PerformanceLimited";
  v105 = "Enable";
  v109 = "AutonomousEnable";
  v113 = "AutonomousEnable";
  v117 = "AutonomousActivityWindow";
  v121 = "EnergyPerformancePreference";
  v125 = "ReferencePerformance";
  v129 = "ReferencePerformance";
  v133 = "LowestFrequency";
  v137 = "LowestFrequency";
  v141 = "NominalFrequency";
  v145 = "NominalFrequency";
  v84 = 14680066;
  v86 = AcpiParseRegister;
  v87 = 12;
  v88 = 16252930;
  v90 = AcpiParseRegister;
  v91 = 13;
  v92 = 17825794;
  v94 = AcpiParseRegister;
  v95 = 14;
  v96 = 19398658;
  v98 = AcpiParseRegister;
  v99 = 15;
  v100 = 20971522;
  v102 = AcpiParseRegister;
  v103 = 16;
  v104 = 22544386;
  v106 = AcpiParseRegister;
  v107 = 17;
  v108 = 24117248;
  v110 = AcpiParseStaticRegister;
  v111 = 17;
  v112 = 24117250;
  v114 = AcpiParseRegister;
  v115 = 18;
  v116 = 25690114;
  v118 = AcpiParseRegister;
  v119 = 19;
  v120 = 27262978;
  v122 = AcpiParseRegister;
  v123 = 20;
  v124 = 28835840;
  v126 = AcpiParseStaticRegister;
  v127 = 20;
  v128 = 28835842;
  v130 = AcpiParseRegister;
  v131 = 21;
  v132 = 30408704;
  v134 = AcpiParseStaticRegister;
  v135 = 21;
  v136 = 30408706;
  v138 = AcpiParseRegister;
  v139 = 22;
  v140 = 31981568;
  v142 = AcpiParseStaticRegister;
  v143 = 22;
  v144 = 31981570;
  v146 = AcpiParseRegister;
  v147 = 23;
  v148 = 33554434;
  v149 = "OSPMNominalPerformance";
  Pool2 = 0LL;
  v150 = AcpiParseRegister;
  v153 = "ResourcePriorities";
  v154 = AcpiParseCpcResourcePriorities;
  v151 = 24;
  v152 = 35127299;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40000u);
  v7 = AcpiEvaluateMethod(a1, 1129333599, 0, (unsigned int)&P, (__int64)&v19);
  if ( v7 < 0 )
    goto LABEL_30;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x8000000;
  if ( !v19 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        1,
        47,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
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
      ExFreePoolWithTag(Pool2, (ULONG)0);
    v8 = P;
    goto LABEL_33;
  }
  v8 = P;
  v7 = AcpiParseCore(
         (unsigned int)v23,
         2,
         (int)P + 12,
         *((_DWORD *)P + 1) - 12,
         (__int64)Pool2,
         544,
         (__int64)"_CPC",
         1);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_30;
    v10 = 48;
LABEL_11:
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      1,
      v10,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    goto LABEL_30;
  }
  v11 = Pool2[1];
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        1,
        49,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
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
  v7 = AcpiParseCore((unsigned int)v23, v4, (int)v8 + 12, v8[1] - 12, (__int64)Pool2, 544, (__int64)"_CPC", v14);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_30;
    v10 = 50;
    goto LABEL_11;
  }
  GetCpcRegisterDefinitionTable((__int64)Pool2, &v22, &v20);
  if ( v20 )
  {
    v16 = v22;
    v17 = v20;
    do
    {
      AcpiTranslateAccessSize((char *)Pool2 + *v16, v15);
      v16 += 6;
      --v17;
    }
    while ( v17 );
  }
  *a2 = Pool2;
LABEL_33:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)0);
  return (unsigned int)v7;
}
