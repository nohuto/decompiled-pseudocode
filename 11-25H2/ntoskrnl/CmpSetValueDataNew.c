/*
 * XREFs of CmpSetValueDataNew @ 0x1408816B8
 * Callers:
 *     CmpCopyValue @ 0x14087F76C (CmpCopyValue.c)
 *     CmpAddValueKeyNew @ 0x14087FB18 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyExisting @ 0x140887430 (CmpSetValueKeyExisting.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpSetValueDataNew(
        ULONG_PTR BugCheckParameter3,
        char *Src,
        size_t Size,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // r14
  __int64 result; // rax
  __int64 *v10; // rdx
  bool v11; // zf
  unsigned int *v12; // r12
  __int64 v13; // r15
  unsigned int *v14; // r8
  __int64 v15; // rsi
  _BYTE *v16; // rsi
  unsigned int v17; // eax
  _BYTE *v18; // r12
  size_t v19; // r8
  _DWORD *v20; // rcx
  unsigned __int16 i; // ax
  unsigned int v22; // edx
  int v23; // [rsp+30h] [rbp-40h]
  unsigned int v24; // [rsp+34h] [rbp-3Ch]
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  void *v28; // [rsp+50h] [rbp-20h] BYREF
  void *v29; // [rsp+58h] [rbp-18h] BYREF
  unsigned int *v30; // [rsp+60h] [rbp-10h]
  __int64 v31; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v5 = (unsigned int)Size;
  v29 = 0LL;
  v25 = 0xFFFFFFFFLL;
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    result = HvAllocateCell(BugCheckParameter3, Size, a4, a5, &v29, (__int64)&v25);
    if ( (int)result < 0 )
      return result;
    memmove(v29, Src, v5);
    v10 = &v25;
    v11 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    goto LABEL_5;
  }
  v12 = a5;
  v27 = 0xFFFFFFFFLL;
  v26 = 0xFFFFFFFFLL;
  v31 = 0LL;
  v28 = 0LL;
  result = HvAllocateCell(BugCheckParameter3, 8, a4, a5, &v31, (__int64)&v27);
  if ( (int)result < 0 )
    return result;
  v13 = v31;
  v14 = (unsigned int *)(v31 + 4);
  *(_DWORD *)v31 = 25188;
  *v14 = -1;
  v30 = v14;
  v15 = (unsigned __int16)(((int)v5 + 16343) / 0x3FD8u);
  v24 = v15;
  v23 = HvAllocateCell(BugCheckParameter3, 4 * (int)v15, a4, v14, &v28, (__int64)&v26);
  if ( v23 >= 0 )
  {
    if ( (unsigned __int16)(((int)v5 + 16343) / 0x3FD8u) )
      memset_0(v28, -1, 4 * v15);
    v16 = (_BYTE *)(BugCheckParameter3 + 140);
    LODWORD(v31) = 0;
    v17 = 0;
    v18 = (_BYTE *)(BugCheckParameter3 + 140);
    while ( v17 < v24 )
    {
      v23 = HvAllocateCell(
              BugCheckParameter3,
              16344,
              v32,
              (unsigned int *)v28 + *(unsigned __int16 *)(v13 + 2),
              &v29,
              (__int64)&v25);
      if ( v23 < 0 )
      {
        v12 = a5;
        goto LABEL_27;
      }
      v19 = (unsigned int)v5;
      if ( (unsigned int)v5 > 0x3FD8 )
        v19 = 16344LL;
      memmove(v29, Src, v19);
      v18 = (_BYTE *)(BugCheckParameter3 + 140);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v25);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v25);
      ++*(_WORD *)(v13 + 2);
      v29 = 0LL;
      Src += 16344;
      LODWORD(v5) = v5 - 16344;
      v17 = v31 + 1;
      LODWORD(v31) = v31 + 1;
    }
    if ( (*v18 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
    v11 = (*v18 & 1) == 0;
    v10 = &v27;
LABEL_5:
    if ( v11 )
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v10);
    else
      HvpReleaseCellFlat(BugCheckParameter3, v10);
    return 0LL;
  }
  v16 = (_BYTE *)(BugCheckParameter3 + 140);
LABEL_27:
  v20 = v28;
  if ( v28 )
  {
    for ( i = *(_WORD *)(v13 + 2); i; *(_WORD *)(v13 + 2) = i )
    {
      v22 = v20[i];
      if ( v22 != -1 )
      {
        HvFreeCell(BugCheckParameter3, v22);
        v20 = v28;
      }
      i = *(_WORD *)(v13 + 2) - 1;
    }
    v16 = (_BYTE *)(BugCheckParameter3 + 140);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
  }
  if ( *v30 != -1 )
    HvFreeCell(BugCheckParameter3, *v30);
  if ( (*v16 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v27);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
  HvFreeCell(BugCheckParameter3, *v12);
  result = (unsigned int)v23;
  *v12 = -1;
  return result;
}
