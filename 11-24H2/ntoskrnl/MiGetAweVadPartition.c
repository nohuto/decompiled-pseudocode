/*
 * XREFs of MiGetAweVadPartition @ 0x1402661D4
 * Callers:
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x140266FBC (MiGetAweInfoPartition.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0xC200000) == 0x8200000 )
    return *((_QWORD *)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256LL);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 40));
}
