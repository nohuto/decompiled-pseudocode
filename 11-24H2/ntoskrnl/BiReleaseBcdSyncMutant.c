/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1409BE32C
 * Callers:
 *     BcdFlushStore @ 0x140811C1C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BcdMarkAsSystemStore @ 0x140811D3C (BcdMarkAsSystemStore.c)
 *     BcdOpenSystemStore @ 0x140811DB0 (BcdOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x140811F1C (BcdEnumerateObjects.c)
 *     BcdQueryObject @ 0x1408121E4 (BcdQueryObject.c)
 *     BcdCreateObject @ 0x14085E224 (BcdCreateObject.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BcdOpenStore @ 0x1409C2038 (BcdOpenStore.c)
 *     BcdDeleteObject @ 0x1409C2520 (BcdDeleteObject.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1406A6810 (ZwReleaseMutant.c)
 */

__int64 __fastcall BiReleaseBcdSyncMutant(char a1)
{
  __int64 result; // rax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant((__int64)BcdMutantHandle, 0LL);
  return result;
}
