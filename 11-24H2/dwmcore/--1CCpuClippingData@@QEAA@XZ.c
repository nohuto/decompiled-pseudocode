/*
 * XREFs of ??1CCpuClippingData@@QEAA@XZ @ 0x1800F63E4
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x180032F54 (--1CTreeData@@UEAA@XZ.c)
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x1800F6768 (--1CSubDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800AE6B4 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCpuClippingData::~CCpuClippingData(CCpuClippingData *this)
{
  void *v1; // rbx
  void *v3; // rcx

  v1 = (void *)*((_QWORD *)this + 7);
  if ( v1 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(*((CRectanglesShape ***)this + 7));
    operator delete(v1, 0x78uLL);
  }
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    operator delete(v3, 0x44uLL);
}
