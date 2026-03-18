/*
 * XREFs of ?CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A5FC0
 * Callers:
 *     ?Injection@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A6100 (-Injection@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z @ 0x1401A6014 (-HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z.c)
 *     ?SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A6120 (-SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 */

char __fastcall Win32ProcessCapability::CheckAccess(__int64 a1, __int64 a2)
{
  char HasCapabilities; // di

  HasCapabilities = tagPROCESSINFO::HasCapabilities();
  if ( HasCapabilities && _bittest64((const signed __int64 *)(a1 + 816), 0x27u) )
    SendCapabilityUsageReport(a1, a2);
  return HasCapabilities;
}
