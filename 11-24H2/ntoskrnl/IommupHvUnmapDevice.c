/*
 * XREFs of IommupHvUnmapDevice @ 0x140563F3C
 * Callers:
 *     IommupMapDeviceInternal @ 0x140562A78 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140562DD8 (IommupUnmapDeviceInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rdx

  if ( (unsigned int)guard_dispatch_icall_no_overrides(BugCheckParameter2, a2) == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, BugCheckParameter2, 0LL, 0LL);
  guard_dispatch_icall_no_overrides(BugCheckParameter2, v3);
  return guard_dispatch_icall_no_overrides(BugCheckParameter2, 5LL);
}
