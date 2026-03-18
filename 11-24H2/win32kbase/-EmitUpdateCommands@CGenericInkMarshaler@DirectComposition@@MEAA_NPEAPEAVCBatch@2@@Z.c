/*
 * XREFs of ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140103A40
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitPropertiesUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103B08 (-EmitPropertiesUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103B8C (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_05f875645f7872d846a3f0e36bd68aac___ @ 0x14015A8D0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_05f875645f7872d846a3f0e36bd68aa.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_04ae90407365c29ae4b2e1045aef8826___ @ 0x140230228 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_04ae90407365c29ae4b2e1045aef882.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e21701afca32d27cc571de8dc6065791___ @ 0x1402302BC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e21701afca32d27cc571de8dc606579.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CGenericInkMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGenericInkMarshaler::EmitPropertiesUpdate(this, a2)
    && DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_05f875645f7872d846a3f0e36bd68aac___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_04ae90407365c29ae4b2e1045aef8826___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e21701afca32d27cc571de8dc6065791___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
    }
    return 1;
  }
  return v4;
}
