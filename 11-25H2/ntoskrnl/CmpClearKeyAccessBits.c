/*
 * XREFs of CmpClearKeyAccessBits @ 0x140889600
 * Callers:
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x14088A4F0 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpLogClearAccessBitsEvent @ 0x140ABBC78 (CmpLogClearAccessBitsEvent.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpClearKeyAccessBits(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int SubKeyByNumber; // edi
  _QWORD *Pool2; // rsi
  __int64 v5; // r14
  unsigned int v6; // ecx
  unsigned int v7; // r13d
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // r15
  unsigned int v12[4]; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+88h] [rbp+58h]

  SubKeyByNumber = 0;
  v12[0] = -1;
  v12[1] = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  LODWORD(v5) = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  *Pool2 = v6;
  if ( v6 == -1 )
    goto LABEL_24;
  v7 = 0;
  v14 = *(_DWORD *)(BugCheckParameter3 + 104);
  while ( 1 )
  {
    v8 = LODWORD(Pool2[(unsigned int)v5]);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, v12);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, v12);
    v10 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(CellFlat + 12) )
    {
      SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, LODWORD(Pool2[(unsigned int)v5]), 0);
      if ( SubKeyByNumber < 0 )
        goto LABEL_21;
      SubKeyByNumber = 0;
      *(_BYTE *)(v10 + 12) = 0;
      ++v7;
    }
    if ( HIDWORD(Pool2[(unsigned int)v5]) >= *(_DWORD *)(v10 + 20) || (_DWORD)v5 == 511 )
      break;
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3);
    if ( SubKeyByNumber < 0 )
      goto LABEL_21;
    ++HIDWORD(Pool2[(unsigned int)v5]);
    v5 = (unsigned int)(v5 + 1);
    SubKeyByNumber = 0;
    LODWORD(Pool2[v5]) = 0;
    HIDWORD(Pool2[v5]) = 0;
LABEL_14:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v12);
  }
  if ( (_DWORD)v5 )
  {
    LODWORD(v5) = v5 - 1;
    goto LABEL_14;
  }
  CmpLogClearAccessBitsEvent(a2, v7, (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 104) - v14) >> 3);
LABEL_21:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v12);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v12);
LABEL_24:
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SubKeyByNumber;
}
