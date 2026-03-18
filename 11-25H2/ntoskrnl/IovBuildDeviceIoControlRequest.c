/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140B725C0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(unsigned int a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
