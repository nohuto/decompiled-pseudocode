/*
 * XREFs of ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x180125658
 * Callers:
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18011A3A0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x1801255F0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CoordMap@@QEAA@XZ @ 0x180125584 (--1CoordMap@@QEAA@XZ.c)
 */

void __fastcall CNineGridDrawListBrush::~CNineGridDrawListBrush(CMultiPrimitiveDrawListBrush **this)
{
  CoordMap::~CoordMap((CoordMap *)(this + 14));
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(this + 9);
}
