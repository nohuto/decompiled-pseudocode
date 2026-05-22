/*
 * XREFs of ?SetLastInputReport@MPCInputProviderBase@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800846B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::SetLastInputReport(MPCInputProviderBase *this, struct LegacyInputInfo *a2)
{
  memcpy_0((char *)this + 536, a2, 0xBC0uLL);
}
