/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x14058EB2C
 * Callers:
 *     PopHiberInitializeResources @ 0x1407507DC (PopHiberInitializeResources.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140E66060;
    if ( qword_140E66060 )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
