/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x14058E2DC
 * Callers:
 *     PopHiberInitializeResources @ 0x140746400 (PopHiberInitializeResources.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140E65CC0;
    if ( qword_140E65CC0 )
      return guard_dispatch_icall_no_overrides(a1);
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
