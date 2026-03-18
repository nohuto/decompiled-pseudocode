/*
 * XREFs of CmpCheckValueList @ 0x14088DC10
 * Callers:
 *     CmpCheckKey @ 0x14088BB2C (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x140878DF0 (HvIsCellAllocated.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCompareUnicodeString @ 0x140A04758 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR BugCheckParameter3,
        char a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter4,
        int a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  unsigned int v11; // r14d
  unsigned int v13; // r15d
  char v14; // r12
  unsigned int v15; // r12d
  __int64 CellFlat; // rax
  __int64 v17; // r15
  unsigned int v18; // eax
  int v19; // edx
  char v20; // r9
  __int16 v21; // cx
  __int16 v22; // r8
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // ax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // r13
  __int64 CellPaged; // rax
  unsigned int v30; // r14d
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rcx
  unsigned __int8 *v36; // rdx
  unsigned __int16 v37; // ax
  wchar_t *Buffer; // r8
  unsigned __int16 i; // cx
  WCHAR v40; // r14
  unsigned int v41; // r13d
  int v42; // eax
  int v43; // ecx
  ULONG_PTR v44; // rdx
  ULONG_PTR v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r9
  unsigned __int64 v48; // rcx
  unsigned int j; // r12d
  ULONG_PTR v50; // rdx
  __int64 v51; // rax
  __int64 *v52; // rdx
  bool v53; // zf
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // [rsp+28h] [rbp-79h]
  int v59; // [rsp+28h] [rbp-79h]
  int v60; // [rsp+28h] [rbp-79h]
  int v61; // [rsp+28h] [rbp-79h]
  __int64 v62; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v63; // [rsp+40h] [rbp-61h]
  __int64 v64; // [rsp+48h] [rbp-59h] BYREF
  __int64 v65; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v66; // [rsp+58h] [rbp-49h]
  unsigned int v67; // [rsp+5Ch] [rbp-45h]
  __int64 v68; // [rsp+60h] [rbp-41h] BYREF
  __int64 v69; // [rsp+68h] [rbp-39h] BYREF
  __int64 v70; // [rsp+70h] [rbp-31h]
  __int128 v71; // [rsp+78h] [rbp-29h] BYREF
  unsigned __int8 *v72; // [rsp+88h] [rbp-19h]
  wchar_t *v73; // [rsp+90h] [rbp-11h]
  void *v74; // [rsp+98h] [rbp-9h]
  char v75; // [rsp+F0h] [rbp+4Fh]
  __int64 v76; // [rsp+F8h] [rbp+57h]
  unsigned int v77; // [rsp+100h] [rbp+5Fh]
  char v78; // [rsp+120h] [rbp+7Fh]

  v77 = a4;
  v76 = a3;
  v75 = a2;
  v11 = a4;
  v63 = 0;
  v62 = 0xFFFFFFFFLL;
  v64 = 0xFFFFFFFFLL;
  v13 = 0;
  v69 = 0xFFFFFFFFLL;
  v14 = 0;
  v68 = 0xFFFFFFFFLL;
  v65 = 0xFFFFFFFFLL;
  v78 = 0;
  v71 = 0LL;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  while ( 1 )
  {
    if ( v13 >= v11 )
      return v14 != 0 ? 0x8000002A : 0;
    v15 = *(_DWORD *)(a3 + 4LL * v13);
    v74 = (void *)(a3 + 4LL * v13);
    if ( a2 && v11 != 1 )
    {
      v30 = -1073741492;
      SetFailureLocation(a8, 0, 15, -1073741492, 64);
      if ( !a8 )
        return v30;
      *(_DWORD *)(a8 + 280) = v13;
      goto LABEL_122;
    }
    if ( v15 == -1 )
    {
      v14 = 1;
      v78 = 1;
      v30 = -1073741492;
      SetFailureLocation(a8, 1, 15, -1073741492, 80);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 284) = -1;
        *(_DWORD *)(a8 + 280) = v13;
      }
    }
    else
    {
      if ( HvIsCellAllocated(BugCheckParameter3, v15) )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v15, &v62);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3, v15, &v62);
        v17 = CellFlat;
        if ( !CellFlat )
        {
          v30 = -1073741670;
          SetFailureLocation(a8, 0, 15, -1073741670, 112);
          if ( !a8 )
            return v30;
          *(_DWORD *)(a8 + 280) = v63;
LABEL_122:
          *(_DWORD *)(a8 + 284) = v15;
          return v30;
        }
        v18 = -4 - *(_DWORD *)(CellFlat - 4);
        if ( v18 < 0x14 )
        {
          v58 = 128;
LABEL_132:
          v78 = 1;
          v30 = -1073741492;
LABEL_61:
          SetFailureLocation(a8, 1, 15, -1073741492, v58);
          if ( a8 )
          {
            *(_DWORD *)(a8 + 280) = v63;
            *(_DWORD *)(a8 + 284) = v15;
            *(_QWORD *)(a8 + 288) = v17;
          }
LABEL_63:
          v32 = BugCheckParameter3;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
          {
LABEL_64:
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v62);
LABEL_65:
            v14 = 1;
            goto LABEL_66;
          }
LABEL_219:
          HvpReleaseCellFlat(v32, &v62);
          goto LABEL_65;
        }
        if ( *(_WORD *)v17 != 27510 )
        {
          v58 = 136;
          goto LABEL_132;
        }
        v19 = *(unsigned __int16 *)(v17 + 2);
        if ( v19 + 20 > v18 )
        {
          v58 = 144;
          goto LABEL_132;
        }
        if ( (*(_WORD *)(v17 + 16) & 1) != 0 )
        {
          if ( (unsigned __int16)v19 <= 0x3FFFu )
            goto LABEL_16;
          v58 = 146;
        }
        else if ( (v19 & 1) != 0 )
        {
          v58 = 148;
        }
        else
        {
          if ( (unsigned __int16)v19 <= 0x7FFFu )
          {
LABEL_16:
            if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) == 0 && (*(_WORD *)(v17 + 16) & 2) != 0 )
            {
              v78 = 1;
              v30 = -1073741492;
              if ( a8 )
              {
                *(_DWORD *)(a8 + 280) = v63;
                *(_DWORD *)(a8 + 284) = v15;
                *(_QWORD *)(a8 + 288) = v17;
              }
              if ( (a6 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
              {
                SetFailureLocation(a8, 0, 15, -1073741492, 156);
LABEL_174:
                v52 = &v62;
                goto LABEL_175;
              }
              SetFailureLocation(a8, 1, 15, -1073741492, 152);
              v42 = HvpMarkCellDirty(BugCheckParameter3, v15, 0);
              v30 = v42;
              if ( v42 < 0 )
              {
                SetFailureLocation(a8, 1, 15, v42, 154);
                v53 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
                v52 = &v62;
                goto LABEL_176;
              }
              *(_WORD *)(v17 + 16) &= ~2u;
              *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
            }
            v20 = v75;
            if ( v75 )
            {
              v36 = (unsigned __int8 *)(v17 + 20);
              v37 = *(_WORD *)(v17 + 2);
              if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
              {
                Buffer = CmSymbolicLinkValueName.Buffer;
                for ( i = CmSymbolicLinkValueName.Length >> 1; ; --i )
                {
                  LOWORD(v67) = v37;
                  LOWORD(v66) = i;
                  if ( !i || !v37 )
                    break;
                  v40 = *Buffer++;
                  v41 = *v36++;
                  v73 = Buffer;
                  v72 = v36;
                  if ( v40 != (_WORD)v41 )
                  {
                    if ( v40 >= 0x61u )
                    {
                      if ( v40 > 0x7Au )
                        v40 = RtlUpcaseUnicodeChar(v40);
                      else
                        v40 -= 32;
                    }
                    if ( v41 >= 0x61 )
                    {
                      if ( v41 > 0x7A )
                        LOWORD(v41) = RtlUpcaseUnicodeChar(v41);
                      else
                        LOWORD(v41) = v41 - 32;
                    }
                    if ( v40 != (_WORD)v41 )
                      goto LABEL_169;
                    i = v66;
                    v37 = v67;
                    v36 = v72;
                    Buffer = v73;
                  }
                  --v37;
                }
                v43 = i - v37;
              }
              else
              {
                *((_QWORD *)&v71 + 1) = v17 + 20;
                LOWORD(v71) = v37;
                WORD1(v71) = v37;
                v43 = CmpCompareUnicodeString(&CmSymbolicLinkValueName, &v71, 0LL);
              }
              if ( v43 )
              {
LABEL_169:
                v60 = 160;
                goto LABEL_172;
              }
              if ( *(_DWORD *)(v17 + 12) != 6 && (*(_BYTE *)(v17 + 16) & 2) == 0 )
              {
                v60 = 176;
                goto LABEL_172;
              }
              v20 = v75;
            }
            v21 = *(_WORD *)(v17 + 2);
            v22 = *(_WORD *)(v17 + 16);
            v23 = 2 * v21;
            if ( (v22 & 1) == 0 )
              v23 = *(_WORD *)(v17 + 2);
            if ( *a9 < (unsigned int)v23 )
            {
              v24 = 2 * v21;
              if ( (v22 & 1) == 0 )
                v24 = *(_WORD *)(v17 + 2);
              *a9 = v24;
            }
            v25 = *(_DWORD *)(v17 + 4);
            v67 = v25;
            if ( !v20 )
            {
LABEL_25:
              if ( (v22 & 2) != 0 )
              {
                if ( v25 || *(_DWORD *)(v17 + 12) )
                  goto LABEL_130;
              }
              else if ( v25 >= 0x80000000 )
              {
                if ( v25 + 0x80000000 <= 4 )
                  goto LABEL_28;
                v59 = 416;
                goto LABEL_93;
              }
              v27 = *(_DWORD *)(v17 + 8);
              v28 = 0LL;
              v66 = v27;
              if ( v25 )
              {
                if ( !HvIsCellAllocated(BugCheckParameter3, v27) )
                {
                  v58 = 240;
                  goto LABEL_132;
                }
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(BugCheckParameter3, v27, &v64);
                else
                  CellPaged = HvpGetCellPaged(BugCheckParameter3, v27, &v64);
                v28 = CellPaged;
                if ( !CellPaged )
                {
                  v30 = -1073741670;
                  SetFailureLocation(a8, 0, 15, -1073741670, 256);
                  if ( a8 )
                  {
                    *(_DWORD *)(a8 + 280) = v63;
                    *(_DWORD *)(a8 + 284) = v66;
                  }
                  goto LABEL_174;
                }
                v25 = v67;
                goto LABEL_44;
              }
              if ( v27 == -1 )
              {
LABEL_44:
                if ( v25 > 0x3FD8 && *(_DWORD *)(BugCheckParameter3 + 220) >= 4u )
                {
                  if ( (unsigned int)(-4 - *(_DWORD *)(v28 - 4)) >= 8
                    && *(_WORD *)v28 == 25188
                    && *(_WORD *)(v28 + 2)
                    && (v44 = *(unsigned int *)(v28 + 4), (_DWORD)v44 != -1) )
                  {
                    if ( HvIsCellAllocated(BugCheckParameter3, v44) )
                    {
                      v45 = *(unsigned int *)(v28 + 4);
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        v46 = HvpGetCellFlat(BugCheckParameter3, v45, &v65);
                      else
                        v46 = HvpGetCellPaged(BugCheckParameter3, v45, &v65);
                      v70 = v46;
                      v47 = v46;
                      if ( !v46 )
                      {
                        v30 = -1073741670;
                        SetFailureLocation(a8, 0, 15, -1073741670, 304);
                        if ( a8 )
                        {
                          *(_DWORD *)(a8 + 280) = v63;
                          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v28 + 4);
                        }
LABEL_243:
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v64);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
                        v53 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
                        v52 = &v62;
                        goto LABEL_176;
                      }
                      v48 = 4LL * *(unsigned __int16 *)(v28 + 2);
                      if ( v48 < 4 || v48 > (unsigned int)(-4 - *(_DWORD *)(v46 - 4)) )
                      {
                        v61 = 320;
                      }
                      else
                      {
                        if ( *(unsigned __int16 *)(v28 + 2) == (v67 + 16343) / 0x3FD8 )
                        {
                          for ( j = 0; ; ++j )
                          {
                            if ( j >= *(unsigned __int16 *)(v28 + 2) )
                            {
                              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                                HvpReleaseCellFlat(BugCheckParameter3, &v65);
                              else
                                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v65);
                              goto LABEL_47;
                            }
                            if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v47 + 4LL * j)) )
                              break;
                            v50 = *(unsigned int *)(v70 + 4LL * j);
                            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                              v51 = HvpGetCellFlat(BugCheckParameter3, v50, &v68);
                            else
                              v51 = HvpGetCellPaged(BugCheckParameter3, v50, &v68);
                            if ( !v51 )
                            {
                              v30 = -1073741670;
                              SetFailureLocation(a8, 0, 15, -1073741670, 368);
                              if ( a8 )
                              {
                                v54 = v70;
                                *(_DWORD *)(a8 + 280) = j;
                                *(_DWORD *)(a8 + 284) = *(_DWORD *)(v54 + 4LL * j);
                                *(_QWORD *)(a8 + 288) = v28;
                              }
                              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                                HvpReleaseCellFlat(BugCheckParameter3, &v65);
                              else
                                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v65);
                              goto LABEL_243;
                            }
                            if ( (unsigned int)(-4 - *(_DWORD *)(v51 - 4)) < 0x3FD8 )
                            {
                              v78 = 1;
                              v30 = -1073741492;
                              SetFailureLocation(a8, 1, 15, -1073741492, 384);
                              if ( a8 )
                              {
                                v56 = v70;
                                *(_DWORD *)(a8 + 280) = j;
                                *(_DWORD *)(a8 + 284) = *(_DWORD *)(v56 + 4LL * j);
                                *(_QWORD *)(a8 + 288) = v28;
                              }
                              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                                HvpReleaseCellFlat(BugCheckParameter3, &v68);
                              else
                                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v68);
                              goto LABEL_212;
                            }
                            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(BugCheckParameter3, &v68);
                            else
                              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v68);
                            v47 = v70;
                          }
                          v78 = 1;
                          v30 = -1073741492;
                          SetFailureLocation(a8, 1, 15, -1073741492, 352);
                          if ( a8 )
                          {
                            v57 = v70;
                            *(_DWORD *)(a8 + 280) = j;
                            *(_DWORD *)(a8 + 284) = *(_DWORD *)(v57 + 4LL * j);
                            *(_QWORD *)(a8 + 288) = v28;
                          }
LABEL_212:
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(BugCheckParameter3, &v65);
                          else
                            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v65);
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(BugCheckParameter3, &v64);
                          else
                            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
                          v32 = BugCheckParameter3;
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                            goto LABEL_64;
                          goto LABEL_219;
                        }
                        v61 = 336;
                      }
                      v30 = -1073741492;
                      v78 = 1;
                      SetFailureLocation(a8, 1, 15, -1073741492, v61);
                      if ( a8 )
                      {
                        *(_DWORD *)(a8 + 280) = v63;
                        *(_DWORD *)(a8 + 284) = v15;
                        *(_QWORD *)(a8 + 288) = v17;
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, &v65);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v65);
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, &v64);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
                      goto LABEL_63;
                    }
                    v78 = 1;
                    v30 = -1073741492;
                    v14 = 1;
                    SetFailureLocation(a8, 1, 15, -1073741492, 288);
                    if ( a8 )
                    {
                      *(_DWORD *)(a8 + 280) = v63;
                      *(_DWORD *)(a8 + 284) = *(_DWORD *)(v28 + 4);
                      *(_QWORD *)(a8 + 288) = v28;
                    }
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v64);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
                    v35 = BugCheckParameter3;
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      goto LABEL_236;
                  }
                  else
                  {
                    v78 = 1;
                    v30 = -1073741492;
                    v14 = 1;
                    SetFailureLocation(a8, 1, 15, -1073741492, 272);
                    if ( a8 )
                    {
                      *(_DWORD *)(a8 + 280) = v63;
                      *(_DWORD *)(a8 + 284) = v66;
                    }
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v64);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
                    v35 = BugCheckParameter3;
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    {
LABEL_236:
                      HvpReleaseCellFlat(v35, &v62);
                      goto LABEL_66;
                    }
                  }
                  HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v62);
                  goto LABEL_66;
                }
                if ( !v25 || v25 <= -4 - *(_DWORD *)(v28 - 4) )
                {
LABEL_47:
                  if ( v28 )
                  {
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v64);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
                  }
LABEL_28:
                  v26 = *(_DWORD *)(v17 + 4);
                  if ( v26 >= 0x80000000 )
                    v26 += 0x80000000;
                  if ( *a10 < v26 )
                    *a10 = v26;
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(BugCheckParameter3, &v62);
                  else
                    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v62);
                  v14 = v78;
                  v13 = v63 + 1;
                  v11 = v77;
                  ++v63;
                  goto LABEL_35;
                }
                v78 = 1;
                v30 = -1073741492;
                SetFailureLocation(a8, 1, 15, -1073741492, 400);
                if ( a8 )
                {
                  *(_DWORD *)(a8 + 280) = v63;
                  *(_DWORD *)(a8 + 284) = v15;
                  *(_QWORD *)(a8 + 288) = v17;
                }
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(BugCheckParameter3, &v64);
                else
                  HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v64);
                goto LABEL_86;
              }
LABEL_130:
              v59 = 224;
LABEL_93:
              v78 = 1;
              v30 = -1073741492;
              SetFailureLocation(a8, 1, 15, -1073741492, v59);
              if ( a8 )
              {
                *(_DWORD *)(a8 + 280) = v63;
                *(_DWORD *)(a8 + 284) = v15;
                *(_QWORD *)(a8 + 288) = v17;
              }
LABEL_86:
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v62);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v62);
              v14 = 1;
              goto LABEL_66;
            }
            if ( (v25 & 1) != 0 )
            {
              v60 = 192;
            }
            else
            {
              if ( v25 <= 0xFFFF )
                goto LABEL_25;
              v60 = 208;
            }
LABEL_172:
            v30 = -1073741492;
            SetFailureLocation(a8, 0, 15, -1073741492, v60);
            if ( a8 )
            {
              *(_DWORD *)(a8 + 280) = v63;
              *(_DWORD *)(a8 + 284) = v15;
              *(_QWORD *)(a8 + 288) = v17;
            }
            goto LABEL_174;
          }
          v58 = 150;
        }
        v78 = 1;
        v30 = -1073741492;
        goto LABEL_61;
      }
      v78 = 1;
      v30 = -1073741492;
      SetFailureLocation(a8, 1, 15, -1073741492, 96);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v13;
        *(_DWORD *)(a8 + 284) = v15;
      }
      v14 = 1;
    }
LABEL_66:
    if ( (a6 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a8, 0, 15, -1073741492, 48);
      return v30;
    }
    SetFailureLocation(a8, 1, 15, -1073741492, 0);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v33 = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v69);
    else
      v33 = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, &v69);
    v34 = v33;
    if ( !v33 )
    {
      v30 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 16);
      return v30;
    }
    v30 = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)BugCheckParameter4, 0);
    if ( (v30 & 0x80000000) != 0 )
      break;
    v30 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v34 + 40), 0);
    if ( (v30 & 0x80000000) != 0 )
    {
      v55 = 40;
      goto LABEL_247;
    }
    --*(_DWORD *)(v34 + 36);
    v13 = v63;
    v11 = --v77;
    memmove(v74, (const void *)(v76 + 4LL * (v63 + 1)), 4LL * (v77 - v63));
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v69);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v69);
LABEL_35:
    a2 = v75;
    a3 = v76;
  }
  v55 = 24;
LABEL_247:
  SetFailureLocation(a8, 0, 15, v30, v55);
  v52 = &v69;
LABEL_175:
  v53 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
LABEL_176:
  if ( v53 )
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v52);
  else
    HvpReleaseCellFlat(BugCheckParameter3, v52);
  return v30;
}
