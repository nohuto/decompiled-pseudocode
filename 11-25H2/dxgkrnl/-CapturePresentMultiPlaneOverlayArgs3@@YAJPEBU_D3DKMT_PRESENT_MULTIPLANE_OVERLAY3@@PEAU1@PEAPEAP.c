/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1402B2760
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402B0A90 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x14038BE04 (_CapturePresentMultiPlaneOverlayArgs3_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs3(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 ***a3,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **a5,
        struct tagRECT ***a6,
        unsigned int **a7,
        unsigned int **a8,
        unsigned __int8 **a9,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **a10)
{
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned int v13; // edi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  void *v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v21; // r12
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  void **v28; // rsi
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r9
  void *v33; // r15
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r9
  size_t v37; // r8
  const void *v38; // rdx
  size_t v39; // r8
  const void *v40; // rdx
  const void *v41; // rdx
  _OWORD *v42; // rcx
  _OWORD *v43; // rcx
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  size_t v52; // r8
  char *v53; // rdx
  void *v54; // r9
  unsigned int v55; // eax
  int v56; // ecx
  size_t v57; // r8
  char *v58; // rdx
  unsigned int i; // edi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  size_t v63; // r8
  char *v64; // rax
  unsigned int v65; // edi
  char *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  void **v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  void **v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 CurrentProcess; // rax
  __int64 v82; // rcx
  __int64 v83; // [rsp+28h] [rbp-140h]
  __int64 v84; // [rsp+30h] [rbp-138h]
  char *v85; // [rsp+50h] [rbp-118h]
  void *v86; // [rsp+58h] [rbp-110h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v87; // [rsp+60h] [rbp-108h]
  void *v88[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v89; // [rsp+80h] [rbp-E8h]
  void *Src[2]; // [rsp+90h] [rbp-D8h]
  __int128 v91; // [rsp+A0h] [rbp-C8h]
  void *v92[2]; // [rsp+B0h] [rbp-B8h]
  __int64 v93; // [rsp+C0h] [rbp-A8h]
  void *v94; // [rsp+D0h] [rbp-98h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v95; // [rsp+D8h] [rbp-90h]
  __int128 v96; // [rsp+E0h] [rbp-88h]
  __int128 v97; // [rsp+F0h] [rbp-78h]
  __int128 v98; // [rsp+100h] [rbp-68h]
  int v99; // [rsp+110h] [rbp-58h]
  __int64 v100; // [rsp+120h] [rbp-48h]

  *(_OWORD *)v88 = 0LL;
  v89 = 0LL;
  *(_OWORD *)Src = 0LL;
  v91 = 0LL;
  *(_OWORD *)v92 = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v88, a1, 0x50uLL);
  v12 = HIDWORD(v89);
  if ( (unsigned int)(HIDWORD(v89) - 1) > 9 )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    WdLogSingleEntry3(2LL, HIDWORD(v89), -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2467;
    v84 = PsGetCurrentProcess(v82);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      HIDWORD(v89),
      -1073741811LL,
      v84,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (unsigned int)(HIDWORD(v88[0]) - 1) > 0x3F )
  {
    v79 = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, -1073741811LL, v79);
    WdLogGlobalForLineNumber = 2476;
    v83 = PsGetCurrentProcess(v80);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid ContextCount, returing 0x%I64x at 0x%I64x",
      -1073741811LL,
      v83,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v13 = 0;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = HIDWORD(v89);
  v14 = 8LL * HIDWORD(v89);
  if ( !is_mul_ok(HIDWORD(v89), 8uLL) )
    v14 = -1LL;
  v17 = (void *)operator new[](v14, 0x4B677844u, 256LL, v11);
  v94 = v17;
  if ( !v17 )
  {
    v76 = PsGetCurrentProcess(v15);
    WdLogSingleEntry2(3LL, -1073741801LL, v76);
    WdLogGlobalForLineNumber = 2533;
    goto LABEL_84;
  }
  v18 = 80LL * HIDWORD(v89);
  if ( !is_mul_ok(HIDWORD(v89), 0x50uLL) )
    v18 = -1LL;
  v21 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)operator new[](v18, 0x4B677844u, 256LL, v16);
  v95 = v21;
  if ( !v21 )
  {
    v74 = PsGetCurrentProcess(v19);
    WdLogSingleEntry2(3LL, -1073741801LL, v74);
    WdLogGlobalForLineNumber = 2543;
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v94);
    return 3221225495LL;
  }
  v22 = 88LL * HIDWORD(v89);
  if ( !is_mul_ok(HIDWORD(v89), 0x58uLL) )
    v22 = -1LL;
  v25 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)operator new[](v22, 0x4B677844u, 256LL, v20);
  *(_QWORD *)&v96 = v25;
  if ( !v25 )
  {
    v73 = PsGetCurrentProcess(v23);
    WdLogSingleEntry2(3LL, -1073741801LL, v73);
    WdLogGlobalForLineNumber = 2553;
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v94);
    return 3221225495LL;
  }
  v26 = 8LL * HIDWORD(v89);
  if ( !is_mul_ok(HIDWORD(v89), 8uLL) )
    v26 = -1LL;
  v28 = (void **)operator new[](v26, 0x4B677844u, 256LL, v24);
  *(_QWORD *)&v98 = v28;
  if ( !v28 )
  {
    v72 = PsGetCurrentProcess(v27);
    WdLogSingleEntry2(3LL, -1073741801LL, v72);
    WdLogGlobalForLineNumber = 2563;
    goto LABEL_84;
  }
  v30 = 4LL * HIDWORD(v88[0]);
  if ( !is_mul_ok(HIDWORD(v88[0]), 4uLL) )
    v30 = -1LL;
  v33 = (void *)operator new[](v30, 0x4B677844u, 256LL, v29);
  *((_QWORD *)&v96 + 1) = v33;
  if ( !v33 )
  {
    v68 = PsGetCurrentProcess(v31);
    WdLogSingleEntry2(3LL, -1073741801LL, v68);
    WdLogGlobalForLineNumber = 2573;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    if ( (_DWORD)v12 )
    {
      v69 = v28;
      do
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v69++);
        --v12;
      }
      while ( v12 );
    }
    goto LABEL_76;
  }
  v34 = 4LL * (unsigned int)(HIDWORD(v89) * HIDWORD(v88[0]));
  if ( !is_mul_ok((unsigned int)(HIDWORD(v89) * HIDWORD(v88[0])), 4uLL) )
    v34 = -1LL;
  v85 = (char *)operator new[](v34, 0x4B677844u, 256LL, v32);
  *(_QWORD *)&v97 = v85;
  if ( !v85 )
  {
    v67 = PsGetCurrentProcess(v35);
    WdLogSingleEntry2(3LL, -1073741801LL, v67);
    WdLogGlobalForLineNumber = 2583;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v33);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    if ( (_DWORD)v12 )
    {
      v75 = v28;
      do
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v75++);
        --v12;
      }
      while ( v12 );
    }
LABEL_76:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v28);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 3221225495LL;
  }
  if ( v92[0] && DWORD2(v91) )
  {
    v86 = (void *)operator new[](DWORD2(v91), 0x4B677844u, 256LL, v36);
    *((_QWORD *)&v97 + 1) = v86;
    if ( !v86 )
    {
      v78 = PsGetCurrentProcess(v77);
      WdLogSingleEntry2(3LL, -1073741801LL, v78);
      WdLogGlobalForLineNumber = 2595;
      goto LABEL_84;
    }
  }
  else
  {
    v86 = (void *)*((_QWORD *)&v97 + 1);
  }
  if ( Src[1] )
  {
    v87 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)operator new(0x28uLL, 0x4B677844u, 256LL, v36);
    *((_QWORD *)&v98 + 1) = v87;
    if ( v87 )
      goto LABEL_27;
    v71 = PsGetCurrentProcess(v70);
    WdLogSingleEntry2(3LL, -1073741801LL, v71);
    WdLogGlobalForLineNumber = 2608;
LABEL_84:
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v94);
    return 3221225495LL;
  }
  v87 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)*((_QWORD *)&v98 + 1);
LABEL_27:
  v37 = 8LL * HIDWORD(v89);
  v38 = Src[0];
  if ( (char *)Src[0] + v37 < Src[0] || (char *)Src[0] + v37 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v17, v38, v37);
  v39 = 4LL * HIDWORD(v88[0]);
  v40 = v88[1];
  if ( (char *)v88[1] + v39 < v88[1] || (char *)v88[1] + v39 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v33, v40, v39);
  v41 = v92[0];
  if ( v92[0] && DWORD2(v91) )
  {
    v63 = DWORD2(v91);
    v64 = (char *)v92[0] + DWORD2(v91);
    if ( v64 < v92[0] || (unsigned __int64)v64 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v86, v41, v63);
  }
  v42 = Src[1];
  if ( Src[1] )
  {
    if ( (char *)Src[1] + 40 < Src[1] || (char *)Src[1] + 40 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v87->Flags.0 = *v42;
    *(_OWORD *)&v87->SrcRect.bottom = v42[1];
    *(_QWORD *)&v87->DstRect.bottom = *((_QWORD *)v42 + 4);
  }
  while ( v13 < HIDWORD(v89) )
  {
    v43 = (_OWORD *)*((_QWORD *)v17 + v13);
    if ( v43 + 5 < v43 || (unsigned __int64)(v43 + 5) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *((_OWORD *)&v21->LayerIndex + 5 * v13) = *v43;
    *((_OWORD *)&v21->AllocationCount + 5 * v13) = v43[1];
    *((_OWORD *)&v21->DriverPrivateDataSize + 5 * v13) = v43[2];
    *((_OWORD *)&v21->pPlaneAttributes + 5 * v13) = v43[3];
    *((_OWORD *)&v21[1].FlipInterval + 5 * v13) = v43[4];
    v44 = *((_QWORD *)&v21->pPlaneAttributes + 10 * v13);
    v45 = v13;
    v93 = v45 * 88;
    if ( v44 + 88 < v44 || v44 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v25[v45].Flags = *(_OWORD *)v44;
    *(_OWORD *)&v25[v45].SrcRect.bottom = *(_OWORD *)(v44 + 16);
    *(_OWORD *)&v25[v45].DstRect.bottom = *(_OWORD *)(v44 + 32);
    *(_OWORD *)&v25[v45].ClipRect.bottom = *(_OWORD *)(v44 + 48);
    *(_OWORD *)&v25[v45].pDirtyRects = *(_OWORD *)(v44 + 64);
    *(_QWORD *)&v25[v45].SDRWhiteLevel = *(_QWORD *)(v44 + 80);
    v100 = v13;
    v46 = v13;
    if ( v25[v45].DirtyRectCount > 0xFFF )
    {
      WdLogSingleEntry3(2LL, v25[v46].DirtyRectCount, v13, -1073741811LL);
      WdLogGlobalForLineNumber = 2655;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid DirtyRectCount:%u on plane %u, returing 0x%I64x",
        *(unsigned int *)((char *)&v25->DirtyRectCount + v93),
        v100,
        -1073741811LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v94);
      return 3221225485LL;
    }
    v47 = 16LL * v25[v46].DirtyRectCount;
    if ( !is_mul_ok(v25[v46].DirtyRectCount, 0x10uLL) )
      v47 = -1LL;
    v48 = operator new[](v47, 0x4B677844u, 256LL, MmUserProbeAddress);
    v28[v13] = (void *)v48;
    if ( !v48 )
    {
      v50 = PsGetCurrentProcess(v49);
      WdLogSingleEntry2(3LL, -1073741801LL, v50);
      WdLogGlobalForLineNumber = 2665;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v33);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v85);
      for ( i = 0; i < (unsigned int)v12; ++i )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v28[i]);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v28);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v86);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v87);
      return 3221225495LL;
    }
    v52 = 16LL * *(unsigned int *)((char *)&v25->DirtyRectCount + v93);
    v53 = *(char **)((char *)&v25->pDirtyRects + v93);
    v54 = v28[v13];
    if ( &v53[v52] < v53 || (unsigned __int64)&v53[v52] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v54, v53, v52);
    v25[v13].pDirtyRects = (RECT *)v28[v13];
    v55 = *(&v21->AllocationCount + 20 * v13);
    v56 = HIDWORD(v88[0]);
    if ( v55 > HIDWORD(v88[0]) )
    {
      v60 = PsGetCurrentProcess(HIDWORD(v88[0]));
      WdLogSingleEntry2(2LL, -1073741811LL, v60);
      WdLogGlobalForLineNumber = 2675;
      v62 = PsGetCurrentProcess(v61);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid AllocationCount, returing 0x%I64x at 0x%I64x",
        -1073741811LL,
        v62,
        0LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v94);
      return 3221225485LL;
    }
    if ( v55 )
    {
      v57 = 4LL * v55;
      v58 = (char *)*((_QWORD *)&v21->pAllocationList + 10 * v13);
      if ( &v58[v57] < v58 || (unsigned __int64)&v58[v57] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v85[4 * v56 * v13], v58, v57);
    }
    ++v13;
  }
  Src[0] = v17;
  v88[1] = v33;
  v92[0] = v86;
  Src[1] = v87;
  if ( HIDWORD(v89) )
  {
    v65 = 0;
    do
    {
      v66 = (char *)v21 + 80 * v65;
      *((_QWORD *)v17 + v65) = v66;
      *((_QWORD *)v66 + 6) = &v25[v65];
      *((_QWORD *)v66 + 3) = &v85[4 * HIDWORD(v88[0]) * v65++];
    }
    while ( v65 < HIDWORD(v89) );
  }
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v88;
  *(_OWORD *)&a2->VidPnSourceId = v89;
  *(_OWORD *)&a2->ppPresentPlanes = *(_OWORD *)Src;
  *(_OWORD *)&a2->Duration = v91;
  *(_OWORD *)&a2->pHDRMetaData = *(_OWORD *)v92;
  *a3 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v17;
  *a4 = v21;
  *a5 = v25;
  *a6 = (struct tagRECT **)v28;
  *a7 = (unsigned int *)v33;
  *a8 = (unsigned int *)v85;
  *a9 = (unsigned __int8 *)v86;
  *a10 = v87;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  return 0LL;
}
