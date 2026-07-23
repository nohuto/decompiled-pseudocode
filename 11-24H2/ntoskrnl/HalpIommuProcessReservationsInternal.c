/*
 * XREFs of HalpIommuProcessReservationsInternal @ 0x140551E00
 * Callers:
 *     HalpIommuProcessReservations @ 0x140551DA4 (HalpIommuProcessReservations.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     HalpIommuDetermineReservedPciRid @ 0x14055144C (HalpIommuDetermineReservedPciRid.c)
 *     HalpIommuProcessMemoryErrata @ 0x140551CB0 (HalpIommuProcessMemoryErrata.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuProcessReservationsInternal(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *MemoryInternal; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  result = guard_dispatch_icall_no_overrides(a1[2], &v6);
  if ( (_DWORD)result == -1073741789 )
  {
    MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(8 * v6 + 8, 1u);
    a1[67] = MemoryInternal;
    if ( MemoryInternal )
    {
      *MemoryInternal = v6;
      result = guard_dispatch_icall_no_overrides(a1[2], &v6);
      if ( (int)result >= 0 )
      {
        result = HalpIommuProcessMemoryErrata(v6, a1[67] + 8LL, a2);
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
