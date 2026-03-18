/*
 * XREFs of CmpSystemHiveHysteresisWorker @ 0x1407C2CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSystemHiveHysteresisWorker(void *a1)
{
  __int64 result; // rax

  ExFreePoolWithTag(a1, 0);
  result = CmpSystemHiveHysteresisCallback;
  if ( CmpSystemHiveHysteresisCallback )
    return guard_dispatch_icall_no_overrides(CmpSystemHiveHysteresisContext);
  return result;
}
