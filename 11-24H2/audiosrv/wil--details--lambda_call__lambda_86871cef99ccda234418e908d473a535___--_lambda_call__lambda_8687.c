/*
 * XREFs of wil::details::lambda_call__lambda_86871cef99ccda234418e908d473a535___::_lambda_call__lambda_86871cef99ccda234418e908d473a535___ @ 0x18014FB40
 * Callers:
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015172C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$0 @ 0x18017252D (_AtmosCheck--PerformLicenseCheckForEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x1800720F4 (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_86871cef99ccda234418e908d473a535___::_lambda_call__lambda_86871cef99ccda234418e908d473a535___(
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
        1552LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v1);
  }
}
