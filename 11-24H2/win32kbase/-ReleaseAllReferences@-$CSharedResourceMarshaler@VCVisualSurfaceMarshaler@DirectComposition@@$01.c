/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualSurfaceMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400FE9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400FEA40 (-ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@.c)
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400FEE34 (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualSurfaceMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  DirectComposition::CVisualSurfaceMarshaler::ReleaseAllReferences(this, a2);
}
