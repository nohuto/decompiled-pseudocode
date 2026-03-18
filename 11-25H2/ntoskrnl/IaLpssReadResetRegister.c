/*
 * XREFs of IaLpssReadResetRegister @ 0x140699620
 * Callers:
 *     IaLpssSetPowerD0 @ 0x140699650 (IaLpssSetPowerD0.c)
 *     IaLpssSetPowerD3 @ 0x140699700 (IaLpssSetPowerD3.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadResetRegister(_QWORD *a1)
{
  return (unsigned __int8)guard_dispatch_icall_no_overrides(*a1 + 129LL);
}
