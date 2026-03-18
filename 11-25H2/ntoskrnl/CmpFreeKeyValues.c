/*
 * XREFs of CmpFreeKeyValues @ 0x140A72E14
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     CmpFreeValue @ 0x140886E8C (CmpFreeValue.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpMarkKeyValuesDirty @ 0x140A72EF8 (CmpMarkKeyValuesDirty.c)
 */

__int64 __fastcall CmpFreeKeyValues(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v6; // rdx
  __int64 CellFlat; // rax
  __int64 v8; // r14
  unsigned int i; // esi
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0xFFFFFFFFLL;
  result = CmpMarkKeyValuesDirty(BugCheckParameter3);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a3 + 2) & 2) == 0 )
    {
      if ( *(_DWORD *)(a3 + 36) )
      {
        v6 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v6, &v10);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3, v6, &v10);
        v8 = CellFlat;
        for ( i = 0; i < *(_DWORD *)(a3 + 36); ++i )
          CmpFreeValue(BugCheckParameter3, *(unsigned int *)(v8 + 4LL * i));
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v10);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v10);
        HvFreeCell(BugCheckParameter3, *(_DWORD *)(a3 + 40));
      }
      *(_DWORD *)(a3 + 40) = -1;
      *(_DWORD *)(a3 + 36) = 0;
      if ( *(_WORD *)(a3 + 74) )
      {
        HvFreeCell(BugCheckParameter3, *(_DWORD *)(a3 + 48));
        *(_DWORD *)(a3 + 48) = -1;
        *(_WORD *)(a3 + 74) = 0;
      }
    }
    return 0LL;
  }
  return result;
}
