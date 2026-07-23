/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x14058F2E0
 * Callers:
 *     IoRetryAsMiniDump @ 0x14058EDC0 (IoRetryAsMiniDump.c)
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140590AD0 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140590C18 (IopDumpCallRemovePagesCallbacks.c)
 *     IopFillTriageDumpDataBlocks @ 0x1405914B8 (IopFillTriageDumpDataBlocks.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C3FAC (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14058F500 (IoUpdateBugCheckProgressEnvVariable.c)
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
