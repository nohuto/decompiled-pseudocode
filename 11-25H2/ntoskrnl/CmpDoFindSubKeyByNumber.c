/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x140975E60
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x14087D350 (CmpFindSubKeyByNumberEx.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x140973CE8 (CmpKeyEnumStackEntryNotifyPromotion.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140975ADC (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140975CE8 (CmpKeyEnumStackEntryBegin.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _WORD *a2, unsigned int a3)
{
  __int64 v3; // rdi
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  _WORD *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v13 = 0xFFFFFFFFLL;
  if ( *a2 == 26994 )
  {
    while ( (unsigned int)v3 < (unsigned __int16)a2[1] )
    {
      v8 = *(unsigned int *)&a2[2 * v3 + 2];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, &v13);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, &v13);
      v10 = (_WORD *)CellFlat;
      if ( !CellFlat )
        return 0xFFFFFFFFLL;
      v11 = *(unsigned __int16 *)(CellFlat + 2);
      if ( a3 < v11 )
      {
        if ( ((*v10 - 26220) & 0xFDFF) != 0 )
          v12 = *(_DWORD *)&v10[2 * a3 + 2];
        else
          v12 = *(_DWORD *)&v10[4 * a3 + 2];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v13);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
        return v12;
      }
      a3 -= v11;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v13);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
      v3 = (unsigned int)(v3 + 1);
    }
  }
  if ( ((*a2 - 26220) & 0xFDFF) != 0 )
    return *(unsigned int *)&a2[2 * a3 + 2];
  else
    return *(unsigned int *)&a2[4 * a3 + 2];
}
