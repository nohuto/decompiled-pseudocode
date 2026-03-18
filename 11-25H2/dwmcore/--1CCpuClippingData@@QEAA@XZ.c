/*
 * XREFs of ??1CCpuClippingData@@QEAA@XZ @ 0x180083BFC
 * Callers:
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x180082504 (--1CSubDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x18001BD04 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCpuClippingData::~CCpuClippingData(CCpuClippingData *this)
{
  void *v1; // rbx
  void *v3; // rcx

  v1 = (void *)*((_QWORD *)this + 7);
  if ( v1 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(*((CCpuClippingData::CpuClipRealization **)this + 7));
    operator delete(v1, 0x78uLL);
  }
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
    operator delete(v3, 0x44uLL);
}
