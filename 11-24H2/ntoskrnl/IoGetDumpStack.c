/*
 * XREFs of IoGetDumpStack @ 0x140ABB79C
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D19BC (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopLoadCrashdumpDriver @ 0x1404D1D14 (IopLoadCrashdumpDriver.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x14059138C (IopDumpTraceLoadDumpStackFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetDumpStack(__int64 a1, __int64 a2)
{
  int CrashdumpDriver; // eax
  unsigned int v4; // ebx
  int v5; // eax

  CrashdumpDriver = IopLoadCrashdumpDriver();
  v4 = CrashdumpDriver;
  if ( CrashdumpDriver >= 0 )
  {
    v5 = guard_dispatch_icall_no_overrides(L"hiber_", a2);
    v4 = v5;
    if ( v5 < 0 )
      IopDumpTraceLoadDumpStackFailure(v5);
  }
  else
  {
    IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  }
  return v4;
}
