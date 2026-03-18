/*
 * XREFs of HalpIommuProcessReservedDomains @ 0x140B4DB9C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuConstructReservedPageTable @ 0x140B4DA90 (HalpIommuConstructReservedPageTable.c)
 */

__int64 __fastcall HalpIommuProcessReservedDomains(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rsi
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rbp
  __int64 result; // rax

  v4 = *(_DWORD **)(a2 + 536);
  if ( !v4 )
    return 0LL;
  v7 = *(_DWORD *)(a2 + 472);
  if ( (v7 & 0x100) == 0 )
    return 0LL;
  v8 = (unsigned __int16)v7 >> 13;
  v9 = 0LL;
  if ( !*v4 )
    return guard_dispatch_icall_no_overrides(
             *(_QWORD *)(a2 + 16),
             **(unsigned int **)(a2 + 536),
             *(_QWORD *)(a2 + 536) + 8LL,
             a4);
  while ( 1 )
  {
    result = HalpIommuConstructReservedPageTable(a1, *(PHYSICAL_ADDRESS **)&v4[2 * v9 + 2], v8 + 1);
    if ( (int)result < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *v4 )
      return guard_dispatch_icall_no_overrides(
               *(_QWORD *)(a2 + 16),
               **(unsigned int **)(a2 + 536),
               *(_QWORD *)(a2 + 536) + 8LL,
               a4);
  }
  return result;
}
