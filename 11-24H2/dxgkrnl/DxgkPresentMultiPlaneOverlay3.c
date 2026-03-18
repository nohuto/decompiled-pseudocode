/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1402BE310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x140009EA8 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14000E170 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x140036DB0 (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x14018A6B4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1402BDD28 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402BDDC0 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1402BFFE0 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402C0D9C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
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
  struct DXGCONTEXT *v18; // rsi
  __int64 v19; // rdi
  struct _KEVENT *v20; // rdx
  struct _KEVENT *v21; // rbx
  unsigned int v22; // ebx
  _QWORD *Pool2; // rcx
  unsigned int i; // ebx
  __int64 v25; // r9
  volatile signed __int64 *v26; // rax
  volatile signed __int64 *v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  DXGADAPTER *v31; // rcx
  int v32; // eax
  DXGDEVICE **v33; // rbx
  const struct DXGDEVICE *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // esi
  __int64 v38; // r9
  UINT v39; // r8d
  __int64 v40; // rcx
  char *v41; // rcx
  PVOID v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  struct DXGPROCESS *v45; // rdi
  struct DXGPROCESS *v46; // rax
  __int64 v47; // rdi
  PLIST_ENTRY j; // rbx
  unsigned int v49; // r14d
  struct tagRECT **v50; // rdi
  void **v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  DXGADAPTER *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  const wchar_t *v64; // r9
  unsigned int v65; // ebx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v75; // rax
  struct _ETHREAD *v76; // rbx
  KSPIN_LOCK *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned int v86; // ebx
  __int64 v87; // rax
  unsigned int v88; // eax
  __int64 v89; // r8
  int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rax
  PVOID v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  struct tagRECT ***v100; // [rsp+28h] [rbp-2E0h]
  int v101; // [rsp+60h] [rbp-2A8h] BYREF
  int v102; // [rsp+68h] [rbp-2A0h] BYREF
  __int64 v103; // [rsp+70h] [rbp-298h]
  _DWORD *v104; // [rsp+78h] [rbp-290h]
  int *v105; // [rsp+80h] [rbp-288h]
  PVOID P; // [rsp+88h] [rbp-280h]
  _BYTE v107[32]; // [rsp+90h] [rbp-278h] BYREF
  unsigned int v108; // [rsp+B0h] [rbp-258h]
  DXGCONTEXT *v109; // [rsp+B8h] [rbp-250h] BYREF
  char v110; // [rsp+C0h] [rbp-248h]
  __int64 v111; // [rsp+C8h] [rbp-240h] BYREF
  __int64 v112; // [rsp+D0h] [rbp-238h] BYREF
  int v113; // [rsp+D8h] [rbp-230h]
  struct DXGCONTEXT *v114; // [rsp+E0h] [rbp-228h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v115[2]; // [rsp+F0h] [rbp-218h] BYREF
  struct tagRECT **v116[2]; // [rsp+100h] [rbp-208h] BYREF
  unsigned int *v117[2]; // [rsp+110h] [rbp-1F8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v118[2]; // [rsp+120h] [rbp-1E8h] BYREF
  unsigned int v119; // [rsp+130h] [rbp-1D8h]
  _BYTE v120[80]; // [rsp+140h] [rbp-1C8h] BYREF
  unsigned __int8 *v121; // [rsp+190h] [rbp-178h] BYREF
  __int64 v122; // [rsp+198h] [rbp-170h] BYREF
  DXGADAPTER *v123; // [rsp+1A0h] [rbp-168h]
  char v124; // [rsp+1A8h] [rbp-160h]
  unsigned int v125; // [rsp+1B0h] [rbp-158h]
  __int128 v126; // [rsp+1C0h] [rbp-148h] BYREF
  _QWORD v127[6]; // [rsp+1D0h] [rbp-138h] BYREF
  char v128; // [rsp+200h] [rbp-108h]
  __int64 v129; // [rsp+208h] [rbp-100h]
  _BYTE v130[32]; // [rsp+210h] [rbp-F8h] BYREF
  _BYTE v131[8]; // [rsp+230h] [rbp-D8h] BYREF
  _BYTE v132[16]; // [rsp+238h] [rbp-D0h] BYREF
  DXGADAPTER *v133; // [rsp+248h] [rbp-C0h]
  char v134; // [rsp+250h] [rbp-B8h]
  __int64 v135; // [rsp+258h] [rbp-B0h]
  _BYTE v136[16]; // [rsp+278h] [rbp-90h] BYREF
  DXGADAPTER *v137; // [rsp+288h] [rbp-80h]
  char v138; // [rsp+290h] [rbp-78h]
  __int64 v139; // [rsp+298h] [rbp-70h]
  __int64 v140; // [rsp+2B8h] [rbp-50h]
  char v141; // [rsp+2C0h] [rbp-48h]

  v101 = -1073741811;
  memset(v120, 0, sizeof(v120));
  v103 = 0LL;
  v102 = 2164;
  v104 = v120;
  v105 = &v101;
  if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2164);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v102, 2164);
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
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
      v9 = v7;
    }
  }
  if ( !a1 )
  {
    v101 = -1073741811;
    v83 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v101, v83);
    WdLogGlobalForLineNumber = 2766;
    v85 = PsGetCurrentProcess(v84);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      v101,
      v85,
      0LL,
      0LL,
      0LL);
    v65 = v101;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
    if ( (qword_14015E4B0 & 2) == 0 )
      return v65;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      goto LABEL_129;
    goto LABEL_157;
  }
  p_PresentPlaneCount = &a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (unsigned int *)MmUserProbeAddress;
  v125 = *p_PresentPlaneCount;
  *(_OWORD *)v115 = 0LL;
  *(_OWORD *)v116 = 0LL;
  *(_OWORD *)v117 = 0LL;
  *(_OWORD *)v118 = 0LL;
  v119 = v125;
  v101 = CapturePresentMultiPlaneOverlayArgs3(
           a1,
           (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v120,
           v115,
           (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v115[1],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v116,
           &v116[1],
           v117,
           &v117[1],
           (unsigned __int8 **)v118,
           &v118[1]);
  if ( v101 < 0 )
  {
    v60 = PsGetCurrentProcess(v11);
    WdLogSingleEntry2(2LL, v101, v60);
    WdLogGlobalForLineNumber = 2846;
    v62 = PsGetCurrentProcess(v61);
    v63 = v101;
    v64 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_86:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v64, v63, v62, 0LL, 0LL, 0LL);
LABEL_87:
    v65 = v101;
    goto LABEL_88;
  }
  v12 = *(_DWORD *)&v120[28];
  if ( !*(_DWORD *)&v120[28] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2850;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Present.PresentPlaneCount > 0",
      2850LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v12 = *(_DWORD *)&v120[28];
  }
  if ( v12 > 0xA )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2851;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Present.PresentPlaneCount <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      2851LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = *(_DWORD *)&v120[4];
  if ( !*(_DWORD *)&v120[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2852;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"Present.ContextCount > 0", 2852LL, 0LL, 0LL, 0LL, 0LL);
    v13 = *(_DWORD *)&v120[4];
  }
  if ( v13 > 0x40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2853;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Present.ContextCount <= D3DDDI_MAX_BROADCAST_CONTEXT",
      2853LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)&v120[16] >= 0x10u )
  {
    v101 = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)&v120[16], -1073741811LL);
    WdLogGlobalForLineNumber = 2861;
    v62 = v101;
    v63 = *(unsigned int *)&v120[16];
    v64 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay2, returning 0x%I64x";
    goto LABEL_86;
  }
  v14 = *(_DWORD *)&v120[52];
  v15 = *(unsigned __int8 **)&v120[64];
  if ( !*(_DWORD *)&v120[52] && !*(_QWORD *)&v120[64] )
  {
    v111 = 0LL;
    v121 = 0LL;
    if ( !(unsigned int)AllocateAndPopulateHDRMetadataFromDisplay(
                          (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v120,
                          &v121,
                          (enum _D3DDDI_HDR_METADATA_TYPE *)&v111,
                          (unsigned int *)&v111 + 1) )
    {
      v15 = v121;
      *(_QWORD *)&v120[64] = v121;
      v14 = v111;
      *(_QWORD *)&v120[52] = v111;
      v16 = HIDWORD(v111);
      *(_DWORD *)&v120[24] |= 0x80u;
      goto LABEL_22;
    }
    v15 = *(unsigned __int8 **)&v120[64];
    v14 = *(_DWORD *)&v120[52];
  }
  v16 = *(_DWORD *)&v120[56];
LABEL_22:
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      if ( v16 && v16 != 28 )
      {
        v101 = -1073741811;
        WdLogSingleEntry2(2LL, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 2901;
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
        v101 = -1073741811;
        WdLogSingleEntry2(2LL, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 2911;
      }
      v62 = v101;
      v63 = *(unsigned int *)&v120[56];
      v64 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10, returning 0x%I64x";
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
        v101 = -1073741811;
        WdLogSingleEntry2(2LL, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 2933;
      }
      else
      {
        v101 = -1073741811;
        WdLogSingleEntry2(2LL, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 2923;
      }
      v62 = v101;
      v63 = *(unsigned int *)&v120[56];
      v64 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10PLUS, returning 0x%I64x";
    }
    else
    {
      v101 = -1073741811;
      WdLogSingleEntry2(2LL, v14, -1073741811LL);
      WdLogGlobalForLineNumber = 2942;
      v62 = v101;
      v63 = *(int *)&v120[52];
      v64 = L"Invalid HDR metadata type 0x%I64x specified, returning 0x%I64x";
    }
    goto LABEL_86;
  }
  if ( v16 || v15 )
  {
    v101 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2889;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Non-NULL HDR metadata specified with D3DDDI_HDR_METADATA_TYPE_NONE, returning 0x%I64x",
      v101,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_87;
  }
LABEL_25:
  v114 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v109,
    **(_DWORD **)&v120[8],
    (struct _KTHREAD **)v9,
    &v114,
    0,
    1);
  v18 = v114;
  if ( !v114 )
  {
    v101 = -1073741811;
    v86 = **(_DWORD **)&v120[8];
    v87 = PsGetCurrentProcess(v17);
    WdLogSingleEntry3(3LL, v101, v87, v86);
    WdLogGlobalForLineNumber = 2955;
    v65 = v101;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v109);
LABEL_88:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
    if ( (qword_14015E4B0 & 2) == 0 )
      return v65;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
    {
LABEL_129:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v67, (__int64)&EventProfilerExit, v68, v102);
      return v65;
    }
LABEL_157:
    McTemplateK0qqqqdqqq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v66,
      v68,
      0,
      v104[4],
      v104[5],
      1,
      v104[6],
      v104[7],
      v104[12],
      *v105);
    goto LABEL_129;
  }
  v19 = *((_QWORD *)v114 + 2);
  v20 = *(struct _KEVENT **)(v19 + 16);
  if ( ((__int64)v20->Header.WaitListHead.Blink[186].Flink & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, (unsigned int)**(_DWORD **)&v120[8]);
    WdLogGlobalForLineNumber = 2961;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter context 0x%I64x",
      (unsigned int)**(_DWORD **)&v120[8],
      0LL,
      0LL,
      0LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v109);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
    if ( (qword_14015E4B0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        goto LABEL_175;
      goto LABEL_149;
    }
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v114 + 98) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2967;
    goto LABEL_173;
  }
  v112 = *((_QWORD *)v114 + 2);
  v113 = 0;
  if ( v19 )
  {
    if ( *(_DWORD *)(v19 + 464) == 2 )
    {
      v21 = v20 + 5;
      if ( KeReadStateEvent(v20 + 5) )
        goto LABEL_31;
    }
    else
    {
      v21 = v20 + 4;
      if ( KeReadStateEvent(v20 + 4) )
      {
LABEL_31:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v81, (__int64)&EventBlockThread, v82, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
        }
        v113 = 1;
        goto LABEL_33;
      }
    }
    KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
    goto LABEL_31;
  }
LABEL_33:
  v22 = *(_DWORD *)&v120[4];
  Pool2 = 0LL;
  P = 0LL;
  v108 = 0;
  if ( *(_DWORD *)&v120[4] > 4u )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / *(unsigned int *)&v120[4] < 8 )
      goto LABEL_37;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * *(unsigned int *)&v120[4], 1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v107;
    P = v107;
    if ( *(_DWORD *)&v120[4] )
    {
      memset(v107, 0, 8LL * *(unsigned int *)&v120[4]);
      Pool2 = P;
    }
  }
  v108 = v22;
LABEL_37:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2977;
    if ( P != v107 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v108 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v109);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
    if ( (qword_14015E4B0 & 2) == 0 )
      return 3221225495LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v78,
        v80,
        0,
        v104[4],
        v104[5],
        1,
        v104[6],
        v104[7],
        v104[12],
        *v105);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225495LL;
    goto LABEL_154;
  }
  *Pool2 = v18;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v130, v9);
  for ( i = 1; ; ++i )
  {
    if ( i >= *(_DWORD *)&v120[4] )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v130);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v127,
        P,
        v108,
        v25,
        1);
      if ( !v128 )
      {
        v26 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 16LL);
        v123 = (DXGADAPTER *)v26;
        _InterlockedIncrement64(v26 + 3);
        v122 = -1LL;
        v27 = v26 + 17;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v27, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)v27 + 4);
        v124 = 1;
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v131, *((_QWORD *)v18 + 2), 1, v28, 0);
        if ( !v141 )
          goto LABEL_42;
        if ( v138 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v136, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7628;
        }
        v57 = v137;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v137 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v137 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v58, (__int64)&EventBlockThread, v59, 72);
            KeWaitForSingleObject((char *)v137 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v137, 0LL);
          v57 = v137;
        }
        v139 = 0LL;
        v138 = 1;
        if ( *((_DWORD *)v57 + 50) == 1 )
        {
LABEL_42:
          if ( v134 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v132, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7628;
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v133 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v133 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventBlockThread, v30, 72);
              KeWaitForSingleObject((char *)v133 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v133, 0LL);
          }
          v135 = 0LL;
          v134 = 1;
          v31 = (DXGADAPTER *)*(unsigned int *)(v140 + 608);
          if ( (_DWORD)v31 == 1 )
          {
            v32 = 0;
          }
          else
          {
            COREACCESS::Release((COREACCESS *)v132);
            if ( v141 )
              COREACCESS::Release((COREACCESS *)v136);
            v32 = -1073741130;
          }
        }
        else
        {
          v138 = 0;
          v31 = v137;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v137 + 23) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v137, 0LL);
          v139 = 0LL;
          v32 = -1073741130;
        }
        v101 = v32;
        if ( v32 < 0 )
        {
          v95 = PsGetCurrentProcess(v31);
          WdLogSingleEntry2(3LL, v101, v95);
          WdLogGlobalForLineNumber = 3052;
          v65 = v101;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v131);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v122);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v127);
          v96 = P;
          if ( P == v107 || !P )
            goto LABEL_211;
LABEL_210:
          ExFreePoolWithTag(v96, 0);
LABEL_211:
          P = 0LL;
          v108 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v109);
          goto LABEL_88;
        }
        v33 = (DXGDEVICE **)v114;
        v34 = (const struct DXGDEVICE *)*((_QWORD *)v114 + 2);
        v35 = *((_QWORD *)v34 + 237);
        if ( !v35 )
        {
          v101 = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 3060;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
            v101,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_213:
          v65 = v101;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v131);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v122);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v127);
          v96 = P;
          if ( P == v107 || !P )
            goto LABEL_211;
          goto LABEL_210;
        }
        if ( (*((_DWORD *)v9 + 102) & 4) == 0
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v35 + 3120), v34, *(unsigned int *)&v120[16]) )
        {
          v101 = -1073741790;
          v97 = PsGetCurrentProcess(v99);
          WdLogSingleEntry2(2LL, v101, v97);
          WdLogGlobalForLineNumber = 3075;
          v100 = (struct tagRECT ***)PsGetCurrentProcess(v98);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
            v101,
            (__int64)v100,
            0LL,
            0LL,
            0LL);
          goto LABEL_213;
        }
        v101 = DXGCONTEXT::PresentMultiPlaneOverlay3(
                 (DXGCONTEXT *)v33,
                 (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v120,
                 (struct COREDEVICEACCESS *)v131,
                 (struct DXGCONTEXT **)P);
        if ( v101 == -1071775482 )
          DXGDEVICE::CloseInternalCddPrimaryHandle(v33[2], (struct COREDEVICEACCESS *)v131);
        v36 = MEMORY[0xFFFFF78000000320];
        v129 = MEMORY[0xFFFFF78000000320];
        v37 = v101;
        v38 = v36 * KeQueryTimeIncrement();
        v39 = (a1->Flags.Value >> 9) & 2 | (*((_DWORD *)v9 + 102) >> 2) & 1;
        v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v114 + 2) + 1896LL) + 3120LL) + 128LL)
            + 4024LL * a1->VidPnSourceId;
        if ( v40 )
        {
          *(_QWORD *)&v126 = v38;
          *((_QWORD *)&v126 + 1) = __PAIR64__(v39, v37);
          DISPLAY_SOURCE::RecordPresentDiagHistory(v40, &v126);
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v131);
        v124 = 0;
        v41 = (char *)v123 + 136;
        _InterlockedDecrement((volatile signed __int32 *)v123 + 38);
        ExReleasePushLockSharedEx(v41, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference(v123);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v127);
        v42 = P;
        if ( P != v107 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v108 = 0;
        if ( v19 && v113 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
          KeLeaveCriticalRegion();
          v113 = 0;
        }
        v43 = PsGetCurrentProcess(v42);
        v44 = PsGetProcessDxgProcess(v43);
        v45 = (struct DXGPROCESS *)v44;
        if ( !v44 || (*(_DWORD *)(v44 + 408) & 0x80) != 0 )
        {
          v75 = DXGTHREAD::GetCurrent();
          if ( v75 )
          {
            v46 = (struct DXGPROCESS *)*((_QWORD *)v75 + 3);
            if ( v46 )
              goto LABEL_63;
          }
          else
          {
            v76 = KeGetCurrentThread();
            v77 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
            v46 = DXGGLOBAL::SearchDxgThreadList(v77, v76);
            if ( v46 )
              goto LABEL_63;
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 2926;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to find DXGPROCESS",
              2926LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        v46 = v45;
LABEL_63:
        v47 = *((_QWORD *)v46 + 8);
        for ( j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v47 + 104), (PKSPIN_LOCK)(v47 + 120));
              j;
              j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v47 + 104), (PKSPIN_LOCK)(v47 + 120)) )
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *))j[1].Flink)(j[1].Blink);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(j);
        }
        v49 = v101;
        if ( v109 && !v110 )
          DXGCONTEXT::ReleaseReference(v109);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v115[0]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v115[1]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v116[0]);
        v50 = v116[1];
        if ( v116[1] && v119 )
        {
          v51 = (void **)v116[1];
          v52 = v119;
          do
          {
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v51++);
            --v52;
          }
          while ( v52 );
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v50);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v117[0]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v117[1]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v118[0]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v118[1]);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
        if ( (qword_14015E4B0 & 2) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqqqdqqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v53,
              v55,
              0,
              v104[4],
              v104[5],
              1,
              v104[6],
              v104[7],
              v104[12],
              *v105);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v54, (__int64)&EventProfilerExit, v55, v102);
        }
        return v49;
      }
      if ( v127[0] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3033;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v127);
        if ( P != v107 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v108 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v109);
        DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
        if ( (qword_14015E4B0 & 2) != 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqqqdqqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v94,
              v71,
              0,
              v104[4],
              v104[5],
              1,
              v104[6],
              v104[7],
              v104[12],
              *v105);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            goto LABEL_150;
        }
        return 3221225485LL;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3028;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v127);
      if ( P != v107 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v108 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v109);
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
      if ( (qword_14015E4B0 & 2) == 0 )
        return 3221225495LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v93,
          v80,
          0,
          v104[4],
          v104[5],
          1,
          v104[6],
          v104[7],
          v104[12],
          *v105);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return 3221225495LL;
LABEL_154:
      McTemplateK0q_EtwWriteTransfer(v79, (__int64)&EventProfilerExit, v80, v102);
      return 3221225495LL;
    }
    v88 = (*(_DWORD *)(*(_QWORD *)&v120[8] + 4LL * i) >> 6) & 0xFFFFFF;
    if ( v88 < *((_DWORD *)v9 + 74) )
    {
      v89 = *((_QWORD *)v9 + 35) + 16LL * v88;
      if ( ((*(_DWORD *)(*(_QWORD *)&v120[8] + 4LL * i) >> 25) & 0x60) == (*(_BYTE *)(v89 + 8) & 0x60)
        && (*(_DWORD *)(v89 + 8) & 0x2000) == 0 )
      {
        v90 = *(_DWORD *)(v89 + 8) & 0x1F;
        if ( v90 )
        {
          if ( v90 == 7 )
          {
            v91 = *(_QWORD *)v89;
            goto LABEL_183;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v91 = 0LL;
LABEL_183:
    *((_QWORD *)P + i) = v91;
    v92 = *((_QWORD *)P + i);
    if ( !v92 || (*(_DWORD *)(v92 + 392) & 8) != 0 || *(_QWORD *)(v92 + 16) != *((_QWORD *)v18 + 2) )
      break;
  }
  WdLogSingleEntry4(2LL, v18, *(unsigned int *)(*(_QWORD *)&v120[8] + 4LL * i), i, -1073741811LL);
  WdLogGlobalForLineNumber = 3013;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v18,
    *(unsigned int *)(*(_QWORD *)&v120[8] + 4LL * i),
    i,
    -1073741811LL,
    0LL);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v130);
  if ( P != v107 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v108 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
LABEL_173:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v109);
  DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v102);
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
LABEL_175:
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v69,
        v71,
        0,
        v104[4],
        v104[5],
        1,
        v104[6],
        v104[7],
        v104[12],
        *v105);
LABEL_149:
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
LABEL_150:
      McTemplateK0q_EtwWriteTransfer(v70, (__int64)&EventProfilerExit, v71, v102);
  }
  return 3221225485LL;
}
