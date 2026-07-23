/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x1408764B0
 * Callers:
 *     CmpMarkCurrentValueDirty @ 0x1407CC22C (CmpMarkCurrentValueDirty.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpFindControlSet @ 0x1407E1C14 (CmpFindControlSet.c)
 *     CmpWalkUnicodeStringPath @ 0x1407E38E4 (CmpWalkUnicodeStringPath.c)
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 *     CmpFindPathByNameEx @ 0x1408E289C (CmpFindPathByNameEx.c)
 *     CmpFindSubKeyByName @ 0x140A32B78 (CmpFindSubKeyByName.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AA89B0 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        _DWORD *a4)
{
  unsigned int v4; // r14d
  unsigned __int16 *v5; // r12
  ULONG_PTR v6; // r15
  unsigned int SubKeyInLeafWithStatus; // ebx
  ULONG_PTR v8; // rdx
  _WORD *CellFlat; // rax
  _WORD *v10; // rsi
  int v11; // ebx
  unsigned __int16 i; // di
  int v13; // ecx
  bool v14; // zf
  ULONG_PTR v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  const WCHAR *v18; // r8
  WCHAR *v19; // rax
  unsigned __int16 v20; // r13
  unsigned __int16 j; // r12
  WCHAR v22; // r14
  unsigned int v23; // r15d
  LONG v24; // r14d
  __int64 CellPaged; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v28; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v29[2]; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v30[2]; // [rsp+48h] [rbp-20h] BYREF
  WCHAR *v31; // [rsp+50h] [rbp-18h]
  const WCHAR *v32; // [rsp+58h] [rbp-10h]
  __int64 v34; // [rsp+B8h] [rbp+50h]

  v34 = a2;
  v29[0] = -1;
  v29[1] = 0;
  v4 = 0;
  BugCheckParameter4 = 0LL;
  v5 = a3;
  LODWORD(v28) = 0;
  v6 = BugCheckParameter3;
  SubKeyInLeafWithStatus = -1073741772;
  *a4 = -1;
  while ( 1 )
  {
    if ( v4 >= *(_DWORD *)(v6 + 216) )
      return SubKeyInLeafWithStatus;
    if ( *(_DWORD *)(a2 + 4LL * v4 + 20) )
      break;
LABEL_20:
    HIDWORD(BugCheckParameter4) = ++v4;
  }
  v8 = *(unsigned int *)(a2 + 4LL * v4 + 28);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(v6, v8);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(v6);
  v10 = CellFlat;
  if ( CellFlat )
  {
    if ( *CellFlat == 26994 )
    {
      if ( (int)CmpFindSubKeyInRoot(v6, (__int64)CellFlat, v5, 0LL, &BugCheckParameter4) < 0 )
      {
LABEL_65:
        SubKeyInLeafWithStatus = -1073741670;
LABEL_51:
        if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v6, v29);
        else
          HvpReleaseCellPaged(v6, v29);
        return SubKeyInLeafWithStatus;
      }
      if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v6, v29);
      else
        HvpReleaseCellPaged(v6, v29);
      if ( (_DWORD)BugCheckParameter4 == -1 )
        goto LABEL_19;
      if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v6, (unsigned int)BugCheckParameter4);
      else
        CellPaged = HvpGetCellPaged(v6);
      v10 = (_WORD *)CellPaged;
      if ( !CellPaged )
        return 3221225626LL;
    }
    if ( *v10 == 26732 )
    {
      v11 = CmpHashUnicodeComponent(v5);
      LODWORD(BugCheckParameter4) = -1;
      for ( i = 0; ; ++i )
      {
        if ( i >= v10[1] )
        {
          v4 = HIDWORD(BugCheckParameter4);
          SubKeyInLeafWithStatus = -1073741772;
          goto LABEL_17;
        }
        if ( v11 == *(_DWORD *)&v10[4 * i + 4] )
        {
          v14 = (*(_BYTE *)(v6 + 140) & 1) == 0;
          v15 = *(unsigned int *)&v10[4 * i + 2];
          v30[0] = -1;
          v30[1] = 0;
          if ( v14 )
            v16 = HvpGetCellPaged(v6);
          else
            v16 = HvpGetCellFlat(v6, v15);
          v17 = v16;
          if ( !v16 )
            goto LABEL_65;
          v18 = (const WCHAR *)(v16 + 76);
          if ( (*(_BYTE *)(v16 + 2) & 0x20) != 0 )
          {
            v19 = (WCHAR *)*((_QWORD *)v5 + 1);
            v20 = *(_WORD *)(v17 + 72);
            for ( j = *v5 >> 1; j && v20; --j )
            {
              v22 = *v19++;
              v23 = *(unsigned __int8 *)v18;
              v18 = (const WCHAR *)((char *)v18 + 1);
              v31 = v19;
              v32 = v18;
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
                  goto LABEL_40;
                v19 = v31;
                v18 = v32;
              }
              --v20;
            }
            v24 = j - v20;
LABEL_40:
            v6 = BugCheckParameter3;
            v5 = a3;
          }
          else
          {
            v24 = RtlCompareUnicodeStrings(
                    *((PCWCH *)v5 + 1),
                    (unsigned __int64)*v5 >> 1,
                    v18,
                    (unsigned __int64)*(unsigned __int16 *)(v16 + 72) >> 1,
                    1u);
          }
          if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v6, v30);
          else
            HvpReleaseCellPaged(v6, v30);
          if ( !v24 )
            break;
        }
      }
      v4 = HIDWORD(BugCheckParameter4);
      SubKeyInLeafWithStatus = 0;
      v13 = *(_DWORD *)&v10[4 * i + 2];
      LODWORD(BugCheckParameter4) = v13;
    }
    else
    {
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v6, (__int64)&BugCheckParameter4, (__int64)&v28);
      if ( ((SubKeyInLeafWithStatus + 0x80000000) & 0x80000000) == 0 && SubKeyInLeafWithStatus != -1073741772 )
        goto LABEL_51;
      v13 = BugCheckParameter4;
    }
    if ( v13 != -1 )
    {
      SubKeyInLeafWithStatus = 0;
      *a4 = v13;
      goto LABEL_51;
    }
LABEL_17:
    if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v6, v29);
    else
      HvpReleaseCellPaged(v6, v29);
LABEL_19:
    a2 = v34;
    goto LABEL_20;
  }
  return 3221225626LL;
}
