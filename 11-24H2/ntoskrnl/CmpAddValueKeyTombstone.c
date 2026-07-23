/*
 * XREFs of CmpAddValueKeyTombstone @ 0x1407DAAF8
 * Callers:
 *     CmpSetValueKeyTombstone @ 0x140AA8D74 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpNameSize @ 0x140885A7C (CmpNameSize.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     CmpCopyName @ 0x1408870F8 (CmpCopyName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddValueKeyTombstone(ULONG_PTR BugCheckParameter3, unsigned __int16 *a2, __int64 a3, _DWORD *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // r14d
  int Cell; // eax
  _WORD *v10; // rbx
  unsigned int v11; // esi
  unsigned __int16 v12; // ax
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  void *v15; // [rsp+40h] [rbp-28h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  HvpGetCellContextInitialize(&v14);
  v8 = (unsigned __int16)CmpNameSize(v7) + 20;
  Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v15, (__int64)&v14);
  v10 = v15;
  v11 = Cell;
  if ( Cell >= 0 )
  {
    memset_0(v15, 0, v8);
    *v10 = 27510;
    v10[8] = 2;
    *((_DWORD *)v10 + 1) = 0;
    *((_DWORD *)v10 + 2) = -1;
    *((_DWORD *)v10 + 3) = 0;
    v12 = CmpCopyName(v10 + 10, a2);
    v10[1] = v12;
    if ( v12 < *a2 )
      v10[8] |= 1u;
    v11 = 0;
    *a4 = -1;
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v14);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v14);
  }
  return v11;
}
