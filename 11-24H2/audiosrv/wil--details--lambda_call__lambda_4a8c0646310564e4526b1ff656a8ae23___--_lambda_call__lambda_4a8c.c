/*
 * XREFs of wil::details::lambda_call__lambda_4a8c0646310564e4526b1ff656a8ae23___::_lambda_call__lambda_4a8c0646310564e4526b1ff656a8ae23___ @ 0x18013B2BC
 * Callers:
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$0 @ 0x180171C89 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAJ_N@Z @ 0x18013B584 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_4a8c0646310564e4526b1ff656a8ae23___::_lambda_call__lambda_4a8c0646310564e4526b1ff656a8ae23___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CSpatialProperties::ClearSpatialAudioSettings(*(CSpatialProperties **)a1, 0);
  }
  return result;
}
