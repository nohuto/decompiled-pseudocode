/*
 * XREFs of CmpMarkValueDataDirty @ 0x1408840F8
 * Callers:
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpMarkKeyDirty @ 0x1408839E4 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x140883D24 (CmpSetValueKeyExisting.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409F8060 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpMarkKeyValuesDirty @ 0x140A6F9E8 (CmpMarkKeyValuesDirty.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkValueDataDirty(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR v3; // rdx
  unsigned int v5; // eax
  int v6; // esi
  bool v8; // zf
  __int64 v9; // r12
  __int64 CellPaged; // rax
  ULONG_PTR v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int16 i; // r14
  ULONG_PTR v15; // rdx
  unsigned int v16; // [rsp+68h] [rbp+48h] BYREF
  int v17; // [rsp+6Ch] [rbp+4Ch]
  unsigned int v18; // [rsp+70h] [rbp+50h] BYREF
  int v19; // [rsp+74h] [rbp+54h]

  v3 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v3 == -1 )
    return 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 >= 0x80000000 )
    return 0;
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || v5 - 16345 > 0x7FFFC026 )
    goto LABEL_33;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v18 = -1;
  v9 = 0LL;
  v19 = 0;
  v16 = -1;
  v17 = 0;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, v3, &v18);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, v3, &v18);
  v11 = *(unsigned int *)(CellPaged + 4);
  v12 = CellPaged;
  if ( (_DWORD)v11 == -1 )
    goto LABEL_30;
  v13 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v11, &v16)
      : HvpGetCellPaged(BugCheckParameter3, v11, &v16);
  v9 = v13;
  for ( i = 0; i < *(_WORD *)(v12 + 2); ++i )
  {
    v15 = *(unsigned int *)(v9 + 4LL * i);
    if ( (_DWORD)v15 != -1 )
    {
      v6 = HvpMarkCellDirty(BugCheckParameter3, v15, 0);
      if ( v6 < 0 )
        goto LABEL_19;
    }
  }
  v6 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v12 + 4), 0);
  if ( v6 >= 0 )
LABEL_30:
    v6 = 0;
LABEL_19:
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v16);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v18);
  if ( v6 >= 0 )
  {
LABEL_33:
    v6 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(a2 + 8), 0);
    if ( v6 >= 0 )
      return 0;
  }
  return (unsigned int)v6;
}
