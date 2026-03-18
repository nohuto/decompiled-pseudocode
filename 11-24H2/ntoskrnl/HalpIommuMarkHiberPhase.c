/*
 * XREFs of HalpIommuMarkHiberPhase @ 0x140B6C480
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B6E700 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpIommuMarkHiberPhase(PVOID MemoryMap, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *i; // rbx
  PVOID *j; // rbx
  PVOID *k; // rsi

  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    if ( i[40] )
      guard_dispatch_icall_no_overrides(MemoryMap, i[2], a3, a4);
  }
  if ( MemoryMap )
  {
    PoSetHiberRange(MemoryMap, 2u, &IommupSystemContextListPushLock, 8uLL, 0x496C6148u);
    for ( j = (PVOID *)IommupSystemContextListHead; j != &IommupSystemContextListHead; j = (PVOID *)*j )
    {
      PoSetHiberRange(MemoryMap, 2u, j, 0x40uLL, 0x496C6148u);
      for ( k = (PVOID *)j[6]; k != j + 6; k = (PVOID *)*k )
        PoSetHiberRange(MemoryMap, 2u, k, 0x1058uLL, 0x496C6148u);
    }
  }
}
