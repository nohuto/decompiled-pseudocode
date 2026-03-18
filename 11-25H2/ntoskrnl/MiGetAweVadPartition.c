/*
 * XREFs of MiGetAweVadPartition @ 0x1404B3A84
 * Callers:
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiGetAweInfoPartition @ 0x1404B3E8C (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  unsigned __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0xC200000) == 0x8200000 )
    return *((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 40));
}
