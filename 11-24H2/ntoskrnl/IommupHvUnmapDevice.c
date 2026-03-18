/*
 * XREFs of IommupHvUnmapDevice @ 0x14056623C
 * Callers:
 *     IommupMapDeviceInternal @ 0x140564E48 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x1405651A8 (IommupUnmapDeviceInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9

  if ( (unsigned int)guard_dispatch_icall_no_overrides(BugCheckParameter2, a2, a3, a4) == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, BugCheckParameter2, 0LL, 0LL);
  guard_dispatch_icall_no_overrides(BugCheckParameter2, v5, v6, v7);
  return guard_dispatch_icall_no_overrides(BugCheckParameter2, 5LL, 0LL, v8);
}
