/*
 * XREFs of HalpIommuProcessReservationsInternal @ 0x140551BC0
 * Callers:
 *     HalpIommuProcessReservations @ 0x140551B64 (HalpIommuProcessReservations.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x1405404A0 (HalpMmAllocateMemoryInternal.c)
 *     HalpIommuDetermineReservedPciRid @ 0x14055120C (HalpIommuDetermineReservedPciRid.c)
 *     HalpIommuProcessMemoryErrata @ 0x140551A70 (HalpIommuProcessMemoryErrata.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuProcessReservationsInternal(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *MemoryInternal; // rax

  result = guard_dispatch_icall_no_overrides(a1[2]);
  if ( (_DWORD)result == -1073741789 )
  {
    MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(8, 1u);
    a1[67] = MemoryInternal;
    if ( MemoryInternal )
    {
      *MemoryInternal = 0;
      result = guard_dispatch_icall_no_overrides(a1[2]);
      if ( (int)result >= 0 )
      {
        result = HalpIommuProcessMemoryErrata(0, a1[67] + 8LL, a2);
        if ( (int)result >= 0 )
          return HalpIommuDetermineReservedPciRid(a1);
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
