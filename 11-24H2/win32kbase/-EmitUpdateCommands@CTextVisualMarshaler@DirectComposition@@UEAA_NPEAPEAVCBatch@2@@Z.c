/*
 * XREFs of ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402292A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007CA00 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CD@$00$0CID@$0CIE@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402297A0 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CD@$00$0CID@$0CIE@@D.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CL@$01$0CIF@$0CIG@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402297D0 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CL@$01$0CIF@$0CIG@@D.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CL@$03$0CIH@$0CII@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229800 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0CL@$03$0CIH@$0CII@@D.c)
 */

bool __fastcall DirectComposition::CTextVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,35,1,643,644>::Marshal(
                          (char *)this + 376,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 368)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,43,2,645,646>::Marshal(
                          (char *)this + 400,
                          a2,
                          *((unsigned int *)this + 8),
                          (char *)this + 368) )
  {
    return (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,43,4,647,648>::Marshal(
                              (char *)this + 424,
                              a2,
                              *((unsigned int *)this + 8),
                              (char *)this + 368) != 0;
  }
  return v4;
}
