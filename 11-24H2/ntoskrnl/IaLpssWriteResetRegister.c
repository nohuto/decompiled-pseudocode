/*
 * XREFs of IaLpssWriteResetRegister @ 0x1406A5A64
 * Callers:
 *     IaLpssSetPowerD0 @ 0x1406A5880 (IaLpssSetPowerD0.c)
 *     IaLpssSetPowerD3 @ 0x1406A5930 (IaLpssSetPowerD3.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWriteResetRegister(_QWORD *a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(*a1 + 129LL, a2);
}
