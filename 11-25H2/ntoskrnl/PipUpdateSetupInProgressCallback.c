/*
 * XREFs of PipUpdateSetupInProgressCallback @ 0x14070E380
 * Callers:
 *     <none>
 * Callees:
 *     PipUpdateSetupInProgressNotify @ 0x14070E398 (PipUpdateSetupInProgressNotify.c)
 */

__int64 __fastcall PipUpdateSetupInProgressCallback(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return PipUpdateSetupInProgressNotify(a1, a2);
}
