/*
 * XREFs of ?EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400DB9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400DBC20 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CDE@$0CDF@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229738 (-Marshal@-$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CDE@$0CDF@@DirectComposition@@QEAA_NPEAP.c)
 */

bool __fastcall DirectComposition::CRegionGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
    return (unsigned __int8)DirectComposition::CMarshaledArray<tagRECT,1735541572,2048,564,565>::Marshal(
                              (char *)this + 96,
                              a2,
                              *((unsigned int *)this + 8),
                              (char *)this + 16) != 0;
  return v4;
}
