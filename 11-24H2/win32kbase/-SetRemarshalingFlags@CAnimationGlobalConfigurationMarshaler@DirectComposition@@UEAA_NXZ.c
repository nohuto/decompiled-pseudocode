/*
 * XREFs of ?SetRemarshalingFlags@CAnimationGlobalConfigurationMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022B820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationGlobalConfigurationMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationGlobalConfigurationMarshaler *this)
{
  if ( *((float *)this + 14) != 0.0 )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
