/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x140880E50
 * Callers:
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmpQueryKeyData @ 0x14087C7F0 (CmpQueryKeyData.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpIsKeyDeleted @ 0x140872540 (CmpIsKeyDeleted.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmGetVisibleValueCount @ 0x14087F828 (CmGetVisibleValueCount.c)
 *     CmGetVisibleSubkeyCount @ 0x14087F870 (CmGetVisibleSubkeyCount.c)
 *     CmpPopulateKeyFullInformation @ 0x14087F904 (CmpPopulateKeyFullInformation.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1408800F0 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetKeyLastWriteTime @ 0x140882590 (CmGetKeyLastWriteTime.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpQueryKeyDataFromNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8)
{
  int VisibleMaxValueNameLenAndDataLen; // r14d
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int16 v16; // cx
  unsigned int v17; // edx
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int i; // eax
  const void *CellPaged; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r12
  unsigned int v28; // ebx
  __int64 v29; // rbx
  ULONG_PTR v30; // rdx
  __int64 v31; // rax
  int v32; // r8d
  unsigned __int16 v33; // cx
  unsigned int v34; // r9d
  int v35; // ecx
  unsigned int v36; // r12d
  int v37; // eax
  __int64 v38; // rdx
  void *v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 NextElement; // rax
  char v43; // al
  char IsKeyDeleted; // al
  ULONG_PTR v45; // rdx
  ULONG_PTR v46; // rcx
  __int64 CellFlat; // rax
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  bool v52; // zf
  __int64 v53; // rax
  __int64 v54; // rax
  ULONG_PTR v55; // rdx
  void *Src; // [rsp+30h] [rbp-98h]
  __int64 v57; // [rsp+38h] [rbp-90h] BYREF
  int v58; // [rsp+40h] [rbp-88h]
  __int64 v59; // [rsp+48h] [rbp-80h]
  __int64 v60; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-70h]
  __int128 v62; // [rsp+60h] [rbp-68h] BYREF
  __int128 v63; // [rsp+70h] [rbp-58h]
  __int128 v64; // [rsp+80h] [rbp-48h] BYREF
  __int64 v65; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v66; // [rsp+E0h] [rbp+18h]

  VisibleMaxValueNameLenAndDataLen = 0;
  v60 = 0LL;
  Src = 0LL;
  HvpGetCellContextInitialize(&v60);
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  if ( v13 == 2 )
  {
    v25 = 0LL;
    if ( a2 )
    {
      v26 = *(_QWORD *)(v12 + 4);
      if ( !a7 )
      {
        v27 = a8;
        goto LABEL_29;
      }
    }
    else
    {
      v26 = *(_QWORD *)(a7 + 168);
    }
    v27 = a8;
    if ( a8 )
    {
      v51 = a7 + 208;
      while ( 1 )
      {
        if ( !v25 )
          v25 = *(_QWORD *)(v51 + 8);
        if ( v51 == v25 )
          break;
        v59 = v25 - 32;
        v57 = *(_QWORD *)(v25 + 8);
        if ( v25 == 32 )
          break;
        v52 = CmEqualTrans(*(_QWORD *)(v25 - 32 + 56), a8) == 0;
        v25 = v57;
        v51 = a7 + 208;
        if ( !v52 )
        {
          v51 = a7 + 208;
          if ( *(_DWORD *)(v59 + 68) == 8 )
          {
            v26 = *(_QWORD *)(v59 + 88);
            break;
          }
        }
      }
    }
LABEL_29:
    *(_QWORD *)&v62 = v26;
    DWORD2(v62) = 0;
    v65 = 0LL;
    v57 = 0xFFFFFFFFLL;
    *((_QWORD *)&v63 + 1) = 0LL;
    if ( !a2
      || (DWORD2(v63) = (unsigned __int16)*(_DWORD *)(a2 + 52),
          VisibleMaxValueNameLenAndDataLen = *(_DWORD *)(a2 + 56),
          HIDWORD(v63) = VisibleMaxValueNameLenAndDataLen,
          a7) )
    {
      if ( a7 )
      {
        v28 = *(unsigned __int16 *)(a7 + 176);
        DWORD2(v63) = v28;
        if ( v27 )
        {
LABEL_69:
          v41 = a7 + 208;
          while ( 1 )
          {
            NextElement = CmListGetNextElement(v41, &v65, 32LL);
            v59 = NextElement;
            if ( !NextElement )
              break;
            v43 = CmEqualTrans(*(_QWORD *)(NextElement + 56), v27);
            v41 = a7 + 208;
            if ( v43 )
            {
              v41 = a7 + 208;
              if ( *(_DWORD *)(v59 + 68) == 1 )
              {
                v59 = *(_QWORD *)(v59 + 88);
                IsKeyDeleted = CmpIsKeyDeleted(v59, 0LL);
                v41 = a7 + 208;
                if ( !IsKeyDeleted )
                {
                  v45 = *(unsigned int *)(v59 + 40);
                  v46 = *(_QWORD *)(v59 + 32);
                  if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(v46, v45, &v57);
                  else
                    CellFlat = HvpGetCellPaged(v46, v45, &v57);
                  v48 = CellFlat;
                  if ( !CellFlat )
                  {
                    VisibleMaxValueNameLenAndDataLen = -1073741670;
                    CellPaged = 0LL;
                    goto LABEL_22;
                  }
                  v49 = (unsigned __int16)*(_DWORD *)(CellFlat + 52);
                  if ( v28 < v49 )
                    v28 = v49;
                  DWORD2(v63) = v28;
                  if ( (unsigned int)VisibleMaxValueNameLenAndDataLen < *(_DWORD *)(v48 + 56) )
                  {
                    VisibleMaxValueNameLenAndDataLen = *(_DWORD *)(v48 + 56);
                    HIDWORD(v63) = VisibleMaxValueNameLenAndDataLen;
                  }
                  v50 = *(_QWORD *)(v59 + 32);
                  if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v50, &v57);
                  else
                    HvpReleaseCellPaged(v50, (unsigned int *)&v57);
                  goto LABEL_69;
                }
              }
            }
          }
        }
      }
    }
    VisibleMaxValueNameLenAndDataLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                         a7,
                                         a2,
                                         v27,
                                         (_DWORD *)&v64 + 1,
                                         (unsigned int *)&v64 + 2);
    if ( VisibleMaxValueNameLenAndDataLen >= 0 )
    {
      DWORD1(v63) = CmGetVisibleSubkeyCount(a7, a2, v27);
      LODWORD(v64) = CmGetVisibleValueCount(a7, a2, v27);
      if ( *(_WORD *)(a2 + 74) )
      {
        v55 = *(unsigned int *)(a2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = (const void *)HvpGetCellFlat(BugCheckParameter3, v55, &v60);
        else
          CellPaged = (const void *)HvpGetCellPaged(BugCheckParameter3, v55, &v60);
      }
      else
      {
        CellPaged = 0LL;
      }
      VisibleMaxValueNameLenAndDataLen = CmpPopulateKeyFullInformation(
                                           (__int64)&v62,
                                           CellPaged,
                                           *(unsigned __int16 *)(a2 + 74),
                                           a4,
                                           a5,
                                           a6);
      v58 = VisibleMaxValueNameLenAndDataLen;
      goto LABEL_22;
    }
    goto LABEL_102;
  }
  if ( !v13 )
  {
    v14 = 0LL;
    if ( v12 )
    {
      v15 = *(_QWORD *)(v12 + 4);
      if ( !a7 )
      {
LABEL_6:
        v16 = 2 * *(_WORD *)(a2 + 72);
        if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
          v16 = *(_WORD *)(a2 + 72);
        v17 = v16;
        v18 = v16 + 16;
        *a6 = v18;
        if ( a5 < 0x10 )
        {
          VisibleMaxValueNameLenAndDataLen = -1073741789;
        }
        else
        {
          *(_QWORD *)a4 = v15;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = v16;
          v19 = a5 - 16;
          if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          {
            v20 = *(unsigned __int16 *)(a2 + 72);
            v61 = 0;
            v21 = v19 >> 1;
            if ( v21 >= v20 )
              v21 = v20;
            for ( i = 0; ; ++i )
            {
              v61 = i;
              if ( i >= v21 )
                break;
              *(_WORD *)(a4 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
            }
          }
          else
          {
            if ( v19 <= v16 )
              v17 = a5 - 16;
            memmove((void *)(a4 + 16), (const void *)(a2 + 76), v17);
          }
          if ( a5 < v18 )
            VisibleMaxValueNameLenAndDataLen = -2147483643;
        }
        v58 = VisibleMaxValueNameLenAndDataLen;
        CellPaged = 0LL;
        goto LABEL_22;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a7 + 168);
    }
    if ( a8 )
    {
      v53 = a7 + 208;
      v57 = a7 + 208;
      while ( 1 )
      {
        if ( !v14 )
          v14 = *(_QWORD *)(v53 + 8);
        if ( v53 == v14 )
          break;
        v54 = v14 - 32;
        v59 = v54;
        v14 = *(_QWORD *)(v14 + 8);
        if ( !v54 )
          break;
        v52 = CmEqualTrans(*(_QWORD *)(v54 + 56), a8) == 0;
        v53 = v57;
        if ( !v52 && *(_DWORD *)(v59 + 68) == 8 )
        {
          v15 = *(_QWORD *)(v59 + 88);
          goto LABEL_6;
        }
      }
    }
    goto LABEL_6;
  }
  if ( v13 != 1 )
  {
    VisibleMaxValueNameLenAndDataLen = -1073741811;
LABEL_102:
    CellPaged = 0LL;
    goto LABEL_22;
  }
  v29 = CmGetKeyLastWriteTime(a7, v12, a8);
  if ( *(_WORD *)(a2 + 74) )
  {
    v30 = *(unsigned int *)(a2 + 48);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v31 = HvpGetCellFlat(BugCheckParameter3, v30, &v60);
    else
      v31 = HvpGetCellPaged(BugCheckParameter3, v30, &v60);
    Src = (void *)v31;
  }
  v32 = *(unsigned __int16 *)(a2 + 74);
  LODWORD(v57) = v32;
  v33 = 2 * *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
    v33 = *(_WORD *)(a2 + 72);
  v34 = v33;
  v35 = v33 + 24;
  v66 = v35;
  if ( (_WORD)v32 )
  {
    v36 = (v35 + 3) & 0xFFFFFFFC;
    v35 = v32 + v36;
    v66 = v32 + v36;
  }
  else
  {
    v36 = v35;
  }
  *a6 = v35;
  if ( a5 < 0x18 )
  {
    VisibleMaxValueNameLenAndDataLen = -1073741789;
    CellPaged = Src;
  }
  else
  {
    *(_QWORD *)a4 = v29;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 16) = v32;
    *(_DWORD *)(a4 + 20) = v34;
    v37 = -1;
    if ( (_WORD)v32 )
      v37 = v36;
    *(_DWORD *)(a4 + 12) = v37;
    v38 = a5 - 24;
    v39 = (void *)(a4 + 24);
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      CmpCopyCompressedName(v39, v38, a2 + 76, *(unsigned __int16 *)(a2 + 72));
    }
    else
    {
      if ( (unsigned int)v38 <= v34 )
        v34 = a5 - 24;
      memmove(v39, (const void *)(a2 + 76), v34);
    }
    CellPaged = Src;
    if ( a5 < v36 )
      goto LABEL_57;
    v40 = v57;
    if ( (_WORD)v57 )
    {
      if ( a5 - v36 <= (unsigned int)v57 )
        v40 = a5 - v36;
      memmove((void *)(a4 + v36), Src, v40);
    }
    if ( v66 > a5 )
LABEL_57:
      VisibleMaxValueNameLenAndDataLen = -2147483643;
  }
  v58 = VisibleMaxValueNameLenAndDataLen;
LABEL_22:
  if ( CellPaged )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v60);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v60);
  }
  return (unsigned int)VisibleMaxValueNameLenAndDataLen;
}
