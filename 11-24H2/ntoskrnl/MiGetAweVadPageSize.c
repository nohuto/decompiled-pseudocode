/*
 * XREFs of MiGetAweVadPageSize @ 0x140988078
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiVadPageTableChargeLevel @ 0x14041EF70 (MiVadPageTableChargeLevel.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiPageChainCount @ 0x1404642D0 (MiPageChainCount.c)
 *     MiGetAweViewPageSize @ 0x1404BA0FC (MiGetAweViewPageSize.c)
 */

__int64 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  int v1; // eax
  __int64 AweViewPageSize; // r8
  unsigned __int64 LockedVadEvent; // rax
  __int64 v4; // r9
  __int64 v5; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  AweViewPageSize = 1LL;
  if ( (v1 & 0x200000) == 0 || (v1 & 0xC000000) != 0x8000000 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a1, 256);
    AweViewPageSize = MiGetAweViewPageSize(LockedVadEvent + 8);
    if ( !AweViewPageSize )
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( (*(_DWORD *)(v5 + 8) & 1) == 0 )
        return MiPageChainCount(v5);
    }
  }
  return AweViewPageSize;
}
