/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x14058EA90
 * Callers:
 *     IoRetryAsMiniDump @ 0x14058E570 (IoRetryAsMiniDump.c)
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1405902B4 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405903FC (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140590C98 (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C24DC (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14058ECAC (IoUpdateBugCheckProgressEnvVariable.c)
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
