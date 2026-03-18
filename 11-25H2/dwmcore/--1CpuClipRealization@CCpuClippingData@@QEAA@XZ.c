/*
 * XREFs of ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x18001BD04
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ??1CCpuClippingData@@QEAA@XZ @ 0x180083BFC (--1CCpuClippingData@@QEAA@XZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800CE9F4 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1801080B4 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CCpuClippingData::CpuClipRealization::~CpuClipRealization(CCpuClippingData::CpuClipRealization *this)
{
  CShapePtr::~CShapePtr((CCpuClippingData::CpuClipRealization *)((char *)this + 24));
  CShapePtr::~CShapePtr((CCpuClippingData::CpuClipRealization *)((char *)this + 8));
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this);
}
