/*
 * XREFs of ?Injection@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A6100
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A5FC0 (-CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 */

char __fastcall Win32ProcessCapability::Injection(Win32ProcessCapability *this, const struct tagPROCESSINFO *a2)
{
  return Win32ProcessCapability::CheckAccess((__int64)this, 0x100000001LL);
}
