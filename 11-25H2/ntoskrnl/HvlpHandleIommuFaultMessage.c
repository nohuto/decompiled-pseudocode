/*
 * XREFs of HvlpHandleIommuFaultMessage @ 0x1405877E0
 * Callers:
 *     HvlSharedIsr @ 0x1404431A0 (HvlSharedIsr.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpHandleIommuFaultMessage(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(*(unsigned __int16 *)(a1 + 24));
}
