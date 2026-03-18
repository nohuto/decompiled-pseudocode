/*
 * XREFs of ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180099730 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180058460 (-GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x18009CB00 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?GetTreeBounds@CLegacyRenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18009CD00 (-GetTreeBounds@CLegacyRenderTarget@@UEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009D528 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800D4510 (-UseSuperSample@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     ?GetRectCount@CTreeDirty@@QEBAIXZ @ 0x1801EF790 (-GetRectCount@CTreeDirty@@QEBAIXZ.c)
 *     ?UseSuperSample@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801F0600 (-UseSuperSample@CDDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1801F41A0 (-GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ.c)
 *     ?GetTreeBounds@CDDisplayRenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801FBD00 (-GetTreeBounds@CDDisplayRenderTarget@@UEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?FindBestMandatoryMergePair@?$CRectangleCollection@$07@@QEAAXPEAI0@Z @ 0x180241794 (-FindBestMandatoryMergePair@-$CRectangleCollection@$07@@QEAAXPEAI0@Z.c)
 *     ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x180241D74 (-Merge@-$CRectangleCollection@$07@@QEAA_NII@Z.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x180241E64 (-UpdateOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x180241EE8 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitorDirty::AddDirtyRegion(__int64 a1, CTreeDirty *a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // rbx
  __int64 (*v7)(void); // rax
  __int64 TreeBounds; // rax
  __int64 v9; // r12
  CDesktopTree *v10; // rax
  const struct COcclusionContext *SharedOcclusionContext; // rax
  CLegacyRenderTarget *v12; // rcx
  const struct CMILMatrix *(__fastcall *v13)(CDDisplayRenderTarget *__hidden); // rax
  const struct CMILMatrix *DeviceTransform; // rax
  CLegacyRenderTarget *v15; // rcx
  const struct CMILMatrix *v16; // r15
  bool (__fastcall *v17)(CDDisplayRenderTarget *__hidden); // rax
  char v18; // al
  char v19; // r14
  unsigned int v20; // esi
  const char *v21; // r9
  unsigned int *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rcx
  const struct FastRegion::Internal::CRgnData **v25; // rcx
  int v26; // [rsp+38h] [rbp-81h]
  unsigned int v27; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-65h] BYREF
  __int64 v29; // [rsp+58h] [rbp-61h]
  const struct COcclusionContext *v30; // [rsp+60h] [rbp-59h]
  float v31[6]; // [rsp+68h] [rbp-51h] BYREF
  void *v32; // [rsp+80h] [rbp-39h] BYREF
  _DWORD v33[18]; // [rsp+88h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v3 = *(_BYTE *)(a1 + 2312) == 0;
  v4 = a3;
  v29 = a3;
  if ( v3 )
  {
    v7 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 8) + 32LL);
    if ( v7 == CLegacyRenderTarget::GetTreeBounds )
      TreeBounds = CLegacyRenderTarget::GetTreeBounds();
    else
      TreeBounds = v7 == CDDisplayRenderTarget::GetTreeBounds ? CDDisplayRenderTarget::GetTreeBounds() : v7();
    v9 = TreeBounds;
    v10 = (CDesktopTree *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2320) + 56LL))(*(_QWORD *)(a1 + 2320));
    SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(v10);
    v12 = *(CLegacyRenderTarget **)(a1 + 8);
    v30 = SharedOcclusionContext;
    v13 = *(const struct CMILMatrix *(__fastcall **)(CDDisplayRenderTarget *__hidden))(*(_QWORD *)v12 + 64LL);
    if ( v13 == CLegacyRenderTarget::GetDeviceTransform )
      DeviceTransform = CLegacyRenderTarget::GetDeviceTransform(v12);
    else
      DeviceTransform = v13 == CDDisplayRenderTarget::GetDeviceTransform
                      ? CDDisplayRenderTarget::GetDeviceTransform(v12)
                      : (const struct CMILMatrix *)((__int64 (*)(void))v13)();
    v15 = *(CLegacyRenderTarget **)(a1 + 8);
    v16 = DeviceTransform;
    v17 = *(bool (__fastcall **)(CDDisplayRenderTarget *__hidden))(*(_QWORD *)v15 + 40LL);
    if ( v17 == CLegacyRenderTarget::UseSuperSample )
      v18 = CLegacyRenderTarget::UseSuperSample(v15);
    else
      v18 = v17 == CDDisplayRenderTarget::UseSuperSample
          ? CDDisplayRenderTarget::UseSuperSample(v15)
          : ((__int64 (*)(void))v17)();
    v33[0] = 0;
    v19 = v18;
    v32 = v33;
    v20 = 0;
    if ( CTreeDirty::GetRectCount(a2) )
    {
      do
      {
        LOBYTE(v26) = v19;
        CTreeDirty::GetOptimizedRect(
          a2,
          v31,
          v20,
          v9,
          v30,
          (unsigned __int64)&v32 & -(__int64)(*(_QWORD *)(a1 + 464) != 0LL),
          v16,
          v26,
          v4);
        if ( v31[2] > v31[0] && v31[3] > v31[1] )
        {
          v22 = (unsigned int *)(a1 + 16);
          if ( v31[2] > v31[0] && v31[3] > v31[1] )
          {
            if ( *(_BYTE *)(a1 + 456) == 1 )
              *(_BYTE *)(a1 + 456) = 0;
            *(_OWORD *)&v22[4 * *v22 + 1] = *(_OWORD *)v31;
            v23 = *v22 + 1;
            *v22 = v23;
            if ( v23 > 8 )
            {
              if ( v23 > 9 )
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x3E,
                  (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
                  v21);
              v24 = a1 + 16;
              if ( *(_BYTE *)(a1 + 452) )
                CRectangleCollection<8>::EnsureWeights(v24);
              else
                CRectangleCollection<8>::UpdateOverhead(v24, 8LL, 0xFFFFFFFFLL);
              v28 = 0;
              v27 = 0;
              CRectangleCollection<8>::FindBestMandatoryMergePair(a1 + 16, &v28, &v27);
              CRectangleCollection<8>::Merge(a1 + 16, v28, v27);
            }
            else
            {
              *(_BYTE *)(a1 + 452) = 1;
            }
          }
          v25 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 464);
          if ( v25 )
          {
            CRegion::Union(v25, (const struct FastRegion::Internal::CRgnData **)&v32);
            *(_DWORD *)v32 = 0;
          }
          v4 = v29;
        }
        ++v20;
      }
      while ( v20 < CTreeDirty::GetRectCount(a2) );
      if ( v33 != v32 )
        operator delete(v32);
    }
  }
}
