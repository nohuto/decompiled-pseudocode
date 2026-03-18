/*
 * XREFs of HalpDmaIsThinDmarCapable @ 0x1404D2DB4
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinDmarCapable(__int64 a1)
{
  return *(_DWORD *)(a1 + 520) == 3 && *(_BYTE *)(a1 + 445) && *(_BYTE *)(a1 + 441) && *(_BYTE *)(a1 + 442) != 0;
}
