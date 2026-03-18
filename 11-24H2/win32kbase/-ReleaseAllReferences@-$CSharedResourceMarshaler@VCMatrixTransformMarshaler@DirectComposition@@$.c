/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x14022D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400FEE34 (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 */

LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::ReleaseAllReferences(
        __int64 a1)
{
  LONG_PTR result; // rax

  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    *(_DWORD *)(result + 36) = 0;
    result = DirectComposition::CSharedSystemResource::Release(*(DirectComposition::CSharedSystemResource **)(a1 + 96));
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return result;
}
