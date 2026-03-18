/*
 * XREFs of IoGetDumpStack @ 0x140AC06BC
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x1404D856C (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopLoadCrashdumpDriver @ 0x1404D88C4 (IopLoadCrashdumpDriver.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140594368 (IopDumpTraceLoadDumpStackFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetDumpStack(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int CrashdumpDriver; // eax
  unsigned int v7; // ebx
  int v8; // eax

  CrashdumpDriver = IopLoadCrashdumpDriver();
  v7 = CrashdumpDriver;
  if ( CrashdumpDriver >= 0 )
  {
    v8 = guard_dispatch_icall_no_overrides(L"hiber_", a2, 2LL, a4);
    v7 = v8;
    if ( v8 < 0 )
      IopDumpTraceLoadDumpStackFailure(v8);
  }
  else
  {
    IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  }
  return v7;
}
