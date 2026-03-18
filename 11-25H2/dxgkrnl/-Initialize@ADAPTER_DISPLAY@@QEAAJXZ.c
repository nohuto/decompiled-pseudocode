/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140382BE0
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1403EF250 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x140006494 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x14007C320 (DpiSetSchedulerCallbackState.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x14008FD00 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x14019716C (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1401CDF40 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1401CEF84 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x14026D8D8 (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x14027B5E0 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x140383A4C (--0DISPLAY_SOURCE@@QEAA@XZ.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x140383D20 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x140383F4C (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x140384064 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  bool v12; // cf
  unsigned __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rdi
  DISPLAY_SOURCE *i; // r14
  unsigned int j; // ebx
  MONITOR_MGR **v22; // r14
  __int64 v23; // r9
  MONITOR_MGR *v24; // rax
  USB4_POWERON_WORK_QUEUE **v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  MONITOR_MGR *v29; // rdi
  int v30; // ebx
  NTSTATUS result; // eax
  unsigned int *v32; // r15
  int RegistryValues; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // r14d
  int v37; // eax
  unsigned int v38; // eax
  int v39; // ecx
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  bool v46; // al
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  bool v50; // sf
  bool v51; // of
  __int64 v52; // rcx
  int v53; // r12d
  int v54; // ebx
  struct DXGGLOBAL *v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  int v61; // ecx
  struct _LUID v62; // rcx
  __int64 v63; // rax
  DXGGLOBAL *Global; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  bool v67; // zf
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  __int64 v70; // rax
  struct DXGGLOBAL *v71; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v73; // rcx
  int (__fastcall *v74)(_QWORD, __int128 *); // rax
  __int64 v75; // rcx
  _DWORD *v76; // rdx
  int v77; // eax
  __int64 v78; // rcx
  unsigned int k; // r10d
  __int64 v80; // rax
  struct _KEVENT *v81; // rax
  __int64 v82; // [rsp+28h] [rbp-E0h]
  __int64 v83; // [rsp+28h] [rbp-E0h]
  __int64 v84; // [rsp+28h] [rbp-E0h]
  __int64 v85; // [rsp+28h] [rbp-E0h]
  __int64 v86; // [rsp+28h] [rbp-E0h]
  __int64 v87; // [rsp+28h] [rbp-E0h]
  __int64 v88; // [rsp+30h] [rbp-D8h]
  __int64 v89; // [rsp+30h] [rbp-D8h]
  __int64 v90; // [rsp+30h] [rbp-D8h]
  __int64 v91; // [rsp+30h] [rbp-D8h]
  __int64 v92; // [rsp+38h] [rbp-D0h]
  __int64 v93; // [rsp+38h] [rbp-D0h]
  int v94; // [rsp+58h] [rbp-B0h] BYREF
  int v95; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v96; // [rsp+60h] [rbp-A8h] BYREF
  int v97; // [rsp+64h] [rbp-A4h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _LUID v99; // [rsp+70h] [rbp-98h] BYREF
  struct _LUID v100; // [rsp+78h] [rbp-90h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v101; // [rsp+80h] [rbp-88h] BYREF
  __int128 v102; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-48h]
  _QWORD v104[50]; // [rsp+C8h] [rbp-40h] BYREF

  v4 = (int *)((char *)this + 24);
  *((_DWORD *)this + 6) = 0;
  v6 = *((_QWORD *)this + 2);
  v7 = v6;
  if ( *(_DWORD *)(v6 + 2280) >= 0x5010u && !*(_BYTE *)(v6 + 209) && (*(_DWORD *)(v6 + 2976) & 8) == 0 )
  {
    *(_QWORD *)&v101.Type = 16LL;
    *(_QWORD *)&v101.InputDataSize = 0LL;
    *(_QWORD *)&v101.Flags.0 = 0LL;
    HIDWORD(v101.hKmdProcessHandle) = 0;
    v101.pInputData = 0LL;
    v101.pOutputData = v4;
    v101.OutputDataSize = 4;
    v56 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v6, &v101, a3);
    if ( v56 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v58, v57, v59, a4) + 24) = v56;
      *v4 = 0;
      v60 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 4746;
      if ( *(int *)(v60 + 2736) >= 8704 )
        *v4 |= 2u;
    }
    v7 = *((_QWORD *)this + 2);
    v61 = *v4;
    if ( *(int *)(v7 + 2736) >= 9472 )
    {
      if ( (v61 & 0xC) == 0xC )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 4775;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Adapter 0x%I64x: Both HdrFP16ScanoutSupport and HdrARGB10ScanoutSupport can't be set to 1 at the same time",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741811;
      }
    }
    else
    {
      v61 &= 0xFFFFFFF3;
      *v4 = v61;
    }
    if ( *(int *)(v7 + 2736) < 9984 )
    {
      v61 &= ~0x10u;
      *v4 = v61;
    }
    if ( *(int *)(v7 + 2736) < 10496 || *(_QWORD *)(v7 + 832) || !*(_DWORD *)(v7 + 1856) || (v61 & 2) == 0 )
    {
      v61 &= ~0x20u;
      *v4 = v61;
    }
    if ( *(int *)(v7 + 2736) < 12288 )
    {
      v61 &= ~0x40u;
      *v4 = v61;
    }
    if ( g_bDbgForceUsb4MonitorSupport )
      *v4 = v61 | 0x40;
  }
  v8 = *(_DWORD *)(v7 + 1856);
  *((_DWORD *)this + 24) = v8;
  v9 = v8;
  v11 = v8;
  v10 = 3984LL * v8;
  if ( !is_mul_ok(v11, 0xF90uLL) )
    v10 = -1LL;
  v12 = __CFADD__(v10, 8LL);
  v13 = v10 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = (_QWORD *)operator new[](v13, 0x4B677844u, 64LL, a4);
  if ( v14 )
  {
    *v14 = v9;
    v19 = v14 + 1;
    for ( i = (DISPLAY_SOURCE *)(v14 + 1); v9; --v9 )
    {
      DISPLAY_SOURCE::DISPLAY_SOURCE(i);
      i = (DISPLAY_SOURCE *)((char *)i + 3984);
    }
  }
  else
  {
    v19 = 0LL;
  }
  *((_QWORD *)this + 16) = v19;
  if ( !v19 )
  {
    WdLogSingleEntry3(6LL, *((unsigned int *)this + 24), *((_QWORD *)this + 2), -1073741801LL);
    v89 = *((_QWORD *)this + 2);
    v84 = *((unsigned int *)this + 24);
    WdLogGlobalForLineNumber = 4831;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate 0x%I64x of display sources for adapter 0x%I64x, returning 0x%I64x",
      v84,
      v89,
      -1073741801LL,
      0LL,
      0LL);
    return -1073741801;
  }
  for ( j = 0; j < *((_DWORD *)this + 24); ++j )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 3984LL * j), this, j);
    if ( result < 0 )
      return result;
  }
  v22 = (MONITOR_MGR **)((char *)this + 112);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = this;
  WdLogGlobalForLineNumber = 253;
  if ( this == (ADAPTER_DISPLAY *)-112LL )
  {
    WdLogSingleEntry2(2LL, -112LL, 0LL);
    WdLogGlobalForLineNumber = 265;
    return -1073741811;
  }
  *v22 = 0LL;
  v24 = (MONITOR_MGR *)operator new(0x2B8uLL, 0x4D677844u, 64LL, v23);
  if ( !v24
    || (v25 = (USB4_POWERON_WORK_QUEUE **)MONITOR_MGR::MONITOR_MGR(v24, this), (v29 = (MONITOR_MGR *)v25) == 0LL) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)this + 2));
    WdLogGlobalForLineNumber = 285;
    return -1073741811;
  }
  v30 = MONITOR_MGR::_InitializeMonitorManager(v25, v26, v27, v28);
  if ( v30 < 0 )
  {
    MONITOR_MGR::`vector deleting destructor'(v29, 1);
    return v30;
  }
  *v22 = v29;
  result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 13);
  if ( result > -1071774937 && (unsigned int)(result + 1071774934) > 0x3FE1FCD5 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 444LL) & 0x100) != 0 )
    {
      v62 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
      v63 = *((_QWORD *)this + 2);
      v100 = v62;
      v99 = *(struct _LUID *)(v63 + 412);
      result = CreateOutputDuplManager(*((_DWORD *)this + 24), 0LL, &v100, &v99, (struct OUTPUTDUPL_MGR **)this + 15);
      if ( result < 0 )
        return result;
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::AddIndirectOutputDuplMgr(
        Global,
        (struct OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 15) - 24LL) & -(__int64)(*((_QWORD *)this + 15) != 0LL)));
    }
    else
    {
      result = CreateOutputDuplManager(*((_DWORD *)this + 24), this, 0LL, 0LL, (struct OUTPUTDUPL_MGR **)this + 15);
      if ( result < 0 )
        return result;
    }
    v94 = 1;
    *((_QWORD *)this + 76) = (char *)this + 600;
    *((_QWORD *)this + 75) = (char *)this + 600;
    v32 = (unsigned int *)((char *)this + 528);
    *((_DWORD *)this + 130) = 0;
    *((_DWORD *)this + 132) = 1000;
    *((_DWORD *)this + 131) = 200;
    *((_DWORD *)this + 133) = 20000000;
    *((_DWORD *)this + 134) = 0;
    memset(v104, 0, 0x188uLL);
    v104[5] = 0LL;
    LODWORD(v104[4]) = 0x4000000;
    LODWORD(v104[1]) = 288;
    v104[2] = L"ModeListCaching";
    LODWORD(v104[8]) = 288;
    v104[3] = &v94;
    LODWORD(v104[11]) = 0x4000000;
    v104[9] = L"SetTimingsFlags";
    v104[16] = L"ShortLinkTrainingTimeout";
    v104[23] = L"LongLinkTrainingTimeout";
    v104[30] = L"HPDFilterLimit";
    LODWORD(v104[15]) = 288;
    LODWORD(v104[18]) = 0x4000000;
    LODWORD(v104[22]) = 288;
    LODWORD(v104[25]) = 0x4000000;
    LODWORD(v104[29]) = 288;
    LODWORD(v104[32]) = 0x4000000;
    LODWORD(v104[36]) = 288;
    LODWORD(v104[39]) = 0x4000000;
    v104[37] = L"EnableVirtualRefreshRateOnExternalMonitor";
    LODWORD(v104[6]) = 0;
    v104[7] = 0LL;
    v104[10] = (char *)this + 520;
    v104[12] = 0LL;
    LODWORD(v104[13]) = 0;
    v104[14] = 0LL;
    v104[17] = (char *)this + 524;
    v104[19] = 0LL;
    LODWORD(v104[20]) = 0;
    v104[21] = 0LL;
    v104[24] = (char *)this + 528;
    v104[26] = 0LL;
    LODWORD(v104[27]) = 0;
    v104[28] = 0LL;
    v104[31] = (char *)this + 532;
    v104[33] = 0LL;
    LODWORD(v104[34]) = 0;
    v104[35] = 0LL;
    v104[38] = (char *)this + 536;
    v104[40] = 0LL;
    LODWORD(v104[41]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v104, 0LL, 0LL);
    v36 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      WdLogSingleEntry1(4LL, RegistryValues);
      WdLogGlobalForLineNumber = 4980;
      if ( v36 != -1073741772 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4983;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"Status == STATUS_OBJECT_NAME_NOT_FOUND",
          4983LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)this + 131) = 200;
      v37 = 1;
      v94 = 1;
      v36 = 0;
      *((_DWORD *)this + 130) = 0;
      *v32 = 1000;
    }
    else
    {
      v37 = v94;
    }
    *((_BYTE *)this + 292) = v37 == 1;
    v38 = *v32;
    if ( !*v32 || *((_DWORD *)this + 131) >= v38 || v38 >= 0x7530 )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 131), *((unsigned int *)this + 131), *((_QWORD *)this + 2));
      v92 = *((_QWORD *)this + 2);
      v82 = *((unsigned int *)this + 131);
      WdLogGlobalForLineNumber = 5008;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid link training timeout registry value (0x%I64x, 0x%I64x) on adapter 0x%I64x, fallback to the default value.",
        v82,
        v82,
        v92,
        0LL,
        0LL);
      *((_DWORD *)this + 131) = 200;
      *((_DWORD *)this + 132) = 1000;
    }
    v39 = *((_DWORD *)this + 133);
    if ( (unsigned int)(v39 - 1000000) > 0x5E69EC0 )
    {
      if ( v39 )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)this + 133), 20000000LL, *((_QWORD *)this + 2));
        v93 = *((_QWORD *)this + 2);
        v85 = *((unsigned int *)this + 133);
        WdLogGlobalForLineNumber = 5023;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid hot-plug filter limit of %#x on adapter 0x%I64x.  Using default of %#x.",
          v85,
          20000000LL,
          v93,
          0LL,
          0LL);
      }
      *((_DWORD *)this + 133) = 20000000;
    }
    if ( (*((_DWORD *)this + 130) & 1) != 0 )
    {
      v65 = *((_QWORD *)this + 2);
      if ( !*(_QWORD *)(v65 + 656) )
      {
        v30 = -1073741735;
        WdLogSingleEntry3(2LL, *(int *)(v65 + 416), *(unsigned int *)(v65 + 412), -1073741735LL);
        v66 = *((_QWORD *)this + 2);
        v90 = *(unsigned int *)(v66 + 412);
        v86 = *(int *)(v66 + 416);
        WdLogGlobalForLineNumber = 5040;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Miniport driver wants t fallback to use DdiCommitVidPn but it does not supply pfnCommitVidPn on adapter (0x%I6"
           "4x%08I64x), returning 0x%I64x.",
          v86,
          v90,
          -1073741735LL,
          0LL,
          0LL);
        return v30;
      }
    }
    v40 = *((_QWORD *)this + 2);
    v41 = *(_DWORD *)(v40 + 420);
    if ( (*(_DWORD *)(v40 + 444) & 0x400) != 0 )
    {
      if ( v41 == 1297040209
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 216) + 64LL) + 40LL) + 28LL) < 0x700Au )
      {
        *((_BYTE *)this + 289) = 1;
        v46 = 1;
      }
      else
      {
        v95 = (*((_DWORD *)this + 6) >> 1) & 1;
        memset(v104, 0, 0x188uLL);
        LODWORD(v104[1]) = 288;
        v104[2] = L"ForceEnableDWMClone";
        LODWORD(v104[4]) = 67108868;
        v104[3] = &v95;
        LODWORD(v104[6]) = 4;
        v104[5] = &v95;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v104, 0LL, 0LL);
        v67 = v95 == 0;
        *((_BYTE *)this + 289) = v95 != 0;
        v46 = !v67;
      }
    }
    else
    {
      if ( v41 == 1297040209 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5097;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"GetAdapter()->GetAdapterVendorId() != VENDOR_ID_QUALCOMM",
          5097LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v42 = *((_QWORD *)this + 2);
      v43 = *(unsigned int *)(v42 + 412);
      v44 = *(int *)(v42 + 416);
      if ( (*((_DWORD *)this + 6) & 2) != 0 )
      {
        v30 = -1073741735;
        WdLogSingleEntry3(2LL, v44, (unsigned int)v43, -1073741735LL);
        v45 = *((_QWORD *)this + 2);
        v88 = *(unsigned int *)(v45 + 412);
        v83 = *(int *)(v45 + 416);
        WdLogGlobalForLineNumber = 5109;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Force to stop DWM clone supported adapter (0x%I64x%08I64x) due to target ID does not support DWM clone, returning 0x%I64x.",
          v83,
          v88,
          -1073741735LL,
          0LL,
          0LL);
        return v30;
      }
      WdLogSingleEntry2(4LL, v44, v43);
      v46 = 0;
      WdLogGlobalForLineNumber = 5117;
      *((_BYTE *)this + 289) = 0;
    }
    *((_BYTE *)this + 290) = v46;
    v47 = *((_QWORD *)this + 2);
    if ( *(int *)(v47 + 3004) < 2000 )
    {
      v68 = *(_QWORD *)(v47 + 216);
      v97 = 0;
      if ( (int)DpiReadPnpRegistryValue(v68, L"EnableVirtualTopologySupport", &v97, 4LL, 2) >= 0 )
      {
        if ( v97 )
        {
          v69 = (_DWORD *)*((_QWORD *)this + 2);
          if ( (v69[111] & 0x800) == 0 )
          {
            v30 = -1073741735;
            WdLogSingleEntry3(2LL, (int)v69[104], (unsigned int)v69[103], -1073741735LL);
            v70 = *((_QWORD *)this + 2);
            v91 = *(unsigned int *)(v70 + 412);
            v87 = *(int *)(v70 + 416);
            WdLogGlobalForLineNumber = 5143;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Force to stop adapter (0x%I64x%08I64x) due to target ID does not support reduced hash size and registry re"
               "quested to use virtual topologies, returning 0x%I64x.",
              v87,
              v91,
              -1073741735LL,
              0LL,
              0LL);
            return v30;
          }
          *((_BYTE *)this + 290) = 1;
          v71 = DXGGLOBAL::GetGlobal();
          DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v71 + 1352));
        }
      }
    }
    v48 = *((_QWORD *)this + 2);
    if ( !*(_QWORD *)(v48 + 3128) )
    {
      DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v48 + 696) != 0LL, v34, v35);
      v73 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 57) = DodPresent;
      if ( !DodPresent )
        v36 = -1073741801;
      v103 = 0LL;
      v102 = 0LL;
      v74 = *(int (__fastcall **)(_QWORD, __int128 *))(v73 + 2368);
      if ( v74 && v74(*(_QWORD *)(v73 + 2296), &v102) >= 0 )
      {
        v75 = 0LL;
        v76 = (_DWORD *)((char *)this + 432);
        do
        {
          v77 = *((unsigned __int8 *)&v102 + v75++);
          *v76++ = v77;
        }
        while ( v75 < 4 );
        *((_DWORD *)this + 113) = BYTE4(v103);
        *((_DWORD *)this + 112) = BYTE5(v103);
      }
      else
      {
        *((_DWORD *)this + 108) = 1;
      }
      v78 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v78 + 64) + 40LL) + 28LL) >= 0x3007u )
        DpiSetSchedulerCallbackState(v78, 3);
    }
    if ( *((_QWORD *)this + 57) )
    {
      for ( k = 0;
            k < *((_DWORD *)this + 24);
            *(_QWORD *)(2968 * v80 + *(_QWORD *)(*((_QWORD *)this + 57) + 8LL) + 400) = *(_QWORD *)(3984 * v80
                                                                                                  + *((_QWORD *)this + 16)
                                                                                                  + 912) )
      {
        v80 = k++;
      }
    }
    v49 = *((_QWORD *)this + 2);
    v51 = __OFSUB__(*(_DWORD *)(v49 + 2736), 8704);
    v50 = *(_DWORD *)(v49 + 2736) - 8704 < 0;
    v52 = *(_QWORD *)(v49 + 216);
    v53 = v50 ^ v51;
    v96 = v53;
    if ( (int)DpiReadPnpRegistryValue(v52, L"NeedToSuspendVidSchBeforeSetGammaRamp", &v96, 4LL, 2) >= 0 )
    {
      v54 = v96;
      if ( v96 != v53 )
      {
        WdLogSingleEntry2(3LL, v96, *((_QWORD *)this + 2));
        WdLogGlobalForLineNumber = 5242;
      }
    }
    else
    {
      v54 = v53;
      v96 = v53;
    }
    *((_BYTE *)this + 291) = v54 != 0;
    v55 = DXGGLOBAL::GetGlobal();
    if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                (struct DXGGLOBAL *)((char *)v55 + 1352),
                (const struct _LUID *)(*((_QWORD *)this + 2) + 412LL),
                *((unsigned __int8 *)this + 290)) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5255;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(TmpStatus)", 5255LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v36 >= 0 )
    {
      EventHandle = 0LL;
      v81 = IoCreateNotificationEvent(0LL, &EventHandle);
      *((_QWORD *)this + 83) = v81;
      if ( v81 )
      {
        KeClearEvent(v81);
        ObfReferenceObject(*((PVOID *)this + 83));
        ZwClose(EventHandle);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 5266;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to create adapter VidPnSourceUsedBySession event object.",
          5266LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741801;
      }
    }
    return v36;
  }
  return result;
}
