/*
 * XREFs of ?EmitReleaseCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F1270
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DBE0 (-EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F12BC (-EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::EmitReleaseCommand(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitRemoveAllChildren(this, (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CResourceMarshaler::EmitReleaseCommand(this, a2);
  return v4;
}
