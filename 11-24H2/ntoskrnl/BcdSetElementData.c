/*
 * XREFs of BcdSetElementData @ 0x1409A60DC
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D8174 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdSetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, ULONG BufferSize)
{
  return BcdSetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
