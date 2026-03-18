/*
 * XREFs of CmpValueEnumStackEntryStart @ 0x140462BF4
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140462AF8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 */

void __fastcall CmpValueEnumStackEntryStart(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 CellFlat; // rax

  if ( (*(_BYTE *)(a3 + 2) & 0x40) == 0 && *(_DWORD *)(a3 + 36) )
  {
    *(_QWORD *)a1 = a2;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 36);
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(a2, *(unsigned int *)(a3 + 40));
    else
      CellFlat = HvpGetCellPaged(a2);
    *(_QWORD *)(a1 + 8) = CellFlat;
  }
}
