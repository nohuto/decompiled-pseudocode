/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1402BFFE0
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402BE310 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x140378764 (_CapturePresentMultiPlaneOverlayArgs3_--_2_--_AUTO--__AUTO.c)
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
  __int64 v11; // rbx
  unsigned int v12; // edi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  void **v24; // rsi
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  void *v27; // r15
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  size_t v30; // r8
  const void *v31; // rdx
  size_t v32; // r8
  const void *v33; // rdx
  const void *v34; // rdx
  _OWORD *v35; // rcx
  _OWORD *v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  size_t v45; // r8
  char *v46; // rdx
  void *v47; // r9
  unsigned int v48; // eax
  int v49; // ecx
  size_t v50; // r8
  char *v51; // rdx
  unsigned int i; // edi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  size_t v56; // r8
  char *v57; // rax
  unsigned int v58; // edi
  char *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  void **v62; // rdi
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  void **v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 CurrentProcess; // rax
  __int64 v75; // rcx
  __int64 v76; // [rsp+28h] [rbp-140h]
  __int64 v77; // [rsp+30h] [rbp-138h]
  char *v78; // [rsp+50h] [rbp-118h]
  void *v79; // [rsp+58h] [rbp-110h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v80; // [rsp+60h] [rbp-108h]
  void *v81[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v82; // [rsp+80h] [rbp-E8h]
  void *Src[2]; // [rsp+90h] [rbp-D8h]
  __int128 v84; // [rsp+A0h] [rbp-C8h]
  void *v85[2]; // [rsp+B0h] [rbp-B8h]
  __int64 v86; // [rsp+C0h] [rbp-A8h]
  void *v87; // [rsp+D0h] [rbp-98h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v88; // [rsp+D8h] [rbp-90h]
  __int128 v89; // [rsp+E0h] [rbp-88h]
  __int128 v90; // [rsp+F0h] [rbp-78h]
  __int128 v91; // [rsp+100h] [rbp-68h]
  int v92; // [rsp+110h] [rbp-58h]
  __int64 v93; // [rsp+120h] [rbp-48h]

  *(_OWORD *)v81 = 0LL;
  v82 = 0LL;
  *(_OWORD *)Src = 0LL;
  v84 = 0LL;
  *(_OWORD *)v85 = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v81, a1, 0x50uLL);
  v11 = HIDWORD(v82);
  if ( (unsigned int)(HIDWORD(v82) - 1) > 9 )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    WdLogSingleEntry3(2LL, HIDWORD(v82), -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2474;
    v77 = PsGetCurrentProcess(v75);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      HIDWORD(v82),
      -1073741811LL,
      v77,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (unsigned int)(HIDWORD(v81[0]) - 1) > 0x3F )
  {
    v72 = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, -1073741811LL, v72);
    WdLogGlobalForLineNumber = 2483;
    v76 = PsGetCurrentProcess(v73);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid ContextCount, returing 0x%I64x at 0x%I64x",
      -1073741811LL,
      v76,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v12 = 0;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = HIDWORD(v82);
  v13 = 8LL * HIDWORD(v82);
  if ( !is_mul_ok(HIDWORD(v82), 8uLL) )
    v13 = -1LL;
  v15 = (void *)operator new[](v13, 0x4B677844u, 256LL);
  v87 = v15;
  if ( !v15 )
  {
    v69 = PsGetCurrentProcess(v14);
    WdLogSingleEntry2(3LL, -1073741801LL, v69);
    WdLogGlobalForLineNumber = 2540;
    goto LABEL_84;
  }
  v16 = 80LL * HIDWORD(v82);
  if ( !is_mul_ok(HIDWORD(v82), 0x50uLL) )
    v16 = -1LL;
  v18 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)operator new[](v16, 0x4B677844u, 256LL);
  v88 = v18;
  if ( !v18 )
  {
    v67 = PsGetCurrentProcess(v17);
    WdLogSingleEntry2(3LL, -1073741801LL, v67);
    WdLogGlobalForLineNumber = 2550;
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
    return 3221225495LL;
  }
  v19 = 88LL * HIDWORD(v82);
  if ( !is_mul_ok(HIDWORD(v82), 0x58uLL) )
    v19 = -1LL;
  v21 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)operator new[](v19, 0x4B677844u, 256LL);
  *(_QWORD *)&v89 = v21;
  if ( !v21 )
  {
    v66 = PsGetCurrentProcess(v20);
    WdLogSingleEntry2(3LL, -1073741801LL, v66);
    WdLogGlobalForLineNumber = 2560;
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
    return 3221225495LL;
  }
  v22 = 8LL * HIDWORD(v82);
  if ( !is_mul_ok(HIDWORD(v82), 8uLL) )
    v22 = -1LL;
  v24 = (void **)operator new[](v22, 0x4B677844u, 256LL);
  *(_QWORD *)&v91 = v24;
  if ( !v24 )
  {
    v65 = PsGetCurrentProcess(v23);
    WdLogSingleEntry2(3LL, -1073741801LL, v65);
    WdLogGlobalForLineNumber = 2570;
    goto LABEL_84;
  }
  v25 = 4LL * HIDWORD(v81[0]);
  if ( !is_mul_ok(HIDWORD(v81[0]), 4uLL) )
    v25 = -1LL;
  v27 = (void *)operator new[](v25, 0x4B677844u, 256LL);
  *((_QWORD *)&v89 + 1) = v27;
  if ( !v27 )
  {
    v61 = PsGetCurrentProcess(v26);
    WdLogSingleEntry2(3LL, -1073741801LL, v61);
    WdLogGlobalForLineNumber = 2580;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    if ( (_DWORD)v11 )
    {
      v62 = v24;
      do
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v62++);
        --v11;
      }
      while ( v11 );
    }
    goto LABEL_76;
  }
  v28 = 4LL * (unsigned int)(HIDWORD(v82) * HIDWORD(v81[0]));
  if ( !is_mul_ok((unsigned int)(HIDWORD(v82) * HIDWORD(v81[0])), 4uLL) )
    v28 = -1LL;
  v78 = (char *)operator new[](v28, 0x4B677844u, 256LL);
  *(_QWORD *)&v90 = v78;
  if ( !v78 )
  {
    v60 = PsGetCurrentProcess(v29);
    WdLogSingleEntry2(3LL, -1073741801LL, v60);
    WdLogGlobalForLineNumber = 2590;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v27);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    if ( (_DWORD)v11 )
    {
      v68 = v24;
      do
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v68++);
        --v11;
      }
      while ( v11 );
    }
LABEL_76:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 3221225495LL;
  }
  if ( v85[0] && DWORD2(v84) )
  {
    v79 = (void *)operator new[](DWORD2(v84), 0x4B677844u, 256LL);
    *((_QWORD *)&v90 + 1) = v79;
    if ( !v79 )
    {
      v71 = PsGetCurrentProcess(v70);
      WdLogSingleEntry2(3LL, -1073741801LL, v71);
      WdLogGlobalForLineNumber = 2602;
      goto LABEL_84;
    }
  }
  else
  {
    v79 = (void *)*((_QWORD *)&v90 + 1);
  }
  if ( Src[1] )
  {
    v80 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)operator new(0x28uLL, 0x4B677844u, 256LL);
    *((_QWORD *)&v91 + 1) = v80;
    if ( v80 )
      goto LABEL_27;
    v64 = PsGetCurrentProcess(v63);
    WdLogSingleEntry2(3LL, -1073741801LL, v64);
    WdLogGlobalForLineNumber = 2615;
LABEL_84:
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
    return 3221225495LL;
  }
  v80 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)*((_QWORD *)&v91 + 1);
LABEL_27:
  v30 = 8LL * HIDWORD(v82);
  v31 = Src[0];
  if ( (char *)Src[0] + v30 < Src[0] || (char *)Src[0] + v30 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, v31, v30);
  v32 = 4LL * HIDWORD(v81[0]);
  v33 = v81[1];
  if ( (char *)v81[1] + v32 < v81[1] || (char *)v81[1] + v32 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v27, v33, v32);
  v34 = v85[0];
  if ( v85[0] && DWORD2(v84) )
  {
    v56 = DWORD2(v84);
    v57 = (char *)v85[0] + DWORD2(v84);
    if ( v57 < v85[0] || (unsigned __int64)v57 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v79, v34, v56);
  }
  v35 = Src[1];
  if ( Src[1] )
  {
    if ( (char *)Src[1] + 40 < Src[1] || (char *)Src[1] + 40 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v80->Flags.0 = *v35;
    *(_OWORD *)&v80->SrcRect.bottom = v35[1];
    *(_QWORD *)&v80->DstRect.bottom = *((_QWORD *)v35 + 4);
  }
  while ( v12 < HIDWORD(v82) )
  {
    v36 = (_OWORD *)*((_QWORD *)v15 + v12);
    if ( v36 + 5 < v36 || (unsigned __int64)(v36 + 5) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *((_OWORD *)&v18->LayerIndex + 5 * v12) = *v36;
    *((_OWORD *)&v18->AllocationCount + 5 * v12) = v36[1];
    *((_OWORD *)&v18->DriverPrivateDataSize + 5 * v12) = v36[2];
    *((_OWORD *)&v18->pPlaneAttributes + 5 * v12) = v36[3];
    *((_OWORD *)&v18[1].FlipInterval + 5 * v12) = v36[4];
    v37 = *((_QWORD *)&v18->pPlaneAttributes + 10 * v12);
    v38 = v12;
    v86 = v38 * 88;
    if ( v37 + 88 < v37 || v37 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v21[v38].Flags = *(_OWORD *)v37;
    *(_OWORD *)&v21[v38].SrcRect.bottom = *(_OWORD *)(v37 + 16);
    *(_OWORD *)&v21[v38].DstRect.bottom = *(_OWORD *)(v37 + 32);
    *(_OWORD *)&v21[v38].ClipRect.bottom = *(_OWORD *)(v37 + 48);
    *(_OWORD *)&v21[v38].pDirtyRects = *(_OWORD *)(v37 + 64);
    *(_QWORD *)&v21[v38].SDRWhiteLevel = *(_QWORD *)(v37 + 80);
    v93 = v12;
    v39 = v12;
    if ( v21[v38].DirtyRectCount > 0xFFF )
    {
      WdLogSingleEntry3(2LL, v21[v39].DirtyRectCount, v12, -1073741811LL);
      WdLogGlobalForLineNumber = 2662;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid DirtyRectCount:%u on plane %u, returing 0x%I64x",
        *(unsigned int *)((char *)&v21->DirtyRectCount + v86),
        v93,
        -1073741811LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
      return 3221225485LL;
    }
    v40 = 16LL * v21[v39].DirtyRectCount;
    if ( !is_mul_ok(v21[v39].DirtyRectCount, 0x10uLL) )
      v40 = -1LL;
    v41 = operator new[](v40, 0x4B677844u, 256LL);
    v24[v12] = (void *)v41;
    if ( !v41 )
    {
      v43 = PsGetCurrentProcess(v42);
      WdLogSingleEntry2(3LL, -1073741801LL, v43);
      WdLogGlobalForLineNumber = 2672;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v27);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v78);
      for ( i = 0; i < (unsigned int)v11; ++i )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24[i]);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v79);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v80);
      return 3221225495LL;
    }
    v45 = 16LL * *(unsigned int *)((char *)&v21->DirtyRectCount + v86);
    v46 = *(char **)((char *)&v21->pDirtyRects + v86);
    v47 = v24[v12];
    if ( &v46[v45] < v46 || (unsigned __int64)&v46[v45] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v47, v46, v45);
    v21[v12].pDirtyRects = (RECT *)v24[v12];
    v48 = *(&v18->AllocationCount + 20 * v12);
    v49 = HIDWORD(v81[0]);
    if ( v48 > HIDWORD(v81[0]) )
    {
      v53 = PsGetCurrentProcess(HIDWORD(v81[0]));
      WdLogSingleEntry2(2LL, -1073741811LL, v53);
      WdLogGlobalForLineNumber = 2682;
      v55 = PsGetCurrentProcess(v54);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid AllocationCount, returing 0x%I64x at 0x%I64x",
        -1073741811LL,
        v55,
        0LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
      return 3221225485LL;
    }
    if ( v48 )
    {
      v50 = 4LL * v48;
      v51 = (char *)*((_QWORD *)&v18->pAllocationList + 10 * v12);
      if ( &v51[v50] < v51 || (unsigned __int64)&v51[v50] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v78[4 * v49 * v12], v51, v50);
    }
    ++v12;
  }
  Src[0] = v15;
  v81[1] = v27;
  v85[0] = v79;
  Src[1] = v80;
  if ( HIDWORD(v82) )
  {
    v58 = 0;
    do
    {
      v59 = (char *)v18 + 80 * v58;
      *((_QWORD *)v15 + v58) = v59;
      *((_QWORD *)v59 + 6) = &v21[v58];
      *((_QWORD *)v59 + 3) = &v78[4 * HIDWORD(v81[0]) * v58++];
    }
    while ( v58 < HIDWORD(v82) );
  }
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v81;
  *(_OWORD *)&a2->VidPnSourceId = v82;
  *(_OWORD *)&a2->ppPresentPlanes = *(_OWORD *)Src;
  *(_OWORD *)&a2->Duration = v84;
  *(_OWORD *)&a2->pHDRMetaData = *(_OWORD *)v85;
  *a3 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v15;
  *a4 = v18;
  *a5 = v21;
  *a6 = (struct tagRECT **)v24;
  *a7 = (unsigned int *)v27;
  *a8 = (unsigned int *)v78;
  *a9 = (unsigned __int8 *)v79;
  *a10 = v80;
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
