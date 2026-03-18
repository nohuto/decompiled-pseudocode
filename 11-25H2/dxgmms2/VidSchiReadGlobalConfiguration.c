/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x14010F69C
 * Callers:
 *     VidSchInitializeAdapter @ 0x140115D50 (VidSchInitializeAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchiReadNodeConfiguration @ 0x1401105F4 (VidSchiReadNodeConfiguration.c)
 */

__int64 __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  __int64 v1; // r8
  int v3; // edi
  int v4; // edx
  int v5; // r9d
  bool v6; // sf
  bool v7; // of
  int NodeConfiguration; // r11d
  unsigned int i; // ecx
  _DWORD *v10; // rdx
  int *v11; // rdx
  unsigned int v12; // r8d
  int *v13; // rdx
  int *v14; // r9
  int *v15; // r9
  int v16; // r10d
  int v17; // ecx
  int v18; // ecx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  bool v29; // cc
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 j; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  int v37; // edx
  unsigned int v38; // edx
  int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 result; // rax
  unsigned int v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v48; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v49; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v50; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v51; // [rsp+6Ch] [rbp-94h] BYREF
  int v52; // [rsp+70h] [rbp-90h] BYREF
  int v53; // [rsp+74h] [rbp-8Ch] BYREF
  int v54; // [rsp+78h] [rbp-88h] BYREF
  int v55; // [rsp+7Ch] [rbp-84h] BYREF
  int v56; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+84h] [rbp-7Ch] BYREF
  int v58; // [rsp+88h] [rbp-78h] BYREF
  int v59; // [rsp+8Ch] [rbp-74h] BYREF
  int v60; // [rsp+90h] [rbp-70h] BYREF
  int v61; // [rsp+94h] [rbp-6Ch] BYREF
  int v62; // [rsp+98h] [rbp-68h] BYREF
  int v63; // [rsp+9Ch] [rbp-64h] BYREF
  int v64; // [rsp+A0h] [rbp-60h] BYREF
  int v65; // [rsp+A4h] [rbp-5Ch] BYREF
  int v66; // [rsp+A8h] [rbp-58h] BYREF
  int v67; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v68; // [rsp+B0h] [rbp-50h] BYREF
  int v69; // [rsp+B4h] [rbp-4Ch] BYREF
  int v70; // [rsp+B8h] [rbp-48h] BYREF
  int v71; // [rsp+BCh] [rbp-44h] BYREF
  int v72; // [rsp+C0h] [rbp-40h] BYREF
  int v73; // [rsp+C4h] [rbp-3Ch] BYREF
  int v74; // [rsp+C8h] [rbp-38h] BYREF
  int v75; // [rsp+CCh] [rbp-34h] BYREF
  int v76; // [rsp+D0h] [rbp-30h] BYREF
  int v77; // [rsp+D4h] [rbp-2Ch] BYREF
  BOOL v78; // [rsp+D8h] [rbp-28h] BYREF
  int v79; // [rsp+DCh] [rbp-24h] BYREF
  int v80; // [rsp+E0h] [rbp-20h] BYREF
  int v81; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned int v82; // [rsp+E8h] [rbp-18h] BYREF
  int v83; // [rsp+ECh] [rbp-14h] BYREF
  int v84; // [rsp+F0h] [rbp-10h] BYREF
  int v85; // [rsp+F4h] [rbp-Ch] BYREF
  int v86; // [rsp+F8h] [rbp-8h] BYREF
  int v87; // [rsp+FCh] [rbp-4h] BYREF
  int v88; // [rsp+100h] [rbp+0h] BYREF
  int v89; // [rsp+104h] [rbp+4h] BYREF
  int v90; // [rsp+108h] [rbp+8h] BYREF
  int v91; // [rsp+10Ch] [rbp+Ch] BYREF
  int v92; // [rsp+110h] [rbp+10h] BYREF
  int v93; // [rsp+114h] [rbp+14h] BYREF
  int v94; // [rsp+118h] [rbp+18h] BYREF
  int v95; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v96; // [rsp+120h] [rbp+20h] BYREF
  int v97; // [rsp+124h] [rbp+24h] BYREF
  int v98; // [rsp+128h] [rbp+28h] BYREF
  int v99; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v100; // [rsp+130h] [rbp+30h] BYREF
  int v101; // [rsp+134h] [rbp+34h] BYREF
  int v102; // [rsp+138h] [rbp+38h] BYREF
  int v103; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v104; // [rsp+140h] [rbp+40h] BYREF
  int v105; // [rsp+144h] [rbp+44h] BYREF
  unsigned int v106; // [rsp+148h] [rbp+48h] BYREF
  int v107; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v108; // [rsp+150h] [rbp+50h] BYREF
  BOOL v109; // [rsp+154h] [rbp+54h] BYREF
  int v110; // [rsp+158h] [rbp+58h] BYREF
  int v111; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v112; // [rsp+160h] [rbp+60h] BYREF
  int v113; // [rsp+164h] [rbp+64h] BYREF
  _QWORD v114[252]; // [rsp+170h] [rbp+70h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v83 = 0;
  v84 = 25000;
  v85 = 50000;
  v90 = 3;
  v88 = 1;
  v89 = 2;
  v3 = 16;
  v92 = 1;
  v4 = 100;
  v95 = 2;
  v91 = 0;
  v93 = 0;
  v97 = 0;
  v94 = 20;
  v53 = 7;
  v5 = *(_DWORD *)(*(_QWORD *)(v1 + 3008) + 4LL) & 1;
  v98 = 900;
  v96 = v5;
  v99 = 1000;
  v100 = 8;
  v101 = 0;
  v63 = 10;
  v102 = 1;
  v103 = 0;
  v107 = 0;
  v108 = 0;
  v104 = 16;
  v105 = 8000;
  v54 = 100;
  if ( *(_BYTE *)(a1 + 7062) )
  {
    v4 = 10;
    v54 = 10;
  }
  v106 = *(_DWORD *)(a1 + 244);
  v71 = 64;
  v7 = __OFSUB__(*(_DWORD *)(v1 + 3004), 2000);
  v6 = *(_DWORD *)(v1 + 3004) - 2000 < 0;
  v110 = 2;
  v111 = 1;
  v109 = v6 == v7;
  v78 = v109;
  v112 = 24;
  v113 = 17;
  v86 = 30000;
  v87 = 60000;
  v56 = 0;
  v48 = 25000;
  v49 = 50000;
  v58 = 1;
  v55 = 2;
  v50 = 3;
  v57 = 0;
  v73 = 1;
  v74 = 0;
  v75 = 0;
  v51 = 20;
  v76 = 2;
  v52 = 7;
  v72 = v5;
  v65 = 900;
  v66 = 1000;
  v69 = 8;
  v64 = 0;
  v62 = 10;
  v59 = 1;
  v60 = 0;
  v61 = 0;
  v67 = 16;
  v68 = 8000;
  v70 = v4;
  v44 = 64;
  v77 = 0;
  v79 = 2;
  v80 = 1;
  v81 = 24;
  v82 = 17;
  v46 = 30000;
  v47 = 60000;
  v45 = v106;
  if ( *(int *)(v1 + 3004) >= 1300 && *(_BYTE *)(v1 + 2941) )
  {
    v53 = 1;
    v52 = 1;
  }
  memset(v114, 0, sizeof(v114));
  v114[7] = 0LL;
  LODWORD(v114[1]) = 288;
  LODWORD(v114[4]) = 67108868;
  LODWORD(v114[6]) = 4;
  v114[2] = L"AutoSyncToCPUPriority";
  v114[3] = &v56;
  v114[5] = &v83;
  v114[9] = L"QuantumUnit";
  v114[10] = &v48;
  v114[12] = &v84;
  v114[16] = L"PreemptionQuantumUnit";
  v114[17] = &v49;
  v114[19] = &v85;
  v114[23] = L"NpuContextSwitchQuantum";
  v114[24] = &v46;
  v114[26] = &v86;
  v114[30] = L"NpuPreemptionQuantum";
  v114[31] = &v47;
  v114[33] = &v87;
  v114[37] = L"EnablePreemption";
  v114[38] = &v58;
  v114[40] = &v88;
  v114[44] = L"HwQueuedRenderPacketGroupLimit";
  v114[45] = &v55;
  v114[47] = &v89;
  v114[51] = L"QueuedPresentLimit";
  LODWORD(v114[8]) = 288;
  LODWORD(v114[11]) = 67108868;
  LODWORD(v114[13]) = 4;
  v114[14] = 0LL;
  LODWORD(v114[15]) = 288;
  LODWORD(v114[18]) = 67108868;
  LODWORD(v114[20]) = 4;
  v114[21] = 0LL;
  LODWORD(v114[22]) = 288;
  LODWORD(v114[25]) = 67108868;
  LODWORD(v114[27]) = 4;
  v114[28] = 0LL;
  LODWORD(v114[29]) = 288;
  LODWORD(v114[32]) = 67108868;
  LODWORD(v114[34]) = 4;
  v114[35] = 0LL;
  LODWORD(v114[36]) = 288;
  LODWORD(v114[39]) = 67108868;
  LODWORD(v114[41]) = 4;
  v114[42] = 0LL;
  LODWORD(v114[43]) = 288;
  LODWORD(v114[46]) = 67108868;
  LODWORD(v114[48]) = 4;
  v114[49] = 0LL;
  LODWORD(v114[50]) = 288;
  v114[52] = &v50;
  v114[54] = &v90;
  v114[58] = L"CarryOverUsedQuantum";
  v114[59] = &v57;
  v114[61] = &v91;
  v114[65] = L"AdjustWorkerThreadPriority";
  v114[66] = &v73;
  v114[68] = &v92;
  v114[72] = L"CountFlipTowardHwLimit";
  v114[73] = &v74;
  v114[75] = &v93;
  v114[79] = L"NumberOfDmaPacketPool";
  v114[80] = &v51;
  v114[82] = &v94;
  v114[86] = L"ProfileLevel";
  v114[87] = &v76;
  v114[89] = &v95;
  v114[93] = L"VSyncIdleTimeout";
  v114[94] = &v52;
  v114[96] = &v53;
  v114[100] = L"EnableDirectSubmission";
  v114[101] = &v72;
  v114[103] = &v96;
  v114[107] = L"CountPresentTowardHwLimit";
  v114[108] = &v75;
  LODWORD(v114[53]) = 67108868;
  LODWORD(v114[55]) = 4;
  v114[56] = 0LL;
  LODWORD(v114[57]) = 288;
  LODWORD(v114[60]) = 67108868;
  LODWORD(v114[62]) = 4;
  v114[63] = 0LL;
  LODWORD(v114[64]) = 288;
  LODWORD(v114[67]) = 67108868;
  LODWORD(v114[69]) = 4;
  v114[70] = 0LL;
  LODWORD(v114[71]) = 288;
  LODWORD(v114[74]) = 67108868;
  LODWORD(v114[76]) = 4;
  v114[77] = 0LL;
  LODWORD(v114[78]) = 288;
  LODWORD(v114[81]) = 67108868;
  LODWORD(v114[83]) = 4;
  v114[84] = 0LL;
  LODWORD(v114[85]) = 288;
  LODWORD(v114[88]) = 67108868;
  LODWORD(v114[90]) = 4;
  v114[91] = 0LL;
  LODWORD(v114[92]) = 288;
  LODWORD(v114[95]) = 67108868;
  LODWORD(v114[97]) = 4;
  v114[98] = 0LL;
  LODWORD(v114[99]) = 288;
  LODWORD(v114[102]) = 67108868;
  LODWORD(v114[104]) = 4;
  v114[105] = 0LL;
  LODWORD(v114[106]) = 288;
  LODWORD(v114[109]) = 67108868;
  v114[110] = &v97;
  v114[114] = L"MaximumAllowedPreemptionDelay";
  v114[115] = &v65;
  v114[117] = &v98;
  v114[121] = L"ContextSchedulingPenaltyDelay";
  v114[122] = &v66;
  v114[124] = &v99;
  v114[128] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v114[129] = &v69;
  v114[131] = &v100;
  v114[135] = L"ForceEnableFlipFenceModel";
  v114[136] = &v64;
  v114[138] = &v101;
  v114[142] = L"YieldPercentage";
  v114[143] = &v62;
  v114[145] = &v63;
  v114[149] = L"ForegroundPriorityBoost";
  v114[150] = &v59;
  v114[152] = &v102;
  v114[156] = L"ForceFlipTrueImmediateMode";
  v114[157] = &v60;
  v114[159] = &v103;
  v114[163] = L"MaxYieldInterval";
  v114[164] = &v67;
  LODWORD(v114[111]) = 4;
  v114[112] = 0LL;
  LODWORD(v114[113]) = 288;
  LODWORD(v114[116]) = 67108868;
  LODWORD(v114[118]) = 4;
  v114[119] = 0LL;
  LODWORD(v114[120]) = 288;
  LODWORD(v114[123]) = 67108868;
  LODWORD(v114[125]) = 4;
  v114[126] = 0LL;
  LODWORD(v114[127]) = 288;
  LODWORD(v114[130]) = 67108868;
  LODWORD(v114[132]) = 4;
  v114[133] = 0LL;
  LODWORD(v114[134]) = 288;
  LODWORD(v114[137]) = 67108868;
  LODWORD(v114[139]) = 4;
  v114[140] = 0LL;
  LODWORD(v114[141]) = 288;
  LODWORD(v114[144]) = 67108868;
  LODWORD(v114[146]) = 4;
  v114[147] = 0LL;
  LODWORD(v114[148]) = 288;
  LODWORD(v114[151]) = 67108868;
  LODWORD(v114[153]) = 4;
  v114[154] = 0LL;
  LODWORD(v114[155]) = 288;
  LODWORD(v114[158]) = 67108868;
  LODWORD(v114[160]) = 4;
  v114[161] = 0LL;
  LODWORD(v114[162]) = 288;
  LODWORD(v114[165]) = 67108868;
  LODWORD(v114[167]) = 4;
  v114[166] = &v104;
  v114[170] = L"MinYieldInterval";
  v114[171] = &v68;
  v114[173] = &v105;
  v114[177] = L"MaxFocusGpuQuantumWithoutPresent";
  v114[178] = &v70;
  v114[180] = &v54;
  v114[184] = L"HistoryLogSize";
  v114[185] = &v44;
  v114[187] = &v71;
  v114[191] = L"HwQueuePacketCap";
  v114[192] = &v45;
  v114[194] = &v106;
  v114[198] = L"FlipDoNotFlipMode";
  v114[199] = &v61;
  v114[201] = &v107;
  v114[205] = L"PfnCpuOverride";
  v114[206] = &v77;
  v114[208] = &v108;
  v114[212] = L"PerSourceCustomDuration";
  v114[213] = &v78;
  v114[215] = &v109;
  v114[219] = L"HwSchThreadOffloadMode";
  v114[220] = &v79;
  v114[168] = 0LL;
  LODWORD(v114[169]) = 288;
  LODWORD(v114[172]) = 67108868;
  LODWORD(v114[174]) = 4;
  v114[175] = 0LL;
  LODWORD(v114[176]) = 288;
  LODWORD(v114[179]) = 67108868;
  LODWORD(v114[181]) = 4;
  v114[182] = 0LL;
  LODWORD(v114[183]) = 288;
  LODWORD(v114[186]) = 67108868;
  LODWORD(v114[188]) = 4;
  v114[189] = 0LL;
  LODWORD(v114[190]) = 288;
  LODWORD(v114[193]) = 67108868;
  LODWORD(v114[195]) = 4;
  v114[196] = 0LL;
  LODWORD(v114[197]) = 288;
  LODWORD(v114[200]) = 67108868;
  LODWORD(v114[202]) = 4;
  v114[203] = 0LL;
  LODWORD(v114[204]) = 288;
  LODWORD(v114[207]) = 67108868;
  LODWORD(v114[209]) = 4;
  v114[210] = 0LL;
  LODWORD(v114[211]) = 288;
  LODWORD(v114[214]) = 67108868;
  LODWORD(v114[216]) = 4;
  v114[217] = 0LL;
  LODWORD(v114[218]) = 288;
  LODWORD(v114[221]) = 67108868;
  v114[222] = &v110;
  LODWORD(v114[225]) = 288;
  v114[226] = L"DebugLargeSmoothenedDuration";
  LODWORD(v114[228]) = 67108868;
  v114[227] = &v80;
  v114[229] = &v111;
  v114[233] = L"AudioDgAutoBoostPriority";
  v114[234] = &v81;
  v114[236] = &v112;
  v114[240] = L"FrameServerAutoBoostPriority";
  v114[241] = &v82;
  LODWORD(v114[232]) = 288;
  LODWORD(v114[235]) = 67108868;
  LODWORD(v114[239]) = 288;
  LODWORD(v114[242]) = 67108868;
  v114[243] = &v113;
  LODWORD(v114[223]) = 4;
  v114[224] = 0LL;
  LODWORD(v114[230]) = 4;
  v114[231] = 0LL;
  LODWORD(v114[237]) = 4;
  v114[238] = 0LL;
  LODWORD(v114[244]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v114, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, *(_QWORD *)(a1 + 2816));
  for ( i = 0; i < *(_DWORD *)(a1 + 80); *v13 = v16 )
  {
    if ( NodeConfiguration < 0 )
      goto LABEL_11;
    v10 = *(_DWORD **)(a1 + 2816);
    if ( i < *(_DWORD *)(a1 + 2856) )
      v10 += i;
    if ( !*v10 )
    {
LABEL_11:
      v11 = *(int **)(a1 + 2816);
      if ( i < *(_DWORD *)(a1 + 2856) )
        v11 += i;
      *v11 = v55;
    }
    v12 = *(_DWORD *)(a1 + 2856);
    v13 = *(int **)(a1 + 2816);
    if ( i >= v12 )
      v14 = *(int **)(a1 + 2816);
    else
      v14 = &v13[i];
    if ( (unsigned int)*v14 <= 1 )
    {
      v16 = 1;
    }
    else
    {
      if ( i >= v12 )
        v15 = *(int **)(a1 + 2816);
      else
        v15 = &v13[i];
      v16 = *v15;
    }
    if ( i < v12 )
      v13 += i;
    ++i;
  }
  v17 = v60;
  *(_DWORD *)(a1 + 2792) = (v59 != 0 ? 0x200 : 0) | (v58 != 0) | (v57 != 0 ? 8 : 0) | (v56 != 0 ? 4 : 0) | *(_DWORD *)(a1 + 2792) & 0xFFFFFDF2;
  if ( !v17 || (unsigned int)(v17 - 1) <= 1 )
    *(_DWORD *)(a1 + 2804) = v17;
  if ( !v61 || (unsigned int)(v61 - 1) <= 1 )
    *(_DWORD *)(a1 + 2808) = v61;
  v18 = v62;
  if ( (unsigned int)(v62 - 1) > 0x53 )
    v18 = v63;
  v19 = v64 == 0;
  *(_DWORD *)(a1 + 224) = v18;
  *(_DWORD *)(a1 + 228) = v18 + 15;
  v20 = (unsigned int)(10000 * v65);
  *(_BYTE *)(a1 + 57) = !v19;
  *(_QWORD *)(a1 + 3080) = v68;
  *(_QWORD *)(a1 + 3000) = 1000LL;
  *(_QWORD *)(a1 + 2976) = v20;
  v21 = (unsigned int)(10000 * v66);
  *(_QWORD *)(a1 + 3008) = 2500LL;
  *(_QWORD *)(a1 + 3016) = 5000LL;
  *(_QWORD *)(a1 + 3024) = 10000LL;
  *(_QWORD *)(a1 + 3032) = 25000LL;
  *(_QWORD *)(a1 + 2984) = v21;
  v22 = (unsigned int)(10000 * v67);
  *(_QWORD *)(a1 + 3040) = 50000LL;
  *(_QWORD *)(a1 + 3048) = 100000LL;
  *(_QWORD *)(a1 + 3056) = 250000LL;
  *(_QWORD *)(a1 + 3064) = 500000LL;
  *(_QWORD *)(a1 + 3072) = v22;
  *(_QWORD *)(a1 + 2992) = (unsigned int)(10000 * v69);
  *(_QWORD *)(a1 + 3088) = (unsigned int)(10000 * v70);
  v23 = v44;
  if ( v44 < 0x10 )
  {
    v23 = 16;
LABEL_40:
    v44 = v23;
    goto LABEL_41;
  }
  if ( v44 > 0x10000 )
  {
    v23 = 0x10000;
    v44 = 0x10000;
    goto LABEL_41;
  }
  if ( ((v44 - 1) & v44) != 0 )
  {
    WdLogSingleEntry1(1LL, v44);
    WdLogGlobalForLineNumber = 15413;
    DxgkLogInternalTriageEvent(v24, 0x40000LL);
    v23 = v71;
    goto LABEL_40;
  }
LABEL_41:
  v25 = v45;
  *(_DWORD *)(a1 + 240) = v23;
  if ( v25 <= 0xE )
  {
    if ( v25 )
      goto LABEL_46;
    v25 = 1;
  }
  else
  {
    v25 = 14;
  }
  v45 = v25;
LABEL_46:
  *(_DWORD *)(a1 + 244) = v25;
  *(_DWORD *)(a1 + 2792) = (TdrIsEnabled() << 8) | *(_DWORD *)(a1 + 2792) & 0xFFFFFEFF;
  if ( *(_BYTE *)(a1 + 7062) )
  {
    v26 = (__int64 *)(a1 + 2928);
    v27 = 6LL;
    do
    {
      v28 = 1LL;
      if ( v46 > 1 )
        v28 = v46;
      v29 = v47 <= 1;
      *(v26 - 6) = v28;
      v30 = 1LL;
      if ( !v29 )
        v30 = v47;
      *v26++ = v30;
      --v27;
    }
    while ( v27 );
  }
  else
  {
    v31 = (_QWORD *)(a1 + 2928);
    for ( j = 0LL; j < 24; j += 4LL )
    {
      v33 = 1;
      if ( v48 > 1 )
        v33 = v48;
      v29 = v49 <= 1;
      *(v31 - 6) = (unsigned int)(*(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + j) * v33);
      v34 = 1;
      if ( !v29 )
        v34 = v49;
      v35 = (unsigned int)(*(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + j) * v34);
      *v31++ = v35;
    }
  }
  v36 = 1;
  v37 = *(_DWORD *)(a1 + 2792);
  if ( v50 > 1 )
    v36 = v50;
  *(_DWORD *)(a1 + 2812) = v36;
  v38 = (v74 != 0 ? 0x40 : 0) | (v73 != 0 ? 0x20 : 0) | (v72 != 0 ? 2 : 0) | v37 & 0xFFFFFF9D;
  v39 = -(v75 != 0);
  *(_DWORD *)(a1 + 6704) = v76;
  v40 = v52;
  *(_DWORD *)(a1 + 2660) = v52;
  v41 = v39 & 0x80 | v38 & 0xFFFFFF7F;
  v42 = *(_QWORD *)(a1 + 16);
  v29 = v51 <= 0x10;
  *(_DWORD *)(a1 + 2792) = v41;
  if ( !v29 )
    v3 = v51;
  *(_DWORD *)(a1 + 2868) = v3;
  if ( *(int *)(v42 + 3004) < 1300 )
  {
    if ( v40 >= 4 )
    {
      if ( v40 > 0xFFFFFFFD )
        *(_DWORD *)(a1 + 2660) = -3;
    }
    else
    {
      *(_DWORD *)(a1 + 2660) = 4;
    }
  }
  switch ( v77 )
  {
    case 0:
      if ( (**(_DWORD **)(v42 + 3008) & 0x1000) == 0 )
        break;
LABEL_76:
      *(_DWORD *)(a1 + 248) = 1;
      break;
    case 1:
      goto LABEL_76;
    case 2:
      *(_DWORD *)(a1 + 248) = 2;
      break;
    case 3:
      *(_DWORD *)(a1 + 248) = 0;
      break;
  }
  v19 = v80 == 0;
  *(_BYTE *)(a1 + 7057) = v78;
  *(_DWORD *)(a1 + 304) = v79;
  *(_BYTE *)(a1 + 7065) = !v19;
  *(_DWORD *)(a1 + 208) = v81;
  result = v82;
  *(_DWORD *)(a1 + 212) = v82;
  return result;
}
