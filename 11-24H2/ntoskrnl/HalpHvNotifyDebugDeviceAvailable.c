/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x140549030
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvNotifyDebugDeviceAvailable(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FC1140 )
    return guard_dispatch_icall_no_overrides(qword_140FC1140, a2);
  return result;
}
