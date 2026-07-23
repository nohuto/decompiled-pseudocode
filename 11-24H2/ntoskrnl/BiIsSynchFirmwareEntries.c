/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x1406987D0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1408123C4 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
