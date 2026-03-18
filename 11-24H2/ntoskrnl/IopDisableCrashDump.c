/*
 * XREFs of IopDisableCrashDump @ 0x140593A50
 * Callers:
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 * Callees:
 *     IopDumpTraceCrashDumpDisabled @ 0x140593D3C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140593F28 (IopDumpTraceDisableCrashDumpFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopDisableCrashDump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // eax

  v4 = 0;
  if ( CrashdmpImageEntry && qword_140E65EF8 && CrashdmpInitialized )
  {
    v5 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    v4 = v5;
    if ( v5 >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
      IopDumpTraceCrashDumpDisabled();
    }
    else
    {
      IopDumpTraceDisableCrashDumpFailure((unsigned int)v5);
    }
  }
  return v4;
}
