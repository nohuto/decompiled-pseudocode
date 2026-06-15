/*
 * XREFs of wil::details::lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___::_lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___ @ 0x18014FB80
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180056E14 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype_::_1_::dtor$0 @ 0x18016B849 (_AtmosCheck--PerformLicenseCheckForSpatialAudioSubtype_--_1_--dtor$0.c)
 * Callees:
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x1800720F4 (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___::_lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___(
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
        1594LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v1);
  }
}
