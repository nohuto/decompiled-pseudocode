/*
 * XREFs of ?EmitCreationCommand@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140073820
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x140074FEC (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::EmitCreationCommand(
        __int64 a1,
        __int64 a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           a1,
           a2,
           *(unsigned int *)(*(_QWORD *)(a1 + 56) + 16LL));
}
