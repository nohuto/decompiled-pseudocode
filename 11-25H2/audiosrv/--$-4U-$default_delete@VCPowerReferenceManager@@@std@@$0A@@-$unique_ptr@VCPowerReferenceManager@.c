/*
 * XREFs of ??$?4U?$default_delete@VCPowerReferenceManager@@@std@@$0A@@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CB408
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800CD480 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAXPEAVCPowerReferenceManager@@@Z @ 0x1800CFC90 (-reset@-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@s.c)
 */

__int64 *__fastcall std::unique_ptr<CPowerReferenceManager>::operator=<std::default_delete<CPowerReferenceManager>,0>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdx

  v3 = *a2;
  *a2 = 0LL;
  std::unique_ptr<CPowerReferenceManager>::reset(a1, v3);
  return &g_powerReferenceManager;
}
