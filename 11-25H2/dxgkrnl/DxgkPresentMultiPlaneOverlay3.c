/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1402B0A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x140019488 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14001D750 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x14003729C (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1401883A4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1402B0488 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402B0520 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1402B2760 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rdi
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r13
  unsigned int *p_PresentPlaneCount; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  unsigned __int8 *v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  struct DXGCONTEXT *v19; // rsi
  __int64 v20; // rdi
  struct _KEVENT *v21; // rdx
  struct _KEVENT *v22; // rbx
  unsigned int v23; // ebx
  _QWORD *Pool2; // rcx
  unsigned int i; // ebx
  __int64 v26; // r9
  volatile signed __int64 *v27; // rax
  volatile signed __int64 *v28; // rbx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  DXGADAPTER *v32; // rcx
  int v33; // eax
  DXGDEVICE **v34; // rbx
  const struct DXGDEVICE *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  int v38; // esi
  __int64 v39; // r9
  UINT v40; // r8d
  __int64 v41; // rcx
  char *v42; // rcx
  PVOID v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  struct DXGPROCESS *v46; // rdi
  struct DXGPROCESS *v47; // rax
  __int64 v48; // rdi
  PLIST_ENTRY j; // rbx
  unsigned int v50; // r14d
  struct tagRECT **v51; // rdi
  void **v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  DXGADAPTER *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  const wchar_t *v65; // r9
  unsigned int v66; // ebx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v76; // rax
  struct _ETHREAD *v77; // rbx
  KSPIN_LOCK *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  unsigned int v87; // ebx
  __int64 v88; // rax
  unsigned int v89; // eax
  __int64 v90; // r8
  int v91; // ecx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rax
  PVOID v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rcx
  struct tagRECT ***v101; // [rsp+28h] [rbp-2E0h]
  int v102; // [rsp+60h] [rbp-2A8h] BYREF
  int v103; // [rsp+68h] [rbp-2A0h] BYREF
  __int64 v104; // [rsp+70h] [rbp-298h]
  _DWORD *v105; // [rsp+78h] [rbp-290h]
  int *v106; // [rsp+80h] [rbp-288h]
  PVOID P; // [rsp+88h] [rbp-280h]
  _BYTE v108[32]; // [rsp+90h] [rbp-278h] BYREF
  unsigned int v109; // [rsp+B0h] [rbp-258h]
  DXGCONTEXT *v110; // [rsp+B8h] [rbp-250h] BYREF
  char v111; // [rsp+C0h] [rbp-248h]
  __int64 v112; // [rsp+C8h] [rbp-240h] BYREF
  __int64 v113; // [rsp+D0h] [rbp-238h] BYREF
  int v114; // [rsp+D8h] [rbp-230h]
  struct DXGCONTEXT *v115; // [rsp+E0h] [rbp-228h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v116[2]; // [rsp+F0h] [rbp-218h] BYREF
  struct tagRECT **v117[2]; // [rsp+100h] [rbp-208h] BYREF
  unsigned int *v118[2]; // [rsp+110h] [rbp-1F8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v119[2]; // [rsp+120h] [rbp-1E8h] BYREF
  unsigned int v120; // [rsp+130h] [rbp-1D8h]
  _BYTE v121[80]; // [rsp+140h] [rbp-1C8h] BYREF
  unsigned __int8 *v122; // [rsp+190h] [rbp-178h] BYREF
  __int64 v123; // [rsp+198h] [rbp-170h] BYREF
  DXGADAPTER *v124; // [rsp+1A0h] [rbp-168h]
  char v125; // [rsp+1A8h] [rbp-160h]
  unsigned int v126; // [rsp+1B0h] [rbp-158h]
  __int128 v127; // [rsp+1C0h] [rbp-148h] BYREF
  _QWORD v128[6]; // [rsp+1D0h] [rbp-138h] BYREF
  char v129; // [rsp+200h] [rbp-108h]
  __int64 v130; // [rsp+208h] [rbp-100h]
  _BYTE v131[32]; // [rsp+210h] [rbp-F8h] BYREF
  _BYTE v132[8]; // [rsp+230h] [rbp-D8h] BYREF
  _BYTE v133[16]; // [rsp+238h] [rbp-D0h] BYREF
  DXGADAPTER *v134; // [rsp+248h] [rbp-C0h]
  char v135; // [rsp+250h] [rbp-B8h]
  __int64 v136; // [rsp+258h] [rbp-B0h]
  _BYTE v137[16]; // [rsp+278h] [rbp-90h] BYREF
  DXGADAPTER *v138; // [rsp+288h] [rbp-80h]
  char v139; // [rsp+290h] [rbp-78h]
  __int64 v140; // [rsp+298h] [rbp-70h]
  __int64 v141; // [rsp+2B8h] [rbp-50h]
  char v142; // [rsp+2C0h] [rbp-48h]

  v102 = -1073741811;
  memset(v121, 0, sizeof(v121));
  v104 = 0LL;
  v103 = 2164;
  v105 = v121;
  v106 = &v102;
  if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2164);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v103, 2164);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v8 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
      goto LABEL_4;
  }
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v9 )
      goto LABEL_4;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v9 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
      v9 = v7;
    }
  }
  if ( !a1 )
  {
    v102 = -1073741811;
    v84 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v102, v84);
    WdLogGlobalForLineNumber = 2759;
    v86 = PsGetCurrentProcess(v85);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      v102,
      v86,
      0LL,
      0LL,
      0LL);
    v66 = v102;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    if ( (qword_14015B4C0 & 2) == 0 )
      return v66;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      goto LABEL_129;
    goto LABEL_157;
  }
  p_PresentPlaneCount = &a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (unsigned int *)MmUserProbeAddress;
  v126 = *p_PresentPlaneCount;
  *(_OWORD *)v116 = 0LL;
  *(_OWORD *)v117 = 0LL;
  *(_OWORD *)v118 = 0LL;
  *(_OWORD *)v119 = 0LL;
  v120 = v126;
  v102 = CapturePresentMultiPlaneOverlayArgs3(
           a1,
           (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v121,
           v116,
           (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v116[1],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v117,
           &v117[1],
           v118,
           &v118[1],
           (unsigned __int8 **)v119,
           &v119[1]);
  if ( v102 < 0 )
  {
    v61 = PsGetCurrentProcess(v11);
    WdLogSingleEntry2(2LL, v102, v61);
    WdLogGlobalForLineNumber = 2839;
    v63 = PsGetCurrentProcess(v62);
    v64 = v102;
    v65 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_86:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v65, v64, v63, 0LL, 0LL, 0LL);
LABEL_87:
    v66 = v102;
    goto LABEL_88;
  }
  v12 = *(_DWORD *)&v121[28];
  if ( !*(_DWORD *)&v121[28] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2843;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Present.PresentPlaneCount > 0", 2843LL, 0LL, 0LL, 0LL, 0LL);
    v12 = *(_DWORD *)&v121[28];
  }
  if ( v12 > 0xA )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2844;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Present.PresentPlaneCount <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      2844LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = *(_DWORD *)&v121[4];
  if ( !*(_DWORD *)&v121[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2845;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Present.ContextCount > 0", 2845LL, 0LL, 0LL, 0LL, 0LL);
    v13 = *(_DWORD *)&v121[4];
  }
  if ( v13 > 0x40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2846;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Present.ContextCount <= D3DDDI_MAX_BROADCAST_CONTEXT",
      2846LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)&v121[16] >= 0x10u )
  {
    v102 = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)&v121[16], -1073741811LL);
    WdLogGlobalForLineNumber = 2854;
    v63 = v102;
    v64 = *(unsigned int *)&v121[16];
    v65 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay2, returning 0x%I64x";
    goto LABEL_86;
  }
  v14 = *(_DWORD *)&v121[52];
  v15 = *(unsigned __int8 **)&v121[64];
  if ( !*(_DWORD *)&v121[52] && !*(_QWORD *)&v121[64] )
  {
    v112 = 0LL;
    v122 = 0LL;
    if ( !(unsigned int)AllocateAndPopulateHDRMetadataFromDisplay(
                          (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v121,
                          &v122,
                          (enum _D3DDDI_HDR_METADATA_TYPE *)&v112,
                          (unsigned int *)&v112 + 1) )
    {
      v15 = v122;
      *(_QWORD *)&v121[64] = v122;
      v14 = v112;
      *(_QWORD *)&v121[52] = v112;
      v16 = HIDWORD(v112);
      *(_DWORD *)&v121[24] |= 0x80u;
      goto LABEL_22;
    }
    v15 = *(unsigned __int8 **)&v121[64];
    v14 = *(_DWORD *)&v121[52];
  }
  v16 = *(_DWORD *)&v121[56];
LABEL_22:
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      if ( v16 && v16 != 28 )
      {
        v102 = -1073741811;
        WdLogSingleEntry2(2LL, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 2894;
      }
      else
      {
        if ( v15 )
        {
          if ( v16 )
            goto LABEL_25;
        }
        else if ( !v16 )
        {
          goto LABEL_25;
        }
        v102 = -1073741811;
        WdLogSingleEntry2(2LL, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 2904;
      }
      v63 = v102;
      v64 = *(unsigned int *)&v121[56];
      v65 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10, returning 0x%I64x";
    }
    else if ( v14 == 2 )
    {
      if ( !v16 || v16 == 72 )
      {
        if ( v15 )
        {
          if ( v16 )
            goto LABEL_25;
        }
        else if ( !v16 )
        {
          goto LABEL_25;
        }
        v102 = -1073741811;
        WdLogSingleEntry2(2LL, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 2926;
      }
      else
      {
        v102 = -1073741811;
        WdLogSingleEntry2(2LL, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 2916;
      }
      v63 = v102;
      v64 = *(unsigned int *)&v121[56];
      v65 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10PLUS, returning 0x%I64x";
    }
    else
    {
      v102 = -1073741811;
      WdLogSingleEntry2(2LL, v14, -1073741811LL);
      WdLogGlobalForLineNumber = 2935;
      v63 = v102;
      v64 = *(int *)&v121[52];
      v65 = L"Invalid HDR metadata type 0x%I64x specified, returning 0x%I64x";
    }
    goto LABEL_86;
  }
  if ( v16 || v15 )
  {
    v102 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2882;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Non-NULL HDR metadata specified with D3DDDI_HDR_METADATA_TYPE_NONE, returning 0x%I64x",
      v102,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_87;
  }
LABEL_25:
  v115 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v110, **(_DWORD **)&v121[8], v9, &v115, 0, 1);
  v19 = v115;
  if ( !v115 )
  {
    v102 = -1073741811;
    v87 = **(_DWORD **)&v121[8];
    v88 = PsGetCurrentProcess(v17);
    WdLogSingleEntry3(3LL, v102, v88, v87);
    WdLogGlobalForLineNumber = 2948;
    v66 = v102;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v110);
LABEL_88:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v116);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    if ( (qword_14015B4C0 & 2) == 0 )
      return v66;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
    {
LABEL_129:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v68, (__int64)&EventProfilerExit, v69, v103);
      return v66;
    }
LABEL_157:
    McTemplateK0qqqqdqqq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v67,
      v69,
      0,
      v105[4],
      v105[5],
      1,
      v105[6],
      v105[7],
      v105[12],
      *v106);
    goto LABEL_129;
  }
  v20 = *((_QWORD *)v115 + 2);
  v21 = *(struct _KEVENT **)(v20 + 16);
  if ( ((__int64)v21->Header.WaitListHead.Blink[186].Flink & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, (unsigned int)**(_DWORD **)&v121[8]);
    WdLogGlobalForLineNumber = 2954;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter context 0x%I64x",
      (unsigned int)**(_DWORD **)&v121[8],
      0LL,
      0LL,
      0LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v110);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v116);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    if ( (qword_14015B4C0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        goto LABEL_175;
      goto LABEL_149;
    }
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v115 + 98) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2960;
    goto LABEL_173;
  }
  v113 = *((_QWORD *)v115 + 2);
  v114 = 0;
  if ( v20 )
  {
    if ( *(_DWORD *)(v20 + 464) == 2 )
    {
      v22 = v21 + 5;
      if ( KeReadStateEvent(v21 + 5) )
        goto LABEL_31;
    }
    else
    {
      v22 = v21 + 4;
      if ( KeReadStateEvent(v21 + 4) )
      {
LABEL_31:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v82, (__int64)&EventBlockThread, v83, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
        }
        v114 = 1;
        goto LABEL_33;
      }
    }
    KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
    goto LABEL_31;
  }
LABEL_33:
  v23 = *(_DWORD *)&v121[4];
  Pool2 = 0LL;
  P = 0LL;
  v109 = 0;
  if ( *(_DWORD *)&v121[4] > 4u )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / *(unsigned int *)&v121[4] < 8 )
      goto LABEL_37;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * *(unsigned int *)&v121[4], 1265072196LL, v18);
    P = Pool2;
  }
  else
  {
    Pool2 = v108;
    P = v108;
    if ( *(_DWORD *)&v121[4] )
    {
      memset(v108, 0, 8LL * *(unsigned int *)&v121[4]);
      Pool2 = P;
    }
  }
  v109 = v23;
LABEL_37:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2970;
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v109 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v110);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v116);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    if ( (qword_14015B4C0 & 2) == 0 )
      return 3221225495LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v79,
        v81,
        0,
        v105[4],
        v105[5],
        1,
        v105[6],
        v105[7],
        v105[12],
        *v106);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225495LL;
    goto LABEL_154;
  }
  *Pool2 = v19;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v131, v9);
  for ( i = 1; ; ++i )
  {
    if ( i >= *(_DWORD *)&v121[4] )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v131);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v128,
        P,
        v109,
        v26,
        1);
      if ( !v129 )
      {
        v27 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 16LL);
        v124 = (DXGADAPTER *)v27;
        _InterlockedIncrement64(v27 + 3);
        v123 = -1LL;
        v28 = v27 + 17;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v28, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)v28 + 4);
        v125 = 1;
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v132, *((_QWORD *)v19 + 2), 1, v29, 0);
        if ( !v142 )
          goto LABEL_42;
        if ( v139 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v137, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7603;
        }
        v58 = v138;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v138 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v59, (__int64)&EventBlockThread, v60, 72);
            KeWaitForSingleObject((char *)v138 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v138, 0LL);
          v58 = v138;
        }
        v140 = 0LL;
        v139 = 1;
        if ( *((_DWORD *)v58 + 50) == 1 )
        {
LABEL_42:
          if ( v135 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v133, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7603;
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v134 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventBlockThread, v31, 72);
              KeWaitForSingleObject((char *)v134 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v134, 0LL);
          }
          v136 = 0LL;
          v135 = 1;
          v32 = (DXGADAPTER *)*(unsigned int *)(v141 + 608);
          if ( (_DWORD)v32 == 1 )
          {
            v33 = 0;
          }
          else
          {
            COREACCESS::Release((COREACCESS *)v133);
            if ( v142 )
              COREACCESS::Release((COREACCESS *)v137);
            v33 = -1073741130;
          }
        }
        else
        {
          v139 = 0;
          v32 = v138;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 23) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v138, 0LL);
          v140 = 0LL;
          v33 = -1073741130;
        }
        v102 = v33;
        if ( v33 < 0 )
        {
          v96 = PsGetCurrentProcess(v32);
          WdLogSingleEntry2(3LL, v102, v96);
          WdLogGlobalForLineNumber = 3045;
          v66 = v102;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v128);
          v97 = P;
          if ( P == v108 || !P )
            goto LABEL_211;
LABEL_210:
          ExFreePoolWithTag(v97, 0);
LABEL_211:
          P = 0LL;
          v109 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v110);
          goto LABEL_88;
        }
        v34 = (DXGDEVICE **)v115;
        v35 = (const struct DXGDEVICE *)*((_QWORD *)v115 + 2);
        v36 = *((_QWORD *)v35 + 235);
        if ( !v36 )
        {
          v102 = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 3053;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
            v102,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_213:
          v66 = v102;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v123);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v128);
          v97 = P;
          if ( P == v108 || !P )
            goto LABEL_211;
          goto LABEL_210;
        }
        if ( (*((_DWORD *)v9 + 102) & 4) == 0
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v36 + 3120), v35, *(unsigned int *)&v121[16]) )
        {
          v102 = -1073741790;
          v98 = PsGetCurrentProcess(v100);
          WdLogSingleEntry2(2LL, v102, v98);
          WdLogGlobalForLineNumber = 3068;
          v101 = (struct tagRECT ***)PsGetCurrentProcess(v99);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
            v102,
            (__int64)v101,
            0LL,
            0LL,
            0LL);
          goto LABEL_213;
        }
        v102 = DXGCONTEXT::PresentMultiPlaneOverlay3(
                 (DXGCONTEXT *)v34,
                 (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v121,
                 (struct COREDEVICEACCESS *)v132,
                 (struct DXGCONTEXT **)P);
        if ( v102 == -1071775482 )
          DXGDEVICE::CloseInternalCddPrimaryHandle(v34[2], (struct COREDEVICEACCESS *)v132);
        v37 = MEMORY[0xFFFFF78000000320];
        v130 = MEMORY[0xFFFFF78000000320];
        v38 = v102;
        v39 = v37 * KeQueryTimeIncrement();
        v40 = (a1->Flags.Value >> 9) & 2 | (*((_DWORD *)v9 + 102) >> 2) & 1;
        v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v115 + 2) + 1880LL) + 3120LL) + 128LL)
            + 3984LL * a1->VidPnSourceId;
        if ( v41 )
        {
          *(_QWORD *)&v127 = v39;
          *((_QWORD *)&v127 + 1) = __PAIR64__(v40, v38);
          DISPLAY_SOURCE::RecordPresentDiagHistory(v41, &v127);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
        v125 = 0;
        v42 = (char *)v124 + 136;
        _InterlockedDecrement((volatile signed __int32 *)v124 + 38);
        ExReleasePushLockSharedEx(v42, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference(v124);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v128);
        v43 = P;
        if ( P != v108 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v109 = 0;
        if ( v20 && v114 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v20 + 136));
          KeLeaveCriticalRegion();
          v114 = 0;
        }
        v44 = PsGetCurrentProcess(v43);
        v45 = PsGetProcessDxgProcess(v44);
        v46 = (struct DXGPROCESS *)v45;
        if ( !v45 || (*(_DWORD *)(v45 + 408) & 0x80) != 0 )
        {
          v76 = DXGTHREAD::GetCurrent();
          if ( v76 )
          {
            v47 = (struct DXGPROCESS *)*((_QWORD *)v76 + 3);
            if ( v47 )
              goto LABEL_63;
          }
          else
          {
            v77 = KeGetCurrentThread();
            v78 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
            v47 = DXGGLOBAL::SearchDxgThreadList(v78, v77);
            if ( v47 )
              goto LABEL_63;
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 2925;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed to find DXGPROCESS",
              2925LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        v47 = v46;
LABEL_63:
        v48 = *((_QWORD *)v47 + 8);
        for ( j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v48 + 104), (PKSPIN_LOCK)(v48 + 120));
              j;
              j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v48 + 104), (PKSPIN_LOCK)(v48 + 120)) )
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *))j[1].Flink)(j[1].Blink);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(j);
        }
        v50 = v102;
        if ( v110 && !v111 )
          DXGCONTEXT::ReleaseReference(v110);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v116[0]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v116[1]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v117[0]);
        v51 = v117[1];
        if ( v117[1] && v120 )
        {
          v52 = (void **)v117[1];
          v53 = v120;
          do
          {
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v52++);
            --v53;
          }
          while ( v53 );
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v51);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v118[0]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v118[1]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v119[0]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v119[1]);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
        if ( (qword_14015B4C0 & 2) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqqqdqqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v54,
              v56,
              0,
              v105[4],
              v105[5],
              1,
              v105[6],
              v105[7],
              v105[12],
              *v106);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v55, (__int64)&EventProfilerExit, v56, v103);
        }
        return v50;
      }
      if ( v128[0] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3026;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v128);
        if ( P != v108 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v109 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v110);
        DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v116);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
        if ( (qword_14015B4C0 & 2) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqqqdqqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v95,
              v72,
              0,
              v105[4],
              v105[5],
              1,
              v105[6],
              v105[7],
              v105[12],
              *v106);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            goto LABEL_150;
        }
        return 3221225485LL;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3021;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v128);
      if ( P != v108 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v109 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v110);
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v116);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
      if ( (qword_14015B4C0 & 2) == 0 )
        return 3221225495LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v94,
          v81,
          0,
          v105[4],
          v105[5],
          1,
          v105[6],
          v105[7],
          v105[12],
          *v106);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return 3221225495LL;
LABEL_154:
      McTemplateK0q_EtwWriteTransfer(v80, (__int64)&EventProfilerExit, v81, v103);
      return 3221225495LL;
    }
    v89 = (*(_DWORD *)(*(_QWORD *)&v121[8] + 4LL * i) >> 6) & 0xFFFFFF;
    if ( v89 < *((_DWORD *)v9 + 74) )
    {
      v90 = *((_QWORD *)v9 + 35) + 16LL * v89;
      if ( ((*(_DWORD *)(*(_QWORD *)&v121[8] + 4LL * i) >> 25) & 0x60) == (*(_BYTE *)(v90 + 8) & 0x60)
        && (*(_DWORD *)(v90 + 8) & 0x2000) == 0 )
      {
        v91 = *(_DWORD *)(v90 + 8) & 0x1F;
        if ( v91 )
        {
          if ( v91 == 7 )
          {
            v92 = *(_QWORD *)v90;
            goto LABEL_183;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v92 = 0LL;
LABEL_183:
    *((_QWORD *)P + i) = v92;
    v93 = *((_QWORD *)P + i);
    if ( !v93 || (*(_DWORD *)(v93 + 392) & 8) != 0 || *(_QWORD *)(v93 + 16) != *((_QWORD *)v19 + 2) )
      break;
  }
  WdLogSingleEntry4(2LL, v19, *(unsigned int *)(*(_QWORD *)&v121[8] + 4LL * i), i, -1073741811LL);
  WdLogGlobalForLineNumber = 3006;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v19,
    *(unsigned int *)(*(_QWORD *)&v121[8] + 4LL * i),
    i,
    -1073741811LL,
    0LL);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v131);
  if ( P != v108 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v109 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v113);
LABEL_173:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v110);
  DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v116);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
LABEL_175:
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v70,
        v72,
        0,
        v105[4],
        v105[5],
        1,
        v105[6],
        v105[7],
        v105[12],
        *v106);
LABEL_149:
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
LABEL_150:
      McTemplateK0q_EtwWriteTransfer(v71, (__int64)&EventProfilerExit, v72, v103);
  }
  return 3221225485LL;
}
