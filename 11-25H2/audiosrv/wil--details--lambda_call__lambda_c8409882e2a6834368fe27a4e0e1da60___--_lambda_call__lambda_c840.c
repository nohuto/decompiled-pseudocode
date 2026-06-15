/*
 * XREFs of wil::details::lambda_call__lambda_c8409882e2a6834368fe27a4e0e1da60___::_lambda_call__lambda_c8409882e2a6834368fe27a4e0e1da60___ @ 0x180147084
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x1800097E4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype_::_1_::dtor$0 @ 0x18015E9A8 (_AtmosCheck--PerformLicenseCheckForSpatialAudioSubtype_--_1_--dtor$0.c)
 * Callees:
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180084DF4 (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_c8409882e2a6834368fe27a4e0e1da60___::_lambda_call__lambda_c8409882e2a6834368fe27a4e0e1da60___(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = AtmosCheck::EndAppSvcCall(*(AtmosCheck **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1590LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v1);
  }
}
