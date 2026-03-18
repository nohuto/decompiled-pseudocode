/*
 * XREFs of ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1801080B4
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180107A70 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x18001BD04 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCpuClippingData::Clear(CCpuClippingData *this)
{
  void *v2; // rcx
  CCpuClippingData::CpuClipRealization *v3; // rdi

  v2 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v2 )
    operator delete(v2, 0x44uLL);
  v3 = (CCpuClippingData::CpuClipRealization *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(v3);
    operator delete(v3, 0x78uLL);
  }
}
