/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14022D3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400FEE34 (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 *     ?ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229B20 (-ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualGroupMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    DirectComposition::CSharedSystemResource::Release(*((DirectComposition::CSharedSystemResource **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  DirectComposition::CVisualGroupMarshaler::ReleaseAllReferences(this, a2);
}
