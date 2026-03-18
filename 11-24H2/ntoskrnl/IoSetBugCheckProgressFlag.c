/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x1405922C0
 * Callers:
 *     IoRetryAsMiniDump @ 0x140591DA0 (IoRetryAsMiniDump.c)
 *     IoWriteCrashDump @ 0x1405927D4 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140593AAC (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140593BF4 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140594498 (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C687C (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1405924DC (IoUpdateBugCheckProgressEnvVariable.c)
 */

__int64 __fastcall IoSetBugCheckProgressFlag(int a1)
{
  __int64 result; // rax

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= a1;
    return IoUpdateBugCheckProgressEnvVariable();
  }
  return result;
}
