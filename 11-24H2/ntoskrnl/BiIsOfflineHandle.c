/*
 * XREFs of BiIsOfflineHandle @ 0x1404AB350
 * Callers:
 *     BcdFlushStore @ 0x140811C1C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BcdMarkAsSystemStore @ 0x140811D3C (BcdMarkAsSystemStore.c)
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
 *     BcdDeleteObject @ 0x1409C2520 (BcdDeleteObject.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
