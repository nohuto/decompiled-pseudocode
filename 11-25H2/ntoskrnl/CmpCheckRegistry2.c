/*
 * XREFs of CmpCheckRegistry2 @ 0x14088B690
 * Callers:
 *     CmCheckRegistry @ 0x140995590 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407D3634 (CmpRemoveSubKeyCellNoCellRef.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCheckKey @ 0x14088BB2C (CmpCheckKey.c)
 *     CmpCheckLexicographicalOrder @ 0x14088D830 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A7FC90 (CmpCheckAndFixSecurityCellsRefcount.c)
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
  _WORD *CellPaged; // rax
  _WORD *v29; // rdi
  int v30; // edi
  ULONG_PTR v31; // rdx
  _WORD *v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // r14
  int v36; // r9d
  int v37; // eax
  int v38; // r12d
  BOOL v39; // r15d
  int v40; // eax
  __int64 v41; // rax
  int v42; // eax
  int v43; // [rsp+20h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-30h] BYREF
  __int64 v45; // [rsp+48h] [rbp-28h]
  __int64 v46; // [rsp+50h] [rbp-20h] BYREF
  __int64 v47; // [rsp+58h] [rbp-18h] BYREF
  int v48; // [rsp+A0h] [rbp+30h]
  char v50; // [rsp+B8h] [rbp+48h]

  v46 = 0LL;
  v50 = 0;
  v10 = a2;
  HvpGetCellContextInitialize(&v46);
  v11 = guard_dispatch_icall_no_overrides(10240LL);
  v45 = v11;
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
    v48 = 0;
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
          v50 = 1;
        }
        else if ( v19 < 0 )
        {
          if ( v19 != -1073741492 )
            goto LABEL_67;
          v38 = a2 & 0x20000;
          if ( (a2 & 0x20000) != 0 )
          {
            v39 = 0;
          }
          else if ( BYTE2(NlsMbOemCodePageTag) )
          {
            v39 = 1;
          }
          else
          {
            v39 = (CmpBootType & 6) != 0;
          }
          v37 = 16;
LABEL_84:
          SetFailureLocation(a7, v39, 13, v20, v37);
          if ( v38 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 || !v15 )
          {
            v20 = -1073741492;
            SetFailureLocation(a7, 0, 13, -1073741492, 24);
            goto LABEL_67;
          }
          v41 = v15;
          v34 = v45;
          v42 = CmpRemoveSubKeyCellNoCellRef(
                  BugCheckParameter3,
                  *(unsigned int *)(v45 + 20 * v41 + 4),
                  *(_DWORD *)(v45 + 20 * v41));
          v20 = v42;
          if ( v42 >= 0 )
          {
            v20 = -1073741267;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
          }
          else
          {
            SetFailureLocation(a7, 0, 13, v42, 32);
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
                v43 = 37;
LABEL_65:
                v36 = v22;
                goto LABEL_66;
              }
              v37 = 48;
              v38 = a2 & 0x20000;
              v39 = 0;
              goto LABEL_84;
            }
          }
          v14[2] = *v17;
        }
      }
      v23 = *v17;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v23, &v46);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v23, &v46);
      if ( !CellFlat )
      {
        v20 = -1073741492;
        v43 = 64;
        v36 = -1073741492;
LABEL_66:
        SetFailureLocation(a7, 0, 13, v36, v43);
LABEL_67:
        v34 = v45;
        goto LABEL_61;
      }
      v25 = v17[3];
      if ( v25 >= *(_DWORD *)(CellFlat + 20) )
      {
        --v15;
        --v16;
        v14 -= 5;
        v48 = v15;
        v17 -= 5;
      }
      else
      {
        v26 = *(unsigned int *)(CellFlat + 28);
        v27 = 0;
        v47 = 0xFFFFFFFFLL;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v26, &v47);
        else
          CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v26, &v47);
        v29 = CellPaged;
        if ( !CellPaged )
        {
          v40 = 80;
LABEL_92:
          v20 = -1073741670;
LABEL_93:
          SetFailureLocation(a7, 0, 13, v20, v40);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v46);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v46);
          goto LABEL_67;
        }
        v44 = 0xFFFFFFFFLL;
        if ( *CellPaged == 26994 )
        {
          while ( v27 < (unsigned __int16)v29[1] )
          {
            v31 = *(unsigned int *)&v29[2 * v27 + 2];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v32 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v31, &v44);
            else
              v32 = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v31, &v44);
            if ( !v32 )
            {
              v30 = -1;
              goto LABEL_26;
            }
            v33 = (unsigned __int16)v32[1];
            if ( v25 < v33 )
            {
              if ( ((*v32 - 26220) & 0xFDFF) != 0 )
                v30 = *(_DWORD *)&v32[2 * v25 + 2];
              else
                v30 = *(_DWORD *)&v32[4 * v25 + 2];
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v44);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v44);
              goto LABEL_26;
            }
            v25 -= v33;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v44);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v44);
            ++v27;
          }
        }
        if ( ((*v29 - 26220) & 0xFDFF) != 0 )
          v30 = *(_DWORD *)&v29[2 * v25 + 2];
        else
          v30 = *(_DWORD *)&v29[4 * v25 + 2];
LABEL_26:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v47);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v47);
        if ( v30 == -1 )
        {
          v40 = 88;
          goto LABEL_92;
        }
        ++v16;
        ++v17[3];
        v15 = v48 + 1;
        v14 += 5;
        ++v48;
        v17 += 5;
        if ( v16 == 512 )
        {
          v20 = -1073741492;
          v40 = 96;
          goto LABEL_93;
        }
        v17[1] = *v14;
        *v17 = v30;
        v17[2] = -1;
        v17[3] = 0;
        *((_BYTE *)v17 + 16) = 0;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v46);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v46);
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
        v43 = 112;
        goto LABEL_65;
      }
    }
    v34 = v45;
    if ( v50 )
      v20 = -2147483606;
    else
      v20 = 0;
LABEL_61:
    guard_dispatch_icall_no_overrides(v34);
  }
  else
  {
    v20 = -1073741670;
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
  }
  return v20;
}
