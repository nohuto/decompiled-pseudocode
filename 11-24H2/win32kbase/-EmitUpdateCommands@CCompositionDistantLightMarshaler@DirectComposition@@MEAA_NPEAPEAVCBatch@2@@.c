/*
 * XREFs of ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F9070
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F94B0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCoordinateSpace@CCompositionDistantLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F9BE8 (-EmitSetCoordinateSpace@CCompositionDistantLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch.c)
 *     ?EmitSetDirection@CCompositionDistantLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F9C68 (-EmitSetDirection@CCompositionDistantLightMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_29f3df4b6d104115088d420d25cd3508___ @ 0x140236138 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_29f3df4b6d104115088d420d25cd350.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_67bb4783cf1ad34147e83603bdc876e1___ @ 0x1402361AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_67bb4783cf1ad34147e83603bdc876e.c)
 */

char __fastcall DirectComposition::CCompositionDistantLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CCompositionDistantLightMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_67bb4783cf1ad34147e83603bdc876e1___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    if ( DirectComposition::CCompositionDistantLightMarshaler::EmitSetCoordinateSpace(this, a2)
      && DirectComposition::CCompositionDistantLightMarshaler::EmitSetDirection(this, a2) )
    {
      v5 = (*((_DWORD *)this + 4) & 0x800) == 0;
      v7 = this;
      if ( !v5 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_29f3df4b6d104115088d420d25cd3508___(
                                 this,
                                 a2,
                                 &v7) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x800u;
      }
      return 1;
    }
  }
  return v4;
}
