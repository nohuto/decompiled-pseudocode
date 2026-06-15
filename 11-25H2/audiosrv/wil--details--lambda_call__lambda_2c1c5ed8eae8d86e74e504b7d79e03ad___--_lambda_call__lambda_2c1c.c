/*
 * XREFs of wil::details::lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___::_lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___ @ 0x180132184
 * Callers:
 *     _CSpatialProperties::InitializeGlobals_::_1_::dtor$1 @ 0x180168507 (_CSpatialProperties--InitializeGlobals_--_1_--dtor$1.c)
 * Callees:
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180087994 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180138530 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___::_lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___(
        __int64 a1)
{
  CSpatialAudioTechnologies *v1; // rcx

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset();
    CSpatialAudioTechnologies::FreeTopologyList(v1);
  }
}
