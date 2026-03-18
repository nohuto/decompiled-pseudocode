/*
 * XREFs of CmpCheckRegistry2 @ 0x140884BD0
 * Callers:
 *     CmCheckRegistry @ 0x140AE33E0 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407E2F14 (CmpRemoveSubKeyCellNoCellRef.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpCheckKey @ 0x14088506C (CmpCheckKey.c)
 *     CmpCheckLexicographicalOrder @ 0x140886DA0 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A73A84 (CmpCheckAndFixSecurityCellsRefcount.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter3,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int *a8)
{
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  int *v16; // rcx
  unsigned int *v17; // r13
  int v18; // r14d
  __int64 v19; // r12
  unsigned int *v20; // rbx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edi
  ULONG_PTR v24; // rdx
  int v25; // eax
  ULONG_PTR v26; // rdx
  __int64 CellFlat; // rax
  unsigned int v28; // r15d
  ULONG_PTR v29; // rdx
  unsigned int v30; // r14d
  bool v31; // zf
  _WORD *CellPaged; // rax
  _WORD *v33; // rdi
  int v34; // edi
  ULONG_PTR v35; // rdx
  _WORD *v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // r14
  int v40; // r9d
  int v41; // eax
  int v42; // r12d
  BOOL v43; // r15d
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  int v47; // [rsp+20h] [rbp-50h]
  unsigned int v48[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v49; // [rsp+48h] [rbp-28h]
  __int64 v50; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v51[2]; // [rsp+58h] [rbp-18h] BYREF
  int v52; // [rsp+A0h] [rbp+30h]
  char v54; // [rsp+B8h] [rbp+48h]

  v50 = 0LL;
  v54 = 0;
  v10 = a2;
  HvpGetCellContextInitialize(&v50);
  v12 = guard_dispatch_icall_no_overrides(10240LL, 0LL, 1935887683LL, v11);
  v49 = v12;
  if ( v12 )
  {
    v15 = a7;
    if ( a7 )
      *(_QWORD *)(a7 + 232) = v12;
    v16 = a8;
    v17 = (unsigned int *)(v12 - 20);
    *(_DWORD *)v12 = a3;
    v18 = 0;
    *(_QWORD *)(v12 + 4) = -1LL;
    v19 = 0LL;
    *(_DWORD *)(v12 + 12) = 0;
    v20 = (unsigned int *)v12;
    *a8 = 0;
    *(_BYTE *)(v12 + 16) = 0;
    v52 = 0;
    while ( v19 >= 0 )
    {
      if ( !*((_BYTE *)v20 + 16) )
      {
        v21 = *v16;
        *((_BYTE *)v20 + 16) = 1;
        if ( v21 != -1 )
          *v16 = v21 + 1;
        v22 = CmpCheckKey(BugCheckParameter3, a5, a6, v15);
        v23 = v22;
        if ( v22 == -2147483606 )
        {
          v54 = 1;
        }
        else if ( v22 < 0 )
        {
          if ( v22 != -1073741492 )
            goto LABEL_67;
          v42 = a2 & 0x20000;
          if ( (a2 & 0x20000) != 0 )
          {
            v43 = 0;
          }
          else if ( BYTE2(NlsMbOemCodePageTag) )
          {
            v43 = 1;
          }
          else
          {
            v43 = (CmpBootType & 6) != 0;
          }
          v41 = 16;
LABEL_84:
          SetFailureLocation(a7, v43, 13, v23, v41);
          if ( v42 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 || !v18 )
          {
            v23 = -1073741492;
            SetFailureLocation(a7, 0, 13, -1073741492, 24);
            goto LABEL_67;
          }
          v45 = v18;
          v38 = v49;
          v46 = CmpRemoveSubKeyCellNoCellRef(
                  BugCheckParameter3,
                  *(unsigned int *)(v49 + 20 * v45 + 4),
                  *(_DWORD *)(v49 + 20 * v45));
          v23 = v46;
          if ( v46 >= 0 )
          {
            v23 = -1073741267;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
          }
          else
          {
            SetFailureLocation(a7, 0, 13, v46, 32);
          }
          goto LABEL_61;
        }
        if ( (a2 & 0x100000) != 0 && v19 > 0 )
        {
          v24 = v17[2];
          if ( (_DWORD)v24 != -1 )
          {
            v25 = CmpCheckLexicographicalOrder(BugCheckParameter3, v24, *v20);
            v23 = v25;
            if ( v25 < 0 )
            {
              if ( v25 != -1073741492 )
              {
                v47 = 37;
LABEL_65:
                v40 = v25;
                goto LABEL_66;
              }
              v41 = 48;
              v42 = a2 & 0x20000;
              v43 = 0;
              goto LABEL_84;
            }
          }
          v17[2] = *v20;
        }
      }
      v26 = *v20;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v26, &v50);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v26, &v50);
      if ( !CellFlat )
      {
        v23 = -1073741492;
        v47 = 64;
        v40 = -1073741492;
LABEL_66:
        SetFailureLocation(a7, 0, 13, v40, v47);
LABEL_67:
        v38 = v49;
        goto LABEL_61;
      }
      v28 = v20[3];
      if ( v28 >= *(_DWORD *)(CellFlat + 20) )
      {
        --v18;
        --v19;
        v17 -= 5;
        v52 = v18;
        v20 -= 5;
      }
      else
      {
        v29 = *(unsigned int *)(CellFlat + 28);
        v30 = 0;
        v51[0] = -1;
        v31 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
        v51[1] = 0;
        if ( v31 )
          CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v29, v51);
        else
          CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v29, v51);
        v33 = CellPaged;
        if ( !CellPaged )
        {
          v44 = 80;
LABEL_92:
          v23 = -1073741670;
LABEL_93:
          SetFailureLocation(a7, 0, 13, v23, v44);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v50);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v50);
          goto LABEL_67;
        }
        v48[0] = -1;
        v48[1] = 0;
        if ( *CellPaged == 26994 )
        {
          while ( v30 < (unsigned __int16)v33[1] )
          {
            v35 = *(unsigned int *)&v33[2 * v30 + 2];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v36 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v35, v48);
            else
              v36 = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v35, v48);
            if ( !v36 )
            {
              v34 = -1;
              goto LABEL_26;
            }
            v37 = (unsigned __int16)v36[1];
            if ( v28 < v37 )
            {
              if ( ((*v36 - 26220) & 0xFDFF) != 0 )
                v34 = *(_DWORD *)&v36[2 * v28 + 2];
              else
                v34 = *(_DWORD *)&v36[4 * v28 + 2];
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v48);
              else
                HvpReleaseCellPaged(BugCheckParameter3, v48);
              goto LABEL_26;
            }
            v28 -= v37;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)v48);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v48);
            ++v30;
          }
        }
        if ( ((*v33 - 26220) & 0xFDFF) != 0 )
          v34 = *(_DWORD *)&v33[2 * v28 + 2];
        else
          v34 = *(_DWORD *)&v33[4 * v28 + 2];
LABEL_26:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v51);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v51);
        if ( v34 == -1 )
        {
          v44 = 88;
          goto LABEL_92;
        }
        ++v19;
        ++v20[3];
        v18 = v52 + 1;
        v17 += 5;
        ++v52;
        v20 += 5;
        if ( v19 == 512 )
        {
          v23 = -1073741492;
          v44 = 96;
          goto LABEL_93;
        }
        v20[1] = *v17;
        *v20 = v34;
        v20[2] = -1;
        v20[3] = 0;
        *((_BYTE *)v20 + 16) = 0;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v50);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v50);
      v16 = a8;
      v15 = a7;
      v10 = a2;
    }
    if ( (v10 & 0x20000) == 0 )
    {
      v25 = CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter3);
      v23 = v25;
      if ( v25 < 0 )
      {
        v47 = 112;
        goto LABEL_65;
      }
    }
    v38 = v49;
    if ( v54 )
      v23 = -2147483606;
    else
      v23 = 0;
LABEL_61:
    guard_dispatch_icall_no_overrides(v38, 10240LL, v13, v14);
  }
  else
  {
    v23 = -1073741670;
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
  }
  return v23;
}
