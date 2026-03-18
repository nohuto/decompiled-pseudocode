/*
 * XREFs of ?HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180276C08
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D308 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800CAC30 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1800CD0F0 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1801094B0 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?DoesIntersect@CCornerRects@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18027572C (-DoesIntersect@CCornerRects@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?OptimizeCornerRects@COcclusionContext@@QEBAXPEAVCCornerRects@@H@Z @ 0x1802860BC (-OptimizeCornerRects@COcclusionContext@@QEBAXPEAVCCornerRects@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::HasOverlappingCornerRects(__int64 a1, __int64 **a2)
{
  CDesktopTree *DesktopTree; // rax
  const struct COcclusionContext *SharedOcclusionContext; // rax
  const struct CVisualTree *v6; // r10
  COcclusionContext *v7; // rsi
  int v8; // eax
  const struct CMonitorTransform *MonitorTransform; // r14
  __int64 *v10; // r11
  __int64 *v11; // rsi
  const struct D2D_RECT_F *v12; // rdx
  const struct D2D_RECT_F *v13; // rdx
  float *v14; // r8
  __int64 *v15; // r11
  __int64 *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // r11
  const struct D2D_RECT_F *v19; // rdx
  float *v20; // rdx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF

  if ( !*(_BYTE *)(a1 + 224) )
  {
    DesktopTree = CVisual::GetDesktopTree(*(CVisual **)(a1 + 8));
    SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(DesktopTree);
    v7 = SharedOcclusionContext;
    if ( SharedOcclusionContext )
    {
      v8 = CVisual::GetZ(*(CVisual **)(a1 + 8), v6, *((_DWORD *)SharedOcclusionContext + 384));
      COcclusionContext::OptimizeCornerRects(v7, (struct CCornerRects *)(a1 + 160), v8);
    }
  }
  if ( a2[1] != *a2
    && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 144LL))(*(_QWORD *)(a1 + 16)) )
  {
    MonitorTransform = COverlayContext::GetMonitorTransform(*(COverlayContext **)a1);
    if ( !*(_BYTE *)(a1 + 224) )
    {
      v10 = *a2;
      v11 = a2[1];
      while ( v10 != v11 )
      {
        if ( *(_QWORD *)a1 == *(_QWORD *)*v10
          && *(_DWORD *)(a1 + 384) < *(_DWORD *)(*v10 + 384)
          && !IsEmpty((const struct D2D_RECT_F *)(a1 + 144))
          && !IsEmpty(v12)
          && v14[2] > v13->left
          && v13->right > *v14
          && v14[3] > v13->top
          && v13->bottom > v14[1] )
        {
          v22 = 0LL;
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)MonitorTransform + 120, v13, (float *)&v22);
          if ( CCornerRects::DoesIntersect((const struct D2D_RECT_F *)(a1 + 160)) )
          {
LABEL_32:
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
              McTemplateU0xq_EventWriteTransfer(
                *(unsigned int *)(*(_QWORD *)(a1 + 16) + 40LL),
                &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
                *(unsigned int *)(*(_QWORD *)(a1 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL)) << 32),
                11);
            return 1;
          }
        }
        ++v10;
      }
    }
    v15 = *a2;
    v16 = a2[1];
    while ( v15 != v16 )
    {
      v17 = *v15;
      v22 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(
        (__int64)MonitorTransform + 120,
        (const struct D2D_RECT_F *)(a1 + 144),
        (float *)&v22);
      if ( *(_QWORD *)a1 == *(_QWORD *)v17
        && *(_DWORD *)(a1 + 384) > *(_DWORD *)(v17 + 384)
        && !*(_BYTE *)(v17 + 224)
        && !IsEmpty((const struct D2D_RECT_F *)(a1 + 144))
        && !IsEmpty(v19)
        && *(float *)(a1 + 152) > *v20
        && v20[2] > *(float *)(a1 + 144)
        && *(float *)(a1 + 156) > v20[1]
        && v20[3] > *(float *)(a1 + 148)
        && CCornerRects::DoesIntersect((const struct D2D_RECT_F *)(v17 + 160)) )
      {
        goto LABEL_32;
      }
      v15 = (__int64 *)(v18 + 8);
    }
  }
  return 0;
}
