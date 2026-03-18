/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x1800E3D8C
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180083B2C (--1COcclusionContext@@QEAA@XZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800E3CEC (--1-$unique_ptr@VCPreComputeContext@@U-$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1801DE2FC (--1CDrawingContext@@MEAA@XZ.c)
 *     ??R?$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z @ 0x1801E3B7C (--R-$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180097B10 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180097BD8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CPolygon>((__int64 *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 8);
}
