/*
 * XREFs of CmpCheckLexicographicalOrder @ 0x14088AC50
 * Callers:
 *     CmpCheckRegistry2 @ 0x140888A80 (CmpCheckRegistry2.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpCheckLexicographicalOrder(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned int a3)
{
  bool v3; // zf
  unsigned int v4; // ebx
  __int64 CellPaged; // rax
  __int64 v7; // rdi
  __int64 CellFlat; // rax
  __int64 v9; // rdx
  __int16 v10; // cx
  WCHAR *v11; // rsi
  WCHAR *v12; // r14
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // di
  unsigned int v15; // ebp
  unsigned int v16; // r15d
  int v17; // ecx
  unsigned int v18; // ebx
  unsigned __int16 v19; // r15
  unsigned __int16 i; // bp
  WCHAR v21; // bx
  unsigned int v22; // edi
  int v23; // ecx
  WCHAR v25; // bp
  unsigned int v26; // r15d
  unsigned int v27[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+38h] [rbp-40h]
  unsigned int v29; // [rsp+98h] [rbp+20h] BYREF
  int v30; // [rsp+9Ch] [rbp+24h]

  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v4 = BugCheckParameter4;
  v29 = -1;
  v30 = 0;
  v27[0] = -1;
  v27[1] = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a3, &v29);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a3, &v29);
  v7 = CellPaged;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4, v27);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v4, v27);
  v28 = CellFlat;
  v9 = CellFlat;
  if ( !v7 || !CellFlat )
  {
    v18 = -1073741670;
    if ( !v7 )
      goto LABEL_51;
    goto LABEL_48;
  }
  v10 = *(_WORD *)(CellFlat + 2) & 0x20;
  v11 = (WCHAR *)(CellFlat + 76);
  v12 = (WCHAR *)(v7 + 76);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    v13 = *(_WORD *)(CellFlat + 72);
    v14 = *(_WORD *)(v7 + 72);
    if ( v10 )
    {
      while ( v13 && v14 )
      {
        v15 = *(unsigned __int8 *)v11;
        v11 = (WCHAR *)((char *)v11 + 1);
        v16 = *(unsigned __int8 *)v12;
        v12 = (WCHAR *)((char *)v12 + 1);
        if ( (_WORD)v15 != (_WORD)v16 )
        {
          if ( v15 >= 0x61 )
          {
            if ( v15 > 0x7A )
              LOWORD(v15) = RtlUpcaseUnicodeChar(v15);
            else
              LOWORD(v15) = v15 - 32;
          }
          if ( v16 >= 0x61 )
          {
            if ( v16 > 0x7A )
              LOWORD(v16) = RtlUpcaseUnicodeChar(v16);
            else
              LOWORD(v16) = v16 - 32;
          }
          v17 = (unsigned __int16)v15 - (unsigned __int16)v16;
          if ( (unsigned __int16)v15 != (unsigned __int16)v16 )
            goto LABEL_16;
        }
        --v13;
        --v14;
      }
    }
    else
    {
      for ( v13 >>= 1; v13 && v14; --v13 )
      {
        v25 = *v11++;
        v26 = *(unsigned __int8 *)v12;
        v12 = (WCHAR *)((char *)v12 + 1);
        if ( v25 != (_WORD)v26 )
        {
          if ( v25 >= 0x61u )
          {
            if ( v25 > 0x7Au )
              v25 = RtlUpcaseUnicodeChar(v25);
            else
              v25 -= 32;
          }
          if ( v26 >= 0x61 )
          {
            if ( v26 > 0x7A )
              LOWORD(v26) = RtlUpcaseUnicodeChar(v26);
            else
              LOWORD(v26) = v26 - 32;
          }
          v17 = v25 - (unsigned __int16)v26;
          if ( v25 != (unsigned __int16)v26 )
            goto LABEL_16;
        }
        --v14;
      }
    }
    v17 = v13 - v14;
LABEL_16:
    if ( v17 < 0 )
      goto LABEL_17;
  }
  else if ( v10 )
  {
    v19 = *(_WORD *)(CellFlat + 72);
    for ( i = *(_WORD *)(v7 + 72) >> 1; i && v19; --i )
    {
      v21 = *v12++;
      v22 = *(unsigned __int8 *)v11;
      v11 = (WCHAR *)((char *)v11 + 1);
      if ( v21 != (_WORD)v22 )
      {
        if ( v21 >= 0x61u )
        {
          if ( v21 > 0x7Au )
            v21 = RtlUpcaseUnicodeChar(v21);
          else
            v21 -= 32;
        }
        if ( v22 >= 0x61 )
        {
          if ( v22 > 0x7A )
            LOWORD(v22) = RtlUpcaseUnicodeChar(v22);
          else
            LOWORD(v22) = v22 - 32;
        }
        v23 = v21 - (unsigned __int16)v22;
        if ( v21 != (unsigned __int16)v22 )
          goto LABEL_45;
      }
      --v19;
    }
    v23 = i - v19;
LABEL_45:
    if ( v23 > 0 )
      goto LABEL_17;
  }
  else if ( RtlCompareUnicodeStrings(
              (PCWCH)(CellFlat + 76),
              (unsigned __int64)*(unsigned __int16 *)(CellFlat + 72) >> 1,
              (PCWCH)(v7 + 76),
              (unsigned __int64)*(unsigned __int16 *)(v7 + 72) >> 1,
              1u) < 0 )
  {
LABEL_17:
    v18 = 0;
    goto LABEL_48;
  }
  v18 = -1073741492;
LABEL_48:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v29);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v29);
  v9 = v28;
LABEL_51:
  if ( !v9 )
    return v18;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
  {
    HvpReleaseCellPaged(BugCheckParameter3, v27);
    return v18;
  }
  HvpReleaseCellFlat(BugCheckParameter3, (__int64)v27);
  return v18;
}
