/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14036F49C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1401B93C8 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1401B9584 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x14036E2F0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1403CE770 (DxgkCheckSinglePlaneForMultiPlaneOverlaySupport.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x140042784 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x140196FFC (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1402F54D0 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1402FE24C (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1402FF318 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1402FFD48 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140373298 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x14038B048 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x140393D94 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1403E3548 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140410868 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport3(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        bool a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  int v8; // r13d
  __int64 v11; // r12
  __int64 v12; // rbx
  ADAPTER_RENDER *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v21; // ecx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // r15
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v25; // r14
  __int64 v26; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v27; // rbx
  unsigned int Rotation; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 VidPnSourceId; // rdx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v35; // r13
  D3DKMT_HANDLE hResource; // ebx
  unsigned int v37; // eax
  __int64 v38; // r8
  int v39; // ecx
  struct _EX_RUNDOWN_REF *v40; // rdx
  int v41; // r9d
  struct _EX_RUNDOWN_REF *i; // rcx
  DXGDEVICE *Count; // r8
  __int64 v44; // rbx
  __int64 v45; // r9
  void **v46; // r14
  __int64 v47; // rdx
  unsigned __int64 v48; // r8
  __int64 v49; // rdx
  __int64 LayerIndex; // rdx
  __int64 v51; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  void *v53; // rax
  ADAPTER_RENDER *v54; // rcx
  int v55; // eax
  int *v56; // rdx
  unsigned int v57; // r14d
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v58; // rcx
  __int64 v59; // rdx
  DXGADAPTER *v60; // rcx
  int ColorSpace; // ecx
  unsigned int v62; // ecx
  int v63; // eax
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  UINT SDRWhiteLevel; // ecx
  __int64 v70; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v71; // ecx
  int v72; // r13d
  char v73; // bl
  char v74; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v75; // r12
  __int64 v76; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  DISPLAY_SOURCE *v80; // rdi
  const struct DXGALLOCATION **v81; // r12
  char *v82; // r13
  __int64 v83; // rbx
  const wchar_t *v84; // r9
  __int64 v85; // rbx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  DISPLAY_SOURCE *v89; // rdi
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v90; // r9
  int *v91; // rbx
  unsigned int v92; // r9d
  __int128 *v93; // r10
  unsigned int v94; // ecx
  struct _EX_RUNDOWN_REF **v95; // rdi
  __int64 v96; // rbx
  int v97; // [rsp+60h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v99; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v100; // [rsp+78h] [rbp-88h]
  unsigned int v101; // [rsp+7Ch] [rbp-84h]
  __int64 v102; // [rsp+80h] [rbp-80h]
  unsigned int v103; // [rsp+88h] [rbp-78h]
  int IsEnabledDeviceUsageNoInline; // [rsp+8Ch] [rbp-74h]
  __int64 v105; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v106; // [rsp+98h] [rbp-68h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v107; // [rsp+A0h] [rbp-60h]
  void **v108; // [rsp+A8h] [rbp-58h]
  int *v109; // [rsp+B0h] [rbp-50h]
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v111[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v112; // [rsp+D8h] [rbp-28h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v113; // [rsp+E0h] [rbp-20h]
  _BYTE v114[16]; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v115; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v116[24]; // [rsp+100h] [rbp+0h] BYREF
  int v117; // [rsp+118h] [rbp+18h]
  _BYTE v118[16]; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v119; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v120[512]; // [rsp+160h] [rbp+60h]
  __int128 v121; // [rsp+360h] [rbp+260h] BYREF

  v106 = a5;
  LODWORD(v11) = 0;
  v12 = a2;
  v113 = a8;
  v103 = a4;
  *a7 = 0;
  a8->Value = 0;
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v107 = a3;
  v109 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
  {
    WdLogSingleEntry1(3LL, 0LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 11246;
    return result;
  }
  v115 = 0LL;
  v117 = 0;
  v105 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&v115, (unsigned int)v12);
  if ( !v105 )
  {
    CurrentProcess = PsGetCurrentProcess(v15);
    WdLogSingleEntry3(3LL, v12, -1073741801LL, CurrentProcess);
    WdLogGlobalForLineNumber = 11258;
LABEL_10:
    if ( v115 != v116 )
    {
      if ( v115 )
        ExFreePoolWithTag(v115, 0);
    }
    return 3221225495LL;
  }
  P = 0LL;
  v112 = 0;
  v108 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                    &P,
                    (unsigned int)v12);
  if ( !v108 )
  {
    v18 = PsGetCurrentProcess(v17);
    WdLogSingleEntry3(3LL, v12, -1073741801LL, v18);
    WdLogGlobalForLineNumber = 11270;
    if ( P != v111 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v112 = 0;
    goto LABEL_10;
  }
  LOBYTE(v8) = 1;
  v97 = v8;
  if ( *((_DWORD *)this + 476) > 0x10u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11279;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetNumVidPnSources() <= D3DKMDT_MAX_VIDPN_SOURCES",
      11279LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = 0;
  if ( *((_DWORD *)this + 476) )
  {
    while ( v19 < 0x10 )
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 237) + 3120LL),
                          v19);
      if ( !DisplayModeInfo )
      {
        WdLogSingleEntry2(2LL, this, v19);
        WdLogGlobalForLineNumber = 11288;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Context 0x%I64x: CheckMultiplaneOverlaySupport3 failed to obtain display mode, VidPnSourceId 0x%I64x",
          (__int64)this,
          v19,
          0LL,
          0LL,
          0LL);
        LOBYTE(v8) = 0;
        v97 = v8;
        break;
      }
      v21 = *(_DWORD *)DisplayModeInfo;
      v22 = 2LL * v19;
      v23 = *((_DWORD *)DisplayModeInfo + 1);
      ++v19;
      *(_QWORD *)&v120[8 * v22] = 0LL;
      *(_DWORD *)&v120[8 * v22 + 8] = v21;
      *(_DWORD *)&v120[8 * v22 + 12] = v23;
      *(_OWORD *)&v120[8 * v22 + 256] = *(_OWORD *)&v120[8 * v22];
      if ( v19 >= *((_DWORD *)this + 476) )
        break;
    }
  }
  v101 = -1;
  v24 = 0LL;
  if ( a4 )
  {
    v25 = v106;
    LOBYTE(v8) = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
               ? v8
               : 0;
    v97 = v8;
    while ( 1 )
    {
      if ( (int)v11 < 0 )
        goto LABEL_47;
      v27 = *v25;
      if ( (*v25)->PostComposition.SrcRect.left >= (*v25)->PostComposition.SrcRect.right
        || v27->PostComposition.SrcRect.top >= v27->PostComposition.SrcRect.bottom
        || v27->PostComposition.DstRect.left >= v27->PostComposition.DstRect.right
        || v27->PostComposition.DstRect.top >= v27->PostComposition.DstRect.bottom )
      {
        break;
      }
      Rotation = v27->PostComposition.Rotation;
      if ( Rotation )
      {
        v29 = Rotation - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            if ( v30 - 1 < 2 )
            {
              LOBYTE(v8) = 0;
              v97 = v8;
            }
            else
            {
              WdLogSingleEntry2(3LL, v27->PostComposition.Rotation, v26);
              v26 = -1073741811LL;
              WdLogGlobalForLineNumber = 11332;
              LODWORD(v11) = -1073741811;
            }
          }
        }
      }
      if ( v27->PostComposition.Flags.Value )
        goto LABEL_45;
      VidPnSourceId = v27->VidPnSourceId;
      if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 476) )
      {
        WdLogSingleEntry2(3LL, VidPnSourceId, 0LL);
        WdLogGlobalForLineNumber = 11346;
        goto LABEL_45;
      }
      v32 = 2 * VidPnSourceId;
      if ( *(_DWORD *)&v120[8 * v32] > v27->PostComposition.DstRect.left
        || *(_DWORD *)&v120[8 * v32 + 8] < v27->PostComposition.DstRect.right
        || *(_DWORD *)&v120[8 * v32 + 4] > v27->PostComposition.DstRect.top
        || *(_DWORD *)&v120[8 * v32 + 12] < v27->PostComposition.DstRect.bottom )
      {
        WdLogSingleEntry2(3LL, this, v26);
        WdLogGlobalForLineNumber = 11354;
LABEL_45:
        v24 = 0LL;
        LOBYTE(v8) = 0;
        v97 = v8;
        goto LABEL_48;
      }
      LODWORD(v24) = v24 + 1;
      ++v25;
      *(RECT *)&v120[8 * v32 + 256] = v27->PostComposition.SrcRect;
      if ( (unsigned int)v24 >= v103 )
        goto LABEL_47;
    }
    WdLogSingleEntry1(3LL, v26);
    WdLogGlobalForLineNumber = 11313;
    LODWORD(v11) = -1073741811;
LABEL_47:
    v24 = 0LL;
  }
LABEL_48:
  IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
  v100 = 0;
  if ( !a2 )
  {
LABEL_136:
    v73 = v97;
    goto LABEL_137;
  }
  v33 = 0LL;
  v102 = 0LL;
  while ( 1 )
  {
    if ( (int)v11 < 0 )
      goto LABEL_136;
    v34 = *((_QWORD *)this + 5);
    v35 = v107[v33];
    hResource = v35->hResource;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v34 + 248));
    v37 = (hResource >> 6) & 0xFFFFFF;
    if ( v37 >= *(_DWORD *)(v34 + 296) )
      goto LABEL_58;
    v38 = *(_QWORD *)(v34 + 280);
    if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v38 + 16LL * v37 + 8) & 0x60) )
      goto LABEL_58;
    if ( (*(_DWORD *)(v38 + 16LL * v37 + 8) & 0x2000) != 0 )
      goto LABEL_58;
    v39 = *(_DWORD *)(v38 + 16LL * v37 + 8) & 0x1F;
    if ( !v39 )
      goto LABEL_58;
    if ( v39 != 4 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_58:
      v40 = 0LL;
      goto LABEL_59;
    }
    v40 = *(struct _EX_RUNDOWN_REF **)(v38 + 16LL * v37);
LABEL_59:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v99, v40);
    _InterlockedDecrement((volatile signed __int32 *)(v34 + 264));
    ExReleasePushLockSharedEx(v34 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v99 )
      break;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v118, (struct DXGFASTMUTEX *const)&v99[10], 0);
    v41 = IsEnabledDeviceUsageNoInline;
    if ( IsEnabledDeviceUsageNoInline )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v118);
      v41 = IsEnabledDeviceUsageNoInline;
    }
    for ( i = (struct _EX_RUNDOWN_REF *)v99[3].Count; ; i = (struct _EX_RUNDOWN_REF *)i[8].Count )
    {
      if ( !i )
        goto LABEL_71;
      Count = (DXGDEVICE *)i[1].Count;
      if ( Count != this )
      {
        WdLogSingleEntry4(3LL, v35->hResource, Count, this, -1073741811LL);
        WdLogGlobalForLineNumber = 11391;
LABEL_71:
        v44 = v102;
        goto LABEL_72;
      }
      if ( (*(_DWORD *)(i[6].Count + 4) & 0x200B) != 0 )
        break;
    }
    v44 = v102;
    v24 = i[6].Count;
    *(_QWORD *)(v105 + 8 * v102) = i;
    if ( v41 )
      DxgkReferenceDxgAllocation(i);
LABEL_72:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v118);
    v45 = 0LL;
    if ( !v24 )
      break;
    v46 = v108;
    v108[v44] = *(void **)(v24 + 16);
    v47 = v35->VidPnSourceId;
    if ( (unsigned int)v47 >= *((_DWORD *)this + 476) )
    {
      WdLogSingleEntry2(3LL, v47, 0LL);
      WdLogGlobalForLineNumber = 11425;
      goto LABEL_156;
    }
    v48 = *(unsigned int *)(v24 + 4);
    if ( (_DWORD)v47 != ((*(_DWORD *)(v24 + 4) >> 6) & 0xF)
      && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      WdLogSingleEntry3(3LL, v49, (v48 >> 6) & 0xF, v45);
      WdLogGlobalForLineNumber = 11436;
      goto LABEL_156;
    }
    LayerIndex = v35->LayerIndex;
    v51 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( (unsigned int)LayerIndex >= *(_DWORD *)(v51 + 2944) )
    {
      WdLogSingleEntry3(3LL, LayerIndex, *(unsigned int *)(v51 + 2944), v45);
      WdLogGlobalForLineNumber = 11447;
      goto LABEL_156;
    }
    if ( a6 != (_BYTE)v45 && *((_DWORD *)this + 477) == (_DWORD)v45 )
    {
      LODWORD(v11) = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
      WdLogGlobalForLineNumber = 11458;
LABEL_148:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v99);
      LODWORD(v24) = 0;
      goto LABEL_136;
    }
    pPlaneAttributes = v35->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
      || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
      || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
      || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
      || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 11469;
      LODWORD(v11) = -1073741811;
      goto LABEL_148;
    }
    v53 = v46[v44];
    v54 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    memset(&v119.Width, 0, 40);
    v119.hAllocation = v53;
    v55 = ADAPTER_RENDER::DdiDescribeAllocation(v54, &v119, v48);
    v11 = v55;
    if ( v55 < 0 )
    {
      v85 = v100;
      WdLogSingleEntry4(2LL, v55, this, v46[v100], v24);
      WdLogGlobalForLineNumber = 11483;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
        v11,
        (__int64)this,
        (__int64)v46[v85],
        v24,
        0LL);
      goto LABEL_148;
    }
    v56 = (int *)v35->pPlaneAttributes;
    v24 = 0LL;
    if ( v56[1] < 0 || (int)v119.Width < v56[3] || v56[2] < 0 || (int)v119.Height < v56[4] )
    {
      v83 = v100;
      WdLogSingleEntry3(2LL, -1073741811LL, this, v100);
      v84 = L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x";
      WdLogGlobalForLineNumber = 11495;
      goto LABEL_150;
    }
    if ( *(_DWORD *)&v120[16 * v35->VidPnSourceId + 256] <= v56[9]
      && *(_DWORD *)&v120[16 * v35->VidPnSourceId + 264] >= v56[11]
      && *(_DWORD *)&v120[16 * v35->VidPnSourceId + 260] <= v56[10]
      && *(_DWORD *)&v120[16 * v35->VidPnSourceId + 268] >= v56[12] )
    {
      LODWORD(v44) = v97;
      v57 = v100;
    }
    else
    {
      v57 = v100;
      WdLogSingleEntry3(3LL, 0LL, this, v100);
      LOBYTE(v44) = 0;
      WdLogGlobalForLineNumber = 11511;
      v97 = v44;
    }
    v58 = v35->pPlaneAttributes;
    if ( v58->DstRect.left > v58->ClipRect.left
      || v58->DstRect.right < v58->ClipRect.right
      || v58->DstRect.top > v58->ClipRect.top
      || v58->DstRect.bottom < v58->ClipRect.bottom )
    {
      v83 = v57;
      WdLogSingleEntry3(2LL, -1073741811LL, this, v57);
      v84 = L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x";
      WdLogGlobalForLineNumber = 11518;
LABEL_150:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v84, -1073741811LL, (__int64)this, v83, 0LL, 0LL);
      LODWORD(v11) = -1073741811;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v99);
      goto LABEL_136;
    }
    v59 = v58->Rotation;
    if ( (unsigned int)v59 >= 2 )
    {
      if ( (_DWORD)v59 == 2 || (unsigned int)(v59 - 3) < 2 )
      {
        LODWORD(v44) = (unsigned __int8)v44;
        if ( (**(_BYTE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3008LL) & 0x20) != 0 )
          LODWORD(v44) = 0;
        v97 = v44;
      }
      else
      {
        WdLogSingleEntry2(3LL, v59, -1073741811LL);
        WdLogGlobalForLineNumber = 11540;
        LODWORD(v11) = -1073741811;
      }
    }
    if ( v35->pPlaneAttributes->StretchQuality != DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR
      && v35->pPlaneAttributes->StretchQuality != DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 11551;
      LODWORD(v11) = -1073741811;
    }
    v60 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
    if ( !*((_QWORD *)v60 + 124) && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(v60) )
    {
      ColorSpace = v35->pPlaneAttributes->ColorSpace;
      if ( ColorSpace > 12 )
      {
        v64 = ColorSpace - 13;
        if ( v64 )
        {
          v65 = v64 - 1;
          if ( v65 )
          {
            v66 = v65 - 1;
            if ( v66 )
            {
              v67 = v66 - 1;
              if ( v67 )
              {
                v68 = v67 - 1;
                if ( v68 )
                {
                  if ( (unsigned int)(v68 - 1) > 1 )
                    goto LABEL_123;
                }
              }
            }
          }
        }
      }
      else
      {
        v62 = ColorSpace + 1;
        if ( v62 > 0xD )
          goto LABEL_123;
        v63 = 14429;
        if ( !_bittest(&v63, v62) )
          goto LABEL_123;
      }
      LOBYTE(v44) = 0;
      v97 = v44;
    }
LABEL_123:
    SDRWhiteLevel = v35->pPlaneAttributes->SDRWhiteLevel;
    if ( SDRWhiteLevel )
    {
      if ( SDRWhiteLevel != 80 )
      {
        v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( (*(_DWORD *)(v70 + 444) & 0x200) == 0 )
        {
          LODWORD(v44) = (unsigned __int8)v44;
          if ( *(int *)(v70 + 2736) < 8960 )
            LODWORD(v44) = 0;
          v97 = v44;
        }
      }
    }
    if ( !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      v71 = v35->VidPnSourceId;
      if ( v101 == -1 )
      {
        v101 = v35->VidPnSourceId;
        v24 = 0LL;
      }
      else
      {
        v72 = (unsigned __int8)v44;
        v24 = 0LL;
        if ( v101 != v71 )
          v72 = 0;
        v97 = v72;
      }
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v99);
    v33 = v102 + 1;
    v100 = v57 + 1;
    ++v102;
    if ( v57 + 1 >= a2 )
      goto LABEL_136;
  }
  WdLogSingleEntry2(3LL, v35->hResource, -1073741811LL);
  WdLogGlobalForLineNumber = 11415;
LABEL_156:
  LODWORD(v24) = 0;
  v73 = 0;
  LOBYTE(v97) = 0;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v99);
LABEL_137:
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v114,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 237) + 3120LL) + 624LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v114);
  if ( (int)v11 >= 0 && v73 )
  {
    v101 = 0;
    v74 = 0;
    v121 = 0LL;
    if ( v103 )
    {
      v75 = v106;
      v76 = v103;
      v74 = 0;
      do
      {
        v77 = *v75;
        v78 = (*v75)->VidPnSourceId;
        v79 = *(_QWORD *)(*((_QWORD *)this + 237) + 3120LL);
        v80 = (DISPLAY_SOURCE *)(*(_QWORD *)(v79 + 128) + 4024 * v78);
        if ( !*((_BYTE *)&v121 + v78) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v79 + 128) + 4024 * v78));
          LODWORD(v24) = v77->VidPnSourceId;
          *((_BYTE *)&v121 + v77->VidPnSourceId) = 1;
        }
        DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
          v80,
          &v77->PostComposition.SrcRect,
          &v77->PostComposition.DstRect);
        ++v75;
        --v76;
      }
      while ( v76 );
    }
    if ( a2 )
    {
      v81 = (const struct DXGALLOCATION **)v105;
      v82 = (char *)v107 - v105;
      v102 = a2;
      do
      {
        v86 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)&v82[(_QWORD)v81];
        if ( !v74 && !a6 && (v86->pPlaneAttributes->Flags & 4) != 0 )
        {
          v74 = 1;
          v101 = v86->LayerIndex;
        }
        v87 = v86->VidPnSourceId;
        v88 = *(_QWORD *)(*((_QWORD *)this + 237) + 3120LL);
        v89 = (DISPLAY_SOURCE *)(*(_QWORD *)(v88 + 128) + 4024 * v87);
        if ( !*((_BYTE *)&v121 + v87) )
        {
          if ( !v74 )
            DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v88 + 128) + 4024 * v87));
          LODWORD(v24) = v86->VidPnSourceId;
          *((_BYTE *)&v121 + (unsigned int)v24) = 1;
        }
        if ( v74 || !DXGDEVICE::UseCachedIndependentFlipParameters(this, v89, v86) )
        {
          v90 = v86->pPlaneAttributes;
          DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
            v89,
            v86->LayerIndex,
            *v81,
            v90->Flags,
            &v90->SrcRect,
            &v90->DstRect,
            &v90->ClipRect,
            v90->Rotation,
            v90->Blend,
            v90->ColorSpace,
            v90->SDRWhiteLevel);
        }
        else
        {
          DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v89, v86->LayerIndex);
        }
        ++v81;
        --v102;
      }
      while ( v102 );
    }
    v91 = v109;
    LODWORD(v11) = CheckMultiPlaneOverlayInternal3(
                     v24,
                     *((struct ADAPTER_RENDER **)this + 2),
                     *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 237) + 3120LL),
                     v109,
                     v113);
    if ( v74 )
    {
      DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(
        (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 237) + 3120LL) + 128LL)
                         + 4024LL * (unsigned int)v24),
        v101);
    }
    else if ( !*v91 )
    {
      v92 = 0;
      v93 = &v121;
      do
      {
        if ( *(_BYTE *)v93 )
          DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 237)
                                                                                            + 3120LL)
                                                                                + 128LL)
                                                                    + 4024LL * v92));
        ++v92;
        v93 = (__int128 *)((char *)v93 + 1);
      }
      while ( v92 < 0x10 );
    }
  }
  if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
  {
    v94 = a2;
    if ( a2 )
    {
      v95 = (struct _EX_RUNDOWN_REF **)v105;
      v96 = a2;
      do
      {
        if ( *v95 )
          ExReleaseRundownProtection(*v95 + 11);
        ++v95;
        --v96;
      }
      while ( v96 );
      goto LABEL_184;
    }
  }
  else
  {
LABEL_184:
    v94 = a2;
  }
  if ( (int)v11 < 0 || !(_BYTE)v97 )
    LogCheckMutiplaneOverlaySupport(
      (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(unsigned int)v11,
      (unsigned int)*v109,
      v94,
      v107,
      v108,
      v103,
      v106,
      *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v114);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v114);
  if ( P != v111 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v112 = 0;
  if ( v115 != v116 && v115 )
    ExFreePoolWithTag(v115, 0);
  return (unsigned int)v11;
}
