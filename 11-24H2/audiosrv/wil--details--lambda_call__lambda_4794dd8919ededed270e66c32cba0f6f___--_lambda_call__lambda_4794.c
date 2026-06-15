/*
 * XREFs of wil::details::lambda_call__lambda_4794dd8919ededed270e66c32cba0f6f___::_lambda_call__lambda_4794dd8919ededed270e66c32cba0f6f___ @ 0x1800DAE28
 * Callers:
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint_::_1_::dtor$2 @ 0x18016E689 (_CBtAudioResourceManagerBase--CreateSaDeviceOnMicrophoneEndpoint_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$6 @ 0x18016E722 (_CBtAudioResourceManagerBase--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$6.c)
 * Callees:
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E0B04 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_4794dd8919ededed270e66c32cba0f6f___::_lambda_call__lambda_4794dd8919ededed270e66c32cba0f6f___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(*(CBtAudioResourceManagerBase **)a1);
  }
  return result;
}
