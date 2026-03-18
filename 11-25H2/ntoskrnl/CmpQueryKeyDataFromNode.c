/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x14087CC80
 * Callers:
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     CmpQueryKeyData @ 0x14087BF70 (CmpQueryKeyData.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x140871220 (CmpIsKeyDeleted.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmGetKeyLastWriteTime @ 0x14087DAB0 (CmGetKeyLastWriteTime.c)
 *     CmpCopyCompressedName @ 0x14087DC70 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1409EB010 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleValueCount @ 0x1409F3C30 (CmGetVisibleValueCount.c)
 *     CmGetVisibleSubkeyCount @ 0x140A2A7C4 (CmGetVisibleSubkeyCount.c)
 *     CmpPopulateKeyFullInformation @ 0x140A2B9B4 (CmpPopulateKeyFullInformation.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
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
  int VisibleMaxValueNameLenAndDataLen; // edi
  const void *v12; // r12
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int16 v17; // cx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int i; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v28; // rbx
  ULONG_PTR v29; // rdx
  __int64 v30; // rax
  int v31; // r8d
  unsigned __int16 v32; // cx
  unsigned int v33; // r9d
  int v34; // edx
  unsigned int v35; // ecx
  int v36; // eax
  __int64 v37; // rdx
  void *v38; // rcx
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 NextElement; // rax
  char v42; // al
  char IsKeyDeleted; // al
  ULONG_PTR v44; // rdx
  ULONG_PTR v45; // rcx
  __int64 CellFlat; // rax
  __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rdx
  bool v52; // zf
  __int64 v53; // rax
  ULONG_PTR v54; // rdx
  __int64 CellPaged; // rax
  __int64 v56; // [rsp+30h] [rbp-98h] BYREF
  int v57; // [rsp+38h] [rbp-90h]
  __int64 v58; // [rsp+40h] [rbp-88h]
  __int64 v59; // [rsp+48h] [rbp-80h]
  __int64 v60; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-70h]
  __int64 v62; // [rsp+60h] [rbp-68h] BYREF
  __int128 v63; // [rsp+68h] [rbp-60h] BYREF
  __int128 v64; // [rsp+78h] [rbp-50h]
  __int128 v65; // [rsp+88h] [rbp-40h] BYREF
  unsigned int v66; // [rsp+E0h] [rbp+18h]
  unsigned int v67; // [rsp+E0h] [rbp+18h]
  unsigned int v68; // [rsp+E0h] [rbp+18h]

  VisibleMaxValueNameLenAndDataLen = 0;
  v60 = 0LL;
  v12 = 0LL;
  v59 = 0LL;
  HvpGetCellContextInitialize(&v60);
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  switch ( v14 )
  {
    case 2:
      v23 = 0LL;
      if ( a2 )
      {
        v24 = *(_QWORD *)(v13 + 4);
        if ( !a7 )
        {
LABEL_25:
          *(_QWORD *)&v63 = v24;
          DWORD2(v63) = 0;
          v62 = 0LL;
          v56 = 0xFFFFFFFFLL;
          *((_QWORD *)&v64 + 1) = 0LL;
          if ( !a2
            || (DWORD2(v64) = (unsigned __int16)*(_DWORD *)(a2 + 52),
                VisibleMaxValueNameLenAndDataLen = *(_DWORD *)(a2 + 56),
                HIDWORD(v64) = VisibleMaxValueNameLenAndDataLen,
                a7) )
          {
            v26 = a8;
            if ( a7 )
            {
              v67 = *(unsigned __int16 *)(a7 + 176);
              DWORD2(v64) = v67;
              if ( a8 )
              {
LABEL_68:
                v40 = a7 + 208;
                while ( 1 )
                {
                  NextElement = CmListGetNextElement(v40, &v62, 32LL);
                  v58 = NextElement;
                  if ( !NextElement )
                    break;
                  v42 = CmEqualTrans(*(_QWORD *)(NextElement + 56), a8);
                  v40 = a7 + 208;
                  if ( v42 )
                  {
                    v40 = a7 + 208;
                    if ( *(_DWORD *)(v58 + 68) == 1 )
                    {
                      v58 = *(_QWORD *)(v58 + 88);
                      IsKeyDeleted = CmpIsKeyDeleted(v58, 0LL);
                      v40 = a7 + 208;
                      if ( !IsKeyDeleted )
                      {
                        v44 = *(unsigned int *)(v58 + 40);
                        v45 = *(_QWORD *)(v58 + 32);
                        if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
                          CellFlat = HvpGetCellFlat(v45, v44, &v56);
                        else
                          CellFlat = HvpGetCellPaged(v45, v44, &v56);
                        v47 = CellFlat;
                        if ( !CellFlat )
                        {
                          VisibleMaxValueNameLenAndDataLen = -1073741670;
                          goto LABEL_31;
                        }
                        v48 = (unsigned __int16)*(_DWORD *)(CellFlat + 52);
                        v49 = v67;
                        if ( v67 < v48 )
                          v49 = v48;
                        v67 = v49;
                        DWORD2(v64) = v49;
                        if ( (unsigned int)VisibleMaxValueNameLenAndDataLen < *(_DWORD *)(v47 + 56) )
                        {
                          VisibleMaxValueNameLenAndDataLen = *(_DWORD *)(v47 + 56);
                          HIDWORD(v64) = VisibleMaxValueNameLenAndDataLen;
                        }
                        v50 = *(_QWORD *)(v58 + 32);
                        if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(v50, &v56);
                        else
                          HvpReleaseCellPaged(v50, (unsigned int *)&v56);
                        goto LABEL_68;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v26 = a8;
          }
          VisibleMaxValueNameLenAndDataLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                               a7,
                                               a2,
                                               v26,
                                               (unsigned int)&v65 + 4,
                                               (__int64)&v65 + 8);
          if ( VisibleMaxValueNameLenAndDataLen >= 0 )
          {
            DWORD1(v64) = CmGetVisibleSubkeyCount(a7, a2, v26);
            LODWORD(v65) = CmGetVisibleValueCount(a7, a2, v26);
            if ( *(_WORD *)(a2 + 74) )
            {
              v54 = *(unsigned int *)(a2 + 48);
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(BugCheckParameter3, v54, &v60);
              else
                CellPaged = HvpGetCellPaged(BugCheckParameter3, v54, &v60);
              v59 = CellPaged;
              v12 = (const void *)CellPaged;
            }
            VisibleMaxValueNameLenAndDataLen = CmpPopulateKeyFullInformation(
                                                 &v63,
                                                 v12,
                                                 *(unsigned __int16 *)(a2 + 74),
                                                 a4,
                                                 a5,
                                                 a6);
            v57 = VisibleMaxValueNameLenAndDataLen;
          }
          break;
        }
      }
      else
      {
        v24 = *(_QWORD *)(a7 + 168);
      }
      v25 = a8;
      if ( a8 )
      {
        v51 = a7 + 208;
        while ( 1 )
        {
          if ( !v23 )
            v23 = *(_QWORD *)(v51 + 8);
          if ( v51 == v23 )
            break;
          v62 = v23 - 32;
          v56 = *(_QWORD *)(v23 + 8);
          if ( v23 == 32 )
            break;
          v52 = CmEqualTrans(*(_QWORD *)(v23 - 32 + 56), v25) == 0;
          v25 = a8;
          v23 = v56;
          v51 = a7 + 208;
          if ( !v52 )
          {
            v51 = a7 + 208;
            if ( *(_DWORD *)(v62 + 68) == 8 )
            {
              v24 = *(_QWORD *)(v62 + 88);
              goto LABEL_25;
            }
          }
        }
      }
      goto LABEL_25;
    case 0:
      v15 = 0LL;
      if ( v13 )
      {
        v16 = *(_QWORD *)(v13 + 4);
        if ( !a7 )
        {
LABEL_6:
          v17 = 2 * *(_WORD *)(a2 + 72);
          if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
            v17 = *(_WORD *)(a2 + 72);
          v18 = v17;
          v66 = v17 + 16;
          *a6 = v66;
          if ( a5 < 0x10 )
          {
            VisibleMaxValueNameLenAndDataLen = -1073741789;
          }
          else
          {
            *(_QWORD *)a4 = v16;
            *(_DWORD *)(a4 + 8) = 0;
            *(_DWORD *)(a4 + 12) = v17;
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
              if ( v19 <= v17 )
                v18 = a5 - 16;
              memmove((void *)(a4 + 16), (const void *)(a2 + 76), v18);
            }
            if ( a5 < v66 )
              VisibleMaxValueNameLenAndDataLen = -2147483643;
          }
          v57 = VisibleMaxValueNameLenAndDataLen;
          break;
        }
      }
      else
      {
        v16 = *(_QWORD *)(a7 + 168);
      }
      if ( a8 )
      {
        v53 = a7 + 208;
        v58 = a7 + 208;
        while ( 1 )
        {
          if ( !v15 )
            v15 = *(_QWORD *)(v53 + 8);
          if ( v53 == v15 )
            break;
          v62 = v15 - 32;
          v56 = *(_QWORD *)(v15 + 8);
          if ( v15 == 32 )
            break;
          v52 = CmEqualTrans(*(_QWORD *)(v15 - 32 + 56), a8) == 0;
          v15 = v56;
          v53 = v58;
          if ( !v52 && *(_DWORD *)(v62 + 68) == 8 )
          {
            v16 = *(_QWORD *)(v62 + 88);
            goto LABEL_6;
          }
        }
      }
      goto LABEL_6;
    case 1:
      v28 = CmGetKeyLastWriteTime(a7, v13, a8);
      if ( *(_WORD *)(a2 + 74) )
      {
        v29 = *(unsigned int *)(a2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v30 = HvpGetCellFlat(BugCheckParameter3, v29, &v60);
        else
          v30 = HvpGetCellPaged(BugCheckParameter3, v29, &v60);
        v59 = v30;
        v12 = (const void *)v30;
      }
      v31 = *(unsigned __int16 *)(a2 + 74);
      LODWORD(v56) = v31;
      v32 = 2 * *(_WORD *)(a2 + 72);
      if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
        v32 = *(_WORD *)(a2 + 72);
      v33 = v32;
      v34 = v32 + 24;
      LODWORD(v58) = v34;
      if ( (_WORD)v31 )
      {
        v35 = (v32 + 27) & 0xFFFFFFFC;
        v34 = v31 + v35;
        LODWORD(v58) = v31 + v35;
      }
      else
      {
        v35 = v32 + 24;
      }
      v68 = v35;
      *a6 = v34;
      if ( a5 < 0x18 )
      {
        VisibleMaxValueNameLenAndDataLen = -1073741789;
      }
      else
      {
        *(_QWORD *)a4 = v28;
        *(_DWORD *)(a4 + 8) = 0;
        *(_DWORD *)(a4 + 16) = v31;
        *(_DWORD *)(a4 + 20) = v33;
        v36 = -1;
        if ( (_WORD)v31 )
          v36 = v35;
        *(_DWORD *)(a4 + 12) = v36;
        v37 = a5 - 24;
        v38 = (void *)(a4 + 24);
        if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
        {
          CmpCopyCompressedName(v38, v37, a2 + 76, *(unsigned __int16 *)(a2 + 72));
        }
        else
        {
          if ( (unsigned int)v37 <= v33 )
            v33 = a5 - 24;
          memmove(v38, (const void *)(a2 + 76), v33);
        }
        if ( a5 < v68 )
          goto LABEL_56;
        v39 = v56;
        if ( (_WORD)v56 )
        {
          if ( a5 - v68 <= (unsigned int)v56 )
            v39 = a5 - v68;
          memmove((void *)(a4 + v68), v12, v39);
        }
        if ( (unsigned int)v58 > a5 )
LABEL_56:
          VisibleMaxValueNameLenAndDataLen = -2147483643;
      }
      v57 = VisibleMaxValueNameLenAndDataLen;
      break;
    default:
      VisibleMaxValueNameLenAndDataLen = -1073741811;
      break;
  }
LABEL_31:
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v60);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v60);
  }
  return (unsigned int)VisibleMaxValueNameLenAndDataLen;
}
