/*
 * XREFs of ??1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020D9EC
 * Callers:
 *     ??_ECMeshGeometry2DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DEC0 (--_ECMeshGeometry2DMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C009E150 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CMeshGeometry2DMarshaler::~CMeshGeometry2DMarshaler(
        DirectComposition::CMeshGeometry2DMarshaler *this)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 112));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 88));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 64));
}
