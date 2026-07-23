/*
 * XREFs of KiIpiTargetCallIpi @ 0x1405C5850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIpiTargetCallIpi(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a3, a2);
  *a4 = result;
  return result;
}
