/*
 * XREFs of ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x180171EF4
 * Callers:
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x180171EA0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x180172FA4 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(FastRegion::CRegion **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8

  FastRegion::CRegion::FreeMemory(this + 11);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(this + 10, v2, v3);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(this + 9, v4, v5);
}
