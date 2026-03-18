/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A098C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1401B6E18 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1401B6FD4 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x14029F3B0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1403D66D0 (DxgkCheckSinglePlaneForMultiPlaneOverlaySupport.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x140042CC4 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x140194C7C (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1402A064C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1402A06B4 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1402A1CA8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A1D1C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1402A3004 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1403142D4 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1403EA414 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
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
  unsigned int v9; // edi
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  _BYTE *Pool2; // rax
  _BYTE *v17; // rax
  char v18; // r12
  __int64 v19; // rsi
  int *v20; // rcx
  int v21; // eax
  __int64 v22; // rbx
  int v23; // ecx
  __int64 v24; // rdi
  unsigned int i; // ebx
  __int64 v26; // rdi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v27; // r13
  D3DKMT_HANDLE hResource; // ebx
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  struct DXGRESOURCE *v32; // rdx
  _QWORD *Count; // rcx
  DXGDEVICE *v34; // r8
  int v35; // r10d
  void **v36; // r9
  __int64 v37; // rdx
  __int64 LayerIndex; // rdx
  __int64 v39; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  void *v41; // rcx
  int v42; // eax
  int *v43; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  UINT v47; // ecx
  __int64 v48; // rcx
  void **v49; // r13
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // r12d
  char v53; // r13
  unsigned int v54; // esi
  char *v55; // rdx
  signed __int64 v56; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v61; // rsi
  __int64 v62; // rdi
  UINT SDRWhiteLevel; // r9d
  __int64 v64; // r11
  __int64 v65; // rax
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // r10d
  int Blend; // edx
  D3DDDI_ROTATION v68; // r8d
  UINT Flags; // r15d
  int v70; // eax
  RECT ClipRect; // xmm0
  bool v72; // zf
  int *v73; // rdi
  __int64 result; // rax
  __int64 v75; // r11
  __int128 *v76; // r10
  __int64 v77; // rbx
  unsigned int v78; // edx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // r8
  int v83; // ecx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v84; // rsi
  __int64 v85; // r15
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  DISPLAY_SOURCE *v89; // rdi
  unsigned int v90; // edx
  __int64 v91; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v92; // rbx
  D3DDDI_ROTATION Rotation; // eax
  __int32 v94; // eax
  __int32 v95; // eax
  __int64 VidPnSourceId; // rdx
  __int64 v97; // rdx
  const wchar_t *v98; // r9
  __int64 v99; // rcx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  __int64 v105; // rax
  __int64 CurrentProcess; // rax
  char v107; // [rsp+50h] [rbp-B0h]
  unsigned int v108; // [rsp+54h] [rbp-ACh]
  unsigned int v109; // [rsp+54h] [rbp-ACh]
  struct _EX_RUNDOWN_REF *v110; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v111; // [rsp+60h] [rbp-A0h]
  int v112; // [rsp+64h] [rbp-9Ch]
  unsigned int v113; // [rsp+68h] [rbp-98h]
  char *v114; // [rsp+70h] [rbp-90h]
  void **v115; // [rsp+78h] [rbp-88h]
  D3DDDI_ROTATION v116; // [rsp+80h] [rbp-80h]
  UINT v117; // [rsp+84h] [rbp-7Ch]
  D3DDDI_COLOR_SPACE_TYPE v118; // [rsp+88h] [rbp-78h]
  int *v119; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v120; // [rsp+98h] [rbp-68h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v121; // [rsp+A0h] [rbp-60h]
  PVOID P; // [rsp+A8h] [rbp-58h]
  _BYTE v123[24]; // [rsp+B0h] [rbp-50h] BYREF
  int v124; // [rsp+C8h] [rbp-38h]
  __int64 v125; // [rsp+D0h] [rbp-30h]
  __int64 v126; // [rsp+D8h] [rbp-28h] BYREF
  char v127; // [rsp+E0h] [rbp-20h]
  PVOID v128; // [rsp+E8h] [rbp-18h]
  _BYTE v129[24]; // [rsp+F0h] [rbp-10h] BYREF
  int v130; // [rsp+108h] [rbp+8h]
  __int64 v131; // [rsp+110h] [rbp+10h]
  char *v132; // [rsp+118h] [rbp+18h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v133; // [rsp+120h] [rbp+20h]
  struct _DXGKARG_DESCRIBEALLOCATION v134; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v135[512]; // [rsp+160h] [rbp+60h]
  __int128 v136; // [rsp+360h] [rbp+260h] BYREF

  v9 = 0;
  v120 = a5;
  LODWORD(v10) = 0;
  v11 = a2;
  v133 = a8;
  v111 = a4;
  *a7 = 0;
  a8->Value = 0;
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v121 = a3;
  v113 = a2;
  v119 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v12) )
  {
    WdLogSingleEntry1(3LL, 0LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 10966;
    return result;
  }
  v128 = 0LL;
  v130 = 0;
  if ( (unsigned int)v11 > 3 )
  {
    v15 = (unsigned int)v11;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
      goto LABEL_207;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v11, 1265072196LL, v14);
    v128 = Pool2;
    goto LABEL_5;
  }
  Pool2 = v129;
  v114 = v129;
  v128 = v129;
  if ( (_DWORD)v11 )
  {
    memset(v129, 0, 8 * v11);
    Pool2 = v128;
LABEL_5:
    v114 = Pool2;
  }
  v130 = v11;
  v15 = v11;
  if ( Pool2 )
  {
    P = 0LL;
    v124 = 0;
    if ( (unsigned int)v11 <= 3 )
    {
      v17 = v123;
      v115 = (void **)v123;
      P = v123;
      if ( !(_DWORD)v11 )
      {
LABEL_11:
        v124 = v11;
        if ( v17 )
        {
          v18 = 1;
          if ( *((_DWORD *)this + 472) > 0x10u )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 10999;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"GetNumVidPnSources() <= D3DKMDT_MAX_VIDPN_SOURCES",
              10999LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          while ( 1 )
          {
            if ( v9 >= *((_DWORD *)this + 472) || v9 >= 0x10 )
              goto LABEL_21;
            v19 = *(_QWORD *)(*((_QWORD *)this + 235) + 3120LL);
            if ( v9 >= *(_DWORD *)(v19 + 96) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5828;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"VidPnSourceId < m_NumVidPnSources",
                5828LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v20 = (int *)(*(_QWORD *)(v19 + 128) + 992LL + 3984LL * v9);
            if ( !v20 )
              break;
            v21 = *v20;
            v22 = 2LL * v9;
            v23 = v20[1];
            ++v9;
            *(_QWORD *)&v135[8 * v22] = 0LL;
            *(_DWORD *)&v135[8 * v22 + 8] = v21;
            *(_DWORD *)&v135[8 * v22 + 12] = v23;
            *(_OWORD *)&v135[8 * v22 + 256] = *(_OWORD *)&v135[8 * v22];
          }
          WdLogSingleEntry2(2LL, this, v9);
          WdLogGlobalForLineNumber = 11008;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Context 0x%I64x: CheckMultiplaneOverlaySupport3 failed to obtain display mode, VidPnSourceId 0x%I64x",
            (__int64)this,
            v9,
            0LL,
            0LL,
            0LL);
          v18 = 0;
LABEL_21:
          v112 = -1;
          v24 = 0LL;
          if ( !v111 )
            goto LABEL_22;
          v18 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
              ? v18
              : 0;
          while ( 1 )
          {
            if ( (unsigned int)v24 >= v90 || (int)v10 < 0 )
              goto LABEL_173;
            v92 = v120[(unsigned int)v24];
            if ( v92->PostComposition.SrcRect.left >= v92->PostComposition.SrcRect.right
              || v92->PostComposition.SrcRect.top >= v92->PostComposition.SrcRect.bottom
              || v92->PostComposition.DstRect.left >= v92->PostComposition.DstRect.right
              || v92->PostComposition.DstRect.top >= v92->PostComposition.DstRect.bottom )
            {
              break;
            }
            Rotation = v92->PostComposition.Rotation;
            if ( Rotation )
            {
              v94 = Rotation - 1;
              if ( v94 )
              {
                v95 = v94 - 1;
                if ( v95 )
                {
                  if ( (unsigned int)(v95 - 1) < 2 )
                  {
                    v18 = 0;
                  }
                  else
                  {
                    WdLogSingleEntry2(3LL, v92->PostComposition.Rotation, v91);
                    v91 = -1073741811LL;
                    WdLogGlobalForLineNumber = 11052;
                    LODWORD(v10) = -1073741811;
                  }
                }
              }
            }
            if ( v92->PostComposition.Flags.Value )
              goto LABEL_206;
            VidPnSourceId = v92->VidPnSourceId;
            if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 472) )
            {
              WdLogSingleEntry2(3LL, VidPnSourceId, 0LL);
              WdLogGlobalForLineNumber = 11066;
LABEL_206:
              v24 = 0LL;
              v18 = 0;
LABEL_22:
              for ( i = 0; ; i = v108 + 1 )
              {
                v108 = i;
                if ( i >= (unsigned int)v11 || (int)v10 < 0 )
                  goto LABEL_76;
                v26 = *((_QWORD *)this + 5);
                v27 = v121[i];
                hResource = v27->hResource;
                DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v26 + 248));
                v29 = (hResource >> 6) & 0xFFFFFF;
                if ( (unsigned int)v29 < *(_DWORD *)(v26 + 296)
                  && (v30 = *(_QWORD *)(v26 + 280),
                      v31 = *(_DWORD *)(v30 + 16 * v29 + 8),
                      ((hResource >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60))
                  && (v31 & 0x2000) == 0
                  && (v31 & 0x1F) != 0 )
                {
                  if ( (*(_BYTE *)(v30 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4 )
                  {
                    v32 = *(struct DXGRESOURCE **)(v30 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF));
                  }
                  else
                  {
                    WdLogSingleEntry0(2LL);
                    WdLogGlobalForLineNumber = 318;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"Handle type mismatch",
                      318LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v32 = 0LL;
                  }
                }
                else
                {
                  v32 = 0LL;
                }
                DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v110, v32);
                _InterlockedDecrement((volatile signed __int32 *)(v26 + 264));
                ExReleasePushLockSharedEx(v26 + 248, 0LL);
                KeLeaveCriticalRegion();
                v24 = 0LL;
                if ( !v110 )
                  goto LABEL_32;
                Count = (_QWORD *)v110[3].Count;
                while ( 1 )
                {
                  if ( !Count )
                    goto LABEL_32;
                  v34 = (DXGDEVICE *)Count[1];
                  if ( v34 != this )
                  {
                    WdLogSingleEntry4(3LL, v27->hResource, v34, this, -1073741811LL);
                    WdLogGlobalForLineNumber = 11103;
LABEL_32:
                    WdLogSingleEntry2(3LL, v27->hResource, -1073741811LL);
                    WdLogGlobalForLineNumber = 11123;
                    goto LABEL_33;
                  }
                  v24 = Count[6];
                  if ( (*(_DWORD *)(v24 + 4) & 0x200B) != 0 )
                    break;
                  Count = (_QWORD *)Count[8];
                  v24 = 0LL;
                }
                v35 = 0;
                *(_QWORD *)&v114[8 * v108] = Count;
                if ( !v24 )
                  goto LABEL_32;
                v36 = v115;
                v115[v108] = *(void **)(v24 + 16);
                v37 = v27->VidPnSourceId;
                if ( (unsigned int)v37 >= *((_DWORD *)this + 472) )
                {
                  WdLogSingleEntry2(3LL, v37, 0LL);
                  WdLogGlobalForLineNumber = 11133;
                  goto LABEL_221;
                }
                if ( (_DWORD)v37 != ((*(_DWORD *)(v24 + 4) >> 6) & 0xF)
                  && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
                {
                  WdLogSingleEntry3(3LL, v81, (v82 >> 6) & 0xF, 0LL);
                  WdLogGlobalForLineNumber = 11144;
                  goto LABEL_221;
                }
                LayerIndex = v27->LayerIndex;
                v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                if ( (unsigned int)LayerIndex >= *(_DWORD *)(v39 + 2944) )
                {
                  WdLogSingleEntry3(3LL, LayerIndex, *(unsigned int *)(v39 + 2944), 0LL);
                  WdLogGlobalForLineNumber = 11155;
LABEL_221:
                  v24 = 0LL;
LABEL_33:
                  v18 = v24;
                  goto LABEL_34;
                }
                if ( a6 != (_BYTE)v35 && *((_DWORD *)this + 473) == v35 )
                {
                  LODWORD(v10) = -1073741790;
                  WdLogSingleEntry1(3LL, -1073741790LL);
                  WdLogGlobalForLineNumber = 11166;
                  goto LABEL_75;
                }
                pPlaneAttributes = v27->pPlaneAttributes;
                if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
                  || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
                  || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
                  || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
                  || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
                  || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
                {
                  WdLogSingleEntry1(3LL, -1073741811LL);
                  WdLogGlobalForLineNumber = 11177;
                  LODWORD(v10) = -1073741811;
                  goto LABEL_75;
                }
                v41 = v36[v108];
                memset(&v134.Width, 0, 40);
                v134.hAllocation = v41;
                v42 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v134);
                v10 = v42;
                if ( v42 < 0 )
                {
                  v49 = v115;
                  WdLogSingleEntry4(2LL, v42, this, v115[v108], v24);
                  v50 = (__int64)v49[v108];
                  WdLogGlobalForLineNumber = 11191;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
                    v10,
                    (__int64)this,
                    v50,
                    v24,
                    0LL);
LABEL_75:
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v110);
                  v24 = 0LL;
                  goto LABEL_76;
                }
                v43 = (int *)v27->pPlaneAttributes;
                v24 = 0LL;
                if ( v43[1] < 0 || (int)v134.Width < v43[3] || v43[2] < 0 || (int)v134.Height < v43[4] )
                {
                  WdLogSingleEntry3(2LL, -1073741811LL, this, v108);
                  v98 = L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x";
                  WdLogGlobalForLineNumber = 11203;
LABEL_176:
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    v98,
                    -1073741811LL,
                    (__int64)this,
                    v108,
                    0LL,
                    0LL);
                  LODWORD(v10) = -1073741811;
LABEL_34:
                  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v110);
LABEL_76:
                  v51 = *(_QWORD *)(*((_QWORD *)this + 235) + 3120LL);
                  v127 = v24;
                  v126 = v51 + 616;
                  if ( v51 == -616 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 638;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"m_pMutex != NULL",
                      638LL,
                      v24,
                      v24,
                      v24,
                      v24);
                  }
                  if ( *(struct _KTHREAD **)(v126 + 24) == KeGetCurrentThread() )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 645;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"!m_pMutex->IsOwner()",
                      645LL,
                      v24,
                      v24,
                      v24,
                      v24);
                  }
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v126);
                  if ( (int)v10 >= 0 && v18 )
                  {
                    v107 = v24;
                    v52 = v24;
                    v109 = v24;
                    v53 = v24;
                    v54 = v24;
                    v136 = 0LL;
                    if ( v111 )
                    {
                      v84 = v120;
                      v85 = v111;
                      do
                      {
                        v86 = *v84;
                        v87 = (*v84)->VidPnSourceId;
                        v88 = *(_QWORD *)(*((_QWORD *)this + 235) + 3120LL);
                        v89 = (DISPLAY_SOURCE *)(*(_QWORD *)(v88 + 128) + 3984 * v87);
                        if ( !*((_BYTE *)&v136 + v87) )
                        {
                          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v88 + 128)
                                                                                      + 3984 * v87));
                          v52 = v86->VidPnSourceId;
                          *((_BYTE *)&v136 + v86->VidPnSourceId) = 1;
                        }
                        DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
                          v89,
                          &v86->PostComposition.SrcRect,
                          &v86->PostComposition.DstRect);
                        ++v84;
                        --v85;
                      }
                      while ( v85 );
                      v53 = v107;
                      v54 = v109;
                    }
                    if ( v113 )
                    {
                      v55 = v114;
                      v56 = (char *)v121 - v114;
                      v125 = v113;
                      v132 = (char *)((char *)v121 - v114);
                      do
                      {
                        v57 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)&v55[v56];
                        if ( !v53 && !a6 && (v57->pPlaneAttributes->Flags & 4) != 0 )
                        {
                          v53 = 1;
                          v109 = v57->LayerIndex;
                        }
                        v58 = v57->VidPnSourceId;
                        v59 = *(_QWORD *)(*((_QWORD *)this + 235) + 3120LL);
                        v60 = *(_QWORD *)(v59 + 128) + 3984 * v58;
                        if ( !*((_BYTE *)&v136 + v58) )
                        {
                          if ( !v53 )
                            DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v59 + 128)
                                                                                        + 3984 * v58));
                          v52 = v57->VidPnSourceId;
                          *((_BYTE *)&v136 + v52) = 1;
                        }
                        if ( !v53
                          && DXGDEVICE::UseCachedIndependentFlipParameters(this, (struct DISPLAY_SOURCE *)v60, v57) )
                        {
                          DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe((DISPLAY_SOURCE *)v60, v57->LayerIndex);
                        }
                        else
                        {
                          v61 = v57->pPlaneAttributes;
                          v62 = v57->LayerIndex;
                          SDRWhiteLevel = v61->SDRWhiteLevel;
                          v64 = *(_QWORD *)v114;
                          v65 = *(_QWORD *)(v60 + 8);
                          ColorSpace = v61->ColorSpace;
                          Blend = v61->Blend;
                          v68 = v61->Rotation;
                          Flags = v61->Flags;
                          v117 = SDRWhiteLevel;
                          v118 = ColorSpace;
                          v112 = Blend;
                          v116 = v68;
                          v131 = v64;
                          if ( *(struct _KTHREAD **)(v65 + 640) != KeGetCurrentThread() )
                          {
                            WdLogSingleEntry0(1LL);
                            WdLogGlobalForLineNumber = 9894;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              0xFFFFFFFFLL,
                              L"m_DisplayCore->IsDisplayStateMutexOwner()",
                              9894LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                            Blend = v112;
                            v68 = v116;
                            SDRWhiteLevel = v117;
                            ColorSpace = v118;
                            v64 = v131;
                          }
                          *(_BYTE *)(v62 + v60 + 2888) = 1;
                          v70 = 3;
                          *(_DWORD *)(v60 + 80 * v62 + 2912) = 3;
                          if ( (Flags & 1) != 0 )
                          {
                            v70 = 19;
                            *(_DWORD *)(v60 + 80 * v62 + 2912) = 19;
                          }
                          if ( (Flags & 2) != 0 )
                          {
                            v70 |= 0x20u;
                            *(_DWORD *)(v60 + 80 * v62 + 2912) = v70;
                          }
                          if ( (Flags & 4) != 0 )
                          {
                            v70 |= 0x40u;
                            *(_DWORD *)(v60 + 80 * v62 + 2912) = v70;
                          }
                          if ( Blend == 1 )
                            *(_DWORD *)(v60 + 80 * v62 + 2912) = v70 | 4;
                          *(_QWORD *)(v60 + 80 * v62 + 2904) = v64;
                          *(RECT *)(v60 + 80 * v62 + 2916) = v61->SrcRect;
                          *(RECT *)(v60 + 80 * v62 + 2932) = v61->DstRect;
                          ClipRect = v61->ClipRect;
                          *(_DWORD *)(v60 + 80 * v62 + 2968) = ColorSpace;
                          *(_DWORD *)(v60 + 80 * v62 + 2972) = SDRWhiteLevel;
                          *(_DWORD *)(v60 + 80 * v62 + 2964) = v68;
                          *(_DWORD *)(v60 + 80 * v62 + 2976) = 0;
                          *(RECT *)(v60 + 80 * v62 + 2948) = ClipRect;
                          if ( !v68 )
                            *(_DWORD *)(v60 + 80 * v62 + 2964) = 1;
                          if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 3748) )
                            *(_DWORD *)(v60 + 3748) = v62 + 1;
                        }
                        v56 = (signed __int64)v132;
                        v55 = v114 + 8;
                        v72 = v125-- == 1;
                        v114 += 8;
                      }
                      while ( !v72 );
                      v54 = v109;
                    }
                    v73 = v119;
                    LODWORD(v10) = CheckMultiPlaneOverlayInternal3(
                                     v52,
                                     *((struct ADAPTER_RENDER **)this + 2),
                                     *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 235) + 3120LL),
                                     v119,
                                     v133);
                    if ( v53 )
                    {
                      DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(
                        (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 235) + 3120LL) + 128LL)
                                         + 3984LL * v52),
                        v54);
                    }
                    else if ( !*v73 )
                    {
                      v75 = 0LL;
                      v76 = &v136;
                      v77 = 16LL;
                      do
                      {
                        if ( *(_BYTE *)v76 )
                        {
                          v78 = 0;
                          v79 = v75 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 235) + 3120LL) + 128LL);
                          if ( *(_DWORD *)(v79 + 3748) )
                          {
                            do
                            {
                              v80 = v78++;
                              *(_BYTE *)(v80 + v79 + 2888) = 0;
                            }
                            while ( v78 < *(_DWORD *)(v79 + 3748) );
                          }
                          *(_DWORD *)(v79 + 3748) = 0;
                          *(_BYTE *)(v79 + 3704) = 0;
                        }
                        v76 = (__int128 *)((char *)v76 + 1);
                        v75 += 3984LL;
                        --v77;
                      }
                      while ( v77 );
                    }
                    if ( (int)v10 >= 0 )
                    {
LABEL_111:
                      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v126);
                      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v126);
                      if ( P != v123 && P )
                        ExFreePoolWithTag(P, 0);
                      P = 0LL;
                      v124 = 0;
                      if ( v128 != v129 )
                      {
                        if ( v128 )
                          ExFreePoolWithTag(v128, 0);
                      }
                      return (unsigned int)v10;
                    }
                  }
                  else
                  {
                    v73 = v119;
                  }
                  LogCheckMutiplaneOverlaySupport(
                    v10,
                    *v73,
                    v113,
                    v121,
                    v115,
                    v111,
                    v120,
                    *((struct ADAPTER_RENDER **)this + 2));
                  goto LABEL_111;
                }
                if ( *(_DWORD *)&v135[16 * v27->VidPnSourceId + 256] > v43[9]
                  || *(_DWORD *)&v135[16 * v27->VidPnSourceId + 264] < v43[11]
                  || *(_DWORD *)&v135[16 * v27->VidPnSourceId + 260] > v43[10]
                  || *(_DWORD *)&v135[16 * v27->VidPnSourceId + 268] < v43[12] )
                {
                  WdLogSingleEntry3(3LL, 0LL, this, v108);
                  WdLogGlobalForLineNumber = 11219;
                  v18 = 0;
                }
                v44 = v27->pPlaneAttributes;
                if ( v44->DstRect.left > v44->ClipRect.left
                  || v44->DstRect.right < v44->ClipRect.right
                  || v44->DstRect.top > v44->ClipRect.top
                  || v44->DstRect.bottom < v44->ClipRect.bottom )
                {
                  WdLogSingleEntry3(2LL, -1073741811LL, this, v108);
                  v98 = L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x";
                  WdLogGlobalForLineNumber = 11226;
                  goto LABEL_176;
                }
                v45 = v44->Rotation;
                if ( (unsigned int)v45 > 1 )
                {
                  if ( (_DWORD)v45 == 2 || (unsigned int)(v45 - 3) < 2 )
                  {
                    if ( (**(_BYTE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3008LL) & 0x20) != 0 )
                      v18 = 0;
                  }
                  else
                  {
                    WdLogSingleEntry2(3LL, v45, -1073741811LL);
                    WdLogGlobalForLineNumber = 11248;
                    LODWORD(v10) = -1073741811;
                  }
                }
                if ( v27->pPlaneAttributes->StretchQuality != DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR
                  && v27->pPlaneAttributes->StretchQuality != DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
                {
                  WdLogSingleEntry1(3LL, -1073741811LL);
                  WdLogGlobalForLineNumber = 11259;
                  LODWORD(v10) = -1073741811;
                }
                v46 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                if ( !*(_QWORD *)(v46 + 992) && (!*(_QWORD *)(v46 + 1024) || !*(_BYTE *)(v46 + 3049)) )
                {
                  v83 = v27->pPlaneAttributes->ColorSpace;
                  if ( v83 > 12 )
                  {
                    v100 = v83 - 13;
                    if ( v100 )
                    {
                      v101 = v100 - 1;
                      if ( v101 )
                      {
                        v102 = v101 - 1;
                        if ( v102 )
                        {
                          v103 = v102 - 1;
                          if ( v103 )
                          {
                            v104 = v103 - 1;
                            if ( v104 )
                            {
                              if ( (unsigned int)(v104 - 1) > 1 )
                                goto LABEL_70;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if ( v83 != 12
                         && v83 != -1
                         && v83 != 1
                         && v83 != 2
                         && v83 != 3
                         && v83 != 5
                         && v83 != 10
                         && v83 != 11 )
                  {
                    goto LABEL_70;
                  }
                  v18 = 0;
                }
LABEL_70:
                v47 = v27->pPlaneAttributes->SDRWhiteLevel;
                if ( v47 )
                {
                  if ( v47 != 80 )
                  {
                    v99 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                    if ( (*(_DWORD *)(v99 + 444) & 0x200) == 0 && *(int *)(v99 + 2736) < 8960 )
                      v18 = 0;
                  }
                }
                v48 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                if ( !*(_QWORD *)(v48 + 1024) || !*(_BYTE *)(v48 + 3049) )
                {
                  if ( v112 == -1 )
                  {
                    v112 = v27->VidPnSourceId;
                    v24 = 0LL;
                  }
                  else
                  {
                    v24 = 0LL;
                    if ( v112 != v27->VidPnSourceId )
                      v18 = 0;
                  }
                }
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v110);
                LODWORD(v11) = v113;
              }
            }
            v97 = 2 * VidPnSourceId;
            if ( *(_DWORD *)&v135[8 * v97] > v92->PostComposition.DstRect.left
              || *(_DWORD *)&v135[8 * v97 + 8] < v92->PostComposition.DstRect.right
              || *(_DWORD *)&v135[8 * v97 + 4] > v92->PostComposition.DstRect.top
              || *(_DWORD *)&v135[8 * v97 + 12] < v92->PostComposition.DstRect.bottom )
            {
              WdLogSingleEntry2(3LL, this, v91);
              WdLogGlobalForLineNumber = 11074;
              goto LABEL_206;
            }
            LODWORD(v24) = v24 + 1;
            *(RECT *)&v135[8 * v97 + 256] = v92->PostComposition.SrcRect;
            v90 = v111;
          }
          WdLogSingleEntry1(3LL, v91);
          WdLogGlobalForLineNumber = 11033;
          LODWORD(v10) = -1073741811;
LABEL_173:
          v24 = 0LL;
          goto LABEL_22;
        }
        goto LABEL_212;
      }
      memset(v123, 0, 8 * v11);
      v17 = P;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
      {
LABEL_212:
        CurrentProcess = PsGetCurrentProcess(v13);
        WdLogSingleEntry3(3LL, v11, -1073741801LL, CurrentProcess);
        WdLogGlobalForLineNumber = 10990;
        if ( P != v123 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v124 = 0;
        goto LABEL_208;
      }
      v17 = (_BYTE *)ExAllocatePool2(256LL, 8 * v11, 1265072196LL, v14);
      P = v17;
    }
    v115 = (void **)v17;
    goto LABEL_11;
  }
LABEL_207:
  v105 = PsGetCurrentProcess(v13);
  WdLogSingleEntry3(3LL, v15, -1073741801LL, v105);
  WdLogGlobalForLineNumber = 10978;
LABEL_208:
  if ( v128 != v129 && v128 )
    ExFreePoolWithTag(v128, 0);
  return 3221225495LL;
}
