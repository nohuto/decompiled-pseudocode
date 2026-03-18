/*
 * XREFs of IoInitializeDumpStack @ 0x14058E320
 * Callers:
 *     PopRestoreHiberContext @ 0x140B561BC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140590A60 (IopDumpTraceInitializeDumpStackFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = -1073741823;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140E65C88 )
    {
      v2 = guard_dispatch_icall_no_overrides(a1);
      v1 = v2;
      if ( v2 < 0 && KeGetCurrentIrql() < 0xFu )
        IopDumpTraceInitializeDumpStackFailure((unsigned int)v2);
    }
  }
  return v1;
}
