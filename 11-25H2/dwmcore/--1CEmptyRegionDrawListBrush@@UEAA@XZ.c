/*
 * XREFs of ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x1800446E4
 * Callers:
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x180044690 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x18020D744 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(CEmptyRegionDrawListBrush *this)
{
  FastRegion::CRegion::FreeMemory((CEmptyRegionDrawListBrush *)((char *)this + 88));
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((char *)this + 80);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((char *)this + 72);
}
