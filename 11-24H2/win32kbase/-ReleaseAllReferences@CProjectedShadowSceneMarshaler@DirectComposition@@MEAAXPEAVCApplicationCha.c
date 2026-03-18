/*
 * XREFs of ?ReleaseAllReferences@CProjectedShadowSceneMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x14012FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResourceMarshalers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x14012FF84 (-ReleaseResourceMarshalers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAAXPEAVCApplicati.c)
 */

void __fastcall DirectComposition::CProjectedShadowSceneMarshaler::ReleaseAllReferences(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CProjectedShadowSceneMarshaler *v4; // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  DirectComposition::CProjectedShadowSceneMarshaler::ReleaseResourceMarshalers(
    this,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 9),
    (unsigned int *)this + 20);
  DirectComposition::CProjectedShadowSceneMarshaler::ReleaseResourceMarshalers(
    v4,
    a2,
    *((struct DirectComposition::CResourceMarshaler ***)this + 11),
    (unsigned int *)this + 24);
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 25) = 0;
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 16) = 0LL;
  }
}
