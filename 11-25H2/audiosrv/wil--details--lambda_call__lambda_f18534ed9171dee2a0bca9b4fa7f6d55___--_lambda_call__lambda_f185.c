/*
 * XREFs of wil::details::lambda_call__lambda_f18534ed9171dee2a0bca9b4fa7f6d55___::_lambda_call__lambda_f18534ed9171dee2a0bca9b4fa7f6d55___ @ 0x1800D367C
 * Callers:
 *     _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$3 @ 0x1801650AA (_CBtAudioResourceManagerBase--CreateSecondaryProfileRenderSaDeviceWithDefaultParame_ea_1801650AA.c)
 * Callees:
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800D94FC (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_f18534ed9171dee2a0bca9b4fa7f6d55___::_lambda_call__lambda_f18534ed9171dee2a0bca9b4fa7f6d55___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CBtAudioResourceManagerBase::NotifyStreamChange(*(CBtAudioResourceManagerBase **)a1, 0);
  }
}
