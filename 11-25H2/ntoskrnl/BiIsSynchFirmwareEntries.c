/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14068C400
 * Callers:
 *     BcdForciblyUnloadStore @ 0x14080210C (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
