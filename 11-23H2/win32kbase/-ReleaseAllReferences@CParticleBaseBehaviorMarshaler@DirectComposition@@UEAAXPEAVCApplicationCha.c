/*
 * XREFs of ?ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C009E150 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::ReleaseAllReferences(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CParticleBaseBehaviorMarshaler *)((char *)this + 56));
}
