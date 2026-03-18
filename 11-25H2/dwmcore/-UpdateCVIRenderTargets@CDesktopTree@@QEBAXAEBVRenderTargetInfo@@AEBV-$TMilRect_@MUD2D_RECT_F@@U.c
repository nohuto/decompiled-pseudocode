/*
 * XREFs of ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18000BEF4 (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180054610 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180097160 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800A3330 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x1800B4150 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1800CDAA0 (-GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x180147010 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x180147FC0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801E06E8 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18020AB84 (-GetBounds@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNe.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z @ 0x18028FEBC (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802D6E70 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopTree::UpdateCVIRenderTargets(struct CVisualTree *a1, __int64 a2, struct D2D_RECT_F *a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // r13d
  CVisual **v7; // rsi
  CVisual **v8; // rax
  CVisual *v9; // rbx
  bool (__fastcall *i)(CDeviceTextureTarget *__hidden); // rcx
  _QWORD *v11; // r10
  struct D2D_RECT_F **v12; // rdx
  char *v13; // rdi
  __int128 *v14; // rbx
  __int64 v15; // rax
  struct D2D_RECT_F **v16; // r9
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  bool v20; // zf
  struct D2D_RECT_F v21; // xmm7
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  CCachedVisualImage::CCachedTarget **v25; // r12
  CCachedVisualImage::CCachedTarget **v26; // r13
  char v27; // bl
  __int64 v28; // rdi
  void (__fastcall *v29)(__int64, __m128 *); // rax
  bool IsHardwareProtected; // dl
  __int64 v31; // rax
  __int64 v32; // rdx
  bool (__fastcall *v33)(CDeviceTextureTarget *__hidden); // rdx
  char v34; // al
  CCachedVisualImage::CCachedTarget *v35; // rbx
  char v36; // cl
  __int64 v37; // rbx
  __int64 v38; // rdi
  unsigned int v39; // r14d
  HANDLE ProcessHeap; // rax
  float v41; // xmm5_4
  float v42; // xmm0_4
  float v43; // xmm6_4
  float v44; // xmm4_4
  __int64 v45; // rax
  char *v46; // rdx
  __int64 v47; // r10
  __int64 v48; // rdx
  char *v49; // r10
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float right; // xmm4_4
  float bottom; // xmm0_4
  unsigned int v55; // eax
  __m128 v56; // xmm1
  unsigned int v57; // ebx
  float v58; // xmm4_4
  float v59; // xmm2_4
  float v60; // xmm3_4
  __int64 v61; // rax
  void **v62; // rbx
  void **v63; // rax
  bool (__fastcall **TreeDataListHead)(CDeviceTextureTarget *__hidden); // rax
  char IsProtected; // al
  __int64 *v66; // rcx
  __int64 v67; // rax
  unsigned int SubtreeZ; // eax
  const char *v69; // rdi
  const struct D2D_RECT_F *Bounds; // rax
  const char *v71; // rbx
  DwmDbg::DbgString *v72; // rax
  void **v73; // rbx
  void **v74; // rax
  char v75; // [rsp+30h] [rbp-D0h]
  unsigned int v76; // [rsp+34h] [rbp-CCh]
  unsigned int v77; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v78; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v79; // [rsp+48h] [rbp-B8h]
  CVisual **v80; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_RECT_F *v81; // [rsp+58h] [rbp-A8h]
  void *v82; // [rsp+60h] [rbp-A0h] BYREF
  void *v83; // [rsp+68h] [rbp-98h] BYREF
  void *v84; // [rsp+70h] [rbp-90h] BYREF
  __int128 v85; // [rsp+78h] [rbp-88h]
  char *v86; // [rsp+88h] [rbp-78h] BYREF
  char *v87; // [rsp+90h] [rbp-70h] BYREF
  char *v88; // [rsp+98h] [rbp-68h] BYREF
  char *v89; // [rsp+A0h] [rbp-60h] BYREF
  struct D2D_RECT_F v90; // [rsp+A8h] [rbp-58h] BYREF
  float v91; // [rsp+B8h] [rbp-48h] BYREF
  float v92; // [rsp+BCh] [rbp-44h]
  float v93; // [rsp+C0h] [rbp-40h]
  float v94; // [rsp+C4h] [rbp-3Ch]
  LPVOID lpMem; // [rsp+C8h] [rbp-38h]
  char *v96; // [rsp+D0h] [rbp-30h]
  __m128 *v97; // [rsp+D8h] [rbp-28h]
  __int128 v98; // [rsp+E0h] [rbp-20h] BYREF
  char v99; // [rsp+F0h] [rbp-10h] BYREF
  __m128 v100; // [rsp+100h] [rbp+0h] BYREF
  float v101; // [rsp+110h] [rbp+10h]
  bool v102; // [rsp+114h] [rbp+14h]
  __int16 v103; // [rsp+115h] [rbp+15h]
  char v104; // [rsp+117h] [rbp+17h]
  char v105[16]; // [rsp+120h] [rbp+20h] BYREF
  CVisual ***v106; // [rsp+130h] [rbp+30h]
  __int64 v107; // [rsp+138h] [rbp+38h]
  unsigned int *v108; // [rsp+140h] [rbp+40h]
  __int64 v109; // [rsp+148h] [rbp+48h]
  unsigned int *v110; // [rsp+150h] [rbp+50h]
  __int64 v111; // [rsp+158h] [rbp+58h]
  _BYTE v112[16]; // [rsp+160h] [rbp+60h] BYREF

  v81 = a3;
  v4 = 0LL;
  v79 = a2;
  v5 = a2;
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 111);
  if ( *((_QWORD *)a1 + 334) == v4 )
  {
    v6 = 0;
    v76 = 0;
    v78 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_RENDER_CVIPASS_Start,
        a3,
        1LL,
        &v100);
    *((_DWORD *)a1 + 1052) = 0x7FFFFFFF;
    v7 = (CVisual **)*((_QWORD *)a1 + 653);
    v77 = *((_DWORD *)a1 + 1046);
    v8 = (CVisual **)*((_QWORD *)a1 + 654);
    v80 = v8;
    while ( 1 )
    {
      if ( v7 == v8 )
      {
        v37 = *((_QWORD *)a1 + 570);
        v38 = *((_QWORD *)a1 + 571);
        v39 = v78;
        while ( v37 != v38 )
        {
          if ( (int)CThreadContext::RegisterGraphWalkRoot(*(const void **)v37) >= 0 )
          {
            if ( !*(_BYTE *)(v37 + 32)
              || (SubtreeZ = CVisual::GetSubtreeZ(*(CVisual **)v37, a1, v77),
                  !(unsigned __int8)COcclusionContext::IsOccluded((char *)a1 + 2648, v37 + 16, SubtreeZ, 0LL)) )
            {
              v66 = (__int64 *)(*(_QWORD *)(v37 + 8) + 80LL);
              v67 = *v66;
              *(_QWORD *)&v90.left = 0LL;
              (*(void (__fastcall **)(__int64 *, __int64, struct D2D_RECT_F *))(v67 + 104))(v66, v5, &v90);
              ++v39;
              if ( *(_QWORD *)&v90.left )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v90.left + 16LL))(*(_QWORD *)&v90.left);
            }
            CThreadContext::UnregisterGraphWalkRoot();
          }
          v37 += 40LL;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_RENDER_CVIPASS_Stop,
            a3,
            1LL,
            v112);
        if ( (v76 || v39) && (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
        {
          v80 = (CVisual **)*((_QWORD *)a1 + 329);
          v77 = v39;
          v106 = &v80;
          v78 = v76;
          v108 = &v78;
          v110 = &v77;
          v107 = 8LL;
          v109 = 4LL;
          v111 = 4LL;
          McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Compositor_Context, &RenderCVIs, a3, 4LL, v105);
        }
        return;
      }
      v9 = *v7;
      lpMem = &v98;
      *(_QWORD *)&v85 = 0LL;
      v97 = &v100;
      v96 = &v99;
      *((_QWORD *)&v85 + 1) = a1;
      v98 = v85;
      if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a1 + 184LL))(a1) )
        break;
      v11 = (_QWORD *)((char *)v9 + 328);
LABEL_10:
      if ( !v11 )
        goto LABEL_101;
      v12 = (struct D2D_RECT_F **)v11[18];
      v13 = v96;
      v14 = (__int128 *)lpMem;
      while ( 1 )
      {
        if ( v12 == (struct D2D_RECT_F **)v11[19] )
        {
          v18 = 0LL;
          goto LABEL_22;
        }
        i = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))&(*v12)[130].left;
        v15 = *(_QWORD *)&(*v12)[129].right;
        a3 = (struct D2D_RECT_F *)((char *)i - v15);
        if ( (bool (__fastcall *)(CDeviceTextureTarget *__hidden))((char *)i - v15) == (bool (__fastcall *)(CDeviceTextureTarget *__hidden))(v96 - (_BYTE *)lpMem) )
          break;
LABEL_124:
        ++v12;
      }
      v16 = (struct D2D_RECT_F **)lpMem;
      v17 = v15 - (_QWORD)lpMem;
      while ( (char *)((char *)v16 + v17) != (char *)i )
      {
        a3 = *v16;
        if ( *(struct D2D_RECT_F **)((char *)v16 + v17) != *v16 )
          goto LABEL_124;
        a3 = v16[1];
        if ( *(struct D2D_RECT_F **)((char *)v16 + v17 + 8) != a3 )
          goto LABEL_124;
        v16 += 2;
      }
      a3 = *v12;
      i = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v11[31] + 24LL);
      *(_QWORD *)&(*v12)[139].right = *((_QWORD *)i + 111);
      v18 = (__int64)*v12;
LABEL_20:
      v14 = (__int128 *)lpMem;
      v13 = v96;
LABEL_22:
      v19 = (v13 - (char *)v14) >> 4;
      if ( v19 )
        v96 = &v13[-16 * v19];
      lpMem = 0LL;
      if ( v14 != &v98 && v14 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v14);
      }
      if ( v18 )
      {
        v20 = *(_QWORD *)(v18 + 136) == 0LL;
        v21 = *(struct D2D_RECT_F *)(v18 + 96);
        v90 = v21;
        if ( v20
          || (float)(*(float *)(v18 + 104) - *(float *)(v18 + 96)) < 1.0
          || (float)(*(float *)(v18 + 108) - *(float *)(v18 + 100)) < 1.0
          || (v22 = *(float *)(v18 + 2128), v23 = *(float *)(v18 + 2136), v23 < v22)
          || (v24 = *(float *)(v18 + 2140), v24 < *(float *)(v18 + 2132))
          || (float)(v23 - v22) < 1.0
          || (float)(v24 - *(float *)(v18 + 2132)) < 1.0
          || *(float *)(v18 + 120) <= 0.5
          || *(float *)(v18 + 124) <= 0.5 )
        {
LABEL_53:
          LOBYTE(i) = 0;
        }
        else
        {
          v25 = *(CCachedVisualImage::CCachedTarget ***)(v18 + 184);
          v26 = *(CCachedVisualImage::CCachedTarget ***)(v18 + 192);
          v27 = *((_BYTE *)g_pComposition + 6490);
          v75 = v27;
          while ( v25 != v26 )
          {
            v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*v25 + 1) + 144LL))(*((_QWORD *)*v25 + 1)) + 16;
            v29 = *(void (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v28 + 120LL);
            if ( (char *)v29 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
            {
              IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid(v28 - 256, &v100);
              v100.m128_i32[2] = *(_DWORD *)(v28 - 28);
              v100.m128_i32[3] = *(_DWORD *)(v28 + 24);
              v101 = *(float *)(v28 + 28);
              v27 = v75;
              IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v28 - 256));
              v102 = IsHardwareProtected;
              v103 = 0;
              v104 = 0;
            }
            else
            {
              v29(v28, &v100);
              IsHardwareProtected = v102;
            }
            if ( v100.m128_u64[0] == *(_QWORD *)v79
              && (v100.m128_i32[2] == -1 || v100.m128_i32[2] == *(_DWORD *)(v79 + 8) || *(_DWORD *)(v79 + 8) == -3)
              && (v101 != 0.0) == (*(float *)(v79 + 16) != 0.0)
              && (!IsHardwareProtected || *(_BYTE *)(v79 + 20)) )
            {
              v31 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*v25 + 1) + 144LL))(*((_QWORD *)*v25 + 1));
              v32 = *(_QWORD *)v31;
              if ( v27 )
              {
                if ( *(__int64 (__fastcall **)(_QWORD))(v32 + 160) == CDeviceTextureTarget::IsProtected )
                  IsProtected = CDeviceTextureTarget::IsProtected(v31);
                else
                  IsProtected = (*(__int64 (__fastcall **)(__int64))(v32 + 160))(v31);
                if ( !IsProtected )
                {
LABEL_49:
                  v35 = *v25;
                  if ( *v25 && CCachedVisualImage::CCachedTarget::IsValid(*v25) && !*((_BYTE *)v35 + 56) )
                  {
                    v5 = v79;
                    v6 = v76;
                    goto LABEL_53;
                  }
                  break;
                }
              }
              else
              {
                v33 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v32 + 176);
                i = CDeviceTextureTarget::IsBlackedOutForReadback;
                if ( v33 == CDeviceTextureTarget::IsBlackedOutForReadback )
                  v34 = *(_BYTE *)(v31 + 51);
                else
                  v34 = v33((CDeviceTextureTarget *)v31);
                if ( !v34 )
                  goto LABEL_49;
              }
            }
            ++v25;
          }
          v5 = v79;
          LOBYTE(i) = 1;
          v6 = v76;
        }
        if ( DwmDbg::Backdrops::IsEtwEnabled((DwmDbg::Backdrops *)i) )
        {
          if ( !v36 )
            goto LABEL_56;
          v69 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v84, &v90);
          Bounds = (const struct D2D_RECT_F *)CTreeDirty::GetBounds((char *)a1 + 112, v112);
          v71 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v83, Bounds);
          v72 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v82, v81);
          v73 = (void **)DwmDbg::DbgString::DbgString(
                           &v86,
                           "renderTarget=[%s], dirtyRegion=[%s], bviBounds=[%s]",
                           *(const char **)v72,
                           v71,
                           v69);
          v74 = (void **)DwmDbg::DbgString::DbgString(&v87, "BVI-AttemptPreRender");
          CBackdropVisualImage::LogEtwEvent(v18, v74, v73);
          if ( v82 )
            operator delete(v82);
          if ( v83 )
            operator delete(v83);
          if ( v84 )
            operator delete(v84);
        }
        else if ( !v36 )
        {
          goto LABEL_56;
        }
        v20 = *((_BYTE *)a1 + 2436) == 0;
        v41 = 0.0;
        v42 = 0.0;
        v94 = 0.0;
        v43 = 0.0;
        v93 = 0.0;
        v44 = 0.0;
        v92 = 0.0;
        v91 = 0.0;
        if ( v20 )
        {
          v45 = *((unsigned int *)a1 + 32);
          v46 = (char *)a1 + 132;
          v47 = v45;
          if ( a1 == (struct CVisualTree *)-132LL && v45 )
          {
LABEL_122:
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
        }
        else
        {
          v46 = (char *)a1 + 2420;
          if ( a1 == (struct CVisualTree *)-2420LL )
            goto LABEL_122;
          v47 = 1LL;
        }
        if ( v46 != &v46[16 * v47] )
        {
          do
          {
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v91, v46);
            v46 = (char *)(v48 + 16);
          }
          while ( v46 != v49 );
          v41 = v94;
          v42 = v93;
          v43 = v92;
          v44 = v91;
        }
        if ( v42 > v44 && v41 > v43 )
        {
          v50 = _mm_shuffle_ps((__m128)v21, (__m128)v21, 170).m128_f32[0];
          if ( v50 > v21.left )
          {
            v51 = _mm_shuffle_ps((__m128)v21, (__m128)v21, 255).m128_f32[0];
            v52 = _mm_shuffle_ps((__m128)v21, (__m128)v21, 85).m128_f32[0];
            if ( v51 > v52 && v42 > v21.left && v50 > v44 && v41 > v52 && v51 > v43 )
            {
              right = v81->right;
              if ( right > v81->left )
              {
                bottom = v81->bottom;
                if ( bottom > v81->top
                  && v50 > v21.left
                  && v51 > v52
                  && right > v21.left
                  && v50 > v81->left
                  && bottom > v52
                  && v51 > v81->top )
                {
                  v55 = CVisual::GetSubtreeZ(*v7, a1, v77);
                  v56 = *(__m128 *)(v18 + 96);
                  v57 = v55;
                  v58 = _mm_shuffle_ps(v56, v56, 170).m128_f32[0];
                  v100 = v56;
                  if ( v58 > v56.m128_f32[0] )
                  {
                    v59 = _mm_shuffle_ps(v56, v56, 255).m128_f32[0];
                    v60 = _mm_shuffle_ps(v56, v56, 85).m128_f32[0];
                    if ( v59 > v60 )
                    {
                      if ( !v55 )
                        goto LABEL_92;
                      v20 = *((_BYTE *)a1 + 4212) == 0;
                      v90 = 0LL;
                      if ( v20 )
                      {
                        LODWORD(v90.left) = v56.m128_i32[0];
                        v90.top = v60;
                        v90.right = v58;
                        v90.bottom = v59;
                      }
                      else
                      {
                        COcclusionContext::PageInPixelsRectToDeviceRect((char *)a1 + 2648, &v100, &v90);
                      }
                      if ( !(unsigned __int8)CArrayBasedCoverageSet::IsCovered((char *)a1 + 3264, &v90, v57) )
                      {
LABEL_92:
                        v61 = *(_QWORD *)(v18 + 80);
                        *(_QWORD *)&v90.left = 0LL;
                        if ( (*(int (__fastcall **)(__int64, __int64, struct D2D_RECT_F *))(v61 + 96))(
                               v18 + 80,
                               v5,
                               &v90) >= 0 )
                        {
                          v62 = (void **)DwmDbg::DbgString::DbgString(&v88, word_180336D88);
                          v63 = (void **)DwmDbg::DbgString::DbgString(&v89, "BVI-SuccessfulPreRender");
                          CBackdropVisualImage::LogEtwEvent(v18, v63, v62);
                          v76 = ++v6;
                        }
                        if ( *(_QWORD *)&v90.left )
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v90.left + 16LL))(*(_QWORD *)&v90.left);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_56:
      v8 = v80;
      ++v7;
    }
    TreeDataListHead = (bool (__fastcall **)(CDeviceTextureTarget *__hidden))CVisual::GetTreeDataListHead(v9);
    if ( TreeDataListHead )
    {
      for ( i = *TreeDataListHead;
            (char *)i != (char *)TreeDataListHead;
            i = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))i )
      {
        v11 = (_QWORD *)((char *)i - 344);
        if ( *((struct CVisualTree **)i + 4) == a1 )
          goto LABEL_10;
      }
    }
LABEL_101:
    v18 = 0LL;
    goto LABEL_20;
  }
}
