/*
 * XREFs of IoInitializeDumpStack @ 0x14058EB70
 * Callers:
 *     PopRestoreHiberContext @ 0x140B683FC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     IopDumpTraceInitializeDumpStackFailure @ 0x14059127C (IopDumpTraceInitializeDumpStackFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = -1073741823;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140E66028 )
    {
      v2 = guard_dispatch_icall_no_overrides(a1, 0LL);
      v1 = v2;
      if ( v2 < 0 && KeGetCurrentIrql() < 0xFu )
        IopDumpTraceInitializeDumpStackFailure((unsigned int)v2);
    }
  }
  return v1;
}
