/*
 * XREFs of ?ReleaseAllReferences@CSpriteShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140071B90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CSnapshotMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140071BF0 (-ReleaseAllReferences@CSnapshotMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CSpriteShapeMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[8]);
  v4 = this[9];
  this[8] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[10];
  this[9] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
  this[10] = 0LL;
  DirectComposition::CSnapshotMarshaler::ReleaseAllReferences((DirectComposition::CSnapshotMarshaler *)this, a2);
}
