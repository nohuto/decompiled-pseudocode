/*
 * XREFs of CmpFreeKeyValueList @ 0x1407E2430
 * Callers:
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpFreeKeyValueList(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  __int64 result; // rax
  _DWORD *v5; // rdx
  ULONG_PTR v6; // rdx
  __int64 CellFlat; // rax
  __int64 v8; // rsi
  __int64 i; // r14
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  result = HvpGetCellContextInitialize(&v10);
  if ( *v5 )
  {
    v6 = (unsigned int)v5[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v6);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v8 = 0LL;
    for ( i = CellFlat; (unsigned int)v8 < *a2; v8 = (unsigned int)(v8 + 1) )
      CmpFreeValue(BugCheckParameter3, *(unsigned int *)(i + 4 * v8));
    result = HvFreeCell(BugCheckParameter3, (unsigned int)a2[1]);
    if ( i )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(BugCheckParameter3, &v10);
      else
        return HvpReleaseCellPaged(BugCheckParameter3, &v10);
    }
  }
  return result;
}
