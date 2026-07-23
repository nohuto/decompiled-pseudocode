/*
 * XREFs of CmpFindNameInListWithStatus @ 0x140870840
 * Callers:
 *     CmpMergeKeyValues @ 0x1407E24E4 (CmpMergeKeyValues.c)
 *     CmpFindValueByName @ 0x14086EAC4 (CmpFindValueByName.c)
 *     CmpFindNameInList @ 0x14086EAFC (CmpFindNameInList.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408705E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409F8060 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A5F148 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x1408712D0 (CmpCompareTwoCompressedNames.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  __int64 v7; // r15
  int v8; // r12d
  unsigned __int16 *v9; // rsi
  _DWORD *v11; // rdx
  ULONG_PTR v12; // rdx
  __int64 CellFlat; // rax
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int i; // r13d
  __int64 CellPaged; // rax
  unsigned __int64 v19; // r14
  const WCHAR *v20; // r8
  int v21; // ecx
  WCHAR *v22; // r12
  unsigned __int16 j; // r15
  WCHAR v24; // bx
  unsigned int v25; // esi
  int v26; // ebx
  LONG v27; // eax
  unsigned __int8 *v28; // r12
  unsigned __int16 v29; // r15
  unsigned __int16 k; // r14
  WCHAR v31; // bx
  unsigned int v32; // esi
  int v33; // ebx
  __int64 v34; // [rsp+30h] [rbp-20h]
  __int64 v35; // [rsp+38h] [rbp-18h] BYREF
  __int64 v36; // [rsp+40h] [rbp-10h] BYREF
  const WCHAR *v37; // [rsp+48h] [rbp-8h]
  unsigned int v38; // [rsp+98h] [rbp+48h]

  v36 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v8 = a4;
  v9 = a3;
  HvpGetCellContextInitialize(&v36);
  if ( *v11 )
  {
    v12 = (unsigned int)v11[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v12);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v34 = CellFlat;
    v7 = CellFlat;
  }
  v38 = *a2;
  v35 = 0LL;
  HvpGetCellContextInitialize(&v35);
  if ( !v14 )
  {
    v15 = -1073741772;
    *a6 = -1;
    if ( a5 )
      *a5 = 0;
    goto LABEL_8;
  }
  for ( i = 0; i < v14; ++i )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v7 + 4LL * i));
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    v19 = *(unsigned __int16 *)(CellPaged + 2);
    v20 = (const WCHAR *)(CellPaged + 20);
    v21 = v8 & 0x10000;
    if ( (*(_BYTE *)(CellPaged + 16) & 1) != 0 )
    {
      if ( !v21 )
      {
        v22 = (WCHAR *)*((_QWORD *)v9 + 1);
        for ( j = *v9 >> 1; j && (_WORD)v19; --j )
        {
          v24 = *v22++;
          v25 = *(unsigned __int8 *)v20;
          v20 = (const WCHAR *)((char *)v20 + 1);
          v37 = v20;
          if ( v24 != (_WORD)v25 )
          {
            if ( v24 >= 0x61u )
            {
              if ( v24 > 0x7Au )
                v24 = RtlUpcaseUnicodeChar(v24);
              else
                v24 -= 32;
            }
            if ( v25 >= 0x61 )
            {
              if ( v25 > 0x7A )
                LOWORD(v25) = RtlUpcaseUnicodeChar(v25);
              else
                LOWORD(v25) = v25 - 32;
            }
            v26 = v24 - (unsigned __int16)v25;
            if ( v26 )
              goto LABEL_33;
            v20 = v37;
          }
          LOWORD(v19) = v19 - 1;
        }
        v26 = j - (unsigned __int16)v19;
LABEL_33:
        v7 = v34;
        v8 = a4;
        goto LABEL_34;
      }
      v27 = CmpCompareTwoCompressedNames(*((_QWORD *)v9 + 1), *v9, v20, *(unsigned __int16 *)(CellPaged + 2));
    }
    else
    {
      if ( v21 )
      {
        v28 = (unsigned __int8 *)*((_QWORD *)v9 + 1);
        v29 = *v9;
        for ( k = (unsigned __int16)v19 >> 1; k && v29; --k )
        {
          v31 = *v20++;
          v32 = *v28++;
          v37 = v20;
          if ( v31 != (_WORD)v32 )
          {
            if ( v31 >= 0x61u )
            {
              if ( v31 > 0x7Au )
                v31 = RtlUpcaseUnicodeChar(v31);
              else
                v31 -= 32;
            }
            if ( v32 >= 0x61 )
            {
              if ( v32 > 0x7A )
                LOWORD(v32) = RtlUpcaseUnicodeChar(v32);
              else
                LOWORD(v32) = v32 - 32;
            }
            v33 = v31 - (unsigned __int16)v32;
            if ( v33 )
              goto LABEL_65;
            v20 = v37;
          }
          --v29;
        }
        v33 = k - v29;
LABEL_65:
        v26 = -v33;
        goto LABEL_33;
      }
      v27 = RtlCompareUnicodeStrings(*((PCWCH *)v9 + 1), (unsigned __int64)*v9 >> 1, v20, v19 >> 1, 1u);
    }
    v26 = v27;
LABEL_34:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v35);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v35);
    if ( !v26 )
    {
      v15 = 0;
      *a6 = *(_DWORD *)(v7 + 4LL * i);
      if ( a5 )
        *a5 = i;
      goto LABEL_8;
    }
    v14 = v38;
    v9 = a3;
  }
  v15 = -1073741772;
  *a6 = -1;
  if ( a5 )
    *a5 = v14;
LABEL_8:
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v36);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v36);
  }
  return v15;
}
