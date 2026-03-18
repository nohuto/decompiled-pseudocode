/*
 * XREFs of ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x140297470
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x140296DA0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x140035D18 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003E6D0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14006B408 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402915D8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1402AAE40 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_DXGKARG_SETPOINTERPOSITION@@P8OUTPUTDUPL_MGR@@EAAX2@Z@Z @ 0x1402D295C (-RunForAdapter@-$OutputDuplThunks@PEBU_DXGKARG_SETPOINTERPOSITION@@@@SAJPEAVDXGADAPTER@@_NIPEBU_.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402E0FA8 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x140338FB0 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x14039E694 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1403A190C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall SetPointerPositionForDisplaySource(
        struct DISPLAY_SOURCE *this,
        struct SESSION_VIEW *a2,
        const struct _DXGKARG_SETPOINTERPOSITION *a3,
        int a4,
        int a5)
{
  struct DISPLAY_SOURCE *v5; // rdi
  __int64 v6; // rax
  __int64 v9; // rsi
  int v10; // r8d
  unsigned int CurrentOrientation; // r13d
  DXGADAPTER *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // r15d
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  INT Y; // r15d
  INT X; // ebx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rax
  const wchar_t *v29; // r9
  __int64 Height; // rcx
  __int64 Width; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // r8d
  __int64 v37; // r15
  __int64 v38; // r8
  __int64 v39; // rbx
  bool v40; // cl
  bool v41; // al
  __int64 v42; // rbx
  bool v43; // bl
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r9
  unsigned int v49; // r8d
  int v50; // r11d
  int v51; // r9d
  int v52; // ecx
  __int128 v53; // xmm0
  int v54; // ebx
  int v55; // r10d
  int v56; // edx
  int v57; // ebx
  int v58; // r12d
  int v59; // eax
  const struct _DXGKARG_SETPOINTERPOSITION *v60; // rcx
  int v61; // r9d
  int v62; // eax
  int v63; // eax
  int v64; // r10d
  INT v65; // eax
  int v66; // edx
  INT v67; // r8d
  INT v68; // edx
  int v69; // edx
  int v70; // r9d
  int v71; // r8d
  int v72; // ecx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v74; // rbx
  const void *pPixels; // r9
  int v76; // eax
  __int64 v77; // rbx
  int v78; // eax
  __int64 v79; // rbx
  _QWORD *v80; // rax
  __int64 v81; // rcx
  struct SESSION_VIEW *v82; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 Timeouta; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutb; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutc; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutd; // [rsp+20h] [rbp-E0h]
  int v88[2]; // [rsp+28h] [rbp-D8h]
  __int64 v89; // [rsp+28h] [rbp-D8h]
  __int64 v90; // [rsp+28h] [rbp-D8h]
  __int64 v91; // [rsp+28h] [rbp-D8h]
  __int64 v92; // [rsp+28h] [rbp-D8h]
  int v93[2]; // [rsp+30h] [rbp-D0h]
  __int64 v94; // [rsp+30h] [rbp-D0h]
  __int64 v95; // [rsp+30h] [rbp-D0h]
  __int64 v96; // [rsp+30h] [rbp-D0h]
  __int64 v97; // [rsp+38h] [rbp-C8h]
  bool v98; // [rsp+50h] [rbp-B0h]
  int v99; // [rsp+54h] [rbp-ACh]
  INT v101; // [rsp+58h] [rbp-A8h]
  __int64 v102; // [rsp+60h] [rbp-A0h] BYREF
  char v103; // [rsp+68h] [rbp-98h]
  unsigned int v104; // [rsp+70h] [rbp-90h]
  int v105; // [rsp+74h] [rbp-8Ch]
  int v106; // [rsp+78h] [rbp-88h]
  int v107; // [rsp+7Ch] [rbp-84h]
  INT v108; // [rsp+80h] [rbp-80h]
  const struct _DXGKARG_SETPOINTERPOSITION *v109; // [rsp+88h] [rbp-78h]
  struct SESSION_VIEW *v110; // [rsp+90h] [rbp-70h]
  __int128 v111; // [rsp+98h] [rbp-68h]
  __int128 v112; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-48h]
  _QWORD v114[3]; // [rsp+C0h] [rbp-40h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v115; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v116[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v117[16]; // [rsp+F8h] [rbp-8h] BYREF
  DXGADAPTER *v118; // [rsp+108h] [rbp+8h]
  _BYTE v119[16]; // [rsp+138h] [rbp+38h] BYREF
  DXGADAPTER *v120; // [rsp+148h] [rbp+48h]
  char v121; // [rsp+150h] [rbp+50h]
  __int64 v122; // [rsp+158h] [rbp+58h]

  v113 = 0LL;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 1);
  v109 = a3;
  v110 = a2;
  v112 = 0LL;
  v9 = *(_QWORD *)(v6 + 16);
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1795;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1795LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v9 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1796;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      1796LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v115 = *a3;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v116, (struct DXGADAPTER *const)v9, 0LL);
  CurrentOrientation = v10 + 4;
  if ( v121 )
  {
    WdLogSingleEntry5(0LL, 275LL, CurrentOrientation, v119, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  v12 = v120;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v120 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v120 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventBlockThread, v14, 72);
      KeWaitForSingleObject((char *)v120 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v120, 0LL);
    v12 = v120;
  }
  v122 = 0LL;
  v121 = 1;
  if ( *((_DWORD *)v12 + 50) != 1 )
    goto LABEL_18;
  if ( v118 != v120 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v117, 0LL);
    if ( *((_DWORD *)v118 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v117);
LABEL_18:
      COREACCESS::Release((COREACCESS *)v119);
      WdLogSingleEntry3(2LL, *(int *)(v9 + 416), *(unsigned int *)(v9 + 412), -1073741130LL);
      v89 = *(unsigned int *)(v9 + 412);
      Timeouta = *(int *)(v9 + 416);
      WdLogGlobalForLineNumber = 1809;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get CoreAdapterAccess lock on adapter 0x%I64x%08I64x, returning 0x%I64x.",
        Timeouta,
        v89,
        -1073741130LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
      return 0LL;
    }
  }
  v116[1] = 1;
  v16 = *(_QWORD *)(v9 + 3120);
  v17 = v16 == -480;
  v18 = v16 + 480;
  v19 = 0;
  v102 = v18;
  v103 = 0;
  if ( v17 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v18 = v102;
  }
  if ( *(struct _KTHREAD **)(v18 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  v20 = v102;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v20 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v20 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 519;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 519LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v20 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v23 = *(_DWORD *)(v20 + 36);
        if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventBlockThread, v22, v23);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 16));
      ExAcquirePushLockExclusiveEx(v20 + 8, 0LL);
    }
    if ( *(_QWORD *)(v20 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 545;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 545LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v20 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 546;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 546LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v20 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v20 + 32) = 1;
  }
  v103 = 1;
  if ( a4 && (a3->Flags.Value & 1) != 0 )
  {
    Y = a3->Y;
    X = a3->X;
    if ( *((_DWORD *)this + 949) == -1 && *((_DWORD *)this + 950) == -1
      || !(unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline()
      && ((v26 = X + *((_DWORD *)this + 949), v26 < 0)
       || v26 >= *((_DWORD *)this + 248)
       || (v27 = Y + *((_DWORD *)this + 950), v27 < 0)
       || v27 >= *((_DWORD *)this + 249)) )
    {
      WdLogSingleEntry3(2LL, *(int *)(v9 + 416), *(unsigned int *)(v9 + 412), *((unsigned int *)this + 4));
      v28 = *((unsigned int *)this + 4);
      v29 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkSetPointerPosition() function: Adapter LUID: (0x%I64x%08I64"
             "x) VidpnSourceId: (0x%I64x).";
      Height = *(unsigned int *)(v9 + 412);
      Width = *(int *)(v9 + 416);
      WdLogGlobalForLineNumber = 1828;
LABEL_132:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v29, Width, Height, v28, 0LL, 0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v102);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
      return 3221225485LL;
    }
    v19 = 0;
  }
  if ( (*(_DWORD *)(v9 + 444) & 0x100) == 0 && (**(_DWORD **)(v9 + 3008) & 8) != 0 )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v102);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
    return 0LL;
  }
  v115.VidPnSourceId = *((_DWORD *)this + 4);
  if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v9 + 3120), v115.VidPnSourceId) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v97) = v115.Flags.0;
      v93[0] = v115.Y;
      v88[0] = v115.X;
      LODWORD(Timeout) = v115.VidPnSourceId;
      McTemplateK0pqtqq_EtwWriteTransfer(
        v33,
        (const EVENT_DESCRIPTOR *)"m",
        v34,
        v9,
        Timeout,
        *(_QWORD *)v88,
        *(_QWORD *)v93,
        v97);
    }
    v36 = *((_DWORD *)this + 268);
    if ( v36 == -1 )
      goto LABEL_59;
    v37 = *(_QWORD *)(v9 + 3120);
    if ( !v37 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10286;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"The selected adapter is render-only",
        10286LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_59:
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)this + 4),
        *(int *)(v9 + 416),
        *(unsigned int *)(v9 + 412),
        -1073741811LL);
      v94 = *(unsigned int *)(v9 + 412);
      v90 = *(int *)(v9 + 416);
      Timeoutb = *((unsigned int *)this + 4);
      WdLogGlobalForLineNumber = 1870;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
        Timeoutb,
        v90,
        v94,
        -1073741811LL,
        0LL);
      goto LABEL_60;
    }
    MONITOR_MGR::AcquireMonitorShared(v114, v9, v36, 1u);
    v39 = v114[0];
    if ( v114[0] )
    {
      if ( *(_DWORD *)(v114[0] + 280LL) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5270;
      }
      v43 = *(_DWORD *)(*(_QWORD *)(v39 + 240) + 16LL) || (*(_BYTE *)(v39 + 176) & 0x40) != 0;
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v114);
      if ( v43 )
      {
        v40 = 1;
        v41 = 1;
LABEL_65:
        v98 = v40;
        if ( v40 && v41 || (*(_BYTE *)&v115.Flags.0 & 1) == 0 || a5 )
        {
LABEL_60:
          v19 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v9 + 3120), &v115, v38);
          if ( v19 < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1980;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 1980LL, 0LL, 0LL, 0LL, 0LL);
          }
          goto LABEL_134;
        }
        v42 = *((_QWORD *)this + 1);
        if ( !v40 )
        {
          CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                 *((_QWORD *)this + 1),
                                 *((unsigned int *)this + 4),
                                 0LL);
          goto LABEL_86;
        }
        if ( !*(_BYTE *)(v42 + 289) )
        {
          v44 = 4024LL * *((unsigned int *)this + 4);
          v45 = *(_QWORD *)(v42 + 128);
          if ( *(_DWORD *)(v44 + v45 + 1020) != 1 )
          {
            switch ( *(_DWORD *)(v44 + v45 + 1020) )
            {
              case 2:
                CurrentOrientation = 2;
                break;
              case 3:
                CurrentOrientation = 3;
                break;
              case 4:
                break;
              default:
                WdLogSingleEntry2(2LL, *(int *)(v44 + v45 + 1020), *(_QWORD *)(v42 + 16));
                v46 = *(_QWORD *)(v42 + 128);
                WdLogGlobalForLineNumber = 8519;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
                  *(int *)(v46 + v44 + 1020),
                  *(_QWORD *)(v42 + 16),
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_85;
            }
LABEL_86:
            v47 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v47 + 184)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v47 + 168)) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5543;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"m_DisplayCore->IsCoreResourceSharedOwner()",
                5543LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v48 = *((_QWORD *)this + 106);
            if ( !v48
              || (v49 = *((_DWORD *)this + 207), v49 > *(_DWORD *)(v9 + 2424))
              || (v104 = *((_DWORD *)this + 208), v104 > *(_DWORD *)(v9 + 2428)) )
            {
              WdLogSingleEntry3(2LL, *((unsigned int *)this + 207), *((unsigned int *)this + 208), v48);
              Height = *((unsigned int *)this + 208);
              v29 = L"GetSavedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.";
              Width = *((unsigned int *)this + 207);
              v28 = *((_QWORD *)this + 106);
              WdLogGlobalForLineNumber = 1903;
              goto LABEL_132;
            }
            v50 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
            v51 = *((_DWORD *)v110 + 8) - *((_DWORD *)v110 + 6);
            v52 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
            v53 = *((_OWORD *)this + 43);
            v54 = *((_DWORD *)this + 178);
            v55 = *((_DWORD *)v110 + 9) - *((_DWORD *)v110 + 7);
            v56 = *((_DWORD *)this + 177);
            v101 = v54;
            v108 = v56;
            v111 = v53;
            v105 = v50;
            v99 = v52;
            if ( *((_BYTE *)this + 704) )
            {
              v52 = v54;
              v99 = v54;
              v57 = 0;
              v105 = v56;
              v50 = v56;
              v58 = 0;
            }
            else
            {
              v57 = DWORD1(v111);
              v58 = v111;
              v101 = HIDWORD(v111);
              v108 = DWORD2(v111);
            }
            if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
            {
              v59 = v52;
              v60 = v109;
              v61 = v109->X * v59 / v51;
              v62 = v50;
            }
            else
            {
              v61 = v109->X * v50 / v51;
              v62 = v52;
              v60 = v109;
            }
            v63 = v60->Y * v62;
            v106 = v61;
            v64 = v63 / v55;
            v107 = v64;
            if ( v98 )
            {
              v115.X = v61 + v58;
              v65 = v64 + v57;
              goto LABEL_118;
            }
            switch ( CurrentOrientation )
            {
              case 1u:
                goto LABEL_109;
              case 2u:
                v68 = v64 + v58;
                v71 = v57 - v104 - v61;
                v70 = v99;
                v67 = v99 + v71;
                goto LABEL_113;
              case 3u:
                v69 = v58 - v49 - v61;
                v70 = v99;
                v68 = v50 + v69;
                v67 = v99 + v57 - v104 - v64;
                goto LABEL_113;
            }
            if ( CurrentOrientation != 4 )
            {
LABEL_109:
              if ( CurrentOrientation != 1 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 688;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"Orientation == D3DKMDT_VPPR_IDENTITY",
                  688LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v50 = v105;
              }
              v68 = v58 + v106;
              v67 = v57 + v107;
            }
            else
            {
              v66 = v58 - v49;
              v67 = v61 + v57;
              v68 = v50 + v66 - v64;
            }
            v70 = v99;
LABEL_113:
            v72 = v68 + *((_DWORD *)this + 207);
            v115.Y = v67;
            v115.X = v68;
            if ( v72 >= v58 && v68 <= v108 && v67 + *((_DWORD *)this + 208) >= v57 && v67 <= v101 )
            {
LABEL_119:
              FillClipParams(
                (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
                this,
                &v115,
                (struct CURSOR_CLIP_PARAMS *)&v112);
              if ( HIDWORD(v113) )
              {
                ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 0);
                v74 = ClippedCursor;
                pPixels = ClippedCursor->pPixels;
                if ( !pPixels
                  || ClippedCursor->Width > *(_DWORD *)(v9 + 2424)
                  || ClippedCursor->Height > *(_DWORD *)(v9 + 2428) )
                {
                  WdLogSingleEntry3(2LL, ClippedCursor->Width, ClippedCursor->Height, pPixels);
                  Height = v74->Height;
                  v29 = L"GetClippedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.";
                  Width = v74->Width;
                  v28 = (__int64)v74->pPixels;
                  WdLogGlobalForLineNumber = 1933;
                  goto LABEL_132;
                }
                ClipCurrentCursor(
                  (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
                  ClippedCursor,
                  (struct CURSOR_CLIP_PARAMS *)&v112);
                v74->VidPnSourceId = *((_DWORD *)this + 4);
                v76 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v9 + 3120), v74);
                if ( v76 < 0 )
                {
                  v77 = v76;
                  WdLogSingleEntry4(
                    2LL,
                    *((unsigned int *)this + 4),
                    *(int *)(v9 + 416),
                    *(unsigned int *)(v9 + 412),
                    v76);
                  v95 = *(unsigned int *)(v9 + 412);
                  v91 = *(int *)(v9 + 416);
                  Timeoutc = *((unsigned int *)this + 4);
                  WdLogGlobalForLineNumber = 1949;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"DdiSetPointerShape failed while setting clipped shape on VidPn Source 0x%I64x adapter 0x%I64x%08I64x"
                     ", returning 0x%I64x.",
                    Timeoutc,
                    v91,
                    v95,
                    v77,
                    0LL);
                }
                *((_BYTE *)this + 767) = 1;
              }
              else if ( *((_BYTE *)this + 767) )
              {
                v78 = ADAPTER_DISPLAY::DdiSetPointerShape(
                        *(ADAPTER_DISPLAY **)(v9 + 3120),
                        (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824));
                if ( v78 < 0 )
                {
                  v79 = v78;
                  WdLogSingleEntry4(
                    2LL,
                    *((unsigned int *)this + 4),
                    *(int *)(v9 + 416),
                    *(unsigned int *)(v9 + 412),
                    v78);
                  v96 = *(unsigned int *)(v9 + 412);
                  v92 = *(int *)(v9 + 416);
                  Timeoutd = *((unsigned int *)this + 4);
                  WdLogGlobalForLineNumber = 1967;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"DdiSetPointerShape failed while setting last saved cursor shape on VidPn Source 0x%I64x adapter 0x%I"
                     "64x%08I64x, returning 0x%I64x.",
                    Timeoutd,
                    v92,
                    v96,
                    v79,
                    0LL);
                }
                *((_BYTE *)this + 767) = 0;
              }
              goto LABEL_60;
            }
            v115.X = v58 + v50 / 2;
            v65 = v57 + v70 / 2;
LABEL_118:
            v115.Y = v65;
            goto LABEL_119;
          }
        }
LABEL_85:
        CurrentOrientation = 1;
        goto LABEL_86;
      }
    }
    else
    {
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v114);
    }
    v40 = *(_BYTE *)(v37 + 289) == 0;
    v41 = *(_BYTE *)(v37 + 290) == 0;
    goto LABEL_65;
  }
  v80 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
  v80[3] = -1073741823LL;
  v80[4] = v115.VidPnSourceId;
  v81 = *(_BYTE *)&v115.Flags.0 & 1;
  v80[6] = v9;
  v80[5] = v81;
  WdLogGlobalForLineNumber = 1985;
LABEL_134:
  ADAPTER_DISPLAY::SavePointerInfo(
    *(ADAPTER_DISPLAY **)(v9 + 3120),
    v115.VidPnSourceId,
    *(_BYTE *)&v115.Flags.0 & 1,
    v115.X,
    v115.Y,
    v109->X,
    v109->Y);
  v82 = (struct SESSION_VIEW *)*((_QWORD *)v110 + 6);
  if ( v82 != (struct SESSION_VIEW *)((char *)v110 + 48) )
    v5 = (struct SESSION_VIEW *)((char *)v82 - 56);
  if ( this == v5 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v102);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v116);
    OutputDuplThunks<_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter((struct DXGADAPTER *)v9);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v102);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
  return (unsigned int)v19;
}
