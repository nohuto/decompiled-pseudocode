/*
 * XREFs of ??$?4U?$default_delete@VCStreamClassPolicyGains@@@std@@$0A@@?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003E538
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x1800066A0 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 * Callees:
 *     ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x18003E858 (--R-$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CStreamClassPolicyGains>::operator=<std::default_delete<CStreamClassPolicyGains>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<CStreamClassPolicyGains>::operator()();
  return a1;
}
