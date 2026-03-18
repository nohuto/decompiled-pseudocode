/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x140875D60
 * Callers:
 *     CmpMarkCurrentValueDirty @ 0x1407BC524 (CmpMarkCurrentValueDirty.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpFindControlSet @ 0x1407D1DE4 (CmpFindControlSet.c)
 *     CmpWalkUnicodeStringPath @ 0x1407D3AB4 (CmpWalkUnicodeStringPath.c)
 *     CmpFindPathByNameEx @ 0x14083F1D0 (CmpFindPathByNameEx.c)
 *     CmpCopySyncTree2 @ 0x140889B3C (CmpCopySyncTree2.c)
 *     CmpFindSubKeyByName @ 0x140A366A8 (CmpFindSubKeyByName.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AA8450 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline @ 0x1404F0ABC (Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     CmpFindSubKeyInRoot @ 0x140846440 (CmpFindSubKeyInRoot.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140877170 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        _DWORD *a4)
{
  unsigned int v4; // esi
  unsigned __int16 *v5; // r15
  ULONG_PTR v6; // r12
  unsigned int SubKeyInLeafWithStatus; // ebx
  ULONG_PTR v8; // rdx
  _WORD *CellFlat; // rax
  _WORD *v10; // r14
  int v11; // ebx
  WCHAR *v12; // rdi
  unsigned __int64 v13; // rsi
  WCHAR v14; // ax
  unsigned __int16 i; // di
  int v16; // ecx
  WCHAR *v17; // rdi
  __int64 v18; // rsi
  WCHAR v19; // ax
  bool v20; // zf
  ULONG_PTR v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  const WCHAR *v24; // r8
  WCHAR *v25; // rax
  unsigned __int16 v26; // r13
  unsigned __int16 j; // si
  WCHAR v28; // r15
  unsigned int v29; // r12d
  LONG v30; // r15d
  __int64 CellPaged; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v35[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v36[2]; // [rsp+48h] [rbp-30h] BYREF
  WCHAR *v37; // [rsp+50h] [rbp-28h]
  __int128 v38; // [rsp+58h] [rbp-20h]
  __int64 v40; // [rsp+C8h] [rbp+50h]

  v40 = a2;
  v35[0] = -1;
  v35[1] = 0;
  v4 = 0;
  BugCheckParameter4 = 0LL;
  v5 = a3;
  LODWORD(v34) = 0;
  v6 = BugCheckParameter3;
  SubKeyInLeafWithStatus = -1073741772;
  *a4 = -1;
  while ( 1 )
  {
    if ( v4 >= *(_DWORD *)(v6 + 216) )
      return SubKeyInLeafWithStatus;
    if ( *(_DWORD *)(a2 + 4LL * v4 + 20) )
      break;
LABEL_27:
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
LABEL_78:
        SubKeyInLeafWithStatus = -1073741670;
LABEL_64:
        if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v6, v35);
        else
          HvpReleaseCellPaged(v6, v35);
        return SubKeyInLeafWithStatus;
      }
      if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v6, v35);
      else
        HvpReleaseCellPaged(v6, v35);
      if ( (_DWORD)BugCheckParameter4 == -1 )
        goto LABEL_26;
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
      v11 = 0;
      v38 = *(_OWORD *)v5;
      if ( (unsigned int)Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (unsigned __int16)v38 >= 2u )
        {
          v12 = (WCHAR *)*((_QWORD *)&v38 + 1);
          v13 = (unsigned __int64)(unsigned __int16)v38 >> 1;
          do
          {
            v14 = *v12;
            if ( *v12 >= 0x61u )
            {
              if ( v14 > 0x7Au )
                v14 = RtlUpcaseUnicodeChar(v14);
              else
                v14 -= 32;
            }
            ++v12;
            v11 = v14 + 37 * v11;
            --v13;
          }
          while ( v13 );
        }
      }
      else if ( (_WORD)v38 )
      {
        v17 = (WCHAR *)*((_QWORD *)&v38 + 1);
        v18 = (unsigned __int16)(((unsigned __int16)(v38 - 1) >> 1) + 1);
        do
        {
          v19 = *v17;
          if ( *v17 >= 0x61u )
          {
            if ( v19 > 0x7Au )
              v19 = RtlUpcaseUnicodeChar(v19);
            else
              v19 -= 32;
          }
          ++v17;
          v11 = v19 + 37 * v11;
          --v18;
        }
        while ( v18 );
      }
      LODWORD(BugCheckParameter4) = -1;
      for ( i = 0; ; ++i )
      {
        if ( i >= v10[1] )
        {
          v4 = HIDWORD(BugCheckParameter4);
          SubKeyInLeafWithStatus = -1073741772;
          goto LABEL_24;
        }
        if ( v11 == *(_DWORD *)&v10[4 * i + 4] )
        {
          v20 = (*(_BYTE *)(v6 + 140) & 1) == 0;
          v21 = *(unsigned int *)&v10[4 * i + 2];
          v36[0] = -1;
          v36[1] = 0;
          if ( v20 )
            v22 = HvpGetCellPaged(v6);
          else
            v22 = HvpGetCellFlat(v6, v21);
          v23 = v22;
          if ( !v22 )
            goto LABEL_78;
          v24 = (const WCHAR *)(v22 + 76);
          if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
          {
            v25 = (WCHAR *)*((_QWORD *)v5 + 1);
            v26 = *(_WORD *)(v23 + 72);
            for ( j = *v5 >> 1; j && v26; --j )
            {
              v28 = *v25++;
              v29 = *(unsigned __int8 *)v24;
              v24 = (const WCHAR *)((char *)v24 + 1);
              v37 = v25;
              *(_QWORD *)&v38 = v24;
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
                v30 = v28 - (unsigned __int16)v29;
                if ( v30 )
                  goto LABEL_54;
                v25 = v37;
                v24 = (const WCHAR *)v38;
              }
              --v26;
            }
            v30 = j - v26;
LABEL_54:
            v6 = BugCheckParameter3;
          }
          else
          {
            v30 = RtlCompareUnicodeStrings(
                    *((PCWCH *)v5 + 1),
                    (unsigned __int64)*v5 >> 1,
                    v24,
                    (unsigned __int64)*(unsigned __int16 *)(v22 + 72) >> 1,
                    1u);
          }
          if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v6, v36);
          else
            HvpReleaseCellPaged(v6, v36);
          v20 = v30 == 0;
          v5 = a3;
          if ( v20 )
            break;
        }
      }
      v4 = HIDWORD(BugCheckParameter4);
      SubKeyInLeafWithStatus = 0;
      v16 = *(_DWORD *)&v10[4 * i + 2];
      LODWORD(BugCheckParameter4) = v16;
    }
    else
    {
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v6, (__int64)&BugCheckParameter4, (__int64)&v34);
      if ( ((SubKeyInLeafWithStatus + 0x80000000) & 0x80000000) == 0 && SubKeyInLeafWithStatus != -1073741772 )
        goto LABEL_64;
      v16 = BugCheckParameter4;
    }
    if ( v16 != -1 )
    {
      SubKeyInLeafWithStatus = 0;
      *a4 = v16;
      goto LABEL_64;
    }
LABEL_24:
    if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v6, v35);
    else
      HvpReleaseCellPaged(v6, v35);
LABEL_26:
    a2 = v40;
    goto LABEL_27;
  }
  return 3221225626LL;
}
