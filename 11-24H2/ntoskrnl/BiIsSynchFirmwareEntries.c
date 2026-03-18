/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x140697750
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
