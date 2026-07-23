/*
 * XREFs of PopWin32CalloutWatchdogCallback @ 0x14075EA60
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4BD0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopWin32CalloutWatchdogCallback(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  if ( PopWin32CalloutWatchdogBugcheckEnabled )
    KeBugCheckEx(0x1A2u, a3, a4, BugCheckParameter3, BugCheckParameter4);
  return DbgkWerCaptureLiveKernelDump(
           (unsigned int)L"PoW32kWatchdog",
           a2,
           a3,
           a4,
           BugCheckParameter3,
           BugCheckParameter4,
           0LL,
           0LL,
           1);
}
