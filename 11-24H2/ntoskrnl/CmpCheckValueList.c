/*
 * XREFs of CmpCheckValueList @ 0x14088B030
 * Callers:
 *     CmpCheckKey @ 0x140888F1C (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408798A0 (HvIsCellAllocated.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCompareUnicodeString @ 0x140A00290 (CmpCompareUnicodeString.c)
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
  __int64 v32; // rax
  __int64 v33; // r15
  unsigned __int8 *v34; // rdx
  unsigned __int16 v35; // ax
  wchar_t *Buffer; // r8
  unsigned __int16 i; // cx
  WCHAR v38; // r14
  unsigned int v39; // r13d
  int v40; // eax
  int v41; // ecx
  ULONG_PTR v42; // rdx
  ULONG_PTR v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r9
  unsigned __int64 v46; // rcx
  unsigned int j; // r12d
  ULONG_PTR v48; // rdx
  __int64 v49; // rax
  unsigned int *v50; // rdx
  bool v51; // zf
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // [rsp+28h] [rbp-79h]
  int v57; // [rsp+28h] [rbp-79h]
  int v58; // [rsp+28h] [rbp-79h]
  int v59; // [rsp+28h] [rbp-79h]
  unsigned int v60[2]; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v61; // [rsp+40h] [rbp-61h]
  unsigned int v62[2]; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v63[2]; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v64; // [rsp+58h] [rbp-49h]
  unsigned int v65; // [rsp+5Ch] [rbp-45h]
  unsigned int v66[2]; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v67[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v68; // [rsp+70h] [rbp-31h]
  __int128 v69; // [rsp+78h] [rbp-29h] BYREF
  unsigned __int8 *v70; // [rsp+88h] [rbp-19h]
  wchar_t *v71; // [rsp+90h] [rbp-11h]
  void *v72; // [rsp+98h] [rbp-9h]
  char v73; // [rsp+F0h] [rbp+4Fh]
  __int64 v74; // [rsp+F8h] [rbp+57h]
  unsigned int v75; // [rsp+100h] [rbp+5Fh]
  char v76; // [rsp+120h] [rbp+7Fh]

  v75 = a4;
  v74 = a3;
  v73 = a2;
  v11 = a4;
  v61 = 0;
  v60[1] = 0;
  v60[0] = -1;
  v62[0] = -1;
  v62[1] = 0;
  v13 = 0;
  v67[0] = -1;
  v14 = 0;
  v67[1] = 0;
  v66[0] = -1;
  v66[1] = 0;
  v63[0] = -1;
  v63[1] = 0;
  v76 = 0;
  v69 = 0LL;
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
    v72 = (void *)(a3 + 4LL * v13);
    if ( a2 && v11 != 1 )
    {
      v30 = -1073741492;
      SetFailureLocation(a8, 0, 15, -1073741492, 64);
      if ( !a8 )
        return v30;
      *(_DWORD *)(a8 + 280) = v13;
      goto LABEL_116;
    }
    if ( v15 == -1 )
    {
      v14 = 1;
      v76 = 1;
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
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v15, v60);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3, v15, v60);
        v17 = CellFlat;
        if ( !CellFlat )
        {
          v30 = -1073741670;
          SetFailureLocation(a8, 0, 15, -1073741670, 112);
          if ( !a8 )
            return v30;
          *(_DWORD *)(a8 + 280) = v61;
LABEL_116:
          *(_DWORD *)(a8 + 284) = v15;
          return v30;
        }
        v18 = -4 - *(_DWORD *)(CellFlat - 4);
        if ( v18 < 0x14 )
        {
          v56 = 128;
LABEL_90:
          v76 = 1;
          v30 = -1073741492;
LABEL_61:
          SetFailureLocation(a8, 1, 15, -1073741492, v56);
          if ( a8 )
          {
            *(_DWORD *)(a8 + 280) = v61;
            *(_DWORD *)(a8 + 284) = v15;
            *(_QWORD *)(a8 + 288) = v17;
          }
LABEL_63:
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
          {
LABEL_64:
            HvpReleaseCellPaged(BugCheckParameter3, v60);
LABEL_65:
            v14 = 1;
            goto LABEL_66;
          }
LABEL_219:
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v60);
          goto LABEL_65;
        }
        if ( *(_WORD *)v17 != 27510 )
        {
          v56 = 136;
          goto LABEL_90;
        }
        v19 = *(unsigned __int16 *)(v17 + 2);
        if ( v19 + 20 > v18 )
        {
          v56 = 144;
          goto LABEL_90;
        }
        if ( (*(_WORD *)(v17 + 16) & 1) != 0 )
        {
          if ( (unsigned __int16)v19 <= 0x3FFFu )
            goto LABEL_16;
          v56 = 146;
        }
        else if ( (v19 & 1) != 0 )
        {
          v56 = 148;
        }
        else
        {
          if ( (unsigned __int16)v19 <= 0x7FFFu )
          {
LABEL_16:
            if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) == 0 && (*(_WORD *)(v17 + 16) & 2) != 0 )
            {
              v76 = 1;
              v30 = -1073741492;
              if ( a8 )
              {
                *(_DWORD *)(a8 + 280) = v61;
                *(_DWORD *)(a8 + 284) = v15;
                *(_QWORD *)(a8 + 288) = v17;
              }
              if ( (a6 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
              {
                SetFailureLocation(a8, 0, 15, -1073741492, 156);
LABEL_174:
                v50 = v60;
                goto LABEL_175;
              }
              SetFailureLocation(a8, 1, 15, -1073741492, 152);
              v40 = HvpMarkCellDirty(BugCheckParameter3, v15, 0);
              v30 = v40;
              if ( v40 < 0 )
              {
                SetFailureLocation(a8, 1, 15, v40, 154);
                v51 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
                v50 = v60;
                goto LABEL_176;
              }
              *(_WORD *)(v17 + 16) &= ~2u;
              *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
            }
            v20 = v73;
            if ( v73 )
            {
              v34 = (unsigned __int8 *)(v17 + 20);
              v35 = *(_WORD *)(v17 + 2);
              if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
              {
                Buffer = CmSymbolicLinkValueName.Buffer;
                for ( i = CmSymbolicLinkValueName.Length >> 1; ; --i )
                {
                  LOWORD(v65) = v35;
                  LOWORD(v64) = i;
                  if ( !i || !v35 )
                    break;
                  v38 = *Buffer++;
                  v39 = *v34++;
                  v71 = Buffer;
                  v70 = v34;
                  if ( v38 != (_WORD)v39 )
                  {
                    if ( v38 >= 0x61u )
                    {
                      if ( v38 > 0x7Au )
                        v38 = RtlUpcaseUnicodeChar(v38);
                      else
                        v38 -= 32;
                    }
                    if ( v39 >= 0x61 )
                    {
                      if ( v39 > 0x7A )
                        LOWORD(v39) = RtlUpcaseUnicodeChar(v39);
                      else
                        LOWORD(v39) = v39 - 32;
                    }
                    if ( v38 != (_WORD)v39 )
                      goto LABEL_169;
                    i = v64;
                    v35 = v65;
                    v34 = v70;
                    Buffer = v71;
                  }
                  --v35;
                }
                v41 = i - v35;
              }
              else
              {
                *((_QWORD *)&v69 + 1) = v17 + 20;
                LOWORD(v69) = v35;
                WORD1(v69) = v35;
                v41 = CmpCompareUnicodeString(&CmSymbolicLinkValueName, &v69, 0LL);
              }
              if ( v41 )
              {
LABEL_169:
                v58 = 160;
                goto LABEL_172;
              }
              if ( *(_DWORD *)(v17 + 12) != 6 && (*(_BYTE *)(v17 + 16) & 2) == 0 )
              {
                v58 = 176;
                goto LABEL_172;
              }
              v20 = v73;
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
            v65 = v25;
            if ( !v20 )
            {
LABEL_25:
              if ( (v22 & 2) != 0 )
              {
                if ( v25 || *(_DWORD *)(v17 + 12) )
                  goto LABEL_124;
              }
              else if ( v25 >= 0x80000000 )
              {
                if ( v25 + 0x80000000 <= 4 )
                  goto LABEL_28;
                v57 = 416;
                goto LABEL_95;
              }
              v27 = *(_DWORD *)(v17 + 8);
              v28 = 0LL;
              v64 = v27;
              if ( v25 )
              {
                if ( !HvIsCellAllocated(BugCheckParameter3, v27) )
                {
                  v56 = 240;
                  goto LABEL_90;
                }
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(BugCheckParameter3, v27, v62);
                else
                  CellPaged = HvpGetCellPaged(BugCheckParameter3, v27, v62);
                v28 = CellPaged;
                if ( !CellPaged )
                {
                  v30 = -1073741670;
                  SetFailureLocation(a8, 0, 15, -1073741670, 256);
                  if ( a8 )
                  {
                    *(_DWORD *)(a8 + 280) = v61;
                    *(_DWORD *)(a8 + 284) = v64;
                  }
                  goto LABEL_174;
                }
                v25 = v65;
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
                    && (v42 = *(unsigned int *)(v28 + 4), (_DWORD)v42 != -1) )
                  {
                    if ( HvIsCellAllocated(BugCheckParameter3, v42) )
                    {
                      v43 = *(unsigned int *)(v28 + 4);
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        v44 = HvpGetCellFlat(BugCheckParameter3, v43, v63);
                      else
                        v44 = HvpGetCellPaged(BugCheckParameter3, v43, v63);
                      v68 = v44;
                      v45 = v44;
                      if ( !v44 )
                      {
                        v30 = -1073741670;
                        SetFailureLocation(a8, 0, 15, -1073741670, 304);
                        if ( a8 )
                        {
                          *(_DWORD *)(a8 + 280) = v61;
                          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v28 + 4);
                        }
LABEL_243:
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v62);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, v62);
                        v51 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
                        v50 = v60;
                        goto LABEL_176;
                      }
                      v46 = 4LL * *(unsigned __int16 *)(v28 + 2);
                      if ( v46 < 4 || v46 > (unsigned int)(-4 - *(_DWORD *)(v44 - 4)) )
                      {
                        v59 = 320;
                      }
                      else
                      {
                        if ( *(unsigned __int16 *)(v28 + 2) == (v65 + 16343) / 0x3FD8 )
                        {
                          for ( j = 0; ; ++j )
                          {
                            if ( j >= *(unsigned __int16 *)(v28 + 2) )
                            {
                              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v63);
                              else
                                HvpReleaseCellPaged(BugCheckParameter3, v63);
                              goto LABEL_47;
                            }
                            if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v45 + 4LL * j)) )
                              break;
                            v48 = *(unsigned int *)(v68 + 4LL * j);
                            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                              v49 = HvpGetCellFlat(BugCheckParameter3, v48, v66);
                            else
                              v49 = HvpGetCellPaged(BugCheckParameter3, v48, v66);
                            if ( !v49 )
                            {
                              v30 = -1073741670;
                              SetFailureLocation(a8, 0, 15, -1073741670, 368);
                              if ( a8 )
                              {
                                v52 = v68;
                                *(_DWORD *)(a8 + 280) = j;
                                *(_DWORD *)(a8 + 284) = *(_DWORD *)(v52 + 4LL * j);
                                *(_QWORD *)(a8 + 288) = v28;
                              }
                              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v63);
                              else
                                HvpReleaseCellPaged(BugCheckParameter3, v63);
                              goto LABEL_243;
                            }
                            if ( (unsigned int)(-4 - *(_DWORD *)(v49 - 4)) < 0x3FD8 )
                            {
                              v76 = 1;
                              v30 = -1073741492;
                              SetFailureLocation(a8, 1, 15, -1073741492, 384);
                              if ( a8 )
                              {
                                v54 = v68;
                                *(_DWORD *)(a8 + 280) = j;
                                *(_DWORD *)(a8 + 284) = *(_DWORD *)(v54 + 4LL * j);
                                *(_QWORD *)(a8 + 288) = v28;
                              }
                              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v66);
                              else
                                HvpReleaseCellPaged(BugCheckParameter3, v66);
                              goto LABEL_212;
                            }
                            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                              HvpReleaseCellFlat(BugCheckParameter3, (__int64)v66);
                            else
                              HvpReleaseCellPaged(BugCheckParameter3, v66);
                            v45 = v68;
                          }
                          v76 = 1;
                          v30 = -1073741492;
                          SetFailureLocation(a8, 1, 15, -1073741492, 352);
                          if ( a8 )
                          {
                            v55 = v68;
                            *(_DWORD *)(a8 + 280) = j;
                            *(_DWORD *)(a8 + 284) = *(_DWORD *)(v55 + 4LL * j);
                            *(_QWORD *)(a8 + 288) = v28;
                          }
LABEL_212:
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v63);
                          else
                            HvpReleaseCellPaged(BugCheckParameter3, v63);
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v62);
                          else
                            HvpReleaseCellPaged(BugCheckParameter3, v62);
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                            goto LABEL_64;
                          goto LABEL_219;
                        }
                        v59 = 336;
                      }
                      v30 = -1073741492;
                      v76 = 1;
                      SetFailureLocation(a8, 1, 15, -1073741492, v59);
                      if ( a8 )
                      {
                        *(_DWORD *)(a8 + 280) = v61;
                        *(_DWORD *)(a8 + 284) = v15;
                        *(_QWORD *)(a8 + 288) = v17;
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v63);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, v63);
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v62);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, v62);
                      goto LABEL_63;
                    }
                    v76 = 1;
                    v30 = -1073741492;
                    v14 = 1;
                    SetFailureLocation(a8, 1, 15, -1073741492, 288);
                    if ( a8 )
                    {
                      *(_DWORD *)(a8 + 280) = v61;
                      *(_DWORD *)(a8 + 284) = *(_DWORD *)(v28 + 4);
                      *(_QWORD *)(a8 + 288) = v28;
                    }
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v62);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, v62);
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      goto LABEL_236;
                  }
                  else
                  {
                    v76 = 1;
                    v30 = -1073741492;
                    v14 = 1;
                    SetFailureLocation(a8, 1, 15, -1073741492, 272);
                    if ( a8 )
                    {
                      *(_DWORD *)(a8 + 280) = v61;
                      *(_DWORD *)(a8 + 284) = v64;
                    }
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v62);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, v62);
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    {
LABEL_236:
                      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v60);
                      goto LABEL_66;
                    }
                  }
                  HvpReleaseCellPaged(BugCheckParameter3, v60);
                  goto LABEL_66;
                }
                if ( !v25 || v25 <= -4 - *(_DWORD *)(v28 - 4) )
                {
LABEL_47:
                  if ( v28 )
                  {
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v62);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, v62);
                  }
LABEL_28:
                  v26 = *(_DWORD *)(v17 + 4);
                  if ( v26 >= 0x80000000 )
                    v26 += 0x80000000;
                  if ( *a10 < v26 )
                    *a10 = v26;
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v60);
                  else
                    HvpReleaseCellPaged(BugCheckParameter3, v60);
                  v14 = v76;
                  v13 = v61 + 1;
                  v11 = v75;
                  ++v61;
                  goto LABEL_35;
                }
                v76 = 1;
                v30 = -1073741492;
                SetFailureLocation(a8, 1, 15, -1073741492, 400);
                if ( a8 )
                {
                  *(_DWORD *)(a8 + 280) = v61;
                  *(_DWORD *)(a8 + 284) = v15;
                  *(_QWORD *)(a8 + 288) = v17;
                }
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(BugCheckParameter3, (__int64)v62);
                else
                  HvpReleaseCellPaged(BugCheckParameter3, v62);
                goto LABEL_86;
              }
LABEL_124:
              v57 = 224;
LABEL_95:
              v76 = 1;
              v30 = -1073741492;
              SetFailureLocation(a8, 1, 15, -1073741492, v57);
              if ( a8 )
              {
                *(_DWORD *)(a8 + 280) = v61;
                *(_DWORD *)(a8 + 284) = v15;
                *(_QWORD *)(a8 + 288) = v17;
              }
LABEL_86:
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v60);
              else
                HvpReleaseCellPaged(BugCheckParameter3, v60);
              v14 = 1;
              goto LABEL_66;
            }
            if ( (v25 & 1) != 0 )
            {
              v58 = 192;
            }
            else
            {
              if ( v25 <= 0xFFFF )
                goto LABEL_25;
              v58 = 208;
            }
LABEL_172:
            v30 = -1073741492;
            SetFailureLocation(a8, 0, 15, -1073741492, v58);
            if ( a8 )
            {
              *(_DWORD *)(a8 + 280) = v61;
              *(_DWORD *)(a8 + 284) = v15;
              *(_QWORD *)(a8 + 288) = v17;
            }
            goto LABEL_174;
          }
          v56 = 150;
        }
        v76 = 1;
        v30 = -1073741492;
        goto LABEL_61;
      }
      v76 = 1;
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
      v32 = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, v67);
    else
      v32 = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, v67);
    v33 = v32;
    if ( !v32 )
    {
      v30 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 16);
      return v30;
    }
    v30 = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)BugCheckParameter4, 0);
    if ( (v30 & 0x80000000) != 0 )
      break;
    v30 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v33 + 40), 0);
    if ( (v30 & 0x80000000) != 0 )
    {
      v53 = 40;
      goto LABEL_247;
    }
    --*(_DWORD *)(v33 + 36);
    v13 = v61;
    v11 = --v75;
    memmove(v72, (const void *)(v74 + 4LL * (v61 + 1)), 4LL * (v75 - v61));
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v67);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v67);
LABEL_35:
    a2 = v73;
    a3 = v74;
  }
  v53 = 24;
LABEL_247:
  SetFailureLocation(a8, 0, 15, v30, v53);
  v50 = v67;
LABEL_175:
  v51 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
LABEL_176:
  if ( v51 )
    HvpReleaseCellPaged(BugCheckParameter3, v50);
  else
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v50);
  return v30;
}
