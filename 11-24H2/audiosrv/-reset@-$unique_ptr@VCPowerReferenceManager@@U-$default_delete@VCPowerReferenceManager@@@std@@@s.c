/*
 * XREFs of ?reset@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAXPEAVCPowerReferenceManager@@@Z @ 0x1800D0EE8
 * Callers:
 *     ??$?4U?$default_delete@VCPowerReferenceManager@@@std@@$0A@@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CAAD8 (--$-4U-$default_delete@VCPowerReferenceManager@@@std@@$0A@@-$unique_ptr@VCPowerReferenceManager@.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800CFB30 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x1800CBC6C (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 */

void __fastcall std::unique_ptr<CPowerReferenceManager>::reset(__int64 a1, __int64 a2)
{
  CPowerReferenceManager *v2; // rax

  v2 = (CPowerReferenceManager *)g_powerReferenceManager;
  g_powerReferenceManager = a2;
  if ( v2 )
    std::default_delete<CPowerReferenceManager>::operator()(a1, v2);
}
