/*
 * XREFs of HUBPSM20_ReEnablingInterruptsOnErrorInSuspended @ 0x1400128E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReEnableInterruptTransfer @ 0x140011DA0 (HUBMUX_ReEnableInterruptTransfer.c)
 */

__int64 __fastcall HUBPSM20_ReEnablingInterruptsOnErrorInSuspended(__int64 a1)
{
  HUBMUX_ReEnableInterruptTransfer(*(volatile signed __int32 **)(a1 + 960));
  return 3013LL;
}
