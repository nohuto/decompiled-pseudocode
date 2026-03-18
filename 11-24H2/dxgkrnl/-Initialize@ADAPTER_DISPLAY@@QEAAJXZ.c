/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140369FB0
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1403E9430 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x140006494 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x14007C7C0 (DpiSetSchedulerCallbackState.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x140091160 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1401995F8 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1401D328C (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1401D42C4 (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x140274838 (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x140282420 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??0DISPLAY_SOURCE@@QEAA@XZ @ 0x14036AE1C (--0DISPLAY_SOURCE@@QEAA@XZ.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14036B118 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x14036B344 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x14036B45C (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3)
{
  int *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  bool v11; // cf
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdi
  DISPLAY_SOURCE *i; // r14
  unsigned int j; // ebx
  MONITOR_MGR **v21; // r14
  MONITOR_MGR *v22; // rax
  USB4_POWERON_WORK_QUEUE **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  MONITOR_MGR *v27; // rdi
  int v28; // ebx
  NTSTATUS result; // eax
  unsigned int *v30; // r15
  int RegistryValues; // eax
  int v32; // r14d
  int v33; // eax
  unsigned int v34; // eax
  int v35; // ecx
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  bool v42; // al
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  bool v46; // sf
  bool v47; // of
  __int64 v48; // rcx
  int v49; // r12d
  int v50; // ebx
  struct DXGGLOBAL *v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  int v58; // ecx
  struct _LUID v59; // rcx
  __int64 v60; // rax
  DXGGLOBAL *Global; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  bool v64; // zf
  __int64 v65; // rcx
  _DWORD *v66; // rcx
  __int64 v67; // rax
  struct DXGGLOBAL *v68; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v70; // rcx
  int (__fastcall *v71)(_QWORD, __int128 *); // rax
  __int64 v72; // rcx
  _DWORD *v73; // rdx
  int v74; // eax
  __int64 v75; // rcx
  unsigned int k; // r10d
  __int64 v77; // rax
  struct _KEVENT *v78; // rax
  __int64 v79; // [rsp+28h] [rbp-E0h]
  __int64 v80; // [rsp+28h] [rbp-E0h]
  __int64 v81; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+28h] [rbp-E0h]
  __int64 v83; // [rsp+28h] [rbp-E0h]
  __int64 v84; // [rsp+28h] [rbp-E0h]
  __int64 v85; // [rsp+30h] [rbp-D8h]
  __int64 v86; // [rsp+30h] [rbp-D8h]
  __int64 v87; // [rsp+30h] [rbp-D8h]
  __int64 v88; // [rsp+30h] [rbp-D8h]
  __int64 v89; // [rsp+38h] [rbp-D0h]
  __int64 v90; // [rsp+38h] [rbp-D0h]
  int v91; // [rsp+58h] [rbp-B0h] BYREF
  int v92; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v93; // [rsp+60h] [rbp-A8h] BYREF
  int v94; // [rsp+64h] [rbp-A4h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _LUID v96; // [rsp+70h] [rbp-98h] BYREF
  struct _LUID v97; // [rsp+78h] [rbp-90h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v98; // [rsp+80h] [rbp-88h] BYREF
  __int128 v99; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v100; // [rsp+C0h] [rbp-48h]
  _QWORD v101[50]; // [rsp+C8h] [rbp-40h] BYREF

  v3 = (int *)((char *)this + 24);
  *((_DWORD *)this + 6) = 0;
  v5 = *((_QWORD *)this + 2);
  v6 = v5;
  if ( *(_DWORD *)(v5 + 2280) >= 0x5010u && !*(_BYTE *)(v5 + 209) && (*(_DWORD *)(v5 + 2976) & 8) == 0 )
  {
    *(_QWORD *)&v98.Type = 16LL;
    *(_QWORD *)&v98.InputDataSize = 0LL;
    *(_QWORD *)&v98.Flags.0 = 0LL;
    HIDWORD(v98.hKmdProcessHandle) = 0;
    v98.pInputData = 0LL;
    v98.pOutputData = v3;
    v98.OutputDataSize = 4;
    v52 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v5, &v98, a3);
    if ( v52 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v54, v53, v55, v56) + 24) = v52;
      *v3 = 0;
      v57 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 4744;
      if ( *(int *)(v57 + 2736) >= 8704 )
        *v3 |= 2u;
    }
    v6 = *((_QWORD *)this + 2);
    v58 = *v3;
    if ( *(int *)(v6 + 2736) >= 9472 )
    {
      if ( (v58 & 0xC) == 0xC )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 4773;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
      v58 &= 0xFFFFFFF3;
      *v3 = v58;
    }
    if ( *(int *)(v6 + 2736) < 9984 )
    {
      v58 &= ~0x10u;
      *v3 = v58;
    }
    if ( *(int *)(v6 + 2736) < 10496 || *(_QWORD *)(v6 + 832) || !*(_DWORD *)(v6 + 1856) || (v58 & 2) == 0 )
    {
      v58 &= ~0x20u;
      *v3 = v58;
    }
    if ( *(int *)(v6 + 2736) < 12288 )
    {
      v58 &= ~0x40u;
      *v3 = v58;
    }
    if ( g_bDbgForceUsb4MonitorSupport )
      *v3 = v58 | 0x40;
  }
  v7 = *(_DWORD *)(v6 + 1856);
  *((_DWORD *)this + 24) = v7;
  v8 = v7;
  v10 = v7;
  v9 = 4024LL * v7;
  if ( !is_mul_ok(v10, 0xFB8uLL) )
    v9 = -1LL;
  v11 = __CFADD__(v9, 8LL);
  v12 = v9 + 8;
  if ( v11 )
    v12 = -1LL;
  v13 = (_QWORD *)operator new[](v12, 0x4B677844u, 64LL);
  if ( v13 )
  {
    *v13 = v8;
    v18 = v13 + 1;
    for ( i = (DISPLAY_SOURCE *)(v13 + 1); v8; --v8 )
    {
      DISPLAY_SOURCE::DISPLAY_SOURCE(i);
      i = (DISPLAY_SOURCE *)((char *)i + 4024);
    }
  }
  else
  {
    v18 = 0LL;
  }
  *((_QWORD *)this + 16) = v18;
  if ( !v18 )
  {
    WdLogSingleEntry3(6LL, *((unsigned int *)this + 24), *((_QWORD *)this + 2), -1073741801LL);
    v86 = *((_QWORD *)this + 2);
    v81 = *((unsigned int *)this + 24);
    WdLogGlobalForLineNumber = 4829;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate 0x%I64x of display sources for adapter 0x%I64x, returning 0x%I64x",
      v81,
      v86,
      -1073741801LL,
      0LL,
      0LL);
    return -1073741801;
  }
  for ( j = 0; j < *((_DWORD *)this + 24); ++j )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4024LL * j), this, j);
    if ( result < 0 )
      return result;
  }
  v21 = (MONITOR_MGR **)((char *)this + 112);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = this;
  WdLogGlobalForLineNumber = 253;
  if ( this == (ADAPTER_DISPLAY *)-112LL )
  {
    WdLogSingleEntry2(2LL, -112LL, 0LL);
    WdLogGlobalForLineNumber = 265;
    return -1073741811;
  }
  *v21 = 0LL;
  v22 = (MONITOR_MGR *)operator new(0x2B8uLL, 0x4D677844u, 64LL);
  if ( !v22
    || (v23 = (USB4_POWERON_WORK_QUEUE **)MONITOR_MGR::MONITOR_MGR(v22, this), (v27 = (MONITOR_MGR *)v23) == 0LL) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)this + 2));
    WdLogGlobalForLineNumber = 285;
    return -1073741811;
  }
  v28 = MONITOR_MGR::_InitializeMonitorManager(v23, v24, v25, v26);
  if ( v28 < 0 )
  {
    MONITOR_MGR::`vector deleting destructor'(v27, 1);
    return v28;
  }
  *v21 = v27;
  result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 13);
  if ( result > -1071774937 && (unsigned int)(result + 1071774934) > 0x3FE1FCD5 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 444LL) & 0x100) != 0 )
    {
      v59 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal() + 127);
      v60 = *((_QWORD *)this + 2);
      v97 = v59;
      v96 = *(struct _LUID *)(v60 + 412);
      result = CreateOutputDuplManager(*((_DWORD *)this + 24), 0LL, &v97, &v96, (struct OUTPUTDUPL_MGR **)this + 15);
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
    v91 = 1;
    *((_QWORD *)this + 77) = (char *)this + 608;
    *((_QWORD *)this + 76) = (char *)this + 608;
    v30 = (unsigned int *)((char *)this + 536);
    *((_DWORD *)this + 132) = 0;
    *((_DWORD *)this + 134) = 1000;
    *((_DWORD *)this + 133) = 200;
    *((_DWORD *)this + 135) = 20000000;
    *((_DWORD *)this + 136) = 0;
    memset(v101, 0, 0x188uLL);
    v101[5] = 0LL;
    LODWORD(v101[4]) = 0x4000000;
    LODWORD(v101[1]) = 288;
    v101[2] = L"ModeListCaching";
    LODWORD(v101[8]) = 288;
    v101[3] = &v91;
    LODWORD(v101[11]) = 0x4000000;
    v101[9] = L"SetTimingsFlags";
    v101[16] = L"ShortLinkTrainingTimeout";
    v101[23] = L"LongLinkTrainingTimeout";
    v101[30] = L"HPDFilterLimit";
    LODWORD(v101[15]) = 288;
    LODWORD(v101[18]) = 0x4000000;
    LODWORD(v101[22]) = 288;
    LODWORD(v101[25]) = 0x4000000;
    LODWORD(v101[29]) = 288;
    LODWORD(v101[32]) = 0x4000000;
    LODWORD(v101[36]) = 288;
    LODWORD(v101[39]) = 0x4000000;
    v101[37] = L"EnableVirtualRefreshRateOnExternalMonitor";
    LODWORD(v101[6]) = 0;
    v101[7] = 0LL;
    v101[10] = (char *)this + 528;
    v101[12] = 0LL;
    LODWORD(v101[13]) = 0;
    v101[14] = 0LL;
    v101[17] = (char *)this + 532;
    v101[19] = 0LL;
    LODWORD(v101[20]) = 0;
    v101[21] = 0LL;
    v101[24] = (char *)this + 536;
    v101[26] = 0LL;
    LODWORD(v101[27]) = 0;
    v101[28] = 0LL;
    v101[31] = (char *)this + 540;
    v101[33] = 0LL;
    LODWORD(v101[34]) = 0;
    v101[35] = 0LL;
    v101[38] = (char *)this + 544;
    v101[40] = 0LL;
    LODWORD(v101[41]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v101, 0LL, 0LL);
    v32 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      WdLogSingleEntry1(4LL, RegistryValues);
      WdLogGlobalForLineNumber = 4978;
      if ( v32 != -1073741772 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4981;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"Status == STATUS_OBJECT_NAME_NOT_FOUND",
          4981LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)this + 133) = 200;
      v33 = 1;
      v91 = 1;
      v32 = 0;
      *((_DWORD *)this + 132) = 0;
      *v30 = 1000;
    }
    else
    {
      v33 = v91;
    }
    *((_BYTE *)this + 292) = v33 == 1;
    v34 = *v30;
    if ( !*v30 || *((_DWORD *)this + 133) >= v34 || v34 >= 0x7530 )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 133), *((unsigned int *)this + 133), *((_QWORD *)this + 2));
      v89 = *((_QWORD *)this + 2);
      v79 = *((unsigned int *)this + 133);
      WdLogGlobalForLineNumber = 5006;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid link training timeout registry value (0x%I64x, 0x%I64x) on adapter 0x%I64x, fallback to the default value.",
        v79,
        v79,
        v89,
        0LL,
        0LL);
      *((_DWORD *)this + 133) = 200;
      *((_DWORD *)this + 134) = 1000;
    }
    v35 = *((_DWORD *)this + 135);
    if ( (unsigned int)(v35 - 1000000) > 0x5E69EC0 )
    {
      if ( v35 )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)this + 135), 20000000LL, *((_QWORD *)this + 2));
        v90 = *((_QWORD *)this + 2);
        v82 = *((unsigned int *)this + 135);
        WdLogGlobalForLineNumber = 5021;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid hot-plug filter limit of %#x on adapter 0x%I64x.  Using default of %#x.",
          v82,
          20000000LL,
          v90,
          0LL,
          0LL);
      }
      *((_DWORD *)this + 135) = 20000000;
    }
    if ( (*((_DWORD *)this + 132) & 1) != 0 )
    {
      v62 = *((_QWORD *)this + 2);
      if ( !*(_QWORD *)(v62 + 656) )
      {
        v28 = -1073741735;
        WdLogSingleEntry3(2LL, *(int *)(v62 + 416), *(unsigned int *)(v62 + 412), -1073741735LL);
        v63 = *((_QWORD *)this + 2);
        v87 = *(unsigned int *)(v63 + 412);
        v83 = *(int *)(v63 + 416);
        WdLogGlobalForLineNumber = 5038;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Miniport driver wants t fallback to use DdiCommitVidPn but it does not supply pfnCommitVidPn on adapter (0x%I6"
           "4x%08I64x), returning 0x%I64x.",
          v83,
          v87,
          -1073741735LL,
          0LL,
          0LL);
        return v28;
      }
    }
    v36 = *((_QWORD *)this + 2);
    v37 = *(_DWORD *)(v36 + 420);
    if ( (*(_DWORD *)(v36 + 444) & 0x400) != 0 )
    {
      if ( v37 == 1297040209
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 216) + 64LL) + 40LL) + 28LL) < 0x700Au )
      {
        *((_BYTE *)this + 289) = 1;
        v42 = 1;
      }
      else
      {
        v92 = (*((_DWORD *)this + 6) >> 1) & 1;
        memset(v101, 0, 0x188uLL);
        LODWORD(v101[1]) = 288;
        v101[2] = L"ForceEnableDWMClone";
        LODWORD(v101[4]) = 67108868;
        v101[3] = &v92;
        LODWORD(v101[6]) = 4;
        v101[5] = &v92;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v101, 0LL, 0LL);
        v64 = v92 == 0;
        *((_BYTE *)this + 289) = v92 != 0;
        v42 = !v64;
      }
    }
    else
    {
      if ( v37 == 1297040209 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5095;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"GetAdapter()->GetAdapterVendorId() != VENDOR_ID_QUALCOMM",
          5095LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v38 = *((_QWORD *)this + 2);
      v39 = *(unsigned int *)(v38 + 412);
      v40 = *(int *)(v38 + 416);
      if ( (*((_DWORD *)this + 6) & 2) != 0 )
      {
        v28 = -1073741735;
        WdLogSingleEntry3(2LL, v40, (unsigned int)v39, -1073741735LL);
        v41 = *((_QWORD *)this + 2);
        v85 = *(unsigned int *)(v41 + 412);
        v80 = *(int *)(v41 + 416);
        WdLogGlobalForLineNumber = 5107;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Force to stop DWM clone supported adapter (0x%I64x%08I64x) due to target ID does not support DWM clone, returning 0x%I64x.",
          v80,
          v85,
          -1073741735LL,
          0LL,
          0LL);
        return v28;
      }
      WdLogSingleEntry2(4LL, v40, v39);
      v42 = 0;
      WdLogGlobalForLineNumber = 5115;
      *((_BYTE *)this + 289) = 0;
    }
    *((_BYTE *)this + 290) = v42;
    v43 = *((_QWORD *)this + 2);
    if ( *(int *)(v43 + 3004) < 2000 )
    {
      v65 = *(_QWORD *)(v43 + 216);
      v94 = 0;
      if ( (int)DpiReadPnpRegistryValue(v65, L"EnableVirtualTopologySupport", &v94, 4LL, 2) >= 0 )
      {
        if ( v94 )
        {
          v66 = (_DWORD *)*((_QWORD *)this + 2);
          if ( (v66[111] & 0x800) == 0 )
          {
            v28 = -1073741735;
            WdLogSingleEntry3(2LL, (int)v66[104], (unsigned int)v66[103], -1073741735LL);
            v67 = *((_QWORD *)this + 2);
            v88 = *(unsigned int *)(v67 + 412);
            v84 = *(int *)(v67 + 416);
            WdLogGlobalForLineNumber = 5141;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Force to stop adapter (0x%I64x%08I64x) due to target ID does not support reduced hash size and registry re"
               "quested to use virtual topologies, returning 0x%I64x.",
              v84,
              v88,
              -1073741735LL,
              0LL,
              0LL);
            return v28;
          }
          *((_BYTE *)this + 290) = 1;
          v68 = DXGGLOBAL::GetGlobal();
          DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v68 + 1384));
        }
      }
    }
    v44 = *((_QWORD *)this + 2);
    if ( !*(_QWORD *)(v44 + 3128) )
    {
      DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v44 + 696) != 0LL);
      v70 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 58) = DodPresent;
      if ( !DodPresent )
        v32 = -1073741801;
      v100 = 0LL;
      v99 = 0LL;
      v71 = *(int (__fastcall **)(_QWORD, __int128 *))(v70 + 2368);
      if ( v71 && v71(*(_QWORD *)(v70 + 2296), &v99) >= 0 )
      {
        v72 = 0LL;
        v73 = (_DWORD *)((char *)this + 440);
        do
        {
          v74 = *((unsigned __int8 *)&v99 + v72++);
          *v73++ = v74;
        }
        while ( v72 < 4 );
        *((_DWORD *)this + 115) = BYTE4(v100);
        *((_DWORD *)this + 114) = BYTE5(v100);
      }
      else
      {
        *((_DWORD *)this + 110) = 1;
      }
      v75 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v75 + 64) + 40LL) + 28LL) >= 0x3007u )
        DpiSetSchedulerCallbackState(v75, 3);
    }
    if ( *((_QWORD *)this + 58) )
    {
      for ( k = 0;
            k < *((_DWORD *)this + 24);
            *(_QWORD *)(3040 * v77 + *(_QWORD *)(*((_QWORD *)this + 58) + 8LL) + 400) = *(_QWORD *)(4024 * v77
                                                                                                  + *((_QWORD *)this + 16)
                                                                                                  + 912) )
      {
        v77 = k++;
      }
    }
    v45 = *((_QWORD *)this + 2);
    v47 = __OFSUB__(*(_DWORD *)(v45 + 2736), 8704);
    v46 = *(_DWORD *)(v45 + 2736) - 8704 < 0;
    v48 = *(_QWORD *)(v45 + 216);
    v49 = v46 ^ v47;
    v93 = v49;
    if ( (int)DpiReadPnpRegistryValue(v48, L"NeedToSuspendVidSchBeforeSetGammaRamp", &v93, 4LL, 2) >= 0 )
    {
      v50 = v93;
      if ( v93 != v49 )
      {
        WdLogSingleEntry2(3LL, v93, *((_QWORD *)this + 2));
        WdLogGlobalForLineNumber = 5240;
      }
    }
    else
    {
      v50 = v49;
      v93 = v49;
    }
    *((_BYTE *)this + 291) = v50 != 0;
    v51 = DXGGLOBAL::GetGlobal();
    if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                (struct DXGGLOBAL *)((char *)v51 + 1384),
                (const struct _LUID *)(*((_QWORD *)this + 2) + 412LL),
                *((unsigned __int8 *)this + 290)) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5253;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(TmpStatus)", 5253LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v32 >= 0 )
    {
      EventHandle = 0LL;
      v78 = IoCreateNotificationEvent(0LL, &EventHandle);
      *((_QWORD *)this + 84) = v78;
      if ( v78 )
      {
        KeClearEvent(v78);
        ObfReferenceObject(*((PVOID *)this + 84));
        ZwClose(EventHandle);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 5264;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Failed to create adapter VidPnSourceUsedBySession event object.",
          5264LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741801;
      }
    }
    return v32;
  }
  return result;
}
