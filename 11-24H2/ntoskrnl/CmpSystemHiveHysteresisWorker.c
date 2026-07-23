/*
 * XREFs of CmpSystemHiveHysteresisWorker @ 0x1407D28D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSystemHiveHysteresisWorker(void *a1)
{
  __int64 result; // rax

  ExFreePoolWithTag(a1, 0);
  result = CmpSystemHiveHysteresisCallback;
  if ( CmpSystemHiveHysteresisCallback )
    return guard_dispatch_icall_no_overrides(
             CmpSystemHiveHysteresisContext,
             (unsigned int)CmpSystemHiveHysteresisHitRatio);
  return result;
}
