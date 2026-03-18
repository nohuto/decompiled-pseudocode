/*
 * XREFs of ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x18014FE18
 * Callers:
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18014F9E0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18014FDB0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CoordMap@@QEAA@XZ @ 0x180151478 (--1CoordMap@@QEAA@XZ.c)
 */

void __fastcall CNineGridDrawListBrush::~CNineGridDrawListBrush(CNineGridDrawListBrush *this)
{
  CoordMap::~CoordMap((CNineGridDrawListBrush *)((char *)this + 112));
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((char *)this + 72);
}
