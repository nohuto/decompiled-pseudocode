/*
 * XREFs of IoGetDumpStack @ 0x140ABC340
 * Callers:
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D94EC (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopLoadCrashdumpDriver @ 0x1404D9844 (IopLoadCrashdumpDriver.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140590B70 (IopDumpTraceLoadDumpStackFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoGetDumpStack()
{
  int CrashdumpDriver; // eax
  unsigned int v1; // ebx
  int v2; // eax

  CrashdumpDriver = IopLoadCrashdumpDriver();
  v1 = CrashdumpDriver;
  if ( CrashdumpDriver >= 0 )
  {
    v2 = guard_dispatch_icall_no_overrides(L"hiber_");
    v1 = v2;
    if ( v2 < 0 )
      IopDumpTraceLoadDumpStackFailure(v2);
  }
  else
  {
    IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  }
  return v1;
}
