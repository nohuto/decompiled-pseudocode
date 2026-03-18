/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x140591B0C
 * Callers:
 *     PopHiberInitializeResources @ 0x1407524BC (PopHiberInitializeResources.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140E65F20;
    if ( qword_140E65F20 )
      return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
