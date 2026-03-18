/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1401D98DC (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1401D9BDC (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402B0A90 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x140013628 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer @ 0x14001435C (McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400339D0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1400386C8 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140038D10 (-IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140047878 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004FA7C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400635E4 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z @ 0x140180F4C (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x140292F70 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1402A064C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1402B5CD4 (-GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402B6018 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402B61C0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1402E0C5C (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x140320278 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x14032C5BC (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAAPEAVDXGALLOCATIONREFERENCE@.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x140348530 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXAEAU_D3DKMT_PRESENT@@AEAU_D3DKMT_PRESENT_RGNS@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1403F8978 (-ConvertMPOThunkToLegacyPresentThunk@@YAXAEAU_D3DKMT_PRESENT@@AEAU_D3DKMT_PRESENT_RGNS@@PEBU_D3D.c)
 *     InverseXformMPORect3 @ 0x140403DC8 (InverseXformMPORect3.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14040BF58 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  ADAPTER_RENDER *v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 VidPnSourceId; // rsi
  unsigned int v13; // r13d
  __int64 PresentPlaneCount; // rax
  int v15; // eax
  unsigned int v16; // ebx
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321 Value; // eax
  __int64 v18; // rsi
  int v20; // eax
  int v21; // eax
  int v22; // r15d
  int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  unsigned __int8 v26; // dl
  struct ADAPTER_DISPLAY *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  LONG v31; // r9d
  LONG v32; // r13d
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rdx
  UINT i; // r13d
  D3DDDI_FLIPINTERVAL_TYPE v35; // ebx
  __int64 v36; // rdx
  int v37; // ecx
  char *v38; // rbx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  UINT v45; // eax
  UINT v46; // ecx
  UINT v47; // eax
  UINT v48; // ecx
  UINT Duration; // eax
  D3DKMT_HANDLE hAdapter; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  unsigned int v56; // edx
  D3DKMT_MULTIPLANE_OVERLAY3 *v57; // rsi
  __int64 LayerIndex; // r8
  __int64 v59; // rbx
  struct DXGALLOCATIONREFERENCE *v60; // r9
  UINT j; // ebx
  bool v62; // zf
  int v63; // eax
  D3DKMT_HANDLE *v64; // rax
  D3DKMT_HANDLE v65; // esi
  __int64 v66; // rax
  __int64 v67; // r8
  int v68; // edx
  struct _EX_RUNDOWN_REF *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  const struct DXGALLOCATION *v72; // rdx
  __int64 v73; // rax
  int v74; // eax
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rbx
  int v76; // ecx
  int v77; // edx
  int v78; // r9d
  int v79; // ecx
  LONG v80; // edx
  LONG v81; // r8d
  D3DDDI_ROTATION Rotation; // eax
  int v83; // eax
  int v84; // eax
  char v85; // r10
  unsigned int v86; // esi
  RECT *pDirtyRects; // r8
  LONG v88; // r11d
  LONG v89; // r9d
  unsigned int v90; // r8d
  __int64 v91; // rax
  char v92; // dl
  int v93; // r8d
  D3DKMT_MULTIPLANE_OVERLAY3 *v94; // rcx
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ecx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v96; // rbx
  D3DDDI_HDR_METADATA_TYPE v97; // r9d
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // r10d
  D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend; // r11d
  UINT SDRWhiteLevel; // esi
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // rdx
  struct DXGALLOCATIONREFERENCE *v104; // rsi
  struct _EX_RUNDOWN_REF *v105; // rcx
  const wchar_t *v106; // r9
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v107; // r9
  __int64 v108; // rcx
  __int64 v109; // rax
  const wchar_t *v110; // r9
  D3DKMT_MULTIPLANE_OVERLAY3 *v111; // r13
  __int64 v112; // rbx
  D3DKMT_HANDLE v113; // esi
  __int64 v114; // rax
  __int64 v115; // r8
  int v116; // edx
  struct _EX_RUNDOWN_REF *v117; // rdx
  D3DKMT_HANDLE *pAllocationList; // rax
  __int64 v119; // rax
  const wchar_t *v120; // r9
  int v121; // edx
  __int64 v122; // r9
  __int64 v123; // rbx
  int left; // ecx
  LONG right; // r8d
  LONG bottom; // eax
  LONG v127; // esi
  __m128i v128; // xmm1
  int v129; // r8d
  __int64 v130; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v131; // rax
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E v132; // eax
  __int64 v133; // rbx
  int v134; // eax
  D3DKMT_HANDLE *v135; // rax
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v136; // rdx
  int v137; // edx
  int v138; // r8d
  int v139; // ecx
  LONG v140; // ecx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v141; // rax
  __int64 v142; // rbx
  UINT v143; // ecx
  D3DDDI_HDR_METADATA_TYPE HDRMetaDataType; // edx
  __int32 v145; // edx
  _OWORD *pHDRMetaData; // rax
  _QWORD *v147; // rax
  int v148; // eax
  const char *v149; // rdx
  struct _DXGKARG_PRESENT *v150; // [rsp+20h] [rbp-130h]
  __int64 v151; // [rsp+30h] [rbp-120h]
  __int64 v152; // [rsp+38h] [rbp-118h]
  __int64 v153; // [rsp+40h] [rbp-110h]
  int v154; // [rsp+B0h] [rbp-A0h]
  char v155; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v156; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v157; // [rsp+D2h] [rbp-7Eh]
  char v158; // [rsp+D3h] [rbp-7Dh]
  unsigned __int8 v159; // [rsp+D4h] [rbp-7Ch]
  int v160; // [rsp+D8h] [rbp-78h]
  unsigned int v161; // [rsp+DCh] [rbp-74h]
  D3DDDI_ROTATION v162; // [rsp+DCh] [rbp-74h]
  bool v163; // [rsp+E0h] [rbp-70h]
  char v164; // [rsp+E4h] [rbp-6Ch]
  int v165; // [rsp+E8h] [rbp-68h]
  unsigned int v166; // [rsp+ECh] [rbp-64h]
  LONG v167; // [rsp+F0h] [rbp-60h]
  unsigned int v168; // [rsp+F4h] [rbp-5Ch]
  D3DKMT_MULTIPLANE_OVERLAY3 *v169; // [rsp+F8h] [rbp-58h]
  RECT SrcRect; // [rsp+F8h] [rbp-58h]
  int v171; // [rsp+108h] [rbp-48h]
  LONG top; // [rsp+10Ch] [rbp-44h]
  LONG v173; // [rsp+110h] [rbp-40h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v174; // [rsp+114h] [rbp-3Ch]
  int v175; // [rsp+118h] [rbp-38h]
  UINT DirtyRectCount; // [rsp+11Ch] [rbp-34h]
  char v177; // [rsp+11Ch] [rbp-34h]
  int v178; // [rsp+120h] [rbp-30h]
  __int64 v179; // [rsp+128h] [rbp-28h]
  signed int Width; // [rsp+128h] [rbp-28h]
  char v181; // [rsp+128h] [rbp-28h]
  char *v182; // [rsp+130h] [rbp-20h]
  signed int Height; // [rsp+130h] [rbp-20h]
  char v184; // [rsp+130h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v185; // [rsp+138h] [rbp-18h] BYREF
  unsigned int v186[2]; // [rsp+140h] [rbp-10h]
  __int64 v187; // [rsp+148h] [rbp-8h]
  COREDEVICEACCESS *v188; // [rsp+150h] [rbp+0h]
  PVOID Entry; // [rsp+158h] [rbp+8h] BYREF
  __int64 v190; // [rsp+160h] [rbp+10h]
  int v191; // [rsp+168h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v192; // [rsp+170h] [rbp+20h] BYREF
  struct _EX_RUNDOWN_REF *v193; // [rsp+178h] [rbp+28h] BYREF
  __int64 v194; // [rsp+180h] [rbp+30h]
  struct _EX_RUNDOWN_REF *v195; // [rsp+188h] [rbp+38h] BYREF
  struct DXGCONTEXT **v196; // [rsp+190h] [rbp+40h]
  RECT v197; // [rsp+198h] [rbp+48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v198; // [rsp+1A8h] [rbp+58h] BYREF
  struct _D3DKMT_PRESENT_RGNS v199; // [rsp+1D8h] [rbp+88h] BYREF
  struct DXGALLOCATIONREFERENCE *v200[5]; // [rsp+1F8h] [rbp+A8h] BYREF
  int v201; // [rsp+220h] [rbp+D0h]
  _DXGKARG_PRESENT v202; // [rsp+230h] [rbp+E0h] BYREF
  _D3DKMT_PRESENT v203; // [rsp+2E0h] [rbp+190h] BYREF
  enum _D3DDDIFORMAT v204[4]; // [rsp+8C0h] [rbp+770h] BYREF
  __int128 v205; // [rsp+8D0h] [rbp+780h]
  __int64 v206; // [rsp+8E0h] [rbp+790h]
  unsigned __int8 v207[16]; // [rsp+8E8h] [rbp+798h] BYREF

  v196 = a4;
  v5 = *((_QWORD *)this + 2);
  v188 = a3;
  v7 = *(_QWORD *)(v5 + 1880);
  v8 = *(ADAPTER_RENDER **)(v5 + 16);
  v9 = *(_DWORD *)(v7 + 444) & 0x100;
  v191 = v9;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3178;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3178LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *((_QWORD *)this + 2);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
  if ( (v11 || !v9) && *(_QWORD *)(v10 + 1880) != v11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3179;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(!GetRenderAdapter() && IsIndirectDisplayDevice) || (GetDisplayAdapter() == GetRenderAdapter())",
      3179LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_BYTE *)this + 435) = 1;
  VidPnSourceId = a2->VidPnSourceId;
  v174 = a2->VidPnSourceId;
  if ( v9 )
    v13 = 1;
  else
    v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2944LL);
  PresentPlaneCount = a2->PresentPlaneCount;
  v166 = v13;
  if ( (unsigned int)PresentPlaneCount > v13 )
  {
    LODWORD(v18) = -1073741811;
    WdLogSingleEntry3(3LL, PresentPlaneCount, v13, -1073741811LL);
    WdLogGlobalForLineNumber = 3196;
    return (unsigned int)v18;
  }
  if ( !v9 )
  {
    v15 = DXGCONTEXT::CheckDevicePresentSettings((DXGDEVICE **)this, 1, 0, 1, VidPnSourceId);
    v16 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry3(3LL, v15, this, VidPnSourceId);
      WdLogGlobalForLineNumber = 3215;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 4 * VidPnSourceId + 1240) & 0x200) != 0 )
        goto LABEL_12;
      v16 = -1071775719;
      WdLogSingleEntry3(3LL, -1071775719LL, this, VidPnSourceId);
      WdLogGlobalForLineNumber = 3224;
    }
    return v16;
  }
LABEL_12:
  Value = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 3) != 0 )
  {
    if ( a2->PresentPlaneCount > 1 )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 3239;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkPresentMultiPlaneOverlay doesn't support Stereo on more than 1 plane. Context 0x%I64x, Returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v18;
    }
    if ( (a2->Flags.Value & 3) == 3 )
    {
      WdLogSingleEntry0(2LL);
      v109 = 3246LL;
      v110 = L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER";
LABEL_185:
      WdLogGlobalForLineNumber = v109;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v110, v109, 0LL, 0LL, 0LL, 0LL);
      return -1073741811LL;
    }
    if ( (*(_BYTE *)&Value & 6) == 6 )
    {
      WdLogSingleEntry0(2LL);
      v109 = 3252LL;
      v110 = L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER";
      goto LABEL_185;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v185, 0LL);
    v111 = *a2->ppPresentPlanes;
    v112 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    v113 = *v111->pAllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v112 + 248));
    v114 = (v113 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v114 < *(_DWORD *)(v112 + 296) )
    {
      v115 = *(_QWORD *)(v112 + 280);
      v116 = *(_DWORD *)(v115 + 16 * v114 + 8);
      if ( ((v113 >> 25) & 0x60) == (*(_BYTE *)(v115 + 16 * v114 + 8) & 0x60)
        && (v116 & 0x2000) == 0
        && (v116 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v115 + 16 * (((unsigned __int64)v113 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v117 = *(struct _EX_RUNDOWN_REF **)(v115 + 16 * (((unsigned __int64)v113 >> 6) & 0xFFFFFF));
LABEL_197:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v192, v117);
          _InterlockedDecrement((volatile signed __int32 *)(v112 + 264));
          ExReleasePushLockSharedEx(v112 + 248, 0LL);
          KeLeaveCriticalRegion();
          DXGALLOCATIONREFERENCE::MoveAssign(&v185, &v192);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v192);
          if ( !v185 )
          {
            LODWORD(v18) = -1073741811;
            WdLogSingleEntry3(2LL, -1073741811LL, this, *v111->pAllocationList);
            pAllocationList = v111->pAllocationList;
            WdLogGlobalForLineNumber = 3263;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"ret = 0x%I64x Context 0x%I64x: Invalid allocation handle for plane 0 specified: 0x%I64x",
              -1073741811LL,
              (__int64)this,
              *pAllocationList,
              0LL,
              0LL);
LABEL_201:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v185);
            return (unsigned int)v18;
          }
          if ( (*(_DWORD *)(v185[6].Count + 4) & 0x1000) == 0 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3270;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_INVALID_PARAMETER",
              3270LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v18) = -1073741811;
            goto LABEL_201;
          }
          v121 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                               *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                               a2->VidPnSourceId)
                 + 10);
          if ( (v121 & 0x10) == 0 )
          {
            WdLogSingleEntry0(2LL);
            v119 = 3277LL;
            v120 = L"Stereo flag is set but the current display mode does not support stereo. STATUS_GRAPHICS_PRESENT_MODE_CHANGED";
            goto LABEL_200;
          }
          if ( (*(_BYTE *)&a2->Flags.0 & 2) != 0 && (v121 & 0x20) == 0 )
          {
            WdLogSingleEntry0(2LL);
            v119 = 3283LL;
            v120 = L"FlipStereoTemporaryMono flag is set but the current display mode does not support it. STATUS_GRAPHICS"
                    "_PRESENT_MODE_CHANGED";
LABEL_200:
            WdLogGlobalForLineNumber = v119;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v120, v119, 0LL, 0LL, 0LL, 0LL);
            LODWORD(v18) = -1071775739;
            goto LABEL_201;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v185);
          LODWORD(VidPnSourceId) = v174;
          v13 = v166;
          goto LABEL_37;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v117 = 0LL;
    goto LABEL_197;
  }
LABEL_37:
  v200[0] = 0LL;
  v201 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::AllocateElements(v200, a2->ContextCount * v13);
  if ( !v200[0] )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 3295;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for MPO allocation references",
      3295LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v18) = -1073741801;
    goto LABEL_31;
  }
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(*((DXGDEVICE **)this + 2), VidPnSourceId, v200[0], v13);
  v28 = *((_QWORD *)this + 2);
  v194 = *(_QWORD *)v200[0];
  ADAPTER_DISPLAY::GetDDIEnabledPlanes(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v28 + 1880) + 3120LL), VidPnSourceId, v207);
  v206 = 0LL;
  v29 = *((_QWORD *)this + 2);
  *(_OWORD *)v204 = 0LL;
  v205 = 0LL;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(v29 + 16))
    || (v158 = 0,
        *(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v158 = 1;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL),
                      VidPnSourceId);
  if ( !DisplayModeInfo )
  {
    v122 = (unsigned int)VidPnSourceId;
    v123 = (unsigned int)VidPnSourceId;
    v18 = -1073741811LL;
    WdLogSingleEntry3(2LL, -1073741811LL, this, v122);
    v153 = 0LL;
    v106 = L"ret = 0x%I64x Context 0x%I64x Failed to obtain display mode, VidPnSourceId 0x%I64x";
    v152 = 0LL;
    v151 = v123;
    WdLogGlobalForLineNumber = 3324;
    goto LABEL_167;
  }
  v31 = *(_DWORD *)DisplayModeInfo;
  v32 = *((_DWORD *)DisplayModeInfo + 1);
  pPostComposition = a2->pPostComposition;
  *(_QWORD *)v186 = 0LL;
  v167 = v32;
  v175 = 0;
  top = 0;
  v173 = v31;
  v159 = 0;
  v168 = 0;
  if ( pPostComposition )
  {
    if ( pPostComposition->Flags.Value )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry3(3LL, this, pPostComposition->Flags.Value, -1073741811LL);
      WdLogGlobalForLineNumber = 3339;
      goto LABEL_31;
    }
    if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry3(3LL, this, pPostComposition->Rotation, -1073741811LL);
      WdLogGlobalForLineNumber = 3345;
      goto LABEL_31;
    }
    if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
      || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 3351;
      goto LABEL_31;
    }
    left = pPostComposition->DstRect.left;
    right = pPostComposition->DstRect.right;
    if ( left >= right || (bottom = pPostComposition->DstRect.bottom, pPostComposition->DstRect.top >= bottom) )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 3357;
      goto LABEL_31;
    }
    if ( left < 0 || v31 < right || pPostComposition->DstRect.top < 0 || v32 < bottom )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 3363;
      goto LABEL_31;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3049LL) || v158 )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry2(3LL, -1073741811LL, this);
      WdLogGlobalForLineNumber = 3374;
      goto LABEL_31;
    }
    v127 = pPostComposition->SrcRect.right;
    v128 = _mm_loadl_epi64((const __m128i *)&pPostComposition->SrcRect.right);
    v129 = _mm_cvtsi128_si32((__m128i)pPostComposition->SrcRect);
    v130 = *(_QWORD *)&pPostComposition->SrcRect.left;
    SrcRect = pPostComposition->SrcRect;
    v173 = v127;
    v175 = v129;
    if ( v129 || v127 != v31 || HIDWORD(v130) || v128.m128i_i32[1] != v32 )
    {
      v159 = 1;
      *(_QWORD *)v186 = (unsigned int)(v128.m128i_i32[1] - HIDWORD(v130));
      v168 = v127 - v129;
      v165 = -1;
      v164 = 0;
      v167 = SrcRect.bottom;
      top = SrcRect.top;
      v171 = 0;
      v156 = 0;
      v157 = 0;
      v155 = 0;
      v160 = 1;
    }
    else
    {
      v165 = -1;
      v167 = HIDWORD(*(_OWORD *)&pPostComposition->SrcRect);
      v164 = 0;
      v171 = 0;
      v156 = 0;
      v157 = 0;
      v155 = 0;
      v160 = 1;
      top = HIDWORD(*(_QWORD *)&pPostComposition->SrcRect.left);
    }
  }
  else
  {
    v171 = 0;
    v165 = -1;
    v156 = 0;
    v164 = 0;
    v157 = 0;
    v155 = 0;
    v160 = 1;
    v159 = 0;
    v168 = 0;
    v186[0] = 0;
    if ( v158 )
    {
      v108 = a2->PresentPlaneCount;
      if ( (_DWORD)v108 != 1 )
      {
        v18 = -1073741811LL;
        WdLogSingleEntry3(2LL, -1073741811LL, this, (unsigned int)v108);
        v153 = 0LL;
        v106 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and 0x%I64x planes are specified";
        v152 = 0LL;
        v151 = a2->PresentPlaneCount;
        WdLogGlobalForLineNumber = 3408;
        goto LABEL_167;
      }
      v131 = *a2->ppPresentPlanes;
      if ( v131->LayerIndex
        || (v132 = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v131->InputFlags.Value,
            v159 = 0,
            v168 = 0,
            *(_QWORD *)v186 = 0LL,
            (*(_BYTE *)&v132 & 1) == 0) )
      {
        v18 = -1073741811LL;
        WdLogSingleEntry3(2LL, -1073741811LL, this, v108);
        v106 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and plane 0 is not enabled";
        v153 = 0LL;
        v152 = 0LL;
        v151 = a2->PresentPlaneCount;
        WdLogGlobalForLineNumber = 3417;
        goto LABEL_167;
      }
    }
  }
  v178 = 0;
  v163 = *(int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3004LL) >= 3000
      || *((_BYTE *)DXGGLOBAL::GetGlobal() + 304800);
  for ( i = 0; ; ++i )
  {
    if ( i >= a2->PresentPlaneCount )
    {
      if ( !v178 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3049LL) )
        {
          v35 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
          v160 = 0;
          goto LABEL_49;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3886;
      }
      v35 = v160;
LABEL_49:
      if ( !v156 && !v157 && !v155 )
      {
        WdLogSingleEntry2(4LL, 0LL, this);
        WdLogGlobalForLineNumber = 3897;
LABEL_305:
        LODWORD(v18) = 0;
        goto LABEL_31;
      }
      memset(&v202, 0, sizeof(v202));
      v36 = *((_QWORD *)this + 2);
      v37 = 4;
      v202.FlipInterval = v35;
      if ( !v158 )
        v37 = 4100;
      v202.Flags.Value = v37 ^ ((unsigned __int16)v37 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&a2->Flags.0 << 8)) & 0x700 | 8;
      CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)&Entry, *(struct ADAPTER_RENDER **)(v36 + 16), 1);
      v38 = (char *)Entry;
      if ( !Entry )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 3922;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate VidSchSubmitData",
          3922LL,
          0LL,
          0LL,
          0LL,
          0LL);
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
        PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 *)v200);
        return 3221225495LL;
      }
      v39 = *(_DWORD *)Entry | 0x30020;
      *(_DWORD *)Entry = v39;
      v40 = v39 | 1;
      *((_DWORD *)v38 + 28) = a2->PresentCount;
      *(_DWORD *)v38 = v40;
      if ( v164 )
      {
        v40 |= 0x400000u;
        *(_DWORD *)v38 = v40;
      }
      v41 = v40 | 4;
      *(_DWORD *)v38 = v41;
      v42 = v41;
      if ( !v158 && a2->ContextCount <= 1 )
      {
        v42 = v41 | 0x800000;
        *(_DWORD *)v38 = v41 | 0x800000;
      }
      v43 = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
      *(_DWORD *)v38 = v43;
      v44 = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10;
      *(_DWORD *)v38 = v44;
      v45 = v44 ^ (v44 ^ (a2->Flags.Value << 19)) & 0x80000;
      *(_DWORD *)v38 = v45;
      v46 = v45 ^ (v45 ^ (a2->Flags.Value << 19)) & 0x100000;
      *(_DWORD *)v38 = v46;
      v47 = v46 ^ (v46 ^ (a2->Flags.Value << 19)) & 0x200000;
      *(_DWORD *)v38 = v47;
      v48 = v47 ^ (v47 ^ (a2->Flags.Value << 21)) & 0x20000000;
      *(_DWORD *)v38 = v48;
      if ( (a2->Flags.Value & 0x40) != 0 )
        Duration = a2->Duration;
      else
        Duration = 0;
      *((_DWORD *)v38 + 36) = Duration;
      if ( (a2->Flags.Value & 0x40) != 0 )
        hAdapter = a2[1].hAdapter;
      else
        hAdapter = 1;
      *((_DWORD *)v38 + 29) = v174;
      *((_DWORD *)v38 + 38) = hAdapter;
      *((_DWORD *)v38 + 31) = v160;
      *((_DWORD *)v38 + 30) = 5;
      if ( (a2->Flags.Value & 0x200) != 0 && !v160 )
        *(_DWORD *)v38 = v48 | 0x10000000;
      Global = DXGGLOBAL::GetGlobal();
      v52 = *((_QWORD *)this + 2);
      if ( *((_BYTE *)Global + 304800)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 1880) + 3120LL) + 24LL) & 0x10) != 0 )
      {
        if ( ADAPTER_DISPLAY::IsHdrEnabled(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v52 + 1880) + 3120LL), v174) )
        {
          v143 = *(_DWORD *)v38 ^ (*(_DWORD *)v38 ^ (a2->Flags.Value << 23)) & 0x40000000;
          *(_DWORD *)v38 = v143;
          *((_DWORD *)v38 + 90) = a2->HDRMetaDataType;
          HDRMetaDataType = a2->HDRMetaDataType;
          if ( (v143 & 0x40000000) != 0 )
          {
            if ( HDRMetaDataType )
            {
              v145 = HDRMetaDataType - 1;
              if ( v145 )
              {
                if ( v145 == 1 )
                {
                  pHDRMetaData = a2->pHDRMetaData;
                  *(_OWORD *)(v38 + 364) = *pHDRMetaData;
                  *(_OWORD *)(v38 + 380) = pHDRMetaData[1];
                  *(_OWORD *)(v38 + 396) = pHDRMetaData[2];
                  *(_OWORD *)(v38 + 412) = pHDRMetaData[3];
                  *(_QWORD *)(v38 + 428) = *((_QWORD *)pHDRMetaData + 8);
                }
                else
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4003;
                  DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", 4003LL, 0LL, 0LL, 0LL, 0LL);
                  *(_DWORD *)v38 &= ~0x40000000u;
                }
              }
              else
              {
                v147 = a2->pHDRMetaData;
                *(_OWORD *)(v38 + 364) = *(_OWORD *)v147;
                *(_QWORD *)(v38 + 380) = v147[2];
                *((_DWORD *)v38 + 97) = *((_DWORD *)v147 + 6);
              }
            }
          }
          else
          {
            if ( (unsigned int)HDRMetaDataType > D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4013;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pArgs->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR10PLUS == pArgs-"
                 ">HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pArgs->HDRMetaDataType",
                4013LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( a2->pHDRMetaData || a2->HDRMetaDataSize )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4016;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"NULL == pArgs->pHDRMetaData && NULL == pArgs->HDRMetaDataSize",
                4016LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)v38 |= 0x40000000u;
            if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
            {
              *((_DWORD *)v38 + 90) = 134217729;
            }
            else if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
            {
              *((_DWORD *)v38 + 90) = -2147483646;
            }
          }
        }
        else
        {
          *(_DWORD *)v38 |= 0x40000000u;
          *((_DWORD *)v38 + 90) = 0;
        }
      }
      if ( a2->pPostComposition )
      {
        *(_DWORD *)v38 |= 0x80000000;
        *(RECT *)(v38 + 436) = a2->pPostComposition->SrcRect;
        *(RECT *)(v38 + 452) = a2->pPostComposition->DstRect;
      }
      v53 = *((_QWORD *)this + 2);
      v54 = *(_QWORD *)(v53 + 1880);
      if ( v54 != *(_QWORD *)(*(_QWORD *)(v53 + 16) + 16LL) )
      {
        if ( !v54 )
        {
          WdLogSingleEntry2(1LL, v53, -1073741822LL);
          v150 = (struct _DXGKARG_PRESENT *)*((_QWORD *)this + 2);
          WdLogGlobalForLineNumber = 4185;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
            (__int64)v150,
            -1073741822LL,
            0LL,
            0LL,
            0LL);
          CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
          PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 *)v200);
          return -1073741811LL;
        }
        ppPresentPlanes = a2->ppPresentPlanes;
        v18 = (__int64)*ppPresentPlanes;
        if ( (*ppPresentPlanes)->LayerIndex )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4167;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pPlane0->LayerIndex == 0", 4167LL, 0LL, 0LL, 0LL, 0LL);
        }
        memset(&v203, 0, sizeof(v203));
        memset(&v199, 0, sizeof(v199));
        ConvertMPOThunkToLegacyPresentThunk(&v203, &v199, a2, (const struct _D3DKMT_MULTIPLANE_OVERLAY3 *)v18);
        LODWORD(v18) = DXGCONTEXT::DisplayOnlyPresent(this, &v203, *(struct DXGALLOCATION **)v200[0], v174, &v202, v188);
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v27 = *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL);
        goto LABEL_26;
      }
      v20 = *(_DWORD *)(v53 + 4LL * v174 + 1816);
      if ( *((_DWORD *)v38 + 30) == v20 || !v20 )
        goto LABEL_18;
      if ( (a2->Flags.Value & 8) != 0 )
      {
        WdLogSingleEntry1(4LL, -1071775739LL);
        WdLogGlobalForLineNumber = 4068;
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
        LODWORD(v18) = -1071775739;
        goto LABEL_31;
      }
      WdLogSingleEntry1(4LL, v53);
      WdLogGlobalForLineNumber = 4076;
      COREDEVICEACCESS::Release(v188);
      DXGDEVICE::FlushScheduler(*((_QWORD *)this + 2), 3LL, v174, 1LL);
      v148 = COREDEVICEACCESS::AcquireShared(v188, 0LL);
      v22 = v148;
      if ( v148 >= 0 )
      {
LABEL_18:
        v21 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v174, (a2->Flags.Value & 8) == 0, v188);
        v22 = v21;
        if ( v21 >= 0 )
        {
          v23 = DXGCONTEXT::CheckDevicePresentSettings((DXGDEVICE **)this, 1, 0, 1, v174);
          v22 = v23;
          if ( v23 >= 0 )
          {
            if ( *((_QWORD *)this + 45) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4126;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"m_pPresentDmaBuffer == NULL",
                4126LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            LODWORD(v18) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                             this,
                             a2,
                             v157,
                             v156,
                             v155,
                             v200[0],
                             v207,
                             &v202,
                             (struct VIDSCH_SUBMIT_DATA_BASE *)v38,
                             v196);
            if ( (int)v18 < 0 )
              goto LABEL_27;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL) + 128LL)
                           + 3984LL * v174
                           + 1072) == -1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4143;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"!NT_SUCCESS(Status) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVidPnSourceToVidPnTarget("
                 "VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
                4143LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v200[0], v204, v165, *((_DWORD *)v38 + 34));
            v24 = v186[0];
            v25 = v168;
            v26 = v159;
            *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v174 + 1816) = *((_DWORD *)v38 + 30);
            v27 = *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3120LL);
LABEL_26:
            UpdatePostComposition(v174, v26, v25, v24, v27);
LABEL_27:
            if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
              && (_DWORD)v18 != -1073741130 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4190;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"GetRenderCore()->IsCoreResourceSharedOwner() || Status == STATUS_DEVICE_REMOVED",
                4190LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *((_QWORD *)this + 45) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4191;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"m_pPresentDmaBuffer == NULL",
                4191LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v190 + 1424), v38);
            goto LABEL_31;
          }
          WdLogSingleEntry2(4LL, v23, this);
          WdLogGlobalForLineNumber = 4109;
          if ( v22 == -1071774920 )
          {
            DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v200[0], v204, v165, *((_DWORD *)v38 + 34));
            *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v174 + 1816) = *((_DWORD *)v38 + 30);
            CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
            goto LABEL_305;
          }
          ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v190 + 1424), v38);
LABEL_35:
          LODWORD(v18) = v22;
          goto LABEL_31;
        }
        WdLogSingleEntry2(4LL, v21, this);
        WdLogGlobalForLineNumber = 4098;
      }
      else
      {
        WdLogSingleEntry1(4LL, v148);
        WdLogGlobalForLineNumber = 4084;
        COREDEVICEACCESS::AcquireSharedUncheck(v188, v149);
      }
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
      goto LABEL_35;
    }
    v56 = v166;
    v57 = a2->ppPresentPlanes[i];
    v169 = v57;
    LayerIndex = v57->LayerIndex;
    v161 = LayerIndex;
    v59 = (unsigned int)LayerIndex;
    if ( (unsigned int)LayerIndex >= v166 )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry3(3LL, this, LayerIndex, -1073741811LL);
      WdLogGlobalForLineNumber = 3439;
      goto LABEL_31;
    }
    _mm_lfence();
    if ( ((1 << LayerIndex) & v171) != 0 )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry3(3LL, this, LayerIndex, -1073741811LL);
      WdLogGlobalForLineNumber = 3446;
      goto LABEL_31;
    }
    v171 |= 1 << LayerIndex;
    if ( (v57->InputFlags.Value & 1) == 0 )
    {
      v104 = v200[0];
      v105 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v200[0] + LayerIndex);
      if ( v105 || v207[LayerIndex] )
        ++v155;
      if ( v105 )
        ExReleaseRundownProtection(v105 + 11);
      *((_QWORD *)v104 + v59) = 0LL;
      v195 = 0LL;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v195);
      goto LABEL_147;
    }
    v60 = v200[0];
    if ( *((_QWORD *)v200[0] + LayerIndex) || v207[LayerIndex] )
      ++v156;
    else
      ++v157;
    for ( j = 0; j < v57->AllocationCount; ++j )
    {
      v179 = (unsigned int)LayerIndex + v56 * j;
      v182 = (char *)v60 + 8 * v179;
      v64 = v57->pAllocationList;
      v187 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v65 = v64[j];
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v187 + 248));
      v66 = (v65 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v66 < *(_DWORD *)(v187 + 296)
        && (v67 = *(_QWORD *)(v187 + 280),
            v68 = *(_DWORD *)(v67 + 16 * v66 + 8),
            ((v65 >> 25) & 0x60) == (*(_BYTE *)(v67 + 16 * v66 + 8) & 0x60))
        && (v68 & 0x2000) == 0
        && (v68 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v67 + 16 * (((unsigned __int64)v65 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v69 = *(struct _EX_RUNDOWN_REF **)(v67 + 16 * (((unsigned __int64)v65 >> 6) & 0xFFFFFF));
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v69 = 0LL;
        }
      }
      else
      {
        v69 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v193, v69);
      v70 = v187 + 248;
      _InterlockedDecrement((volatile signed __int32 *)(v187 + 264));
      ExReleasePushLockSharedEx(v70, 0LL);
      KeLeaveCriticalRegion();
      DXGALLOCATIONREFERENCE::MoveAssign(v182, &v193);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v193);
      v60 = v200[0];
      v71 = *((_QWORD *)v200[0] + v179);
      if ( !v71 )
      {
        LODWORD(v18) = -1073741811;
        WdLogSingleEntry3(3LL, -1073741811LL, this, v169->pAllocationList[j]);
        WdLogGlobalForLineNumber = 3476;
        goto LABEL_31;
      }
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 8) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 16LL) )
      {
        LODWORD(v18) = -1073741811;
        WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v71, -1073741811LL);
        WdLogGlobalForLineNumber = 3485;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          *((_QWORD *)this + 2),
          *((_QWORD *)v200[0] + v161 + v166 * j),
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_31;
      }
      v57 = v169;
      LayerIndex = v161;
      v56 = v166;
    }
    _mm_lfence();
    v62 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v200[0] + (unsigned int)LayerIndex) + 48LL) + 4LL) & 0x2000) == 0;
    _mm_lfence();
    if ( v62 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v200[0] + (unsigned int)LayerIndex) + 48LL) + 4LL) & 0xB) != 0 )
      {
        _mm_lfence();
        v63 = v165;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v200[0] + (unsigned int)LayerIndex) + 48LL) + 4LL) & 1) != 0 )
          v63 = LayerIndex;
        v165 = v63;
      }
      else if ( !v191 || (a2->Flags.Value & 0x400) == 0 )
      {
        _mm_lfence();
        v135 = v57->pAllocationList;
        v18 = -1073741811LL;
        WdLogSingleEntry5(
          2LL,
          -1073741811LL,
          this,
          *((_QWORD *)v200[0] + (unsigned int)LayerIndex),
          *(_QWORD *)(*((_QWORD *)v200[0] + (unsigned int)LayerIndex) + 48LL),
          *v135);
        v106 = L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x";
        WdLogGlobalForLineNumber = 3582;
        v153 = *v169->pAllocationList;
        v152 = *(_QWORD *)(*((_QWORD *)v200[0] + v161) + 48LL);
        v151 = *((_QWORD *)v200[0] + v161);
        goto LABEL_167;
      }
      goto LABEL_102;
    }
    v72 = (const struct DXGALLOCATION *)*((_QWORD *)v200[0] + (unsigned int)LayerIndex);
    if ( (*(_DWORD *)(*((_QWORD *)v72 + 6) + 4LL) & 0x20) == 0 )
      break;
LABEL_102:
    _mm_lfence();
    memset(&v198, 0, sizeof(v198));
    v73 = *((_QWORD *)this + 2);
    v198.hAllocation = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v200[0] + (unsigned int)LayerIndex) + 48LL) + 16LL);
    v74 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v73 + 16), &v198, LayerIndex);
    v18 = v74;
    if ( v74 < 0 )
    {
      _mm_lfence();
      WdLogSingleEntry4(
        2LL,
        v74,
        this,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v200[0] + v161) + 48LL) + 16LL),
        *((_QWORD *)v200[0] + v161));
      v106 = L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x";
      v153 = 0LL;
      WdLogGlobalForLineNumber = 3595;
      v152 = *((_QWORD *)v200[0] + v161);
      v151 = *(_QWORD *)(*(_QWORD *)(v152 + 48) + 16LL);
      goto LABEL_167;
    }
    v204[v161] = v198.Format;
    pPlaneAttributes = v169->pPlaneAttributes;
    v76 = pPlaneAttributes->SrcRect.left;
    v77 = pPlaneAttributes->SrcRect.right;
    if ( v76 >= v77 || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom )
    {
      v18 = -1073741811LL;
      WdLogSingleEntry3(2LL, -1073741811LL, this, i);
      WdLogGlobalForLineNumber = 3607;
      goto LABEL_174;
    }
    v78 = v160;
    Width = v198.Width;
    Height = v198.Height;
    if ( v76 < 0
      || (int)v198.Width < v77
      || pPlaneAttributes->SrcRect.top < 0
      || (int)v198.Height < pPlaneAttributes->SrcRect.bottom )
    {
      v18 = -1073741811LL;
      WdLogSingleEntry3(2LL, -1073741811LL, this, i);
      WdLogGlobalForLineNumber = 3615;
LABEL_166:
      v153 = 0LL;
      v106 = L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x";
      v152 = 0LL;
      v151 = i;
      goto LABEL_167;
    }
    v79 = pPlaneAttributes->ClipRect.left;
    v80 = pPlaneAttributes->ClipRect.right;
    if ( v79 >= v80 || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
    {
      v18 = -1073741811LL;
      WdLogSingleEntry3(2LL, -1073741811LL, this, i);
      v153 = 0LL;
      v106 = L"ret = 0x%I64x Context 0x%I64x Clip rect is invalid, index 0x%I64x";
      v152 = 0LL;
      v151 = i;
      WdLogGlobalForLineNumber = 3626;
      goto LABEL_167;
    }
    v81 = pPlaneAttributes->DstRect.left;
    if ( v81 >= pPlaneAttributes->DstRect.right || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom )
    {
      v18 = -1073741811LL;
      WdLogSingleEntry3(2LL, -1073741811LL, this, i);
      v153 = 0LL;
      v106 = L"ret = 0x%I64x Context 0x%I64x Destination rect is invalid, index 0x%I64x";
      v152 = 0LL;
      v151 = i;
      WdLogGlobalForLineNumber = 3633;
      goto LABEL_167;
    }
    if ( v173 < v80 || v175 > v79 || top > pPlaneAttributes->ClipRect.top || v167 < pPlaneAttributes->ClipRect.bottom )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, this, i);
      WdLogGlobalForLineNumber = 3640;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of virtual mode rect, index 0x%I64x",
        -1073741811LL,
        (__int64)this,
        i,
        0LL,
        0LL);
      MicrosoftTelemetryAssertTriggeredArgsMsgKM(
        (unsigned __int16)v169->pPlaneAttributes->ClipRect.bottom,
        (unsigned __int16)v169->pPlaneAttributes->ClipRect.bottom | (v169->pPlaneAttributes->ClipRect.right << 16),
        (unsigned __int16)v167 | (v173 << 16),
        (__int64)"ClipRect outside VirtualModeRect");
      goto LABEL_31;
    }
    if ( v81 > v79
      || pPlaneAttributes->DstRect.right < v80
      || pPlaneAttributes->DstRect.top > pPlaneAttributes->ClipRect.top
      || pPlaneAttributes->DstRect.bottom < pPlaneAttributes->ClipRect.bottom )
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, this, i);
      WdLogGlobalForLineNumber = 3656;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x",
        -1073741811LL,
        (__int64)this,
        i,
        0LL,
        0LL);
      v107 = v169->pPlaneAttributes;
      MicrosoftTelemetryAssertTriggeredArgsMsgKM(
        (unsigned __int16)v107->ClipRect.bottom,
        (unsigned __int16)v107->ClipRect.bottom | (v107->ClipRect.right << 16),
        (unsigned __int16)v107->DstRect.bottom | (v107->DstRect.right << 16),
        (__int64)"ClipRect outside DestRect");
      goto LABEL_31;
    }
    Rotation = pPlaneAttributes->Rotation;
    if ( Rotation )
    {
      v83 = Rotation - 1;
      if ( v83 )
      {
        v84 = v83 - 1;
        if ( v84 )
        {
          if ( (unsigned int)(v84 - 1) > 1 )
          {
            v18 = -1073741811LL;
            WdLogSingleEntry4(2LL, -1073741811LL, this, i, pPlaneAttributes->Rotation);
            v153 = 0LL;
            v106 = L"ret = 0x%I64x Context 0x%I64x rotation is not valid, index 0x%I64x, rotation 0xI64x";
            WdLogGlobalForLineNumber = 3691;
            v152 = v169->pPlaneAttributes->Rotation;
            v151 = i;
            goto LABEL_167;
          }
        }
      }
    }
    else
    {
      pPlaneAttributes->Rotation = D3DDDI_ROTATION_IDENTITY;
    }
    v85 = 1;
    DirtyRectCount = pPlaneAttributes->DirtyRectCount;
    v86 = 0;
    if ( DirtyRectCount )
    {
      while ( v85 )
      {
        pDirtyRects = pPlaneAttributes->pDirtyRects;
        v88 = pDirtyRects[v86].left;
        v89 = pDirtyRects[v86].right;
        if ( v88 >= v89 || pDirtyRects[v86].top >= pDirtyRects[v86].bottom )
          v85 = 0;
        if ( pPlaneAttributes->SrcRect.left > v88
          || pPlaneAttributes->SrcRect.right < v89
          || pPlaneAttributes->SrcRect.top > pDirtyRects[v86].top
          || pPlaneAttributes->SrcRect.bottom < pDirtyRects[v86].bottom )
        {
          v78 = v160;
          v85 = 0;
        }
        else
        {
          v78 = v160;
        }
        if ( ++v86 >= DirtyRectCount )
        {
          if ( v85 )
            goto LABEL_136;
          break;
        }
      }
      pPlaneAttributes->DirtyRectCount = 0;
    }
LABEL_136:
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 3018LL) )
    {
      v136 = v169->pPlaneAttributes;
      if ( v136->DstRect.left != v136->ClipRect.left
        || v136->DstRect.right != v136->ClipRect.right
        || v136->DstRect.top != v136->ClipRect.top
        || v136->DstRect.bottom != v136->ClipRect.bottom )
      {
        v160 = v78;
        v197 = 0LL;
        InverseXformMPORect3(&v197);
        pPlaneAttributes->SrcRect = v197;
        pPlaneAttributes->DstRect = v169->pPlaneAttributes->ClipRect;
        v137 = pPlaneAttributes->SrcRect.left;
        v138 = pPlaneAttributes->SrcRect.right;
        if ( v137 >= v138 || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom )
        {
          v18 = -1073741811LL;
          WdLogSingleEntry3(2LL, -1073741811LL, this, i);
          WdLogGlobalForLineNumber = 3735;
LABEL_174:
          v153 = 0LL;
          v106 = L"ret = 0x%I64x Context 0x%I64x Source rect is invalid, index 0x%I64x";
          v152 = 0LL;
          v151 = i;
LABEL_167:
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v106, v18, (__int64)this, v151, v152, v153);
          goto LABEL_31;
        }
        v139 = pPlaneAttributes->DstRect.left;
        if ( v139 >= pPlaneAttributes->DstRect.right
          || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom )
        {
          v18 = -1073741811LL;
          WdLogSingleEntry3(2LL, -1073741811LL, this, i);
          v153 = 0LL;
          v106 = L"ret = 0x%I64x Context 0x%I64x Dest rect is invalid, index 0x%I64x";
          v152 = 0LL;
          v151 = i;
          WdLogGlobalForLineNumber = 3742;
          goto LABEL_167;
        }
        if ( v137 < 0 || Width < v138 || pPlaneAttributes->SrcRect.top < 0 || Height < pPlaneAttributes->SrcRect.bottom )
        {
          v18 = -1073741811LL;
          WdLogSingleEntry3(2LL, -1073741811LL, this, i);
          WdLogGlobalForLineNumber = 3749;
          goto LABEL_166;
        }
        if ( v175 > v139
          || v173 < pPlaneAttributes->DstRect.right
          || top > pPlaneAttributes->DstRect.top
          || v167 < pPlaneAttributes->DstRect.bottom )
        {
          v18 = -1073741811LL;
          WdLogSingleEntry3(2LL, -1073741811LL, this, i);
          v153 = 0LL;
          v106 = L"ret = 0x%I64x Context 0x%I64x Dest rect is outside of screen rect, index 0x%I64x";
          v152 = 0LL;
          v151 = i;
          WdLogGlobalForLineNumber = 3756;
          goto LABEL_167;
        }
      }
    }
    v90 = v161;
    if ( !v161 )
    {
      if ( v194 )
      {
        v91 = *(_QWORD *)(v194 + 48);
        if ( _bittest((const signed __int32 *)(*(_QWORD *)(*(_QWORD *)v200[0] + 48LL) + 4LL), 0xDu) )
        {
          if ( !_bittest((const signed __int32 *)(v91 + 4), 0xDu) )
            v164 = 1;
        }
        else
        {
          v92 = v164;
          if ( _bittest((const signed __int32 *)(v91 + 4), 0xDu) )
            v92 = 1;
          v164 = v92;
        }
      }
      v93 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
      if ( (pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left != v93
         || pPlaneAttributes->DstRect.bottom - pPlaneAttributes->DstRect.top != pPlaneAttributes->SrcRect.bottom
                                                                              - pPlaneAttributes->SrcRect.top)
        && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1880LL) + 2970LL) )
      {
        v186[0] = pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top;
        v159 = 1;
        v168 = v93;
      }
      v90 = 0;
    }
    if ( v158 )
    {
      v140 = pPlaneAttributes->DstRect.left;
      if ( v140 != pPlaneAttributes->SrcRect.left
        || pPlaneAttributes->DstRect.right != pPlaneAttributes->SrcRect.right
        || pPlaneAttributes->DstRect.top != pPlaneAttributes->SrcRect.top
        || pPlaneAttributes->DstRect.bottom != pPlaneAttributes->SrcRect.bottom
        || v140 != pPlaneAttributes->ClipRect.left
        || pPlaneAttributes->DstRect.right != pPlaneAttributes->ClipRect.right
        || pPlaneAttributes->DstRect.top != pPlaneAttributes->ClipRect.top
        || pPlaneAttributes->DstRect.bottom != pPlaneAttributes->ClipRect.bottom )
      {
        v18 = -1073741811LL;
        WdLogSingleEntry2(2LL, -1073741811LL, this);
        WdLogGlobalForLineNumber = 3796;
        v153 = 0LL;
        v106 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and Source/Dest/Clip rect"
                "s are not identical";
        v152 = 0LL;
        v151 = 0LL;
        goto LABEL_167;
      }
      v141 = v169->pPlaneAttributes;
      if ( v141->Rotation != D3DDDI_ROTATION_IDENTITY )
      {
        v18 = -1073741811LL;
        WdLogSingleEntry3(2LL, -1073741811LL, this, (unsigned int)v141->Rotation);
        v153 = 0LL;
        v106 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and rotation 0x%I64x is specified";
        v152 = 0LL;
        WdLogGlobalForLineNumber = 3805;
        v151 = (unsigned int)v169->pPlaneAttributes->Rotation;
        goto LABEL_167;
      }
      _mm_lfence();
      if ( v174 != ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v200[0] + v90) + 48LL) + 4LL) >> 6) & 0xF) )
      {
        _mm_lfence();
        v142 = v90;
        v18 = -1073741811LL;
        WdLogSingleEntry4(
          2LL,
          -1073741811LL,
          this,
          v174,
          (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v200[0] + v90) + 48LL) + 4LL) >> 6) & 0xF);
        v106 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and VidPnSourceId (0x%I64"
                "x) doesn't match the surface VidPnSOurceId (0x%I64x)";
        WdLogGlobalForLineNumber = 3814;
        v153 = 0LL;
        v152 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v200[0] + v142) + 48LL) + 4LL) >> 6) & 0xF;
        v151 = v174;
        goto LABEL_167;
      }
    }
LABEL_147:
    v94 = v169;
    if ( (v169->InputFlags.Value & 1) != 0 || v163 )
    {
      FlipInterval = v169->FlipInterval;
      if ( FlipInterval )
      {
        if ( FlipInterval != D3DDDI_FLIPINTERVAL_ONE )
        {
          LODWORD(v18) = -1073741811;
          WdLogSingleEntry3(3LL, this, v169->FlipInterval, -1073741811LL);
          WdLogGlobalForLineNumber = 3852;
          goto LABEL_31;
        }
        v178 = 1;
      }
      v94 = v169;
    }
    if ( bTracingEnabled )
    {
      v96 = v94->pPlaneAttributes;
      v97 = a2->HDRMetaDataType;
      v184 = v97;
      ColorSpace = v96->ColorSpace;
      Blend = v96->Blend;
      SDRWhiteLevel = v96->SDRWhiteLevel;
      v162 = v96->Rotation;
      LODWORD(v187) = v96->Flags;
      v181 = ColorSpace;
      v177 = Blend;
      v101 = *v94->pAllocationList;
      if ( (_DWORD)v101 )
      {
        v102 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                 *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                 *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                 v101);
        LOBYTE(v97) = v184;
        v103 = v102;
        LOBYTE(ColorSpace) = v181;
        LOBYTE(Blend) = v177;
        v94 = v169;
      }
      else
      {
        v103 = 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer(
          v94->InputFlags.Value & 1,
          v103,
          v101,
          v174,
          v169->LayerIndex,
          *(_BYTE *)&v94->InputFlags.0 & 1,
          v103,
          v187,
          v96->SrcRect.left,
          v96->SrcRect.right,
          v96->SrcRect.top,
          v96->SrcRect.bottom,
          v96->DstRect.left,
          v96->DstRect.right,
          v96->DstRect.top,
          v96->DstRect.bottom,
          v96->ClipRect.left,
          v96->ClipRect.right,
          v96->ClipRect.top,
          v96->ClipRect.bottom,
          v162,
          Blend,
          v154,
          ColorSpace,
          v97,
          SDRWhiteLevel);
    }
  }
  v133 = (unsigned int)LayerIndex;
  if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(*((DXGDEVICE **)this + 2), v72) )
  {
    _mm_lfence();
    if ( !(unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                             *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                             *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                             *(struct VIDMM_MULTI_ALLOC **)(*((_QWORD *)v200[0] + v133) + 24LL)) )
    {
      _mm_lfence();
      MicrosoftTelemetryAssertTriggeredArgsMsgKM(
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3004LL),
        0,
        (__int64)"DFlip allocation unpinned");
      v134 = VIDMM_EXPORT::VidMmPinAllocation(
               *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
               *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
               *(struct VIDMM_MULTI_ALLOC **)(*((_QWORD *)v200[0] + v161) + 24LL),
               0LL,
               0LL,
               0LL,
               0LL);
      if ( v134 < 0 )
      {
        _mm_lfence();
        WdLogSingleEntry4(
          4LL,
          *((_QWORD *)v200[0] + v161),
          *(_QWORD *)(*((_QWORD *)v200[0] + v161) + 48LL),
          *v57->pAllocationList,
          v134);
        WdLogGlobalForLineNumber = 3549;
        goto LABEL_290;
      }
    }
    LayerIndex = v161;
    goto LABEL_102;
  }
  _mm_lfence();
  WdLogSingleEntry5(
    4LL,
    -1071775739LL,
    this,
    *((_QWORD *)v200[0] + v133),
    *(_QWORD *)(*((_QWORD *)v200[0] + v133) + 48LL),
    *v57->pAllocationList);
  WdLogGlobalForLineNumber = 3518;
LABEL_290:
  LODWORD(v18) = -1071775720;
LABEL_31:
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 *)v200);
  return (unsigned int)v18;
}
