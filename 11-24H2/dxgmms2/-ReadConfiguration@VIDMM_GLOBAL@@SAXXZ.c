/*
 * XREFs of ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140107540
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x14011058C (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?QuerySystemMemorySize@VIDMM_GLOBAL@@SA_KPEAX@Z @ 0x1400905D0 (-QuerySystemMemorySize@VIDMM_GLOBAL@@SA_KPEAX@Z.c)
 *     ?ReadVPRConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14010664C (-ReadVPRConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14010680C (-ReadPreparationPeriodConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadBudgetConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140106A2C (-ReadBudgetConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadGpuVaConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140107230 (-ReadGpuVaConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadGpuVaPagingHistoryConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x1401084C0 (-ReadGpuVaPagingHistoryConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadPowerConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x1401086D0 (-ReadPowerConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x1401087CC (-ReadWorkingSetConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadPagingConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x1401088B8 (-ReadPagingConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadCommitLimitInformation@VIDMM_GLOBAL@@SAXXZ @ 0x140108F10 (-ReadCommitLimitInformation@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadHeapConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140109140 (-ReadHeapConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14010968C (-ReadUnusedAllocationConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140109C60 (-ReadTestAndStagingConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReadConfiguration(void *a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int *v5; // rsi
  ULONG v6; // edi
  __int64 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v15; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
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
  int v33; // [rsp+88h] [rbp-80h] BYREF
  int v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v35; // [rsp+90h] [rbp-78h] BYREF
  int v36; // [rsp+94h] [rbp-74h] BYREF
  int v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A4h] [rbp-64h] BYREF
  int v41; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v42; // [rsp+ACh] [rbp-5Ch] BYREF
  int v43; // [rsp+B0h] [rbp-58h] BYREF
  int v44; // [rsp+B4h] [rbp-54h] BYREF
  int v45; // [rsp+B8h] [rbp-50h] BYREF
  int v46; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v47; // [rsp+C0h] [rbp-48h] BYREF
  int v48; // [rsp+C4h] [rbp-44h] BYREF
  int v49; // [rsp+C8h] [rbp-40h] BYREF
  int v50; // [rsp+CCh] [rbp-3Ch] BYREF
  int v51; // [rsp+D0h] [rbp-38h] BYREF
  int v52; // [rsp+D4h] [rbp-34h] BYREF
  int v53; // [rsp+D8h] [rbp-30h] BYREF
  int v54; // [rsp+DCh] [rbp-2Ch] BYREF
  int v55; // [rsp+E0h] [rbp-28h] BYREF
  int v56; // [rsp+E4h] [rbp-24h] BYREF
  int v57; // [rsp+E8h] [rbp-20h] BYREF
  int v58; // [rsp+ECh] [rbp-1Ch] BYREF
  int v59; // [rsp+F0h] [rbp-18h] BYREF
  int v60; // [rsp+F4h] [rbp-14h] BYREF
  int v61; // [rsp+F8h] [rbp-10h] BYREF
  int v62; // [rsp+FCh] [rbp-Ch] BYREF
  int v63; // [rsp+100h] [rbp-8h] BYREF
  int v64; // [rsp+104h] [rbp-4h] BYREF
  int v65; // [rsp+108h] [rbp+0h] BYREF
  int v66; // [rsp+10Ch] [rbp+4h] BYREF
  int v67; // [rsp+110h] [rbp+8h] BYREF
  int v68; // [rsp+114h] [rbp+Ch] BYREF
  int v69; // [rsp+118h] [rbp+10h] BYREF
  int v70; // [rsp+11Ch] [rbp+14h] BYREF
  int v71; // [rsp+120h] [rbp+18h] BYREF
  int v72; // [rsp+124h] [rbp+1Ch] BYREF
  int v73; // [rsp+128h] [rbp+20h] BYREF
  int v74; // [rsp+12Ch] [rbp+24h] BYREF
  int v75; // [rsp+130h] [rbp+28h] BYREF
  int v76; // [rsp+134h] [rbp+2Ch] BYREF
  int v77; // [rsp+138h] [rbp+30h] BYREF
  int v78; // [rsp+13Ch] [rbp+34h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+140h] [rbp+38h] BYREF
  struct _UNICODE_STRING String; // [rsp+150h] [rbp+48h] BYREF
  __int64 v81; // [rsp+160h] [rbp+58h] BYREF
  __int64 v82; // [rsp+168h] [rbp+60h] BYREF
  __int64 v83; // [rsp+170h] [rbp+68h] BYREF
  __int128 v84; // [rsp+178h] [rbp+70h]
  __int128 v85; // [rsp+188h] [rbp+80h]
  __int128 v86; // [rsp+198h] [rbp+90h]
  __int64 v87; // [rsp+1A8h] [rbp+A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v89; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v90; // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v92; // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 v94; // [rsp+1E8h] [rbp+E0h]
  _OWORD v95[126]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v96; // [rsp+9D8h] [rbp+8D0h] BYREF
  _BYTE v97[64]; // [rsp+9E8h] [rbp+8E0h] BYREF

  qword_140081300 = VIDMM_GLOBAL::QuerySystemMemorySize(a1);
  qword_1400812F8 = qword_140081300;
  v1 = 0;
  v48 = 0;
  v17 = 25;
  v13 = 25;
  v15 = 0;
  v53 = 0;
  v18 = 40;
  v14 = 40;
  v19 = 0;
  v55 = 4;
  v49 = 10;
  v29 = 10;
  v50 = 15;
  v30 = 15;
  v51 = 5;
  v31 = 5;
  v52 = 300;
  v32 = 300;
  v2 = 256;
  if ( (unsigned __int64)qword_140081300 > 0x20000000 )
    v2 = 1024;
  v21 = 4;
  v54 = v2;
  v20 = v2;
  v3 = 0x800000;
  if ( (unsigned __int64)qword_140081300 > 0x20000000 )
    v3 = 0x2000000;
  v58 = 10;
  v56 = v3;
  v22 = v3;
  v4 = 0x400000;
  if ( (unsigned __int64)qword_140081300 > 0x20000000 )
    v4 = 0x1000000;
  v24 = 10;
  v57 = v4;
  v23 = v4;
  v60 = 1;
  v26 = 1;
  v61 = 1;
  v28 = 1;
  v59 = g_IsInternalRelease != 0 ? 0x40 : 0;
  v25 = v59;
  v63 = 0x100000;
  v33 = 0x100000;
  v65 = 60;
  v35 = 60;
  v66 = 60;
  v36 = 60;
  v62 = 1;
  v27 = 1;
  v64 = 0x800000;
  v34 = 0x800000;
  v67 = 1;
  v37 = 1;
  v68 = 8;
  v38 = 8;
  v69 = 2;
  v39 = 2;
  v72 = 200;
  v42 = 200;
  v70 = 0;
  v74 = 4096;
  v44 = 4096;
  v75 = 6;
  v45 = 6;
  v76 = 20;
  v46 = 20;
  v83 = 0xFFFFFFFFLL;
  v94 = 0xFFFFFFFFLL;
  v77 = 900;
  v47 = 900;
  *(_QWORD *)&v95[1] = L"PinnedMemoryLimit";
  *((_QWORD *)&v95[1] + 1) = &v13;
  *((_QWORD *)&v95[2] + 1) = &v17;
  *((_QWORD *)&v95[4] + 1) = L"PinnedApertureMemoryLimit";
  *(_QWORD *)&v95[5] = &v14;
  *(_QWORD *)&v95[6] = &v18;
  *(_QWORD *)&v95[8] = L"PagesHistory";
  *((_QWORD *)&v95[8] + 1) = &v15;
  *((_QWORD *)&v95[9] + 1) = &v48;
  *((_QWORD *)&v95[11] + 1) = L"MemTransferThreshold";
  *(_QWORD *)&v95[12] = &v29;
  *(_QWORD *)&v95[13] = &v49;
  *(_QWORD *)&v95[15] = L"ExcessiveMemTransferFlipThreshold";
  *((_QWORD *)&v95[15] + 1) = &v30;
  v40 = 0;
  v71 = 0;
  v41 = 0;
  v73 = 1;
  v43 = 1;
  v81 = 0LL;
  v89 = 16LL;
  v90 = 0LL;
  v82 = 0LL;
  v91 = 16LL;
  v92 = 0LL;
  v93 = 16LL;
  *(_QWORD *)&v95[0] = 0LL;
  DWORD2(v95[0]) = 288;
  LODWORD(v95[2]) = 67108868;
  LODWORD(v95[3]) = 4;
  *((_QWORD *)&v95[3] + 1) = 0LL;
  LODWORD(v95[4]) = 288;
  DWORD2(v95[5]) = 67108868;
  DWORD2(v95[6]) = 4;
  *(_QWORD *)&v95[7] = 0LL;
  DWORD2(v95[7]) = 288;
  LODWORD(v95[9]) = 67108868;
  LODWORD(v95[10]) = 4;
  *((_QWORD *)&v95[10] + 1) = 0LL;
  LODWORD(v95[11]) = 288;
  DWORD2(v95[12]) = 67108868;
  DWORD2(v95[13]) = 4;
  *(_QWORD *)&v95[14] = 0LL;
  DWORD2(v95[14]) = 288;
  LODWORD(v95[16]) = 67108868;
  LODWORD(v95[17]) = 4;
  *((_QWORD *)&v95[16] + 1) = &v50;
  *((_QWORD *)&v95[18] + 1) = L"ExcessiveMemTransferPenalty";
  *(_QWORD *)&v95[19] = &v31;
  *(_QWORD *)&v95[20] = &v51;
  *(_QWORD *)&v95[22] = L"EventThrottleThreshold";
  *((_QWORD *)&v95[22] + 1) = &v32;
  *((_QWORD *)&v95[23] + 1) = &v52;
  *((_QWORD *)&v95[25] + 1) = L"DisablePrefetching";
  *(_QWORD *)&v95[26] = &v19;
  *(_QWORD *)&v95[27] = &v53;
  *(_QWORD *)&v95[29] = L"NbDmaBufferLimitPerDevice";
  *((_QWORD *)&v95[29] + 1) = &v20;
  *((_QWORD *)&v95[30] + 1) = &v54;
  *((_QWORD *)&v95[32] + 1) = L"NbCddDmaBufferLimitPerDevice";
  *(_QWORD *)&v95[33] = &v21;
  *(_QWORD *)&v95[34] = &v55;
  *(_QWORD *)&v95[36] = L"DmaBufferBytesLimitAllDevices";
  *((_QWORD *)&v95[36] + 1) = &v22;
  *((_QWORD *)&v95[37] + 1) = &v56;
  *((_QWORD *)&v95[39] + 1) = L"DmaBufferListBytesLimitAllDevices";
  *(_QWORD *)&v95[40] = &v23;
  *(_QWORD *)&v95[41] = &v57;
  *(_QWORD *)&v95[43] = L"NbDmaBufferLimitCompareWatermark";
  *((_QWORD *)&v95[43] + 1) = &v24;
  *((_QWORD *)&v95[17] + 1) = 0LL;
  LODWORD(v95[18]) = 288;
  DWORD2(v95[19]) = 67108868;
  DWORD2(v95[20]) = 4;
  *(_QWORD *)&v95[21] = 0LL;
  DWORD2(v95[21]) = 288;
  LODWORD(v95[23]) = 67108868;
  LODWORD(v95[24]) = 4;
  *((_QWORD *)&v95[24] + 1) = 0LL;
  LODWORD(v95[25]) = 288;
  DWORD2(v95[26]) = 67108868;
  DWORD2(v95[27]) = 4;
  *(_QWORD *)&v95[28] = 0LL;
  DWORD2(v95[28]) = 288;
  LODWORD(v95[30]) = 67108868;
  LODWORD(v95[31]) = 4;
  *((_QWORD *)&v95[31] + 1) = 0LL;
  LODWORD(v95[32]) = 288;
  DWORD2(v95[33]) = 67108868;
  DWORD2(v95[34]) = 4;
  *(_QWORD *)&v95[35] = 0LL;
  DWORD2(v95[35]) = 288;
  LODWORD(v95[37]) = 67108868;
  LODWORD(v95[38]) = 4;
  *((_QWORD *)&v95[38] + 1) = 0LL;
  LODWORD(v95[39]) = 288;
  DWORD2(v95[40]) = 67108868;
  DWORD2(v95[41]) = 4;
  *(_QWORD *)&v95[42] = 0LL;
  DWORD2(v95[42]) = 288;
  LODWORD(v95[44]) = 67108868;
  *((_QWORD *)&v95[44] + 1) = &v58;
  *((_QWORD *)&v95[46] + 1) = L"NbPagingHistoryRecords";
  *(_QWORD *)&v95[47] = &v25;
  *(_QWORD *)&v95[48] = &v59;
  *(_QWORD *)&v95[50] = L"PinDWMAllocationBackingStore";
  *((_QWORD *)&v95[50] + 1) = &v26;
  *((_QWORD *)&v95[51] + 1) = &v60;
  *((_QWORD *)&v95[53] + 1) = L"RemovePagesFromWorkingSetOnPagingForDwm";
  *(_QWORD *)&v95[54] = &v28;
  *(_QWORD *)&v95[55] = &v61;
  *(_QWORD *)&v95[57] = L"UseUnreset";
  *((_QWORD *)&v95[57] + 1) = &v27;
  *((_QWORD *)&v95[58] + 1) = &v62;
  *((_QWORD *)&v95[60] + 1) = L"PrivateHeapPackingThreshold";
  *(_QWORD *)&v95[61] = &v33;
  *(_QWORD *)&v95[62] = &v63;
  *(_QWORD *)&v95[64] = L"PrivateHeapPackingBlockSize";
  *((_QWORD *)&v95[64] + 1) = &v34;
  *((_QWORD *)&v95[65] + 1) = &v64;
  *((_QWORD *)&v95[67] + 1) = L"EvictTemporaryPeriod";
  *(_QWORD *)&v95[68] = &v35;
  *(_QWORD *)&v95[69] = &v65;
  *(_QWORD *)&v95[71] = L"EvictUnusedPeriod";
  *((_QWORD *)&v95[71] + 1) = &v36;
  *((_QWORD *)&v95[72] + 1) = &v66;
  LODWORD(v95[45]) = 4;
  *((_QWORD *)&v95[45] + 1) = 0LL;
  LODWORD(v95[46]) = 288;
  DWORD2(v95[47]) = 67108868;
  DWORD2(v95[48]) = 4;
  *(_QWORD *)&v95[49] = 0LL;
  DWORD2(v95[49]) = 288;
  LODWORD(v95[51]) = 67108868;
  LODWORD(v95[52]) = 4;
  *((_QWORD *)&v95[52] + 1) = 0LL;
  LODWORD(v95[53]) = 288;
  DWORD2(v95[54]) = 67108868;
  DWORD2(v95[55]) = 4;
  *(_QWORD *)&v95[56] = 0LL;
  DWORD2(v95[56]) = 288;
  LODWORD(v95[58]) = 67108868;
  LODWORD(v95[59]) = 4;
  *((_QWORD *)&v95[59] + 1) = 0LL;
  LODWORD(v95[60]) = 288;
  DWORD2(v95[61]) = 67108868;
  DWORD2(v95[62]) = 4;
  *(_QWORD *)&v95[63] = 0LL;
  DWORD2(v95[63]) = 288;
  LODWORD(v95[65]) = 67108868;
  LODWORD(v95[66]) = 4;
  *((_QWORD *)&v95[66] + 1) = 0LL;
  LODWORD(v95[67]) = 288;
  DWORD2(v95[68]) = 67108868;
  DWORD2(v95[69]) = 4;
  *(_QWORD *)&v95[70] = 0LL;
  DWORD2(v95[70]) = 288;
  LODWORD(v95[72]) = 67108868;
  LODWORD(v95[73]) = 4;
  *((_QWORD *)&v95[74] + 1) = L"ProcessPendingOfferPeriod";
  *(_QWORD *)&v95[75] = &v37;
  *(_QWORD *)&v95[76] = &v67;
  *(_QWORD *)&v95[78] = L"ProcessSysmemOfferPeriod";
  *((_QWORD *)&v95[78] + 1) = &v38;
  *((_QWORD *)&v95[79] + 1) = &v68;
  *((_QWORD *)&v95[81] + 1) = L"SegmentBalancingPolicy";
  *(_QWORD *)&v95[82] = &v39;
  *(_QWORD *)&v95[83] = &v69;
  *(_QWORD *)&v95[85] = L"BugcheckOnApertureCorruption";
  *((_QWORD *)&v95[85] + 1) = &v40;
  *((_QWORD *)&v95[86] + 1) = &v70;
  *((_QWORD *)&v95[88] + 1) = L"QuickApertureCorruptionCheck";
  *(_QWORD *)&v95[89] = &v41;
  *(_QWORD *)&v95[90] = &v71;
  *(_QWORD *)&v95[92] = L"DirectFlipMemoryRequirement";
  *((_QWORD *)&v95[92] + 1) = &v42;
  *((_QWORD *)&v95[93] + 1) = &v72;
  *((_QWORD *)&v95[95] + 1) = L"CommitProcessHeapOnDemand";
  *(_QWORD *)&v95[96] = &v43;
  *(_QWORD *)&v95[97] = &v73;
  *(_QWORD *)&v95[99] = L"SegmentCleanupSizeThreshold";
  *((_QWORD *)&v95[99] + 1) = &v44;
  *((_QWORD *)&v95[100] + 1) = &v74;
  *((_QWORD *)&v95[73] + 1) = 0LL;
  LODWORD(v95[74]) = 288;
  DWORD2(v95[75]) = 67108868;
  DWORD2(v95[76]) = 4;
  *(_QWORD *)&v95[77] = 0LL;
  DWORD2(v95[77]) = 288;
  LODWORD(v95[79]) = 67108868;
  LODWORD(v95[80]) = 4;
  *((_QWORD *)&v95[80] + 1) = 0LL;
  LODWORD(v95[81]) = 288;
  DWORD2(v95[82]) = 67108868;
  DWORD2(v95[83]) = 4;
  *(_QWORD *)&v95[84] = 0LL;
  DWORD2(v95[84]) = 288;
  LODWORD(v95[86]) = 67108868;
  LODWORD(v95[87]) = 4;
  *((_QWORD *)&v95[87] + 1) = 0LL;
  LODWORD(v95[88]) = 288;
  DWORD2(v95[89]) = 67108868;
  DWORD2(v95[90]) = 4;
  *(_QWORD *)&v95[91] = 0LL;
  DWORD2(v95[91]) = 288;
  LODWORD(v95[93]) = 67108868;
  LODWORD(v95[94]) = 4;
  *((_QWORD *)&v95[94] + 1) = 0LL;
  LODWORD(v95[95]) = 288;
  DWORD2(v95[96]) = 67108868;
  DWORD2(v95[97]) = 4;
  *(_QWORD *)&v95[98] = 0LL;
  DWORD2(v95[98]) = 288;
  LODWORD(v95[100]) = 67108868;
  LODWORD(v95[101]) = 4;
  LODWORD(v95[102]) = 288;
  DWORD2(v95[103]) = 67108868;
  DWORD2(v95[105]) = 288;
  *((_QWORD *)&v95[102] + 1) = L"SegmentCleanupCountThreshold";
  *(_QWORD *)&v95[103] = &v45;
  *(_QWORD *)&v95[104] = &v75;
  *(_QWORD *)&v95[106] = L"SegmentCleanupTime";
  *((_QWORD *)&v95[106] + 1) = &v46;
  *((_QWORD *)&v95[107] + 1) = &v76;
  *((_QWORD *)&v95[109] + 1) = L"PhysicalHeapSize";
  *(_QWORD *)&v95[110] = &v89;
  *(_QWORD *)&v95[111] = &v81;
  *(_QWORD *)&v95[113] = L"PhysicalHeapLowestAddress";
  *((_QWORD *)&v95[113] + 1) = &v91;
  *((_QWORD *)&v95[114] + 1) = &v82;
  *((_QWORD *)&v95[116] + 1) = L"PhysicalHeapHighestAddress";
  *(_QWORD *)&v95[117] = &v93;
  *(_QWORD *)&v95[118] = &v83;
  *(_QWORD *)&v95[120] = L"SelfRefreshVramForceEvictionTimer";
  *((_QWORD *)&v95[120] + 1) = &v47;
  *((_QWORD *)&v95[121] + 1) = &v77;
  LODWORD(v95[107]) = 67108868;
  LODWORD(v95[109]) = 288;
  DWORD2(v95[110]) = 184549387;
  DWORD2(v95[111]) = 8;
  DWORD2(v95[112]) = 288;
  LODWORD(v95[114]) = 184549387;
  LODWORD(v95[115]) = 8;
  LODWORD(v95[116]) = 288;
  DWORD2(v95[117]) = 184549387;
  DWORD2(v95[118]) = 8;
  DWORD2(v95[119]) = 288;
  LODWORD(v95[121]) = 67108868;
  *((_QWORD *)&v95[125] + 1) = 0LL;
  *((_QWORD *)&v95[101] + 1) = 0LL;
  DWORD2(v95[104]) = 4;
  *(_QWORD *)&v95[105] = 0LL;
  LODWORD(v95[108]) = 4;
  *((_QWORD *)&v95[108] + 1) = 0LL;
  *(_QWORD *)&v95[112] = 0LL;
  *((_QWORD *)&v95[115] + 1) = 0LL;
  *(_QWORD *)&v95[119] = 0LL;
  LODWORD(v95[122]) = 4;
  *(_OWORD *)((char *)&v95[122] + 8) = 0LL;
  *(_OWORD *)((char *)&v95[123] + 8) = 0LL;
  *(_OWORD *)((char *)&v95[124] + 8) = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v95, 0LL, 0LL);
  v5 = dword_140081328;
  memset(dword_140081328, 0, sizeof(dword_140081328));
  memset(v95, 0, sizeof(v95));
  v6 = 0;
  v7 = 0LL;
  do
  {
    memset(v97, 0, sizeof(v97));
    *(_QWORD *)&Destination.Length = 0x400000LL;
    Destination.Buffer = (PWSTR)v97;
    DestinationString = 0LL;
    String = 0LL;
    RtlInitUnicodeString(&DestinationString, L"MaxSegmentSize");
    if ( RtlAppendUnicodeStringToString(&Destination, &DestinationString) >= 0 )
    {
      *(_DWORD *)&String.Length = 0x100000;
      String.Buffer = (PWSTR)&v96;
      if ( RtlIntegerToUnicodeString(v6, 0, &String) >= 0 && RtlAppendUnicodeStringToString(&Destination, &String) >= 0 )
      {
        *(_QWORD *)&v85 = Destination.Buffer;
        *(_QWORD *)&v84 = 0LL;
        *((_QWORD *)&v85 + 1) = &v16;
        *((_QWORD *)&v84 + 1) = 288LL;
        *((_QWORD *)&v86 + 1) = &v78;
        v95[1] = v85;
        v95[0] = v84;
        *(_QWORD *)&v86 = 67108868LL;
        v87 = 4LL;
        v95[2] = v86;
        *(_QWORD *)&v95[3] = 4LL;
        v78 = 0;
        v16 = 0;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v95, 0LL, 0LL);
        v8 = v16;
        *v5 = v16;
        if ( v8 )
        {
          v9 = (v8 + 4095) & 0xFFFFF000;
          if ( v9 < 0x800000 )
            v9 = 0x800000;
          *v5 = v9;
          WdLogSingleEntry2(4LL, v7, v9);
          WdLogGlobalForLineNumber = 250;
        }
      }
    }
    ++v6;
    ++v7;
    ++v5;
  }
  while ( v6 < 0x20 );
  WdLogSingleEntry1(4LL, v13);
  v10 = v17;
  if ( v13 < 0x5A )
    v10 = v13;
  dword_140081318 = v10;
  v11 = v18;
  if ( v14 < 0x5A )
    v11 = v14;
  dword_14008131C = v11;
  v12 = 0x7FFFFFF;
  WdLogGlobalForLineNumber = 258;
  if ( v15 < 0x7FFFFFF )
    v12 = v15;
  dword_140081324 = v12;
  dword_140081320 = 0;
  dword_140081428 = v20;
  dword_14008142C = v21;
  dword_140081430 = v22;
  dword_140081434 = v23;
  dword_140081438 = v24;
  dword_14008143C = v25;
  qword_140081440 = (unsigned int)(v29 << 20);
  dword_140081448 = v30;
  dword_14008144C = v31;
  dword_140081458 = v33;
  dword_14008145C = v34;
  dword_140081480 = v39;
  qword_140081450 = (unsigned int)(10000000 * v32);
  qword_140081460 = (unsigned int)(10000000 * v35);
  qword_140081468 = (unsigned int)(10000000 * v36);
  qword_140081470 = (unsigned int)(10000000 * v37);
  qword_140081478 = (unsigned int)(10000000 * v38);
  VIDMM_GLOBAL::_Config = (v40 != 0 ? 0x10 : 0) | (v26 != 0 ? 2 : 0) | v19 & 1 | VIDMM_GLOBAL::_Config & 0xFFFFFFE0 | (4 * (v28 & 1 | (unsigned __int8)(2 * (v27 & 1)))) & 0xEF;
  dword_1400812E4 = v41 != 0;
  qword_1400812F0 = (unsigned __int64)v42 << 20;
  LOBYTE(v1) = v43 != 0;
  qword_1400814B0 = (unsigned int)(v44 << 10);
  dword_1400814B8 = v45;
  qword_140081660 = v90;
  qword_140081668 = v92;
  qword_140081670 = v94;
  qword_1400814C0 = (unsigned int)(10000 * v46);
  dword_1400812E8 = v1;
  qword_140081678 = 10000000LL * v47;
  VIDMM_GLOBAL::ReadCommitLimitInformation();
  VIDMM_GLOBAL::ReadWorkingSetConfiguration();
  VIDMM_GLOBAL::ReadUnusedAllocationConfiguration();
  VIDMM_GLOBAL::ReadPreparationPeriodConfiguration();
  VIDMM_GLOBAL::ReadHeapConfiguration();
  VIDMM_GLOBAL::ReadPowerConfiguration();
  VIDMM_GLOBAL::ReadGpuVaPagingHistoryConfiguration();
  VIDMM_GLOBAL::ReadGpuVaConfiguration();
  VIDMM_GLOBAL::ReadPagingConfiguration();
  VIDMM_GLOBAL::ReadTestAndStagingConfiguration();
  VIDMM_GLOBAL::ReadVPRConfiguration();
  VIDMM_GLOBAL::ReadBudgetConfiguration();
}
