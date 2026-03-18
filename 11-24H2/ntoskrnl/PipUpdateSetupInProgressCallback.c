/*
 * XREFs of PipUpdateSetupInProgressCallback @ 0x14071A480
 * Callers:
 *     <none>
 * Callees:
 *     PipUpdateSetupInProgressNotify @ 0x14071A498 (PipUpdateSetupInProgressNotify.c)
 */

__int64 __fastcall PipUpdateSetupInProgressCallback(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return PipUpdateSetupInProgressNotify(a1, a2);
}
