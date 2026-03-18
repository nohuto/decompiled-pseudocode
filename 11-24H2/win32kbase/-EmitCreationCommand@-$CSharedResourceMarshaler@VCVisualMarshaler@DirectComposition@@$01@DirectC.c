/*
 * XREFs of ?EmitCreationCommand@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400738A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x140074FEC (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::EmitCreationCommand(
        __int64 a1,
        __int64 a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           a1,
           a2,
           *(unsigned int *)(*(_QWORD *)(a1 + 368) + 16LL));
}
