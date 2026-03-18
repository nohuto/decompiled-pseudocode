/*
 * XREFs of NtDxgkDisplayPortOperation @ 0x14006E190
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z @ 0x1400A101C (-SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z @ 0x1401A3524 (-DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z.c)
 *     ?DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z @ 0x1401A37F0 (-DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z.c)
 *     ?DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z @ 0x1401A3ABC (-DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z.c)
 *     ?DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z @ 0x1401A5B60 (-DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z.c)
 *     ?DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z @ 0x1401A6FD4 (-DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z.c)
 */

__int64 __fastcall NtDxgkDisplayPortOperation(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  struct DXGADAPTER *v5; // r14
  int v6; // r13d
  int *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  ULONG64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // rdx
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // r15d
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int DPCaps; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // edx
  int v31; // r8d
  unsigned int v32; // eax
  unsigned int v33; // r14d
  char *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41[8]; // [rsp+50h] [rbp-128h] BYREF
  int v42; // [rsp+58h] [rbp-120h] BYREF
  __int64 v43; // [rsp+60h] [rbp-118h]
  char v44; // [rsp+68h] [rbp-110h]
  int *v45; // [rsp+70h] [rbp-108h] BYREF
  __int64 v46; // [rsp+78h] [rbp-100h] BYREF
  struct DXGADAPTER *v47[2]; // [rsp+80h] [rbp-F8h] BYREF
  unsigned int v48; // [rsp+90h] [rbp-E8h]
  unsigned int v49; // [rsp+94h] [rbp-E4h] BYREF
  struct _LUID v50[2]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v51[144]; // [rsp+B0h] [rbp-C8h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2213;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2213);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2213);
  v41[0] = 0;
  if ( ((int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, v41) < 0 || !v41[0])
    && ((int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, v41) < 0 || !v41[0]) )
  {
    goto LABEL_107;
  }
  *(_OWORD *)&v50[0].LowPart = 0LL;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v50, v4, 0x10uLL);
  v47[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v47, &v50[1]);
  v5 = v47[0];
  if ( !v47[0] )
  {
    WdLogSingleEntry3(2LL, v50[1].HighPart, v50[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 81;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v50[1].HighPart,
      v50[1].LowPart,
      -1073741811LL,
      0LL,
      0LL);
LABEL_103:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v47, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v42);
    }
    return 3221225485LL;
  }
  v6 = v50[0].HighPart - 16;
  if ( (unsigned int)(v50[0].HighPart - 17) > 0xFFF )
  {
    WdLogSingleEntry2(3LL, (int)v50[0].LowPart, (unsigned int)v50[0].HighPart);
    WdLogGlobalForLineNumber = 89;
    goto LABEL_103;
  }
  v7 = (int *)operator new[](v6, 0x4B677844u, 256LL);
  v45 = v7;
  if ( !v7 )
  {
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v45);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v47, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v42);
    return 3221225495LL;
  }
  v11 = v6 + a1 + 16;
  if ( v11 < a1 + 16 || v11 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v7, (const void *)(a1 + 16), v6);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v51, v5, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, v50[1].HighPart, v50[1].LowPart);
    WdLogGlobalForLineNumber = 115;
LABEL_24:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v45);
    goto LABEL_103;
  }
  v15 = *((_QWORD *)v5 + 390);
  if ( !v15 )
  {
    WdLogSingleEntry3(2LL, v50[1].HighPart, v50[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 123;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Non-display adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v50[1].HighPart,
      v50[1].LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_24;
  }
  if ( !*((_QWORD *)v5 + 182) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v15, v13, v14);
    v16[3] = v50[1].HighPart;
    v16[4] = v50[1].LowPart;
    v16[5] = -1073741637LL;
    WdLogGlobalForLineNumber = 130;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v45);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v47, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v42);
    return 3221225659LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v46, *(_QWORD *)(v15 + 104));
  switch ( v50[0].LowPart )
  {
    case 1u:
      if ( v50[0].HighPart < 0x18u )
      {
        WdLogSingleEntry2(3LL, 1LL, (unsigned int)v50[0].HighPart);
        WdLogGlobalForLineNumber = 143;
        goto LABEL_37;
      }
      DPCaps = ADAPTER_DISPLAY::DdiQueryDPCaps(*((ADAPTER_DISPLAY **)v5 + 390), (struct _DXGKARG_QUERYDPCAPS *)v7);
      break;
    case 2u:
      if ( v50[0].HighPart < 0x2Cu )
      {
        WdLogSingleEntry2(3LL, 2LL, (unsigned int)v50[0].HighPart);
        WdLogGlobalForLineNumber = 159;
        goto LABEL_37;
      }
      DPCaps = ADAPTER_DISPLAY::DdiGetDPAddress(*((ADAPTER_DISPLAY **)v5 + 390), (struct _DXGKARG_GETDPADDRESS *)v7);
      break;
    case 3u:
      if ( v50[0].HighPart < 0x38u )
      {
        WdLogSingleEntry2(3LL, 3LL, (unsigned int)v50[0].HighPart);
        WdLogGlobalForLineNumber = 175;
        goto LABEL_37;
      }
      if ( (*v7 & 1) != 0 )
      {
        WdLogSingleEntry2(3LL, 3LL, (unsigned int)v50[0].HighPart);
        WdLogGlobalForLineNumber = 187;
        goto LABEL_37;
      }
      if ( *((_BYTE *)v7 + 12) > 0x10u )
        goto LABEL_37;
      DPCaps = ADAPTER_DISPLAY::DdiDPAuxIoTransmission(
                 *((ADAPTER_DISPLAY **)v5 + 390),
                 (struct _DXGKARG_DPAUXIOTRANSMISSION *)v7);
      break;
    case 4u:
      if ( v50[0].HighPart < 0x3Cu )
      {
        WdLogSingleEntry2(3LL, 4LL, (unsigned int)v50[0].HighPart);
        WdLogGlobalForLineNumber = 204;
        goto LABEL_37;
      }
      v28 = v7[4];
      if ( v28 + 40 > v6 )
      {
        WdLogSingleEntry2(3LL, 4LL, v28);
        WdLogGlobalForLineNumber = 216;
        goto LABEL_37;
      }
      v29 = v7[6];
      if ( v29 > v28 )
      {
        WdLogSingleEntry2(3LL, 4LL, v29);
        WdLogGlobalForLineNumber = 222;
        goto LABEL_37;
      }
      v30 = v7[5];
      if ( v30 > v28 )
      {
        WdLogSingleEntry2(3LL, 4LL, v30);
        WdLogGlobalForLineNumber = 228;
        goto LABEL_37;
      }
      v31 = *v7;
      if ( (*v7 & 3) == 0 )
      {
        WdLogSingleEntry1(3LL, 4LL);
        WdLogGlobalForLineNumber = 234;
        goto LABEL_37;
      }
      if ( (v31 & 1) != 0 && !v29 )
      {
        WdLogSingleEntry1(3LL, 4LL);
        WdLogGlobalForLineNumber = 240;
        goto LABEL_37;
      }
      if ( (v31 & 2) != 0 )
      {
        if ( !v30 )
        {
          WdLogSingleEntry1(3LL, 4LL);
          WdLogGlobalForLineNumber = 248;
          goto LABEL_37;
        }
        v32 = v7[2];
        if ( v32 != 110 )
        {
          WdLogSingleEntry2(3LL, 4LL, v32);
          WdLogGlobalForLineNumber = 254;
          goto LABEL_37;
        }
      }
      if ( (v31 & 4) != 0 && (v31 & 0x38) != 8 )
      {
        WdLogSingleEntry2(3LL, 4LL, ((unsigned int)*v7 >> 3) & 7);
        WdLogGlobalForLineNumber = 262;
        goto LABEL_37;
      }
      if ( (v31 & 0x38u) > 0x20 )
      {
        WdLogSingleEntry2(3LL, 4LL, ((unsigned int)*v7 >> 3) & 7);
        WdLogGlobalForLineNumber = 268;
        goto LABEL_37;
      }
      DPCaps = ADAPTER_DISPLAY::DdiDPI2CIoTransmission(
                 *((ADAPTER_DISPLAY **)v5 + 390),
                 (struct _DXGKARG_DPI2CIOTRANSMISSION *)v7);
      break;
    case 5u:
      if ( v50[0].HighPart < 0x3Cu )
      {
        WdLogSingleEntry2(3LL, 5LL, (unsigned int)v50[0].HighPart);
        WdLogGlobalForLineNumber = 280;
        goto LABEL_37;
      }
      v20 = v7[2];
      if ( v20 + 28 > v6 )
      {
        WdLogSingleEntry2(3LL, 5LL, v20);
        WdLogGlobalForLineNumber = 292;
        goto LABEL_37;
      }
      v21 = (unsigned int)v7[3];
      if ( (unsigned int)v21 > v20 )
      {
        WdLogSingleEntry2(3LL, 5LL, (unsigned int)v21);
        WdLogGlobalForLineNumber = 298;
        goto LABEL_37;
      }
      v22 = v7[4];
      if ( v22 > v20 )
      {
        WdLogSingleEntry2(3LL, 5LL, v22);
        WdLogGlobalForLineNumber = 304;
        goto LABEL_37;
      }
      v49 = 127;
      v23 = SidebandMessageParser(v7 + 7, v21, v19, &v49);
      v24 = v23;
      if ( v23 < 0 )
      {
        WdLogSingleEntry2(3LL, (int)v50[0].LowPart, v23);
        WdLogGlobalForLineNumber = 317;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v46 + 40));
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v45);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v47, 0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v42);
        return v24;
      }
      if ( v49 >= 2 && v49 != 18 && v49 != 32 && v49 != 34 && v49 != 56 )
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v46 + 40));
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v45);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v47, 0LL);
LABEL_107:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventProfilerExit, v40, v42);
        return 3221225506LL;
      }
      DPCaps = ADAPTER_DISPLAY::DdiDPSBMTransmission(
                 *((ADAPTER_DISPLAY **)v5 + 390),
                 (struct _DXGKARG_DPSBMTRANSMISSION *)v7);
      break;
    default:
      WdLogSingleEntry1(3LL, (int)v50[0].LowPart);
      WdLogGlobalForLineNumber = 340;
LABEL_37:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v46 + 40));
      goto LABEL_24;
  }
  v33 = DPCaps;
  v48 = DPCaps;
  v34 = (char *)(a1 + 16);
  if ( a1 + 16 + v6 > MmUserProbeAddress || &v34[v6] <= v34 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v34, v7, v6);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v46 + 40));
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v45);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v47, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v42);
  return v33;
}
