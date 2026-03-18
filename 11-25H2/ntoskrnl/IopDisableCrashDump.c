/*
 * XREFs of IopDisableCrashDump @ 0x140590258
 * Callers:
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 * Callees:
 *     IopDumpTraceCrashDumpDisabled @ 0x140590544 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140590730 (IopDumpTraceDisableCrashDumpFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopDisableCrashDump(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( CrashdmpImageEntry && qword_140E65C98 && CrashdmpInitialized )
  {
    v2 = guard_dispatch_icall_no_overrides(a1);
    v1 = v2;
    if ( v2 >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
      IopDumpTraceCrashDumpDisabled();
    }
    else
    {
      IopDumpTraceDisableCrashDumpFailure((unsigned int)v2);
    }
  }
  return v1;
}
