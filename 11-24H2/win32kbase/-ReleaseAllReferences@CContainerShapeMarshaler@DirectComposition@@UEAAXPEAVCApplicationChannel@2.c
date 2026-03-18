/*
 * XREFs of ?ReleaseAllReferences@CContainerShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140071B50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CSnapshotMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140071BF0 (-ReleaseAllReferences@CSnapshotMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140072D88 (-ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CContainerShapeMarshaler::ReleaseAllReferences(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CContainerShapeMarshaler::ClearShapes(this, a2);
  DirectComposition::CSnapshotMarshaler::ReleaseAllReferences(this, a2);
}
