/*
 * XREFs of ?ReleaseAllReferences@CMeshGeometry2DMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C009E150 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CMeshGeometry2DMarshaler::ReleaseAllReferences(
        DirectComposition::CMeshGeometry2DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 64));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 88));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 112));
}
