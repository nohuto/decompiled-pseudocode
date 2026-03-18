/*
 * XREFs of IoInitializeDumpStack @ 0x140591B50
 * Callers:
 *     PopRestoreHiberContext @ 0x140B662BC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140594258 (IopDumpTraceInitializeDumpStackFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // eax

  v4 = -1073741823;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140E65EE8 )
    {
      v5 = guard_dispatch_icall_no_overrides(a1, 0LL, a3, a4);
      v4 = v5;
      if ( v5 < 0 && KeGetCurrentIrql() < 0xFu )
        IopDumpTraceInitializeDumpStackFailure((unsigned int)v5);
    }
  }
  return v4;
}
