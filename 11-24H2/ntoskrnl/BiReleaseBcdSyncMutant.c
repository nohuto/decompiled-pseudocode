/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1409A497C
 * Callers:
 *     BcdFlushStore @ 0x14081235C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x1408123C4 (BcdForciblyUnloadStore.c)
 *     BcdMarkAsSystemStore @ 0x14081247C (BcdMarkAsSystemStore.c)
 *     BcdOpenSystemStore @ 0x1408124F0 (BcdOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x14081265C (BcdEnumerateObjects.c)
 *     BcdQueryObject @ 0x140812924 (BcdQueryObject.c)
 *     BcdCreateObject @ 0x140859F94 (BcdCreateObject.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409A4E5C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BcdOpenStore @ 0x1409A8688 (BcdOpenStore.c)
 *     BcdDeleteObject @ 0x1409A8B70 (BcdDeleteObject.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1406A77B0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
