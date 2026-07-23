/*
 * XREFs of CmpCheckRegistry2 @ 0x140888A80
 * Callers:
 *     CmCheckRegistry @ 0x140AE4CC0 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407E3464 (CmpRemoveSubKeyCellNoCellRef.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCheckKey @ 0x140888F1C (CmpCheckKey.c)
 *     CmpCheckLexicographicalOrder @ 0x14088AC50 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A6D3DC (CmpCheckAndFixSecurityCellsRefcount.c)
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
  __int64 v11; // rax
  __int64 v12; // rdx
  int *v13; // rcx
  unsigned int *v14; // r13
  int v15; // r14d
  __int64 v16; // r12
  unsigned int *v17; // rbx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  ULONG_PTR v21; // rdx
  int v22; // eax
  ULONG_PTR v23; // rdx
  __int64 CellFlat; // rax
  unsigned int v25; // r15d
  ULONG_PTR v26; // rdx
  unsigned int v27; // r14d
  bool v28; // zf
  _WORD *CellPaged; // rax
  _WORD *v30; // rdi
  int v31; // edi
  ULONG_PTR v32; // rdx
  _WORD *v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // r14
  int v37; // r9d
  int v38; // eax
  int v39; // r12d
  BOOL v40; // r15d
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  int v44; // [rsp+20h] [rbp-50h]
  unsigned int v45[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v46; // [rsp+48h] [rbp-28h]
  __int64 v47; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v48[2]; // [rsp+58h] [rbp-18h] BYREF
  int v49; // [rsp+A0h] [rbp+30h]
  char v51; // [rsp+B8h] [rbp+48h]

  v47 = 0LL;
  v51 = 0;
  v10 = a2;
  HvpGetCellContextInitialize(&v47);
  v11 = guard_dispatch_icall_no_overrides(10240LL, 0LL);
  v46 = v11;
  if ( v11 )
  {
    v12 = a7;
    if ( a7 )
      *(_QWORD *)(a7 + 232) = v11;
    v13 = a8;
    v14 = (unsigned int *)(v11 - 20);
    *(_DWORD *)v11 = a3;
    v15 = 0;
    *(_QWORD *)(v11 + 4) = -1LL;
    v16 = 0LL;
    *(_DWORD *)(v11 + 12) = 0;
    v17 = (unsigned int *)v11;
    *a8 = 0;
    *(_BYTE *)(v11 + 16) = 0;
    v49 = 0;
    while ( v16 >= 0 )
    {
      if ( !*((_BYTE *)v17 + 16) )
      {
        v18 = *v13;
        *((_BYTE *)v17 + 16) = 1;
        if ( v18 != -1 )
          *v13 = v18 + 1;
        v19 = CmpCheckKey(BugCheckParameter3, a5, a6, v12);
        v20 = v19;
        if ( v19 == -2147483606 )
        {
          v51 = 1;
        }
        else if ( v19 < 0 )
        {
          if ( v19 != -1073741492 )
            goto LABEL_67;
          v39 = a2 & 0x20000;
          if ( (a2 & 0x20000) != 0 )
          {
            v40 = 0;
          }
          else if ( BYTE2(NlsMbOemCodePageTag) )
          {
            v40 = 1;
          }
          else
          {
            v40 = (CmpBootType & 6) != 0;
          }
          v38 = 16;
LABEL_84:
          SetFailureLocation(a7, v40, 13, v20, v38);
          if ( v39 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 || !v15 )
          {
            v20 = -1073741492;
            SetFailureLocation(a7, 0, 13, -1073741492, 24);
            goto LABEL_67;
          }
          v42 = v15;
          v35 = v46;
          v43 = CmpRemoveSubKeyCellNoCellRef(
                  BugCheckParameter3,
                  *(unsigned int *)(v46 + 20 * v42 + 4),
                  *(_DWORD *)(v46 + 20 * v42));
          v20 = v43;
          if ( v43 >= 0 )
          {
            v20 = -1073741267;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
          }
          else
          {
            SetFailureLocation(a7, 0, 13, v43, 32);
          }
          goto LABEL_61;
        }
        if ( (a2 & 0x100000) != 0 && v16 > 0 )
        {
          v21 = v14[2];
          if ( (_DWORD)v21 != -1 )
          {
            v22 = CmpCheckLexicographicalOrder(BugCheckParameter3, v21, *v17);
            v20 = v22;
            if ( v22 < 0 )
            {
              if ( v22 != -1073741492 )
              {
                v44 = 37;
LABEL_65:
                v37 = v22;
                goto LABEL_66;
              }
              v38 = 48;
              v39 = a2 & 0x20000;
              v40 = 0;
              goto LABEL_84;
            }
          }
          v14[2] = *v17;
        }
      }
      v23 = *v17;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v23, &v47);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v23, &v47);
      if ( !CellFlat )
      {
        v20 = -1073741492;
        v44 = 64;
        v37 = -1073741492;
LABEL_66:
        SetFailureLocation(a7, 0, 13, v37, v44);
LABEL_67:
        v35 = v46;
        goto LABEL_61;
      }
      v25 = v17[3];
      if ( v25 >= *(_DWORD *)(CellFlat + 20) )
      {
        --v15;
        --v16;
        v14 -= 5;
        v49 = v15;
        v17 -= 5;
      }
      else
      {
        v26 = *(unsigned int *)(CellFlat + 28);
        v27 = 0;
        v48[0] = -1;
        v28 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
        v48[1] = 0;
        if ( v28 )
          CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v26, v48);
        else
          CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v26, v48);
        v30 = CellPaged;
        if ( !CellPaged )
        {
          v41 = 80;
LABEL_92:
          v20 = -1073741670;
LABEL_93:
          SetFailureLocation(a7, 0, 13, v20, v41);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v47);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v47);
          goto LABEL_67;
        }
        v45[0] = -1;
        v45[1] = 0;
        if ( *CellPaged == 26994 )
        {
          while ( v27 < (unsigned __int16)v30[1] )
          {
            v32 = *(unsigned int *)&v30[2 * v27 + 2];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v33 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v32, v45);
            else
              v33 = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v32, v45);
            if ( !v33 )
            {
              v31 = -1;
              goto LABEL_26;
            }
            v34 = (unsigned __int16)v33[1];
            if ( v25 < v34 )
            {
              if ( ((*v33 - 26220) & 0xFDFF) != 0 )
                v31 = *(_DWORD *)&v33[2 * v25 + 2];
              else
                v31 = *(_DWORD *)&v33[4 * v25 + 2];
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v45);
              else
                HvpReleaseCellPaged(BugCheckParameter3, v45);
              goto LABEL_26;
            }
            v25 -= v34;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)v45);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v45);
            ++v27;
          }
        }
        if ( ((*v30 - 26220) & 0xFDFF) != 0 )
          v31 = *(_DWORD *)&v30[2 * v25 + 2];
        else
          v31 = *(_DWORD *)&v30[4 * v25 + 2];
LABEL_26:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v48);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v48);
        if ( v31 == -1 )
        {
          v41 = 88;
          goto LABEL_92;
        }
        ++v16;
        ++v17[3];
        v15 = v49 + 1;
        v14 += 5;
        ++v49;
        v17 += 5;
        if ( v16 == 512 )
        {
          v20 = -1073741492;
          v41 = 96;
          goto LABEL_93;
        }
        v17[1] = *v14;
        *v17 = v31;
        v17[2] = -1;
        v17[3] = 0;
        *((_BYTE *)v17 + 16) = 0;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v47);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v47);
      v13 = a8;
      v12 = a7;
      v10 = a2;
    }
    if ( (v10 & 0x20000) == 0 )
    {
      v22 = CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter3);
      v20 = v22;
      if ( v22 < 0 )
      {
        v44 = 112;
        goto LABEL_65;
      }
    }
    v35 = v46;
    if ( v51 )
      v20 = -2147483606;
    else
      v20 = 0;
LABEL_61:
    guard_dispatch_icall_no_overrides(v35, 10240LL);
  }
  else
  {
    v20 = -1073741670;
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
  }
  return v20;
}
