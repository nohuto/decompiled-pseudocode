/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x140548E80
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FC0740 )
    return guard_dispatch_icall_no_overrides(qword_140FC0740);
  return result;
}
