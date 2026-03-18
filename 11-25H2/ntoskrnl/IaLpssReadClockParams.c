/*
 * XREFs of IaLpssReadClockParams @ 0x14069957C
 * Callers:
 *     IaLpssSetPowerD0 @ 0x140699650 (IaLpssSetPowerD0.c)
 *     IaLpssSetPowerD3 @ 0x140699700 (IaLpssSetPowerD3.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadClockParams(_QWORD *a1)
{
  return guard_dispatch_icall_no_overrides(*a1 + 128LL);
}
