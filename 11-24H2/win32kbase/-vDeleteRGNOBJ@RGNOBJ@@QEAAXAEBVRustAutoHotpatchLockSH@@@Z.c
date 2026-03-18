/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C1840
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C33D0 (-vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C1770 (-vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(REGION **this, const struct RustAutoHotpatchLockSH *a2)
{
  REGION::vDeleteREGION(*this, a2);
  *this = 0LL;
}
