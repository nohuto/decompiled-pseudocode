/*
 * XREFs of VfKeIrqlLogRaise @ 0x140BA9FE0
 * Callers:
 *     ViIrqlExAcquireFastMutex_Exit @ 0x140B9F590 (ViIrqlExAcquireFastMutex_Exit.c)
 *     ViIrqlExTryToAcquireFastMutex_Exit @ 0x140B9F5B0 (ViIrqlExTryToAcquireFastMutex_Exit.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140BA9F68 (ViKeIrqlLogAndTrimMemory.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140BAA0B8 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140BAA2A0 (ViKeIrqlLogCommon.c)
 */

__int64 __fastcall VfKeIrqlLogRaise(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx

  if ( !ViIrqlTrimAndLog )
    return 0LL;
  v5 = VfKeIrqlTransitionReserveLogEntry(a1, a2, a3, a4);
  ViKeIrqlLogCommon(v5, 2LL);
  return v5;
}
