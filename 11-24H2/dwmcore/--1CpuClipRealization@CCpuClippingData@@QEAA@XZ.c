/*
 * XREFs of ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800AE6B4
 * Callers:
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x180032D54 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ??1CCpuClippingData@@QEAA@XZ @ 0x1800F63E4 (--1CCpuClippingData@@QEAA@XZ.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CCpuClippingData::CpuClipRealization::~CpuClipRealization(CRectanglesShape **this)
{
  CShapePtr::~CShapePtr(this + 3);
  CShapePtr::~CShapePtr(this + 1);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this);
}
