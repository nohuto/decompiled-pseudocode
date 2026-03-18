/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1402D751C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x14042BEA0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140009C9C (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140029DDC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1402D7DA0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402D7EA4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x140306E6C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140308924 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        bool *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 v6; // rsi
  unsigned int v7; // edi
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  SESSION_VIEW *SessionViewFromSource; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rbx
  bool v16; // al
  __int64 v17; // rcx
  SESSION_VIEW *v18; // rdx
  bool v19; // cf
  __int64 result; // rax
  unsigned int CurrentProcessSessionId; // eax
  int v22; // edi
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // edx
  unsigned int v36; // edx
  MONITOR_MGR *v37; // r10
  int MonitorInstance; // eax
  __int64 v39; // rbx
  __int64 v40; // rax
  const wchar_t *v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  bool v47; // al
  __int64 v48; // rcx
  struct DXGGLOBAL *v49; // rax
  unsigned int v50; // r8d
  DXGADAPTERSOURCEHASH *v51; // rcx
  __int64 v52; // rax
  int HashForAdapterAndSource; // eax
  struct _KTHREAD **v54; // rcx
  char HashBitShift; // di
  int HashBitMask; // eax
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v66; // [rsp+54h] [rbp-ACh]
  DXGADAPTERSOURCEHASH *v67; // [rsp+58h] [rbp-A8h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v68; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v69; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v70; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  void *v72; // [rsp+78h] [rbp-88h] BYREF
  __int64 v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+88h] [rbp-78h]
  unsigned int *v75; // [rsp+90h] [rbp-70h]
  SESSION_VIEW *v76; // [rsp+98h] [rbp-68h]
  _BYTE v77[144]; // [rsp+A0h] [rbp-60h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v6 = a2;
  v75 = a4;
  v7 = 0;
  v70 = a2;
  v71 = a5;
  v66 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    v22 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 1300;
    v23 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v22;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, a1, v6);
  v76 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v24 = PsGetCurrentProcessSessionId();
    WdLogSingleEntry4(4LL, v6, a1->HighPart, a1->LowPart, v24);
    *a3 = 1;
    result = 0LL;
    *a4 = 0;
    WdLogGlobalForLineNumber = 1323;
    return result;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1340;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplaySource != NULL", 1340LL, 0LL, 0LL, 0LL, 0LL);
  }
  v14 = v70;
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL);
  v16 = *((_DWORD *)PrimaryDisplaySource + 4) == v70 && *a1 == v15;
  *a3 = v16;
  while ( 1 )
  {
    if ( *((_DWORD *)PrimaryDisplaySource + 4) == v14 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      if ( a1->LowPart == *(_DWORD *)(v17 + 412) && a1->HighPart == *(_DWORD *)(v17 + 416) )
        goto LABEL_12;
    }
    v25 = *((_QWORD *)PrimaryDisplaySource + 1);
    v65 = 0;
    v68 = D3DKMDT_VOT_HD15;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v77, *(struct DXGADAPTER *const *)(v25 + 16), 0LL);
    v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v77, 0LL);
    v27 = *((_QWORD *)PrimaryDisplaySource + 1);
    if ( v26 < 0 )
    {
      WdLogSingleEntry3(
        4LL,
        *(int *)(*(_QWORD *)(v27 + 16) + 416LL),
        *(unsigned int *)(*(_QWORD *)(v27 + 16) + 412LL),
        v26);
      WdLogGlobalForLineNumber = 1378;
      goto LABEL_46;
    }
    if ( !*(_BYTE *)(v27 + 290) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1386;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDisplaySource->GetDisplayCore()->IsVirtualTopologyEnabled()",
        1386LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !v71 || v7 >= *v75 )
      goto LABEL_45;
    if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
                *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                *((_DWORD *)PrimaryDisplaySource + 4),
                1uLL,
                &v65) < 0
      || v65 != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1404;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"NT_SUCCESS(DmmEnumClientVidPnPathTargetsFromSource( pDisplaySource->GetAdapter(), pDisplaySource->GetVidPnSource"
         "Id(), 1, &VidPnTargetId)) && (VidPnTargetId == D3DDDI_ID_UNINITIALIZED)",
        1404LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v28 = DmmEnumClientVidPnPathTargetsFromSource(
            *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
            *((_DWORD *)PrimaryDisplaySource + 4),
            0LL,
            &v65);
    v22 = v28;
    if ( v28 < 0 )
    {
      v39 = v28;
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)PrimaryDisplaySource + 4),
        *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 416LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL),
        v28);
      v60 = *((_QWORD *)PrimaryDisplaySource + 1);
      v41 = L"Failed to get the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      WdLogGlobalForLineNumber = 1416;
      v61 = *(_QWORD *)(v60 + 16);
      v43 = *(unsigned int *)(v61 + 412);
      v44 = *(int *)(v61 + 416);
      v45 = *((unsigned int *)PrimaryDisplaySource + 4);
      goto LABEL_38;
    }
    v32 = *((_QWORD *)PrimaryDisplaySource + 1);
    LODWORD(v67) = v65;
    if ( v65 == -1 )
      break;
    v33 = *(_QWORD *)(v32 + 16);
    v34 = WdLogNewEntry5_WdTrace(v65, v29, v30, v31);
    v35 = (int)v67;
    *(_QWORD *)(v34 + 24) = (unsigned int)v67;
    *(_QWORD *)(v34 + 32) = v33;
    WdLogGlobalForLineNumber = 2027;
    if ( !v33 || v35 == -1 )
      goto LABEL_56;
    if ( !*(_QWORD *)(v33 + 3120) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2049;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(v33 + 3120) + 112LL) )
    {
      WdLogSingleEntry1(2LL, v33);
      WdLogGlobalForLineNumber = 2059;
LABEL_56:
      v22 = -1073741811;
LABEL_37:
      v39 = v22;
      WdLogSingleEntry4(
        2LL,
        v65,
        *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 416LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL),
        v22);
      v40 = *((_QWORD *)PrimaryDisplaySource + 1);
      v41 = L"Failed to check monitor connection to target 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      WdLogGlobalForLineNumber = 1446;
      v42 = *(_QWORD *)(v40 + 16);
      v43 = *(unsigned int *)(v42 + 412);
      v44 = *(int *)(v42 + 416);
      v45 = v65;
LABEL_38:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v41, v45, v44, v43, v39, 0LL);
      goto LABEL_39;
    }
    v73 = 0LL;
    v72 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v72);
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v37, v36, 1u, (struct MONITOR_REF_ACCESSOR *)&v72);
    v22 = MonitorInstance;
    if ( MonitorInstance != -1073741275 )
    {
      if ( MonitorInstance < 0 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v72);
        goto LABEL_37;
      }
      if ( !v73 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2080;
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v72);
      DmmGetVideoOutputTechnology(*(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL), v65, &v68, 0LL);
      v46 = 5LL * v66;
      v74 = v46;
      v47 = IsInternalVideoOutput(v68);
      v48 = v71;
      v69 = 0;
      *(_BYTE *)(v71 + 4 * v46 + 16) = v47;
      *(_DWORD *)(v48 + 4 * v46) = 536870913;
      v49 = DXGGLOBAL::GetGlobal();
      v50 = *((_DWORD *)PrimaryDisplaySource + 4);
      v51 = (struct DXGGLOBAL *)((char *)v49 + 1384);
      v52 = *((_QWORD *)PrimaryDisplaySource + 1);
      v67 = v51;
      HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                  v51,
                                  (const struct _LUID *)(*(_QWORD *)(v52 + 16) + 412LL),
                                  v50,
                                  &v69);
      if ( HashForAdapterAndSource < 0 )
      {
        v62 = HashForAdapterAndSource;
        WdLogSingleEntry4(
          2LL,
          *((unsigned int *)PrimaryDisplaySource + 4),
          *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 416LL),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL),
          HashForAdapterAndSource);
        v63 = *((_QWORD *)PrimaryDisplaySource + 1);
        WdLogGlobalForLineNumber = 1487;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to find hash for VidPn source (0x%I64x) on adapter (0x%I64x%08I64x), status 0x%lx",
          *((unsigned int *)PrimaryDisplaySource + 4),
          *(int *)(*(_QWORD *)(v63 + 16) + 416LL),
          *(unsigned int *)(*(_QWORD *)(v63 + 16) + 412LL),
          v62,
          0LL);
        v59 = v71;
        v57 = v74;
        *(_QWORD *)(v71 + 4 * v74 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL);
        v58 = v65;
      }
      else
      {
        v54 = (struct _KTHREAD **)v67;
        *(_QWORD *)(v71 + 4 * v46 + 8) = v15;
        HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v54);
        HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask((struct _KTHREAD **)v67);
        v57 = v74;
        v58 = (v69 << HashBitShift) + (v65 & ~HashBitMask);
        v59 = v71;
      }
      v7 = v66;
      *(_DWORD *)(v59 + 4 * v57 + 4) = v58;
LABEL_45:
      v66 = ++v7;
LABEL_46:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
      goto LABEL_12;
    }
    if ( v73 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2073;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v72);
    WdLogSingleEntry4(
      4LL,
      v65,
      *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 416LL),
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL),
      0LL);
    WdLogGlobalForLineNumber = 1455;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
    v7 = v66;
LABEL_12:
    v18 = (SESSION_VIEW *)*((_QWORD *)PrimaryDisplaySource + 7);
    PrimaryDisplaySource = 0LL;
    if ( v18 != (SESSION_VIEW *)((char *)v76 + 48) )
      PrimaryDisplaySource = (SESSION_VIEW *)((char *)v18 - 56);
    if ( !PrimaryDisplaySource )
    {
      v19 = *v75 < v7;
      *v75 = v7;
      return v19 ? 0x80000005 : 0;
    }
    v14 = v70;
  }
  v22 = -1073741811;
  WdLogSingleEntry4(
    2LL,
    *((unsigned int *)PrimaryDisplaySource + 4),
    *(int *)(*(_QWORD *)(v32 + 16) + 416LL),
    *(unsigned int *)(*(_QWORD *)(v32 + 16) + 412LL),
    -1073741811LL);
  v64 = *((_QWORD *)PrimaryDisplaySource + 1);
  WdLogGlobalForLineNumber = 1426;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Cannot find the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.",
    *((unsigned int *)PrimaryDisplaySource + 4),
    *(int *)(*(_QWORD *)(v64 + 16) + 416LL),
    *(unsigned int *)(*(_QWORD *)(v64 + 16) + 412LL),
    -1073741811LL,
    0LL);
LABEL_39:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
  return (unsigned int)v22;
}
