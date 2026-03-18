/*
 * XREFs of ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401166B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007CA00 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a60___ @ 0x1401167AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9525a31d2b93df4905345494d31e3e4a___ @ 0x140116824 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9525a31d2b93df4905345494d31e3e4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d2498051cc25677166779d59b141729e___ @ 0x1401168AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d2498051cc25677166779d59b141729.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf85___ @ 0x140231490 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf8.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // di
  DirectComposition::CLayerVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 97);
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d2498051cc25677166779d59b141729e___(
                             this,
                             a2,
                             &v7) )
      return 0;
    *((_DWORD *)this + 97) &= ~1u;
    v4 = *((_DWORD *)this + 97);
  }
  v7 = this;
  if ( (v4 & 2) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9525a31d2b93df4905345494d31e3e4a___(
                             this,
                             a2,
                             &v7) )
      return 0;
    *((_DWORD *)this + 97) &= ~2u;
    v4 = *((_DWORD *)this + 97);
  }
  v7 = this;
  if ( (v4 & 4) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82dba938a89b02c8ea0908e33a16a60___(
                             this,
                             a2,
                             &v7) )
      return 0;
    *((_DWORD *)this + 97) &= ~4u;
    v4 = *((_DWORD *)this + 97);
  }
  v7 = this;
  if ( (v4 & 8) == 0 )
    return v5;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bd44a5bc07fa25930a60c46e5264cf85___(
                          this,
                          a2,
                          &v7) )
  {
    *((_DWORD *)this + 97) &= ~8u;
    return v5;
  }
  return 0;
}
