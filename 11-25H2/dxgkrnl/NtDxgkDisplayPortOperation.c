/*
 * XREFs of NtDxgkDisplayPortOperation @ 0x140063620
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z @ 0x14009ECBC (-SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z @ 0x1401A1008 (-DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z.c)
 *     ?DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z @ 0x1401A12D4 (-DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z.c)
 *     ?DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z @ 0x1401A15A0 (-DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z.c)
 *     ?DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z @ 0x1401A3644 (-DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z.c)
 *     ?DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z @ 0x1401A4AB8 (-DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z.c)
 */

__int64 __fastcall NtDxgkDisplayPortOperation(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  const void *v5; // rdx
  __int64 v6; // r9
  struct DXGADAPTER *v7; // r15
  int v8; // r13d
  int *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  const void *v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // r12d
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int DPCaps; // eax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // edx
  int v34; // r8d
  unsigned int v35; // eax
  unsigned int v36; // r14d
  char *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  char v44[8]; // [rsp+50h] [rbp-138h] BYREF
  int v45; // [rsp+58h] [rbp-130h] BYREF
  __int64 v46; // [rsp+60h] [rbp-128h]
  char v47; // [rsp+68h] [rbp-120h]
  int *v48; // [rsp+70h] [rbp-118h] BYREF
  __int64 v49; // [rsp+78h] [rbp-110h] BYREF
  struct DXGADAPTER *v50; // [rsp+80h] [rbp-108h] BYREF
  __int64 v51; // [rsp+90h] [rbp-F8h]
  unsigned int v52; // [rsp+98h] [rbp-F0h] BYREF
  ULONG64 v53; // [rsp+A0h] [rbp-E8h]
  struct _LUID v54[2]; // [rsp+A8h] [rbp-E0h] BYREF
  _BYTE v55[144]; // [rsp+C0h] [rbp-C8h] BYREF

  v53 = a1;
  v4 = (unsigned int)Feature_DP_AUX_V2__private_featureState;
  v51 = (unsigned int)Feature_DP_AUX_V2__private_featureState;
  if ( (Feature_DP_AUX_V2__private_featureState & 0x10) == 0 )
  {
    LODWORD(v51) = Feature_DP_AUX_V2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_DP_AUX_V2__private_descriptor, v51, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v51, 3LL, &Feature_DP_AUX_V2__private_descriptor);
  }
  v45 = -1;
  v46 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2213;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, a3, 2213);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2213);
  v44[0] = 0;
  if ( ((int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, v44) < 0 || !v44[0])
    && ((int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, v44) < 0 || !v44[0]) )
  {
    goto LABEL_110;
  }
  *(_OWORD *)&v54[0].LowPart = 0LL;
  v5 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v54, v5, 0x10uLL);
  v50 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v50, &v54[1]);
  v7 = v50;
  if ( !v50 )
  {
    WdLogSingleEntry3(2LL, v54[1].HighPart, v54[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 86;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v54[1].HighPart,
      v54[1].LowPart,
      -1073741811LL,
      0LL,
      0LL);
LABEL_105:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
    goto LABEL_106;
  }
  v8 = v54[0].HighPart - 16;
  if ( (unsigned int)(v54[0].HighPart - 17) > 0xFFF )
  {
    WdLogSingleEntry2(3LL, (int)v54[0].LowPart, (unsigned int)v54[0].HighPart);
    WdLogGlobalForLineNumber = 94;
    goto LABEL_105;
  }
  v9 = (int *)operator new[](v8, 0x4B677844u, 256LL, v6);
  v48 = v9;
  if ( !v9 )
  {
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v48);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v45);
    return 3221225495LL;
  }
  v13 = (const void *)(v53 + 16);
  v14 = v8 + v53 + 16;
  if ( v14 < v53 + 16 || v14 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v9, v13, v8);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, v7, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, v54[1].HighPart, v54[1].LowPart);
    WdLogGlobalForLineNumber = 120;
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v48);
    goto LABEL_105;
  }
  v18 = *((_QWORD *)v7 + 390);
  if ( !v18 )
  {
    WdLogSingleEntry3(2LL, v54[1].HighPart, v54[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 128;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Non-display adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v54[1].HighPart,
      v54[1].LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  if ( !*((_QWORD *)v7 + 182) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v18, v16, v17);
    v19[3] = v54[1].HighPart;
    v19[4] = v54[1].LowPart;
    v19[5] = -1073741637LL;
    WdLogGlobalForLineNumber = 135;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v48);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v45);
    return 3221225659LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v49, *(_QWORD *)(v18 + 104));
  switch ( v54[0].LowPart )
  {
    case 1u:
      if ( v54[0].HighPart < 0x18u )
      {
        WdLogSingleEntry2(3LL, 1LL, (unsigned int)v54[0].HighPart);
        WdLogGlobalForLineNumber = 148;
        goto LABEL_41;
      }
      DPCaps = ADAPTER_DISPLAY::DdiQueryDPCaps(*((ADAPTER_DISPLAY **)v7 + 390), (struct _DXGKARG_QUERYDPCAPS *)v9);
      break;
    case 2u:
      if ( v54[0].HighPart < 0x2Cu )
      {
        WdLogSingleEntry2(3LL, 2LL, (unsigned int)v54[0].HighPart);
        WdLogGlobalForLineNumber = 164;
        goto LABEL_41;
      }
      DPCaps = ADAPTER_DISPLAY::DdiGetDPAddress(*((ADAPTER_DISPLAY **)v7 + 390), (struct _DXGKARG_GETDPADDRESS *)v9);
      break;
    case 3u:
      if ( v54[0].HighPart < 0x38u )
      {
        WdLogSingleEntry2(3LL, 3LL, (unsigned int)v54[0].HighPart);
        WdLogGlobalForLineNumber = 180;
        goto LABEL_41;
      }
      if ( (*v9 & 1) != 0 )
      {
        WdLogSingleEntry2(3LL, 3LL, (unsigned int)v54[0].HighPart);
        WdLogGlobalForLineNumber = 192;
        goto LABEL_41;
      }
      if ( *((_BYTE *)v9 + 12) > 0x10u )
        goto LABEL_41;
      DPCaps = ADAPTER_DISPLAY::DdiDPAuxIoTransmission(
                 *((ADAPTER_DISPLAY **)v7 + 390),
                 (struct _DXGKARG_DPAUXIOTRANSMISSION *)v9);
      break;
    case 4u:
      if ( v54[0].HighPart < 0x3Cu )
      {
        WdLogSingleEntry2(3LL, 4LL, (unsigned int)v54[0].HighPart);
        WdLogGlobalForLineNumber = 209;
        goto LABEL_41;
      }
      v31 = v9[4];
      if ( v31 + 40 > v8 )
      {
        WdLogSingleEntry2(3LL, 4LL, v31);
        WdLogGlobalForLineNumber = 221;
        goto LABEL_41;
      }
      v32 = v9[6];
      if ( v32 > v31 )
      {
        WdLogSingleEntry2(3LL, 4LL, v32);
        WdLogGlobalForLineNumber = 227;
        goto LABEL_41;
      }
      v33 = v9[5];
      if ( v33 > v31 )
      {
        WdLogSingleEntry2(3LL, 4LL, v33);
        WdLogGlobalForLineNumber = 233;
        goto LABEL_41;
      }
      v34 = *v9;
      if ( (*v9 & 3) == 0 )
      {
        WdLogSingleEntry1(3LL, 4LL);
        WdLogGlobalForLineNumber = 239;
        goto LABEL_41;
      }
      if ( (v34 & 1) != 0 && !v32 )
      {
        WdLogSingleEntry1(3LL, 4LL);
        WdLogGlobalForLineNumber = 245;
        goto LABEL_41;
      }
      if ( (v34 & 2) != 0 )
      {
        if ( !v33 )
        {
          WdLogSingleEntry1(3LL, 4LL);
          WdLogGlobalForLineNumber = 253;
          goto LABEL_41;
        }
        v35 = v9[2];
        if ( v35 != 110 )
        {
          WdLogSingleEntry2(3LL, 4LL, v35);
          WdLogGlobalForLineNumber = 259;
          goto LABEL_41;
        }
      }
      if ( (v34 & 4) != 0 && (v34 & 0x38) != 8 )
      {
        WdLogSingleEntry2(3LL, 4LL, ((unsigned int)*v9 >> 3) & 7);
        WdLogGlobalForLineNumber = 267;
        goto LABEL_41;
      }
      if ( (v34 & 0x38u) > 0x20 )
      {
        WdLogSingleEntry2(3LL, 4LL, ((unsigned int)*v9 >> 3) & 7);
        WdLogGlobalForLineNumber = 273;
        goto LABEL_41;
      }
      DPCaps = ADAPTER_DISPLAY::DdiDPI2CIoTransmission(
                 *((ADAPTER_DISPLAY **)v7 + 390),
                 (struct _DXGKARG_DPI2CIOTRANSMISSION *)v9);
      break;
    case 5u:
      if ( v54[0].HighPart < 0x3Cu )
      {
        WdLogSingleEntry2(3LL, 5LL, (unsigned int)v54[0].HighPart);
        WdLogGlobalForLineNumber = 285;
LABEL_41:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v49 + 40));
        goto LABEL_26;
      }
      v23 = v9[2];
      if ( v23 + 28 > v8 )
      {
        WdLogSingleEntry2(3LL, 5LL, v23);
        WdLogGlobalForLineNumber = 297;
        goto LABEL_41;
      }
      v24 = (unsigned int)v9[3];
      if ( (unsigned int)v24 > v23 )
      {
        WdLogSingleEntry2(3LL, 5LL, (unsigned int)v24);
        WdLogGlobalForLineNumber = 303;
        goto LABEL_41;
      }
      v25 = v9[4];
      if ( v25 > v23 )
      {
        WdLogSingleEntry2(3LL, 5LL, v25);
        WdLogGlobalForLineNumber = 309;
        goto LABEL_41;
      }
      v52 = 127;
      v26 = SidebandMessageParser(v9 + 7, v24, v22, &v52);
      v27 = v26;
      if ( v26 < 0 )
      {
        WdLogSingleEntry2(3LL, (int)v54[0].LowPart, v26);
        WdLogGlobalForLineNumber = 322;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v49 + 40));
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v48);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
        if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v45);
        return v27;
      }
      if ( v52 >= 2 && v52 != 18 && v52 != 32 && v52 != 34 && v52 != 56 )
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v49 + 40));
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v48);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
LABEL_110:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
        if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v45);
        return 3221225506LL;
      }
      DPCaps = ADAPTER_DISPLAY::DdiDPSBMTransmission(
                 *((ADAPTER_DISPLAY **)v7 + 390),
                 (struct _DXGKARG_DPSBMTRANSMISSION *)v9);
      break;
    default:
      WdLogSingleEntry1(3LL, (int)v54[0].LowPart);
      WdLogGlobalForLineNumber = 345;
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v49 + 40));
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      DXGADAPTER::ReleaseReference(v7);
LABEL_106:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v45);
      }
      return 3221225485LL;
  }
  v36 = DPCaps;
  LODWORD(v51) = DPCaps;
  v37 = (char *)(v53 + 16);
  if ( v8 + v53 + 16 > MmUserProbeAddress || &v37[v8] <= v37 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v37, v9, v8);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v49 + 40));
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v48);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v45);
  return v36;
}
