/*
 * XREFs of CmpDoCompareKeyName @ 0x1408789C0
 * Callers:
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpSelectLeaf @ 0x14088367C (CmpSelectLeaf.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x1408712D0 (CmpCompareTwoCompressedNames.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpDoCompareKeyName(ULONG_PTR a1, unsigned __int16 *a2, __int64 a3, unsigned int a4)
{
  bool v4; // zf
  __int64 CellPaged; // rax
  WCHAR *v9; // r15
  WCHAR *v10; // r12
  unsigned __int16 v11; // bp
  unsigned __int16 i; // di
  WCHAR v13; // bx
  unsigned int v14; // esi
  int v15; // ebx
  int v17; // eax
  unsigned __int16 v18; // si
  unsigned __int8 *v19; // rax
  unsigned __int16 v20; // r12
  unsigned __int16 j; // si
  WCHAR v22; // bx
  unsigned int v23; // ebp
  int v24; // ebx
  int v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+74h] [rbp+Ch]
  unsigned __int8 *v27; // [rsp+80h] [rbp+18h]

  v25 = -1;
  v4 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v26 = 0;
  if ( v4 )
    CellPaged = HvpGetCellPaged(a1, a4, &v25);
  else
    CellPaged = HvpGetCellFlat(a1, a4, &v25);
  if ( !CellPaged )
    return 2LL;
  v9 = (WCHAR *)(CellPaged + 76);
  if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
  {
    if ( !a3 )
    {
      v10 = (WCHAR *)*((_QWORD *)a2 + 1);
      v11 = *(_WORD *)(CellPaged + 72);
      for ( i = *a2 >> 1; i && v11; --i )
      {
        v13 = *v10++;
        v14 = *(unsigned __int8 *)v9;
        v9 = (WCHAR *)((char *)v9 + 1);
        if ( v13 != (_WORD)v14 )
        {
          if ( v13 >= 0x61u )
          {
            if ( v13 > 0x7Au )
              v13 = RtlUpcaseUnicodeChar(v13);
            else
              v13 -= 32;
          }
          if ( v14 >= 0x61 )
          {
            if ( v14 > 0x7A )
              LOWORD(v14) = RtlUpcaseUnicodeChar(v14);
            else
              LOWORD(v14) = v14 - 32;
          }
          v15 = v13 - (unsigned __int16)v14;
          if ( v15 )
            goto LABEL_19;
        }
        --v11;
      }
      v15 = i - v11;
      goto LABEL_19;
    }
    v17 = CmpCompareTwoCompressedNames(
            *(unsigned __int8 **)(a3 + 8),
            *(_WORD *)a3,
            (unsigned __int8 *)(CellPaged + 76),
            *(_WORD *)(CellPaged + 72));
  }
  else
  {
    v18 = *(_WORD *)(CellPaged + 72);
    if ( a3 )
    {
      v19 = *(unsigned __int8 **)(a3 + 8);
      v20 = *(_WORD *)a3;
      for ( j = v18 >> 1; j && v20; --j )
      {
        v22 = *v9++;
        v23 = *v19++;
        v27 = v19;
        if ( v22 != (_WORD)v23 )
        {
          if ( v22 >= 0x61u )
          {
            if ( v22 > 0x7Au )
              v22 = RtlUpcaseUnicodeChar(v22);
            else
              v22 -= 32;
          }
          if ( v23 >= 0x61 )
          {
            if ( v23 > 0x7A )
              LOWORD(v23) = RtlUpcaseUnicodeChar(v23);
            else
              LOWORD(v23) = v23 - 32;
          }
          v24 = v22 - (unsigned __int16)v23;
          if ( v24 )
            goto LABEL_47;
          v19 = v27;
        }
        --v20;
      }
      v24 = j - v20;
LABEL_47:
      v15 = -v24;
      goto LABEL_19;
    }
    v17 = RtlCompareUnicodeStrings(
            *((PCWCH *)a2 + 1),
            (unsigned __int64)*a2 >> 1,
            (PCWCH)(CellPaged + 76),
            (unsigned __int64)*(unsigned __int16 *)(CellPaged + 72) >> 1,
            1u);
  }
  v15 = v17;
LABEL_19:
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    HvpReleaseCellFlat(a1, &v25);
  else
    HvpReleaseCellPaged(a1, &v25);
  if ( v15 )
    return ((v15 >> 31) & 0xFFFFFFFE) + 1;
  else
    return 0LL;
}
