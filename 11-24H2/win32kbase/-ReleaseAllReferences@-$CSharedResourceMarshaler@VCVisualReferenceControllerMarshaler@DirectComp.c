/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14022D440
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400FEE34 (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 *     ?ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14012FB60 (-ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicati.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct _RTL_GENERIC_TABLE *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  DirectComposition::CVisualReferenceControllerMarshaler::ReleaseAllReferences(this, a2);
}
