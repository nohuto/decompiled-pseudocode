/*
 * XREFs of ?EmitUpdateCommands@CPathGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400DB970
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400DBC20 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9f981b64db3f8edad4cf041513baaac9___ @ 0x1400DBFD4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9f981b64db3f8edad4cf041513baaac.c)
 */

char __fastcall DirectComposition::CPathGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CPathGeometryMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CPathGeometryMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v7 = this;
    if ( v5 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9f981b64db3f8edad4cf041513baaac9___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) &= ~0x800u;
      return 1;
    }
  }
  return v4;
}
