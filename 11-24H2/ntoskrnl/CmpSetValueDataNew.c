/*
 * XREFs of CmpSetValueDataNew @ 0x1408849EC
 * Callers:
 *     CmpSetValueKeyExisting @ 0x140883D24 (CmpSetValueKeyExisting.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     CmpAddValueKeyNew @ 0x140885910 (CmpAddValueKeyNew.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpSetValueDataNew(ULONG_PTR BugCheckParameter3, char *Src, size_t Size, int a4, _DWORD *a5)
{
  size_t v5; // r14
  __int64 result; // rax
  __int64 *v9; // rdx
  bool v10; // zf
  _DWORD *v11; // r12
  __int64 v12; // r15
  unsigned int *v13; // r8
  _BYTE *v14; // rsi
  unsigned int v15; // eax
  _BYTE *v16; // r12
  size_t v17; // r8
  unsigned int *v18; // rcx
  ULONG_PTR v19; // rdx
  unsigned __int16 i; // ax
  ULONG_PTR v21; // rdx
  int Cell; // [rsp+30h] [rbp-40h]
  unsigned int v23; // [rsp+34h] [rbp-3Ch]
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  void *v27; // [rsp+50h] [rbp-20h] BYREF
  void *v28; // [rsp+58h] [rbp-18h] BYREF
  unsigned int *v29; // [rsp+60h] [rbp-10h]
  __int64 v30; // [rsp+B0h] [rbp+40h] BYREF
  int v31; // [rsp+C8h] [rbp+58h]

  v31 = a4;
  v5 = (unsigned int)Size;
  v28 = 0LL;
  v24 = 0xFFFFFFFFLL;
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    result = HvAllocateCell(BugCheckParameter3, (__int64)&v28, (__int64)&v24);
    if ( (int)result < 0 )
      return result;
    memmove(v28, Src, v5);
    v9 = &v24;
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    goto LABEL_5;
  }
  v11 = a5;
  v26 = 0xFFFFFFFFLL;
  v25 = 0xFFFFFFFFLL;
  v30 = 0LL;
  v27 = 0LL;
  result = HvAllocateCell(BugCheckParameter3, (__int64)&v30, (__int64)&v26);
  if ( (int)result < 0 )
    return result;
  v12 = v30;
  v13 = (unsigned int *)(v30 + 4);
  *(_DWORD *)v30 = 25188;
  *v13 = -1;
  v29 = v13;
  v23 = (unsigned __int16)(((int)v5 + 16343) / 0x3FD8u);
  Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v27, (__int64)&v25);
  if ( Cell >= 0 )
  {
    if ( (unsigned __int16)(((int)v5 + 16343) / 0x3FD8u) )
      memset_0(v27, -1, 4LL * (unsigned __int16)(((int)v5 + 16343) / 0x3FD8u));
    v14 = (_BYTE *)(BugCheckParameter3 + 140);
    LODWORD(v30) = 0;
    v15 = 0;
    v16 = (_BYTE *)(BugCheckParameter3 + 140);
    while ( v15 < v23 )
    {
      Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v28, (__int64)&v24);
      if ( Cell < 0 )
      {
        v11 = a5;
        goto LABEL_27;
      }
      v17 = (unsigned int)v5;
      if ( (unsigned int)v5 > 0x3FD8 )
        v17 = 16344LL;
      memmove(v28, Src, v17);
      v16 = (_BYTE *)(BugCheckParameter3 + 140);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v24);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v24);
      ++*(_WORD *)(v12 + 2);
      v28 = 0LL;
      Src += 16344;
      LODWORD(v5) = v5 - 16344;
      v15 = v30 + 1;
      LODWORD(v30) = v30 + 1;
    }
    if ( (*v16 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v25);
    v10 = (*v16 & 1) == 0;
    v9 = &v26;
LABEL_5:
    if ( v10 )
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v9);
    else
      HvpReleaseCellFlat(BugCheckParameter3, v9);
    return 0LL;
  }
  v14 = (_BYTE *)(BugCheckParameter3 + 140);
LABEL_27:
  v18 = (unsigned int *)v27;
  if ( v27 )
  {
    for ( i = *(_WORD *)(v12 + 2); i; *(_WORD *)(v12 + 2) = i )
    {
      v21 = v18[i];
      if ( (_DWORD)v21 != -1 )
      {
        HvFreeCell(BugCheckParameter3, v21);
        v18 = (unsigned int *)v27;
      }
      i = *(_WORD *)(v12 + 2) - 1;
    }
    v14 = (_BYTE *)(BugCheckParameter3 + 140);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v25);
  }
  v19 = *v29;
  if ( (_DWORD)v19 != -1 )
    HvFreeCell(BugCheckParameter3, v19);
  if ( (*v14 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v26);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
  HvFreeCell(BugCheckParameter3, (unsigned int)*v11);
  result = (unsigned int)Cell;
  *v11 = -1;
  return result;
}
