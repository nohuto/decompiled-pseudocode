/*
 * XREFs of CmpGetValueData @ 0x14087A8E0
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1407E26F8 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1407E39A0 (CmpGetValueForAudit.c)
 *     CmpValueToData @ 0x1407E3B14 (CmpValueToData.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408705E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmpQueryKeyValueData @ 0x14087A180 (CmpQueryKeyValueData.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     CmpFindTagIndex @ 0x140C4DCD4 (CmpFindTagIndex.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall CmpGetValueData(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  ULONG_PTR v14; // rdx
  __int64 v15; // rax
  bool result; // al
  __int64 CellFlat; // rax
  bool v18; // zf
  ULONG_PTR v19; // rdx
  __int64 CellPaged; // rax
  __int64 v21; // r15
  ULONG_PTR v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned int v25; // r12d
  void *v26; // rdi
  ULONG_PTR v27; // rdx
  const void *v28; // rax
  size_t v29; // r8
  unsigned int v30; // [rsp+70h] [rbp+18h] BYREF
  int v31; // [rsp+74h] [rbp+1Ch]
  __int64 Pool2; // [rsp+78h] [rbp+20h]

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  v13 = v12 + 0x80000000;
  if ( v12 < 0x80000000 )
    v13 = *(_DWORD *)(a3 + 4);
  *a4 = v13;
  if ( *(_DWORD *)(a3 + 4) >= 0x80000000 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, a7);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, a7);
    if ( CellFlat )
    {
      *v9 = a3 + 8;
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v13 - 16345 <= 0x7FFFC026 )
  {
    v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v19 = *(unsigned int *)(a3 + 8);
    v30 = -1;
    v31 = 0;
    Pool2 = 0LL;
    a6 = 0xFFFFFFFFLL;
    a5 = 0xFFFFFFFFLL;
    if ( v18 )
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v19, &v30);
    else
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v19, &v30);
    v21 = CellPaged;
    if ( CellPaged )
    {
      v22 = *(unsigned int *)(CellPaged + 4);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v23 = HvpGetCellFlat(BugCheckParameter3, v22, &a5);
      else
        v23 = HvpGetCellPaged(BugCheckParameter3, v22, &a5);
      v24 = v23;
      if ( v23 )
      {
        v25 = *(_DWORD *)(a3 + 4);
        Pool2 = ExAllocatePool2(0x100uLL, v25, 0x64764D43u);
        v26 = (void *)Pool2;
        if ( Pool2 )
        {
          while ( v8 < *(_WORD *)(v21 + 2) )
          {
            v27 = *(unsigned int *)(v24 + 4LL * v8);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v28 = (const void *)HvpGetCellFlat(BugCheckParameter3, v27, &a6);
            else
              v28 = (const void *)HvpGetCellPaged(BugCheckParameter3, v27, &a6);
            if ( !v28 )
            {
              v26 = (void *)Pool2;
              LOBYTE(v8) = 0;
              goto LABEL_34;
            }
            v29 = v25;
            if ( v25 > 0x3FD8 )
              v29 = 16344LL;
            v26 = (void *)Pool2;
            memmove((void *)(Pool2 + 16344LL * v8), v28, v29);
            v25 -= 16344;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &a6);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&a6);
            ++v8;
          }
          LOBYTE(v8) = 1;
        }
LABEL_34:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &a5);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&a5);
      }
      else
      {
        v26 = (void *)Pool2;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v30);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v30);
      if ( (_BYTE)v8 )
      {
        *v9 = (__int64)v26;
        result = 1;
        *v7 = 1;
        return result;
      }
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
    }
    return 0;
  }
  v14 = *(unsigned int *)(a3 + 8);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v15 = HvpGetCellFlat(BugCheckParameter3, v14, a7);
  else
    v15 = HvpGetCellPaged(BugCheckParameter3, v14, a7);
  *v9 = v15;
  return v15 != 0;
}
