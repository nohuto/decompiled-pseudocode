/*
 * XREFs of IaLpssWriteClockParams @ 0x1406A49C8
 * Callers:
 *     IaLpssSetPowerD0 @ 0x1406A4880 (IaLpssSetPowerD0.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWriteClockParams(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(*a1 + 128LL, a2, a3, a4);
}
