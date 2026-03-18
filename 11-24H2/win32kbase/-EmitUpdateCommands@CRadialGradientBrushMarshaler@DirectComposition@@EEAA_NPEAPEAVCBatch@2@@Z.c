/*
 * XREFs of ?EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F5BA0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af4543a610b17e58df63bc52b09796d8___ @ 0x1400F5C3C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_af4543a610b17e58df63bc52b09796d.c)
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F5E24 (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateEllipseRadiusCommand@CRadialGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F618C (-EmitUpdateEllipseRadiusCommand@CRadialGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_758d646b7318cb107400d278b3f5dc2e___ @ 0x140231820 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_758d646b7318cb107400d278b3f5dc2.c)
 */

char __fastcall DirectComposition::CRadialGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CRadialGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  bool v5; // zf
  DirectComposition::CRadialGradientBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v7 = this;
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af4543a610b17e58df63bc52b09796d8___(
                             this,
                             a2,
                             &v7) )
      return v2;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( DirectComposition::CRadialGradientBrushMarshaler::EmitUpdateEllipseRadiusCommand(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x1000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_758d646b7318cb107400d278b3f5dc2e___(
                               this,
                               a2,
                               &v7) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x1000u;
    }
    if ( DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(this, a2) )
      return 1;
  }
  return v2;
}
