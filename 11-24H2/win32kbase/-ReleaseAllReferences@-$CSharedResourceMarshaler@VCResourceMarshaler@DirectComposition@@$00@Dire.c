/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1400FEDA0
 * Callers:
 *     ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400FED50 (-ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 * Callees:
 *     ?Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ @ 0x1400FEE34 (-Release@CSharedSystemResource@DirectComposition@@QEBA_JXZ.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::ReleaseAllReferences(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 56);
  if ( result )
  {
    *(_DWORD *)(result + 32) = 2;
    result = DirectComposition::CSharedSystemResource::Release(*(DirectComposition::CSharedSystemResource **)(a1 + 56));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
