/*
 * XREFs of DxgkReportDevicePoweredOn @ 0x14002AF94
 * Callers:
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x14002A258 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiRequestDevicePowerState @ 0x14002A4E8 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 3232);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
