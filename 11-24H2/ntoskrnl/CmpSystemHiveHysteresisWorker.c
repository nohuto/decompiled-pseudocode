/*
 * XREFs of CmpSystemHiveHysteresisWorker @ 0x1407D23E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSystemHiveHysteresisWorker(void *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 result; // rax

  ExFreePoolWithTag(a1, 0);
  result = CmpSystemHiveHysteresisCallback;
  if ( CmpSystemHiveHysteresisCallback )
    return guard_dispatch_icall_no_overrides(
             CmpSystemHiveHysteresisContext,
             (unsigned int)CmpSystemHiveHysteresisHitRatio,
             v1,
             v2);
  return result;
}
