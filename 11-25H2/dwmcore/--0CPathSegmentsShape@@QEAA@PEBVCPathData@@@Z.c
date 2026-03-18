/*
 * XREFs of ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18005B3D8
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1802A9290 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

CPathSegmentsShape *__fastcall CPathSegmentsShape::CPathSegmentsShape(
        CPathSegmentsShape *this,
        const struct CPathData *a2)
{
  __int64 *v3; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CPathSegmentsShape::`vftable';
  v3 = (__int64 *)((char *)this + 16);
  *v3 = (__int64)a2;
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v3);
  return this;
}
