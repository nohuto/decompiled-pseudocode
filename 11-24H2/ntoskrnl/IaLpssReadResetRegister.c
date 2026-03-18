/*
 * XREFs of IaLpssReadResetRegister @ 0x1406A4850
 * Callers:
 *     IaLpssSetPowerD0 @ 0x1406A4880 (IaLpssSetPowerD0.c)
 *     IaLpssSetPowerD3 @ 0x1406A4930 (IaLpssSetPowerD3.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadResetRegister(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (unsigned __int8)guard_dispatch_icall_no_overrides(*a1 + 129LL, a2, a3, a4);
}
