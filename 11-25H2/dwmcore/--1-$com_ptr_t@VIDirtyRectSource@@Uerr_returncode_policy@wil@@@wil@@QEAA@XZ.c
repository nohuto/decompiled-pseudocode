/*
 * XREFs of ??1?$com_ptr_t@VIDirtyRectSource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180191C50
 * Callers:
 *     ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180191B24 (-GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

void __fastcall wil::com_ptr_t<IDirtyRectSource,wil::err_returncode_policy>::~com_ptr_t<IDirtyRectSource,wil::err_returncode_policy>(
        CResource **a1)
{
  CResource *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v1);
    }
    else if ( (char *)v2 == (char *)CGenericInk::Release )
    {
      CGenericInk::Release(v1);
    }
    else
    {
      v2();
    }
  }
}
