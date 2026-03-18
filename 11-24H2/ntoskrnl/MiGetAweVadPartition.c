/*
 * XREFs of MiGetAweVadPartition @ 0x1403CC010
 * Callers:
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x1403CCDEC (MiGetAweInfoPartition.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  __int64 LockedVadEvent; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0xC200000) == 0x8200000 )
    return *((_QWORD *)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  LockedVadEvent = MiLocateLockedVadEvent(a1, 256LL);
  return MiGetAweInfoPartition(*(_QWORD *)(LockedVadEvent + 40));
}
