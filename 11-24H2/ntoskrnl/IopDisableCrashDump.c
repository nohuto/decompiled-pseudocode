/*
 * XREFs of IopDisableCrashDump @ 0x140590A74
 * Callers:
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 * Callees:
 *     IopDumpTraceCrashDumpDisabled @ 0x140590D60 (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140590F4C (IopDumpTraceDisableCrashDumpFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopDisableCrashDump(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( CrashdmpImageEntry && qword_140E66038 && CrashdmpInitialized )
  {
    v3 = guard_dispatch_icall_no_overrides(a1, a2);
    v2 = v3;
    if ( v3 >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
      IopDumpTraceCrashDumpDisabled();
    }
    else
    {
      IopDumpTraceDisableCrashDumpFailure((unsigned int)v3);
    }
  }
  return v2;
}
