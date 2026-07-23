/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x140879AE0
 * Callers:
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x1408E2F8C (CmpValueEnumStackMatchingValueInUpperLayer.c)
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

__int64 __fastcall CmpFindNameInListCellWithStatus(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned __int16 *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // r8d
  __int64 result; // rax
  unsigned int i; // r14d
  ULONG_PTR v13; // rdx
  __int64 CellFlat; // rax
  WCHAR *v15; // r13
  unsigned __int64 v16; // rbp
  int v17; // ecx
  WCHAR *v18; // r12
  unsigned __int16 j; // bx
  WCHAR v20; // di
  unsigned int v21; // esi
  int v22; // edi
  int v23; // edi
  int v24; // eax
  unsigned __int8 *v25; // r12
  unsigned __int16 v26; // si
  unsigned __int16 k; // bp
  WCHAR v28; // bx
  unsigned int v29; // edi
  unsigned int v30[4]; // [rsp+30h] [rbp-48h] BYREF

  *(_QWORD *)v30 = 0LL;
  v8 = a4;
  v9 = a2;
  HvpGetCellContextInitialize(v30);
  if ( !v10 )
  {
    *a7 = -1;
    if ( a6 )
      *a6 = 0;
    return 3221225524LL;
  }
  for ( i = 0; i < v10; ++i )
  {
    v13 = *(unsigned int *)(v9 + 4LL * i);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v13, v30);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v13, v30);
    v15 = (WCHAR *)(CellFlat + 20);
    v16 = *(unsigned __int16 *)(CellFlat + 2);
    v17 = a5 & 0x10000;
    if ( (*(_BYTE *)(CellFlat + 16) & 1) != 0 )
    {
      if ( v17 )
      {
        v24 = CmpCompareTwoCompressedNames(
                *((unsigned __int8 **)v8 + 1),
                *v8,
                (unsigned __int8 *)(CellFlat + 20),
                *(_WORD *)(CellFlat + 2));
LABEL_42:
        v22 = v24;
        goto LABEL_24;
      }
      v18 = (WCHAR *)*((_QWORD *)v8 + 1);
      for ( j = *v8 >> 1; j && (_WORD)v16; --j )
      {
        v20 = *v18++;
        v21 = *(unsigned __int8 *)v15;
        v15 = (WCHAR *)((char *)v15 + 1);
        if ( v20 != (_WORD)v21 )
        {
          if ( v20 >= 0x61u )
          {
            if ( v20 > 0x7Au )
              v20 = RtlUpcaseUnicodeChar(v20);
            else
              v20 -= 32;
          }
          if ( v21 >= 0x61 )
          {
            if ( v21 > 0x7A )
              LOWORD(v21) = RtlUpcaseUnicodeChar(v21);
            else
              LOWORD(v21) = v21 - 32;
          }
          v22 = v20 - (unsigned __int16)v21;
          if ( v22 )
            goto LABEL_33;
        }
        LOWORD(v16) = v16 - 1;
      }
      v9 = a2;
      v22 = j - (unsigned __int16)v16;
    }
    else
    {
      if ( !v17 )
      {
        v24 = RtlCompareUnicodeStrings(
                *((PCWCH *)v8 + 1),
                (unsigned __int64)*v8 >> 1,
                (PCWCH)(CellFlat + 20),
                v16 >> 1,
                1u);
        goto LABEL_42;
      }
      v25 = (unsigned __int8 *)*((_QWORD *)v8 + 1);
      v26 = *v8;
      for ( k = (unsigned __int16)v16 >> 1; k && v26; --k )
      {
        v28 = *v15++;
        v29 = *v25++;
        if ( v28 != (_WORD)v29 )
        {
          if ( v28 >= 0x61u )
          {
            if ( v28 > 0x7Au )
              v28 = RtlUpcaseUnicodeChar(v28);
            else
              v28 -= 32;
          }
          if ( v29 >= 0x61 )
          {
            if ( v29 > 0x7A )
              LOWORD(v29) = RtlUpcaseUnicodeChar(v29);
            else
              LOWORD(v29) = v29 - 32;
          }
          v23 = v28 - (unsigned __int16)v29;
          if ( v23 )
            goto LABEL_32;
        }
        --v26;
      }
      v23 = k - v26;
LABEL_32:
      v22 = -v23;
LABEL_33:
      v9 = a2;
    }
LABEL_24:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v30);
    if ( !v22 )
    {
      result = 0LL;
      *a7 = *(_DWORD *)(v9 + 4LL * i);
      if ( a6 )
        *a6 = i;
      return result;
    }
    v10 = a3;
    v8 = a4;
  }
  *a7 = -1;
  if ( a6 )
    *a6 = v10;
  return 3221225524LL;
}
