/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140B845C0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(unsigned int a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
