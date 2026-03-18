/*
 * XREFs of ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180061F10
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180061858 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180061AA0 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x180061240 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180061260 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180062D30 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800630A0 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180063B40 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180063BA0 (-GetSize@CDxHandleBitmapRealization@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18006BBB0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x180099990 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801023FC (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801025B0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121A60 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801F6DC8 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAP.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802E1100 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802E1160 (-GetTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAXXZ @ 0x1802E12B0 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        struct ISwapChainRealization *a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct tagRECT *a4,
        const struct ScrollOptimization *a5)
{
  unsigned __int8 v5; // si
  char v6; // r12
  bool v11; // r15
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD, _QWORD); // r9
  __m128 v15; // xmm6
  __m128 v16; // xmm7
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, __int128 *, __int128 *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)); // rax
  int v21; // eax
  __int64 v22; // rcx
  __m128 *v23; // rax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, _BYTE *); // rax
  __int64 PixelFormatInfo; // rax
  __int64 v27; // xmm0_8
  __int64 v28; // rcx
  void (__fastcall *v29)(CDxHandleBitmapRealization *__hidden, const struct CSM_BUFFER_ATTRIBUTES *); // rax
  void (__fastcall *v30)(char *, __int128 *, __int128 *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)); // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(char *, _BYTE *); // rax
  __int64 v34; // rax
  __int64 v35; // xmm0_8
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  bool v40; // zf
  __int64 v41; // rax
  CDxHandleBitmapRealization *v42; // rcx
  char v43; // r15
  struct D2D_SIZE_U (__fastcall *v44)(CDxHandleBitmapRealization *__hidden); // rax
  int v45; // r14d
  LONG left; // eax
  int v47; // r9d
  int v48; // ebx
  __int64 v49; // rax
  int v50; // r9d
  int v51; // ecx
  int v52; // edx
  int v53; // r8d
  int v54; // eax
  int v55; // eax
  void (*v56)(void); // rax
  char v57; // al
  __int64 v58; // r14
  CMILRefCountImpl *v59; // rbx
  __int64 v60; // rax
  unsigned int (__fastcall *v61)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v62)(CResource *); // rax
  _QWORD *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdi
  char *v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdi
  unsigned __int64 v69; // rbx
  SIZE_T size_of; // rax
  char *v71; // r14
  char *v72; // rdi
  char *v73; // r14
  int v74; // r12d
  char *v75; // r13
  char *v76; // rcx
  __int64 v77; // r15
  __int64 v78; // rax
  void *v79; // rbx
  CD2DBitmapCache *v81; // rcx
  void (__fastcall *v82)(CD2DBitmapCache *, const struct FastRegion::Internal::CRgnData **); // rax
  HANDLE ProcessHeap; // rax
  char *v84; // rbx
  _OWORD *v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  CMILRefCountImpl *v88; // rbx
  __int64 v89; // rax
  unsigned int (__fastcall *v90)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v91)(CResource *); // rax
  char *v92; // rcx
  char *v93; // rcx
  _DWORD *v94; // rdx
  int v95; // r9d
  int v96; // r10d
  int v97; // r11d
  int v98; // ebx
  _DWORD *v99; // rdx
  unsigned __int8 v100; // [rsp+30h] [rbp-D0h]
  int v101; // [rsp+38h] [rbp-C8h] BYREF
  int v102; // [rsp+3Ch] [rbp-C4h]
  int v103[2]; // [rsp+40h] [rbp-C0h]
  int v104; // [rsp+48h] [rbp-B8h]
  int v105; // [rsp+4Ch] [rbp-B4h]
  int v106; // [rsp+50h] [rbp-B0h]
  int v107; // [rsp+54h] [rbp-ACh]
  __int128 v108; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v109; // [rsp+70h] [rbp-90h]
  __int128 v110; // [rsp+80h] [rbp-80h]
  __int128 v111; // [rsp+90h] [rbp-70h]
  char v112; // [rsp+A0h] [rbp-60h]
  __int16 v113; // [rsp+A1h] [rbp-5Fh]
  char v114; // [rsp+A3h] [rbp-5Dh]
  __int128 v115; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v116[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v117; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v118; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v119; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v120; // [rsp+100h] [rbp+0h]
  __int128 v121; // [rsp+110h] [rbp+10h]
  __int128 v122; // [rsp+120h] [rbp+20h]
  char v123; // [rsp+130h] [rbp+30h]
  __int16 v124; // [rsp+131h] [rbp+31h]
  char v125; // [rsp+133h] [rbp+33h]
  _QWORD v126[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v127; // [rsp+150h] [rbp+50h] BYREF
  LPVOID lpMem; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v129[18]; // [rsp+168h] [rbp+68h] BYREF

  v5 = 0;
  v100 = 0;
  v6 = 0;
  v11 = a3 && (*((_DWORD *)a3 + 34) & 0x400) != 0;
  lpMem = v129;
  v129[0] = 0;
  if ( *((_BYTE *)this + 96) )
  {
    v100 = 1;
    v5 = 1;
    if ( CGlobalCompositionSurfaceInfo::IsSwapChain(this) && a2 && a3 )
      (*(void (__fastcall **)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 216LL))(
        a2,
        a3);
  }
  else if ( (unsigned int)((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3) > 1
         || *((_DWORD *)this + 36) == 3 )
  {
    v13 = *((_QWORD *)this + 26);
    v14 = CDxHandleBitmapRealization::GetTransform;
    v114 = 0;
    v125 = 0;
    v105 = 0;
    v117 = 0LL;
    v113 = 41;
    v15 = 0LL;
    v16 = 0LL;
    v118 = 0LL;
    v106 = 0;
    v108 = _xmm;
    v109 = _xmm;
    v110 = _xmm;
    v111 = *(__int128 *)&_xmm.r;
    v119 = _xmm;
    v120 = _xmm;
    v121 = _xmm;
    v122 = *(__int128 *)&_xmm.r;
    v124 = 41;
    v17 = 0;
    v104 = 0;
    v107 = 0;
    v101 = 0;
    v103[0] = 0;
    v112 = -86;
    v123 = -86;
    v127 = 0LL;
    v115 = 0LL;
    if ( v13 )
    {
      v18 = *(_QWORD *)(v13 + 8);
      v19 = v13 + 8;
      v20 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))(v18 + 40);
      if ( (char *)v20 == (char *)CDxHandleBitmapRealization::GetTransform )
      {
        CDxHandleBitmapRealization::GetTransform(v19, &v108, &v117, CDxHandleBitmapRealization::GetTransform);
      }
      else if ( (char *)v20 == (char *)CDxHandleBitmapRealization::GetTransform )
      {
        CDxHandleBitmapRealization::GetTransform(v19, &v108, &v117, CDxHandleBitmapRealization::GetTransform);
      }
      else
      {
        v20(v19, &v108, &v117, CDxHandleBitmapRealization::GetTransform);
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 104LL))(*((_QWORD *)this + 26));
      v22 = *((_QWORD *)this + 26);
      v105 = v21;
      v23 = (__m128 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 112LL))(v22, v126);
      v24 = *((_QWORD *)this + 26) + 8LL;
      v15 = *v23;
      v25 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 24LL);
      if ( (char *)v25 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
      {
        PixelFormatInfo = CDxHandleBitmapRealization::GetPixelFormatInfo(v24, v116);
      }
      else if ( (char *)v25 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
      {
        PixelFormatInfo = CDxHandleBitmapRealization::GetPixelFormatInfo(v24, v116);
      }
      else
      {
        PixelFormatInfo = v25(v24, v116);
      }
      v27 = *(_QWORD *)PixelFormatInfo;
      v28 = *((_QWORD *)this + 26);
      v107 = *(_DWORD *)(PixelFormatInfo + 8);
      v126[0] = v27;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v28 + 240LL))(v28, &v127);
      v104 = HIDWORD(v126[0]);
      v17 = v101;
    }
    if ( a2 )
    {
      if ( a3 )
      {
        v29 = *(void (__fastcall **)(CDxHandleBitmapRealization *__hidden, const struct CSM_BUFFER_ATTRIBUTES *))(*(_QWORD *)a2 + 216LL);
        if ( v29 == CDxHandleBitmapRealization::UpdateAttributes )
          CDxHandleBitmapRealization::UpdateAttributes(a2, a3);
        else
          ((void (__fastcall *)(struct ISwapChainRealization *, const struct CSM_BUFFER_ATTRIBUTES *, const struct CSM_BUFFER_ATTRIBUTES *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))v29)(
            a2,
            a3,
            a3,
            v14);
      }
      v30 = *(void (__fastcall **)(char *, __int128 *, __int128 *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))(*((_QWORD *)a2 + 1) + 40LL);
      if ( (char *)v30 == (char *)CDxHandleBitmapRealization::GetTransform )
      {
        CDxHandleBitmapRealization::GetTransform((char *)a2 + 8, &v119, &v118, v14);
      }
      else
      {
        v93 = (char *)a2 + 8;
        if ( (char *)v30 == (char *)CDxHandleBitmapRealization::GetTransform )
          CDxHandleBitmapRealization::GetTransform(v93, &v119, &v118, v14);
        else
          v30(v93, &v119, &v118, v14);
      }
      v31 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a2 + 104LL))(a2);
      v32 = *(_QWORD *)a2;
      v106 = v31;
      v16 = *(__m128 *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _QWORD *))(v32 + 112))(a2, v126);
      v33 = *(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a2 + 1) + 24LL);
      if ( (char *)v33 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
      {
        v34 = CDxHandleBitmapRealization::GetPixelFormatInfo((char *)a2 + 8, v116);
      }
      else
      {
        v92 = (char *)a2 + 8;
        if ( (char *)v33 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
          v34 = CDxHandleBitmapRealization::GetPixelFormatInfo(v92, v116);
        else
          v34 = v33(v92, v116);
      }
      v35 = *(_QWORD *)v34;
      v36 = *(_DWORD *)(v34 + 8);
      v37 = *(_QWORD *)a2;
      v126[0] = v35;
      (*(void (__fastcall **)(struct ISwapChainRealization *, __int128 *))(v37 + 240))(a2, &v115);
      v17 = HIDWORD(v126[0]);
    }
    else
    {
      v36 = v103[0];
    }
    if ( v11
      || v104 != v17
      || v107 != v36
      || v105 != v106
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v15.m128_f32[0] - v16.m128_f32[0]) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v15, v15, 85).m128_f32[0] - _mm_shuffle_ps(v16, v16, 85).m128_f32[0]) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v15, v15, 170).m128_f32[0] - _mm_shuffle_ps(v16, v16, 170).m128_f32[0]) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v15, v15, 255).m128_f32[0] - _mm_shuffle_ps(v16, v16, 255).m128_f32[0]) & _xmm) > 0.0000011920929
      || *(float *)&v117 != *(float *)&v118
      || *((float *)&v117 + 1) != *((float *)&v118 + 1)
      || *((float *)&v117 + 2) != *((float *)&v118 + 2)
      || *((float *)&v117 + 3) != *((float *)&v118 + 3)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v127 - *(float *)&v115) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v127 + 1) - *((float *)&v115 + 1)) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v127 + 2) - *((float *)&v115 + 2)) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v127 + 3) - *((float *)&v115 + 3)) & _xmm) > 0.0000011920929
      || *(float *)&v108 != *(float *)&v119
      || *((float *)&v108 + 1) != *((float *)&v119 + 1)
      || *((float *)&v108 + 2) != *((float *)&v119 + 2)
      || *((float *)&v108 + 3) != *((float *)&v119 + 3)
      || *(float *)&v109 != *(float *)&v120
      || *((float *)&v109 + 1) != *((float *)&v120 + 1)
      || *((float *)&v109 + 2) != *((float *)&v120 + 2)
      || *((float *)&v109 + 3) != *((float *)&v120 + 3)
      || *(float *)&v110 != *(float *)&v121
      || *((float *)&v110 + 1) != *((float *)&v121 + 1)
      || *((float *)&v110 + 2) != *((float *)&v121 + 2)
      || *((float *)&v110 + 3) != *((float *)&v121 + 3)
      || *(float *)&v111 != *(float *)&v122
      || *((float *)&v111 + 1) != *((float *)&v122 + 1)
      || *((float *)&v111 + 2) != *((float *)&v122 + 2)
      || *((float *)&v111 + 3) != *((float *)&v122 + 3) )
    {
      v5 = 1;
    }
  }
  v38 = 1LL;
  if ( *((struct ISwapChainRealization **)this + 26) != a2 )
  {
    v39 = *((_QWORD *)this + 15);
    if ( v39 )
      *(_BYTE *)(v39 + 136) = 0;
    v100 = 1;
    v40 = *((_QWORD *)this + 26) == 0LL;
    *((_QWORD *)this + 26) = a2;
    if ( !v40 != (a2 != 0LL) )
      v5 = 1;
  }
  if ( v11 && CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
    CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
  v41 = *((_QWORD *)this + 26);
  if ( !v41 )
  {
    v57 = 1;
    v100 = 1;
    v5 = 1;
    goto LABEL_60;
  }
  v42 = (CDxHandleBitmapRealization *)(v41 + 8);
  v43 = 0;
  v44 = *(struct D2D_SIZE_U (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(v41 + 8) + 32LL);
  if ( (char *)v44 == (char *)CDxHandleBitmapRealization::GetSize )
  {
    CDxHandleBitmapRealization::GetSize(v42, &v101, v38);
  }
  else if ( v44 == CDxHandleBitmapRealization::GetSize )
  {
    CDxHandleBitmapRealization::GetSize(v42);
  }
  else
  {
    ((void (__fastcall *)(CDxHandleBitmapRealization *, int *, __int64))v44)(v42, &v101, v38);
  }
  v45 = -1;
  if ( a4 )
  {
    left = a4[10].left;
    v47 = v102;
    v48 = v101;
    v103[0] = v102;
    if ( left == -1 )
    {
      if ( v101 <= 0 || v102 <= 0 )
      {
        *(_DWORD *)lpMem = 0;
      }
      else
      {
        v94 = lpMem;
        *((_DWORD *)lpMem + 3) = 0;
        *(_QWORD *)v94 = 2LL;
        v94[2] = v48;
        v94[4] = 16;
        v94[7] = 0;
        v94[8] = v48;
        v94[5] = v47;
        v94[6] = 16;
      }
      v6 = 1;
      v43 = 1;
LABEL_46:
      v49 = *(int *)lpMem;
      if ( (_DWORD)v49 )
      {
        v50 = *((_DWORD *)lpMem + 2 * v49 + 1);
        v51 = -1;
        v52 = *((_DWORD *)lpMem + 3);
        v53 = *((_DWORD *)lpMem + 2);
        if ( *((int *)lpMem + 1) >= 0 )
          v51 = *((_DWORD *)lpMem + 1);
        *((_DWORD *)this + 12) = v51;
        v54 = -1;
        if ( v52 >= 0 )
          v54 = v52;
        *((_DWORD *)this + 13) = v54;
        v55 = -1;
        if ( v53 >= 0 )
          v55 = v53;
        *((_DWORD *)this + 14) = v55;
        if ( v50 >= 0 )
          v45 = v50;
        *((_DWORD *)this + 15) = v45;
      }
      goto LABEL_56;
    }
    if ( left )
    {
      *(_DWORD *)lpMem = 0;
      if ( (int)CRegion::TryAddRectangles((CRegion *)&lpMem, a4, a4[10].left) < 0 )
      {
        FastRegion::CRegion::SetRectangle((FastRegion::CRegion *)&lpMem, 0, 0, v48, v103[0]);
        v43 = 1;
        v6 = 1;
        goto LABEL_46;
      }
      v6 = 1;
    }
  }
  if ( a5 && *(_DWORD *)a5 && (*((_DWORD *)a5 + 5) || *((_DWORD *)a5 + 6)) )
  {
    if ( v6 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)&v119, (const struct tagRECT *)((char *)a5 + 4));
      CRegion::Union((CRegion *)&lpMem, (const struct CRegion *)&v119);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v119);
    }
    else
    {
      v95 = *((_DWORD *)a5 + 3);
      v96 = *((_DWORD *)a5 + 1);
      if ( v96 >= v95 || (v97 = *((_DWORD *)a5 + 2), v98 = *((_DWORD *)a5 + 4), v97 >= v98) )
      {
        *(_DWORD *)lpMem = 0;
      }
      else
      {
        v99 = lpMem;
        *((_DWORD *)lpMem + 3) = v97;
        *v99 = 2;
        v99[1] = v96;
        v99[2] = v95;
        v99[4] = 16;
        v99[7] = v96;
        v99[8] = v95;
        v99[5] = v98;
        v99[6] = 16;
      }
      v6 = 1;
    }
    goto LABEL_46;
  }
  if ( v6 )
    goto LABEL_46;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
LABEL_56:
  if ( v43
    || v100
    && ((unsigned int)((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3) > 1
     || *((_DWORD *)this + 36) == 3) )
  {
    v56 = *(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 26) + 8LL) + 80LL);
    if ( (char *)v56 == (char *)IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::MarkFullDirty )
      IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::MarkFullDirty();
    else
      v56();
  }
  else if ( v6 )
  {
    v81 = (CD2DBitmapCache *)(*((_QWORD *)this + 26) + 8LL);
    v82 = *(void (__fastcall **)(CD2DBitmapCache *, const struct FastRegion::Internal::CRgnData **))(*(_QWORD *)v81 + 72LL);
    if ( v82 == CD2DBitmapCache::AddInvalidRegion )
    {
      CD2DBitmapCache::AddInvalidRegion(v81, (const struct FastRegion::Internal::CRgnData **)&lpMem);
    }
    else if ( (char *)v82 == (char *)CDxHandleYUVBitmapRealization::MarkFullDirty )
    {
      CDxHandleYUVBitmapRealization::MarkFullDirty(v81);
    }
    else
    {
      v82(v81, (const struct FastRegion::Internal::CRgnData **)&lpMem);
    }
  }
  v57 = v100;
LABEL_60:
  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    if ( v57 || v5 || v6 )
    {
      v58 = (__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3;
      if ( v58 )
      {
        if ( v6 )
        {
          do
          {
            v59 = *(CMILRefCountImpl **)(*((_QWORD *)this + 8) + 8 * v58 - 8);
            v60 = *(_QWORD *)v59;
            if ( v59 )
            {
              v61 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(v60 + 8);
              if ( v61 == CMILRefCountImpl::AddReference )
                CMILRefCountImpl::AddReference(v59);
              else
                v61(v59);
              (*(void (__fastcall **)(CMILRefCountImpl *, _QWORD, LPVOID *))(*(_QWORD *)v59 + 24LL))(v59, v5, &lpMem);
              v62 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v59 + 16LL);
              if ( v62 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
                CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v59);
              else
                v62(v59);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, LPVOID *))(v60 + 24))(0LL, v5, &lpMem);
            }
            --v58;
          }
          while ( v58 );
        }
        else
        {
          do
          {
            v88 = *(CMILRefCountImpl **)(*((_QWORD *)this + 8) + 8 * v58 - 8);
            v89 = *(_QWORD *)v88;
            if ( v88 )
            {
              v90 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(v89 + 8);
              if ( v90 == CMILRefCountImpl::AddReference )
                CMILRefCountImpl::AddReference(v88);
              else
                v90(v88);
              (*(void (__fastcall **)(CMILRefCountImpl *, _QWORD, _QWORD))(*(_QWORD *)v88 + 24LL))(v88, v5, 0LL);
              v91 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v88 + 16LL);
              if ( v91 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
                CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v88);
              else
                v91(v88);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v89 + 24))(0LL, v5, 0LL);
            }
            --v58;
          }
          while ( v58 );
        }
      }
    }
    v63 = (_QWORD *)((char *)this + 160);
    *((_BYTE *)this + 96) = 0;
    v64 = *((_QWORD *)this + 20);
    v65 = *((_QWORD *)this + 21);
    if ( v64 != v65 )
    {
      v63[1] = v64;
      v65 = v64;
    }
    if ( v6 )
    {
      if ( *(_DWORD *)lpMem )
      {
        v66 = (char *)lpMem + 8 * *(_DWORD *)lpMem + 4;
        v67 = (__int64)&v66[*((int *)v66 + 1) - (__int64)*((int *)lpMem + 4) - ((_QWORD)lpMem + 12)] >> 3;
        if ( (_DWORD)v67 )
        {
          v68 = (v65 - *v63) >> 4;
          v69 = v68 + (unsigned int)v67;
          if ( v69 > (__int64)(v63[2] - *v63) >> 4 )
          {
            if ( v69 > 0xFFFFFFFFFFFFFFFLL )
              std::_Xlength_error("vector too long");
            size_of = std::_Get_size_of_n<16>(v68 + (unsigned int)v67);
            v71 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
            memmove_0(v71, (const void *)*v63, v63[1] - *v63);
            if ( *v63 )
              std::_Deallocate<16,0>(*v63, (v63[2] - *v63) & 0xFFFFFFFFFFFFFFF0uLL);
            *v63 = v71;
            v63[1] = &v71[16 * v68];
            v63[2] = &v71[16 * v69];
          }
          if ( *(_DWORD *)lpMem )
          {
            v72 = (char *)lpMem + 12;
            v73 = (char *)lpMem + *((int *)lpMem + 4) + 12;
            v74 = 0;
            v75 = (char *)lpMem + 8 * *(_DWORD *)lpMem + 4;
            v76 = (char *)lpMem + 20;
            v77 = (*((int *)lpMem + 6) - (*((int *)lpMem + 4) + 12LL) + 20) >> 3;
            if ( (int)v77 <= 0 )
            {
              v74 = 1;
              do
              {
                v72 = v76;
                v78 = *((int *)v76 + 3);
                v73 = &v76[*((int *)v76 + 1)];
                v76 += 8;
                LODWORD(v77) = (__int64)&v76[v78 - (_QWORD)v73] >> 3;
                if ( (_DWORD)v77 )
                  goto LABEL_103;
              }
              while ( v72 < v75 );
            }
          }
          else
          {
            LODWORD(v77) = v103[0];
            v75 = 0LL;
            v74 = v103[0];
            v72 = 0LL;
            v73 = *(char **)v103;
          }
LABEL_98:
          while ( v72 < v75 )
          {
            v84 = v72 + 8;
            v85 = (_OWORD *)v63[1];
            DWORD1(v115) = *(_DWORD *)v72;
            HIDWORD(v115) = *((_DWORD *)v72 + 2);
            v86 = 2 * v74;
            LODWORD(v115) = *(_DWORD *)&v73[4 * v86];
            DWORD2(v115) = *(_DWORD *)&v73[4 * v86 + 4];
            if ( v85 == (_OWORD *)v63[2] )
            {
              std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(v63, v85, &v115);
            }
            else
            {
              *v85 = v115;
              v63[1] += 16LL;
            }
            if ( ++v74 >= (int)v77 )
            {
              while ( 1 )
              {
                v72 = v84;
                v87 = *((int *)v84 + 3);
                v73 = &v84[*((int *)v84 + 1)];
                v84 += 8;
                LODWORD(v77) = (__int64)&v84[v87 - (_QWORD)v73] >> 3;
                if ( (_DWORD)v77 )
                  break;
                if ( v72 >= v75 )
                  goto LABEL_98;
              }
LABEL_103:
              v74 = 0;
            }
          }
        }
      }
    }
  }
  v79 = lpMem;
  if ( v129 != lpMem && lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v79);
  }
  return v100;
}
