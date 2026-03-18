/*
 * XREFs of ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14013CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0KO@$0IA@$0CIL@$0CIM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402298F0 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0KO@$0IA@$0CIL@$0CIM@.c)
 */

bool __fastcall DirectComposition::CTransformGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
    return (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,174,128,651,652>::Marshal(
                              (char *)this + 72,
                              a2,
                              *((unsigned int *)this + 8),
                              (char *)this + 16) != 0;
  return v4;
}
