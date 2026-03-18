/*
 * XREFs of MiIsVadLarge @ 0x1403EC520
 * Callers:
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiRemoveVadCharges @ 0x140901C48 (MiRemoveVadCharges.c)
 *     MiProcessVaRangesInfoClass @ 0x1409FD8CC (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) == 0 )
    return *(_DWORD *)(a1 + 64) & 1;
  return (v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000;
}
