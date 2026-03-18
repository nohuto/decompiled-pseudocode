/*
 * XREFs of IommupHvUnmapDevice @ 0x1405639CC
 * Callers:
 *     IommupMapDeviceInternal @ 0x1405625B8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140562918 (IommupUnmapDeviceInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)guard_dispatch_icall_no_overrides(BugCheckParameter2) == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, BugCheckParameter2, 0LL, 0LL);
  guard_dispatch_icall_no_overrides(BugCheckParameter2);
  return guard_dispatch_icall_no_overrides(BugCheckParameter2);
}
