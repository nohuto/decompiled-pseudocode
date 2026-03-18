/*
 * XREFs of ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180173764
 * Callers:
 *     ?GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180173270 (-GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectangl.c)
 *     ?GetDirtyRegion@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18020D910 (-GetDirtyRegion@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRec.c)
 * Callees:
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C640 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x180173340 (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     ??1?$com_ptr_t@VIDirtyRectSource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180173890 (--1-$com_ptr_t@VIDirtyRectSource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1801738E0 (-GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CSurfaceBrush::CSurfaceRenderStrategy::GetDirtyRegionFromSurface(
        const struct CSurfaceBrush *this,
        __m128 *a2,
        const struct D2D_SIZE_F *a3,
        struct CRectanglesShape *a4)
{
  bool v5; // bl
  CMaskBrush *v7; // rcx
  __int64 (__fastcall **v10)(CMaskBrush *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v11)(CMaskBrush *, const struct _GUID *, void **); // rax
  int Interface; // eax
  bool (__fastcall *v13)(CPrimitiveGroup *__hidden, const struct D2D_SIZE_F *, struct CRectanglesShape *); // rax
  bool DirtyRegion; // al
  CPrimitiveGroup *v16[2]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v17[5]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v18[16]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh] BYREF

  v5 = 0;
  v7 = (CMaskBrush *)*((_QWORD *)this + 16);
  v10 = *(__int64 (__fastcall ***)(CMaskBrush *, const struct _GUID *, void **))v7;
  v16[0] = 0LL;
  v11 = *v10;
  if ( v11 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
    Interface = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(
                  v7,
                  &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27,
                  (void **)v16);
  else
    Interface = v11(v7, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, (void **)v16);
  if ( Interface < 0 )
  {
    wil::com_ptr_t<IDirtyRectSource,wil::err_returncode_policy>::~com_ptr_t<IDirtyRectSource,wil::err_returncode_policy>(v16);
    return 0;
  }
  else
  {
    v17[0] = &CRectanglesShape::`vftable';
    v17[1] = 0LL;
    v17[2] = v18;
    v19 = 0LL;
    v17[3] = v18;
    v17[4] = &v19;
    v13 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden, const struct D2D_SIZE_F *, struct CRectanglesShape *))(*(_QWORD *)v16[0] + 24LL);
    if ( v13 == CPrimitiveGroup::GetDirtyRegion )
      DirtyRegion = CPrimitiveGroup::GetDirtyRegion(v16[0], a3, (struct CRectanglesShape *)v17);
    else
      DirtyRegion = v13(v16[0], a3, (struct CRectanglesShape *)v17);
    if ( DirtyRegion )
      v5 = CSurfaceBrush::TransformDirtyRegion(this, a2, a3, (const struct CRectanglesShape *)v17, a4);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
    wil::com_ptr_t<IDirtyRectSource,wil::err_returncode_policy>::~com_ptr_t<IDirtyRectSource,wil::err_returncode_policy>(v16);
    return v5;
  }
}
