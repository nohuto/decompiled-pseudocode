/*
 * XREFs of ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400FED50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400FEDA0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@Dire.c)
 *     ?ReleaseResourceAndOwnership@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400FEE54 (-ReleaseResourceAndOwnership@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler.c)
 */

void __fastcall DirectComposition::CVisualTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResourceAndOwnership(a2, v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::ReleaseAllReferences(this, a2);
}
