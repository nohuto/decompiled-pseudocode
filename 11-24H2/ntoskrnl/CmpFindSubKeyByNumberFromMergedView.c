/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x14087F9B0
 * Callers:
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpFindSubKeyByNumberEx @ 0x140881510 (CmpFindSubKeyByNumberEx.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCompareKeysByName @ 0x140A44274 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        ULONG_PTR *a8,
        _DWORD *a9)
{
  unsigned int v9; // r9d
  unsigned int v10; // edi
  char v11; // r14
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  ULONG_PTR v14; // rsi
  ULONG_PTR v15; // r15
  __int64 v16; // r13
  int SubKeyByNumber; // eax
  char v18; // al
  __int64 v19; // r12
  int v20; // eax
  int v21; // r14d
  ULONG_PTR v22; // rcx
  __int64 CellFlat; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  char v26; // r12
  int v27; // r14d
  unsigned int v28; // eax
  bool v29; // zf
  int v30; // eax
  bool v31; // sf
  bool v32; // cc
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  char v37; // [rsp+58h] [rbp-61h]
  bool v38; // [rsp+60h] [rbp-59h]
  unsigned int v39[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v40[3]; // [rsp+70h] [rbp-49h] BYREF
  BOOL v41; // [rsp+7Ch] [rbp-3Dh]
  int BugCheckParameter4; // [rsp+80h] [rbp-39h]
  int BugCheckParameter4_4; // [rsp+84h] [rbp-35h]
  int v44; // [rsp+88h] [rbp-31h]
  __int64 v45; // [rsp+90h] [rbp-29h]
  __int64 v46; // [rsp+98h] [rbp-21h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-19h] BYREF
  ULONG_PTR v48; // [rsp+A8h] [rbp-11h] BYREF

  v9 = a3;
  BugCheckParameter4_4 = 0;
  v44 = 0;
  v37 = 0;
  *a6 = 0LL;
  v10 = -1073741670;
  v11 = 0;
  v45 = 0LL;
  v12 = 0;
  v40[0] = -1;
  v40[1] = 0;
  v13 = -1;
  *a7 = -1;
  v14 = 0LL;
  v39[0] = -1;
  v41 = a2 == 0;
  v15 = 0LL;
  v39[1] = 0;
  BugCheckParameter4 = -1;
  v38 = 0;
  BugCheckParameter2 = 0LL;
  v48 = 0LL;
LABEL_2:
  v46 = 0LL;
  while ( 1 )
  {
    if ( v11 && v12 >= v9 )
    {
LABEL_74:
      v10 = -2147483622;
      goto LABEL_26;
    }
    if ( v14 )
    {
      CmpDelayDerefKeyControlBlock(v14);
      v14 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    if ( v15 )
    {
      CmpDelayDerefKeyControlBlock(v15);
      v15 = 0LL;
      v48 = 0LL;
    }
    if ( !v38 && v13 == -1 )
    {
      v16 = a1;
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         *(_QWORD *)(a1 + 32),
                         a1 & -(__int64)(a4 != 0),
                         a2 & -(__int64)(a4 != 0),
                         a4,
                         a5,
                         (unsigned __int64)&BugCheckParameter2 & -(__int64)(a4 != 0));
      v14 = BugCheckParameter2;
      v10 = SubKeyByNumber;
      if ( SubKeyByNumber < 0 )
        goto LABEL_27;
      v13 = BugCheckParameter4;
      v38 = BugCheckParameter4 == -1;
    }
    v18 = v41;
    if ( !v41 )
    {
      v19 = a2;
      v20 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(a2 + 32),
              a2 & -(__int64)(a4 != 0),
              a1 & -(__int64)(a4 != 0),
              a4,
              a5,
              (unsigned __int64)&v48 & -(__int64)(a4 != 0));
      v15 = v48;
      v10 = v20;
      if ( v20 < 0 )
        goto LABEL_46;
      v18 = 1;
      v41 = 1;
    }
    if ( v38 )
    {
      if ( v18 )
        goto LABEL_74;
      v21 = 2;
    }
    else
    {
      v21 = v18 != 0;
    }
    if ( v13 == -1 )
    {
      v24 = v45;
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v22, v13, v40);
      else
        CellFlat = HvpGetCellPaged(v22, v13, v40);
      v45 = CellFlat;
      v24 = CellFlat;
      if ( !CellFlat )
      {
        v11 = v37;
LABEL_26:
        v16 = a1;
LABEL_27:
        v19 = a2;
        goto LABEL_28;
      }
    }
    v26 = 0;
    if ( v21 )
      break;
    v30 = CmpCompareKeysByName(v24, v46);
    v31 = v30 < 0;
    v32 = v30 <= 0;
    v28 = v12 + 1;
    v11 = 1;
    if ( v31 )
      goto LABEL_48;
    if ( !v32 )
      goto LABEL_40;
    if ( !v37 )
      v28 = v12;
    v12 = v28;
    if ( v28 == a3 )
    {
LABEL_51:
      *a6 = *(_QWORD *)(a1 + 32);
      *a7 = v13;
      if ( a8 )
      {
        *a8 = v14;
        v14 = 0LL;
      }
      v10 = 0;
      goto LABEL_26;
    }
    v26 = 1;
LABEL_60:
    ++BugCheckParameter4_4;
    v13 = -1;
    v37 = 1;
    BugCheckParameter4 = -1;
    if ( v26 )
      goto LABEL_61;
LABEL_63:
    v24 = v45;
LABEL_64:
    if ( v24 )
    {
      v33 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v33, v40);
      else
        HvpReleaseCellPaged(v33, v40);
      v45 = 0LL;
    }
    v11 = v37;
    v9 = a3;
    if ( v46 )
    {
      v34 = *(_QWORD *)(a2 + 32);
      if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v34, v39);
      else
        HvpReleaseCellPaged(v34, v39);
      v9 = a3;
      goto LABEL_2;
    }
  }
  v27 = v21 - 1;
  if ( !v27 )
  {
    v28 = v12 + 1;
    v11 = 1;
LABEL_48:
    if ( !v37 )
      v28 = v12;
    v12 = v28;
    if ( v28 == a3 )
      goto LABEL_51;
    goto LABEL_60;
  }
  if ( v27 != 1 )
    goto LABEL_64;
  v28 = v12 + 1;
  v11 = 1;
LABEL_40:
  v29 = v37 == 0;
  v37 = 1;
  if ( v29 )
    v28 = v12;
  v12 = v28;
  if ( v28 != a3 )
  {
LABEL_61:
    ++v44;
    goto LABEL_63;
  }
  v19 = a2;
  *a6 = *(_QWORD *)(a2 + 32);
  *a7 = -1;
  if ( a8 )
  {
    *a8 = v15;
    v15 = 0LL;
  }
  v10 = 0;
LABEL_46:
  v16 = a1;
LABEL_28:
  if ( v14 )
    CmpDelayDerefKeyControlBlock(v14);
  if ( v15 )
    CmpDelayDerefKeyControlBlock(v15);
  if ( v46 )
  {
    v25 = *(_QWORD *)(v19 + 32);
    if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v25, v39);
    else
      HvpReleaseCellPaged(v25, v39);
  }
  if ( v45 )
  {
    v35 = *(_QWORD *)(v16 + 32);
    if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v35, v40);
    else
      HvpReleaseCellPaged(v35, v40);
  }
  *a9 = v11 != 0 ? v12 + 1 : 0;
  return v10;
}
