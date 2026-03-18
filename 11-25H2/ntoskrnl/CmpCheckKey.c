/*
 * XREFs of CmpCheckKey @ 0x14088BB2C
 * Callers:
 *     CmpCheckRegistry2 @ 0x14088B690 (CmpCheckRegistry2.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404960C4 (CmpKeySecurityIncrementReferenceCount.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x140878DF0 (HvIsCellAllocated.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x14088DBAC (CmpIncrementCachedSecurityRefcount.c)
 *     CmpCheckValueList @ 0x14088DC10 (CmpCheckValueList.c)
 *     CmpGetIndexElementSize @ 0x140A0BB1C (CmpGetIndexElementSize.c)
 *     CmpCheckLeaf @ 0x140A18B3C (CmpCheckLeaf.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int64 CellFlat; // rax
  __int64 v12; // r12
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int i; // edx
  int v16; // r13d
  __int64 CellPaged; // rax
  char v18; // dl
  char v19; // dl
  _BYTE *v20; // rdx
  unsigned int v21; // ecx
  int v22; // r13d
  unsigned int v23; // edi
  char v24; // r13
  ULONG_PTR v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // r13
  int v29; // eax
  unsigned __int16 v30; // cx
  int v31; // r13d
  int v32; // eax
  unsigned int v33; // edi
  __int64 v34; // rax
  __int64 v35; // r13
  unsigned __int64 v36; // rax
  int v37; // edi
  unsigned int v38; // r13d
  unsigned int v39; // edi
  __int64 v40; // rax
  _DWORD *v41; // r13
  __int64 v42; // r12
  bool v43; // cl
  bool v44; // al
  int v45; // r9d
  int v46; // edx
  int v47; // ecx
  int v48; // eax
  ULONG_PTR v49; // rdx
  __int64 v50; // rax
  __int16 *v51; // r12
  int IndexElementSize; // eax
  int v53; // r10d
  unsigned int v54; // r11d
  unsigned int v55; // r9d
  __int16 v56; // cx
  int v57; // eax
  __int16 v58; // ax
  int v59; // eax
  _BYTE *v60; // r13
  char v61; // al
  char v62; // al
  char v63; // al
  int v64; // r9d
  __int64 *v65; // rdx
  bool v66; // zf
  int v67; // r9d
  int v68; // eax
  unsigned int v69; // edx
  unsigned int v70; // ecx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // r13
  ULONG_PTR v74; // rdx
  __int64 v75; // rax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  __int16 v79; // cx
  unsigned int v80; // r12d
  unsigned int j; // edi
  __int64 v82; // rcx
  __int64 v83; // rax
  char v84; // cl
  ULONG_PTR v85; // rdx
  __int64 v86; // rax
  _WORD *v87; // r12
  int v88; // eax
  int v89; // r10d
  unsigned int v90; // r9d
  int v91; // eax
  ULONG_PTR v93; // [rsp+28h] [rbp-91h]
  int v94; // [rsp+28h] [rbp-91h]
  int v95; // [rsp+28h] [rbp-91h]
  int v96; // [rsp+28h] [rbp-91h]
  int v97; // [rsp+28h] [rbp-91h]
  int v98; // [rsp+58h] [rbp-61h]
  __int64 v99; // [rsp+60h] [rbp-59h] BYREF
  __int64 v100; // [rsp+68h] [rbp-51h] BYREF
  __int64 v101; // [rsp+70h] [rbp-49h]
  __int64 v102; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v103; // [rsp+80h] [rbp-39h]
  __int64 v104; // [rsp+88h] [rbp-31h] BYREF
  __int64 v105; // [rsp+90h] [rbp-29h] BYREF
  __int64 v106; // [rsp+98h] [rbp-21h] BYREF
  unsigned int v107; // [rsp+A0h] [rbp-19h]
  __int64 v108; // [rsp+A8h] [rbp-11h] BYREF
  _DWORD v109[17]; // [rsp+B4h] [rbp-5h]
  char v113; // [rsp+138h] [rbp+7Fh]
  __int64 v114; // [rsp+138h] [rbp+7Fh]

  v105 = 0xFFFFFFFFLL;
  v108 = 0xFFFFFFFFLL;
  v102 = 0xFFFFFFFFLL;
  v100 = 0xFFFFFFFFLL;
  v99 = 0xFFFFFFFFLL;
  v106 = 0LL;
  v113 = 0;
  v101 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  if ( !HvIsCellAllocated(BugCheckParameter3, a3) )
  {
    v96 = 0;
    v37 = -1073741492;
    v67 = -1073741492;
    goto LABEL_175;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, &v108);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a3, &v108);
  v12 = CellFlat;
  if ( !CellFlat )
  {
    v67 = -1073741670;
    v96 = 16;
    v37 = -1073741670;
    goto LABEL_175;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = CellFlat;
  v13 = -4 - *(_DWORD *)(CellFlat - 4);
  if ( v13 - 76 > 0x410 )
  {
    v94 = 32;
    goto LABEL_98;
  }
  v14 = *(unsigned __int16 *)(CellFlat + 72);
  if ( !(_WORD)v14 || v14 + 76 > v13 )
  {
    v94 = 48;
    goto LABEL_98;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
  {
    if ( (unsigned __int16)v14 > 0x100u )
    {
      v94 = 53;
      goto LABEL_98;
    }
    if ( !*(_BYTE *)(CellFlat + 76) )
    {
      v94 = 64;
      goto LABEL_98;
    }
    for ( i = 0; i < v14; ++i )
    {
      if ( *(_BYTE *)(i + CellFlat + 76) == 92 )
      {
        v94 = 1280;
        goto LABEL_98;
      }
    }
  }
  else
  {
    if ( (unsigned __int16)v14 > 0x200u )
    {
      v94 = 69;
      goto LABEL_98;
    }
    if ( (v14 & 1) != 0 )
    {
      v94 = 80;
      goto LABEL_98;
    }
    if ( !*(_WORD *)(CellFlat + 76) )
    {
      v94 = 96;
      goto LABEL_98;
    }
    v69 = 0;
    v70 = v14 >> 1;
    while ( v69 < v70 )
    {
      if ( *(_WORD *)(CellFlat + 2LL * v69 + 76) == 92 )
      {
        v94 = 1296;
        goto LABEL_98;
      }
      ++v69;
    }
  }
  v16 = a2 & 0x20000;
  v98 = a2 & 0x20000;
  if ( *(_WORD *)CellFlat != 27502 )
  {
    v113 = 1;
    v37 = -1073741492;
    if ( v16 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 144);
      goto LABEL_94;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v37 = v48;
    if ( v48 < 0 )
    {
      v94 = 128;
      goto LABEL_193;
    }
    *(_WORD *)v12 = 27502;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v12 + 13) & 3) != 0 )
  {
    v113 = 1;
    v37 = -1073741492;
    if ( v16 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v94 = 148;
      goto LABEL_99;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 146);
    v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v37 = v48;
    if ( v48 < 0 )
    {
      v94 = 150;
      goto LABEL_193;
    }
    *(_BYTE *)(v12 + 13) &= 0xFCu;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  if ( a4 == -1 )
  {
    v60 = (_BYTE *)(v12 + 13);
    v61 = *(_BYTE *)(v12 + 13);
    v20 = (_BYTE *)(v12 + 13);
    *(_QWORD *)&v109[1] = v12 + 13;
    v62 = v61 & 3;
    if ( v62 )
    {
      *(_QWORD *)&v109[1] = v12 + 13;
      if ( v62 != 2 )
      {
        v37 = -1073741492;
        v113 = 1;
        if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
        {
          v94 = 492;
          goto LABEL_99;
        }
        SetFailureLocation(a7, 1, 14, -1073741492, 484);
        v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
        v37 = v48;
        if ( v48 < 0 )
        {
          v94 = 488;
          goto LABEL_193;
        }
        v20 = (_BYTE *)(v12 + 13);
        v63 = *v60 & 0xFE;
        *(_QWORD *)&v109[1] = v12 + 13;
        *v60 = v63 | 2;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
      }
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, a4, &v102);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, a4, &v102);
    v18 = *(_BYTE *)(v12 + 13);
    *(_QWORD *)&v109[1] = v12 + 13;
    v19 = v18 & 3;
    if ( (*(_BYTE *)(CellPaged + 13) & 3) != 3 || v19 == 3 || v19 == 1 )
    {
      if ( CellPaged )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v102);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v102);
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v102);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v102);
      v113 = 1;
      v37 = -1073741492;
      if ( v16 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v94 = 156;
        goto LABEL_99;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 152);
      v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      v37 = v48;
      if ( v48 < 0 )
      {
        v94 = 154;
        goto LABEL_193;
      }
      *(_BYTE *)(v12 + 13) |= 3u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    v20 = (_BYTE *)(v12 + 13);
  }
  v21 = *(unsigned __int16 *)(v12 + 74);
  v22 = *(_DWORD *)(v12 + 44);
  v23 = *(_DWORD *)(v12 + 48);
  v107 = *(_DWORD *)(v12 + 36);
  v109[0] = *(_DWORD *)(v12 + 40);
  v103 = v21;
  LODWORD(v104) = v22;
  if ( !v21 )
  {
    if ( v23 == -1 )
    {
      v24 = v113;
      goto LABEL_33;
    }
    v37 = -1073741492;
    v24 = 1;
    v113 = 1;
    if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v94 = 228;
      goto LABEL_99;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 232);
    v77 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v37 = v77;
    if ( v77 < 0 )
    {
      v94 = 236;
      v45 = v77;
LABEL_411:
      v46 = 1;
LABEL_101:
      SetFailureLocation(a7, v46, 14, v45, v94);
      goto LABEL_94;
    }
    goto LABEL_202;
  }
  if ( v23 != -1 )
  {
    if ( (*v20 & 3) == 1 )
    {
      v24 = 1;
      v113 = 1;
      v97 = 158;
    }
    else
    {
      if ( !HvIsCellAllocated(BugCheckParameter3, v23) )
      {
        v37 = -1073741492;
        v24 = 1;
        v113 = 1;
LABEL_198:
        if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
        {
          v94 = 192;
          goto LABEL_99;
        }
        SetFailureLocation(a7, 1, 14, -1073741492, 160);
        v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
        v37 = v48;
        if ( v48 < 0 )
        {
          v94 = 176;
          goto LABEL_193;
        }
        *(_WORD *)(v12 + 74) = 0;
        v103 = 0;
LABEL_202:
        *(_DWORD *)(v12 + 48) = -1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
        goto LABEL_33;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v83 = HvpGetCellFlat(BugCheckParameter3, v23, &v99);
      else
        v83 = HvpGetCellPaged(BugCheckParameter3, v23, &v99);
      if ( !v83 )
      {
        v45 = -1073741670;
        v94 = 208;
        v37 = -1073741670;
        goto LABEL_100;
      }
      v84 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
      if ( v103 <= -4 - *(_DWORD *)(v83 - 4) )
      {
        if ( v84 )
          HvpReleaseCellFlat(BugCheckParameter3, &v99);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v99);
        v24 = v113;
        goto LABEL_33;
      }
      if ( v84 )
        HvpReleaseCellFlat(BugCheckParameter3, &v99);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v99);
      v97 = 224;
      v24 = 1;
      v113 = 1;
    }
    v37 = -1073741492;
    SetFailureLocation(a7, 1, 14, -1073741492, v97);
    goto LABEL_198;
  }
  v37 = -1073741492;
  v24 = 1;
  v113 = 1;
  if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
  {
    v94 = 157;
    goto LABEL_99;
  }
  SetFailureLocation(a7, 0, 14, -1073741492, 155);
  v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
  v37 = v48;
  if ( v48 < 0 )
  {
    v94 = 159;
    goto LABEL_193;
  }
  v103 = 0;
  *(_WORD *)(v12 + 74) = 0;
LABEL_33:
  if ( (_DWORD)v104 == -1 )
  {
    SetFailureLocation(a7, 1, 14, -1073741492, 256);
    goto LABEL_247;
  }
  v25 = a4;
  v26 = a2 & 0x20000;
  if ( a4 == -1 )
    goto LABEL_134;
  if ( !v98 && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_248;
  if ( a4 == -1 )
  {
LABEL_134:
    v58 = *(_WORD *)(v12 + 2);
    if ( (v58 & 0x50) != 0 )
    {
      v94 = 432;
      goto LABEL_98;
    }
    v113 = v24;
    if ( (v58 & 2) == 0 )
      goto LABEL_136;
    v37 = -1073741492;
    v113 = 1;
    if ( !v98 && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 448);
      v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      v37 = v48;
      if ( v48 < 0 )
      {
        v94 = 464;
        goto LABEL_193;
      }
      *(_WORD *)(v12 + 2) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_136:
      v31 = a2 & 0x20000;
      goto LABEL_50;
    }
    v94 = 480;
LABEL_99:
    v45 = -1073741492;
    goto LABEL_100;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v12 + 16) == (_DWORD)v25 )
      goto LABEL_40;
    v37 = -1073741492;
    v113 = 1;
    if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v94 = 352;
      goto LABEL_99;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 320);
    v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v37 = v48;
    if ( v48 < 0 )
    {
      v94 = 336;
      goto LABEL_193;
    }
    v25 = a4;
    *(_DWORD *)(v12 + 16) = a4;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_40:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v27 = HvpGetCellFlat(BugCheckParameter3, v25, &v102);
    else
      v27 = HvpGetCellPaged(BugCheckParameter3, v25, &v102);
    v28 = v27;
    if ( !v27 )
    {
      v45 = -1073741670;
      v94 = 368;
      v37 = -1073741670;
      goto LABEL_100;
    }
    v29 = *(_DWORD *)(v27 + 52);
    v30 = 2 * *(_WORD *)(v12 + 72);
    if ( (*(_BYTE *)(v12 + 2) & 0x20) == 0 )
      v30 = *(_WORD *)(v12 + 72);
    if ( (unsigned __int16)v29 < (unsigned int)v30 )
    {
      v37 = -1073741492;
      v113 = 1;
      if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 370);
        goto LABEL_397;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 372);
      v78 = HvpMarkCellDirty(BugCheckParameter3, a4, 0);
      v37 = v78;
      if ( v78 < 0 )
      {
        SetFailureLocation(a7, 1, 14, v78, 374);
        goto LABEL_397;
      }
      v79 = 2 * *(_WORD *)(v12 + 72);
      if ( (*(_BYTE *)(v12 + 2) & 0x20) == 0 )
        v79 = *(_WORD *)(v12 + 72);
      *(_WORD *)(v28 + 52) = v79;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
    if ( *(_DWORD *)(v28 + 56) >= v103 )
      goto LABEL_47;
    v37 = -1073741492;
    v113 = 1;
    if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 376);
LABEL_397:
      v66 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v65 = &v102;
      goto LABEL_156;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 378);
    v37 = HvpMarkCellDirty(BugCheckParameter3, a4, 0);
    if ( v37 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v37, 380);
      goto LABEL_397;
    }
    *(_DWORD *)(v28 + 56) = v103;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_47:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v102);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v102);
    v31 = a2 & 0x20000;
    if ( (*(_BYTE *)(v12 + 2) & 0xE) != 0 )
    {
      v113 = 1;
      v37 = -1073741492;
      if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v94 = 416;
        goto LABEL_99;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 384);
      v37 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
      if ( v37 < 0 )
      {
        v94 = 400;
LABEL_419:
        v45 = v37;
LABEL_100:
        v46 = 0;
        goto LABEL_101;
      }
      *(_WORD *)(v12 + 2) &= 0xFFF1u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
LABEL_50:
    v32 = CmpIncrementCachedSecurityRefcount(BugCheckParameter3, *(unsigned int *)(v12 + 44));
    if ( v32 != -1073741275 )
    {
      if ( v32 >= 0 )
      {
        if ( (*(_BYTE *)(v12 + 2) & 0x40) == 0 )
        {
          if ( !v107 )
            goto LABEL_66;
          if ( (**(_BYTE **)&v109[1] & 3) == 1 )
          {
            v47 = 504;
          }
          else
          {
            v33 = v109[0];
            if ( HvIsCellAllocated(BugCheckParameter3, v109[0]) )
            {
              v66 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
              v99 = 0xFFFFFFFFLL;
              if ( v66 )
                v34 = HvpGetCellPaged(BugCheckParameter3, v33, &v99);
              else
                v34 = HvpGetCellFlat(BugCheckParameter3, v33, &v99);
              v35 = v34;
              if ( !v34 )
              {
                v45 = -1073741670;
                v94 = 528;
                v37 = -1073741670;
                goto LABEL_100;
              }
              v36 = 4LL * v107;
              if ( v36 > 0xFFFFFFFF || (unsigned int)v36 > -4 - *(_DWORD *)(v35 - 4) )
              {
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(BugCheckParameter3, &v99);
                else
                  HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v99);
                v113 = 1;
                v47 = 544;
                goto LABEL_237;
              }
              LODWORD(v93) = a3;
              v37 = CmpCheckValueList(BugCheckParameter3, v93, a2, a6, a7, (__int64)&v106, (__int64)&v106 + 4);
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v99);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v99);
              if ( v37 == -2147483606 )
              {
                v113 = 1;
                goto LABEL_66;
              }
              if ( (int)(v37 + 0x80000000) >= 0 && v37 != -1073741492 )
                goto LABEL_94;
              if ( v37 == -1073741492 )
              {
                if ( a7 )
                  *(_QWORD *)(a7 + 248) = v35;
                v113 = 1;
                v47 = 560;
                goto LABEL_108;
              }
LABEL_66:
              while ( !*(_DWORD *)(v12 + 36) )
              {
                if ( *(_DWORD *)(v12 + 40) == -1 )
                {
                  v106 = 0LL;
                  break;
                }
                v113 = 1;
                v47 = 608;
LABEL_237:
                v37 = -1073741492;
LABEL_108:
                SetFailureLocation(a7, 1, 14, -1073741492, v47);
                if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
                {
                  v94 = 592;
                  goto LABEL_99;
                }
                v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
                v37 = v48;
                if ( v48 < 0 )
                {
                  v94 = 576;
                  goto LABEL_193;
                }
                *(_DWORD *)(v12 + 36) = 0;
                *(_DWORD *)(v12 + 40) = -1;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
              }
              if ( *(_DWORD *)(v12 + 60) >= (unsigned int)v106 )
                goto LABEL_68;
              v37 = -1073741492;
              v113 = 1;
              if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
              {
                v94 = 610;
                goto LABEL_99;
              }
              v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
              v37 = v48;
              if ( v48 >= 0 )
              {
                *(_DWORD *)(v12 + 60) = v106;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_68:
                if ( *(_DWORD *)(v12 + 64) < HIDWORD(v106) )
                {
                  v37 = -1073741492;
                  v113 = 1;
                  if ( v98 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
                  {
                    v94 = 614;
                    goto LABEL_99;
                  }
                  v38 = a3;
                  v37 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
                  if ( v37 < 0 )
                  {
                    v94 = 616;
                    goto LABEL_419;
                  }
                  *(_DWORD *)(v12 + 64) = HIDWORD(v106);
                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
                }
                else
                {
                  if ( v98 )
                    goto LABEL_73;
                  v38 = a3;
                }
                if ( *(_DWORD *)(v12 + 60) != (_DWORD)v106 && (int)HvpMarkCellDirty(BugCheckParameter3, v38, 0) >= 0 )
                  *(_DWORD *)(v12 + 60) = v106;
                if ( *(_DWORD *)(v12 + 64) != HIDWORD(v106) && (int)HvpMarkCellDirty(BugCheckParameter3, v38, 0) >= 0 )
                  *(_DWORD *)(v12 + 64) = HIDWORD(v106);
                goto LABEL_73;
              }
              v94 = 612;
LABEL_193:
              v45 = v48;
              goto LABEL_100;
            }
            v47 = 512;
          }
          v113 = 1;
          goto LABEL_237;
        }
        v113 = 1;
        v37 = -1073741492;
        if ( v31 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
        {
          v94 = 648;
          goto LABEL_99;
        }
        v48 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
        v37 = v48;
        if ( v48 >= 0 )
        {
          *(_DWORD *)(v12 + 40) = -1;
          *(_WORD *)(v12 + 2) &= ~0x40u;
          *(_DWORD *)(v12 + 36) = 0;
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_73:
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v108);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v108);
          v39 = a3;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v40 = HvpGetCellFlat(BugCheckParameter3, a3, &v108);
          else
            v40 = HvpGetCellPaged(BugCheckParameter3, a3, &v108);
          v41 = (_DWORD *)v40;
          if ( v40 )
          {
            if ( a7 )
              *(_QWORD *)(a7 + 248) = v40;
            if ( (a3 & 0x80000000) != 0 )
            {
              if ( *(_DWORD *)(v40 + 20) )
              {
                v94 = 704;
                goto LABEL_98;
              }
              goto LABEL_82;
            }
            if ( !*(_DWORD *)(v40 + 20) )
            {
LABEL_82:
              v42 = 0LL;
              goto LABEL_83;
            }
            if ( (*(_BYTE *)(v40 + 13) & 3) == 1 )
            {
              v37 = -1073741492;
              v113 = 1;
              v59 = 712;
            }
            else
            {
              if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v40 + 28)) )
              {
                v37 = -1073741492;
                v113 = 1;
                v59 = 720;
                v42 = 0LL;
LABEL_223:
                SetFailureLocation(a7, 1, 14, -1073741492, v59);
                if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
                  goto LABEL_152;
                SetFailureLocation(a7, 1, 14, -1073741492, 1008);
                v68 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
                v37 = v68;
                if ( v68 < 0 )
                {
                  v95 = 1024;
                  goto LABEL_344;
                }
                v41[7] = -1;
                v39 = a3;
                v41[5] = 0;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_83:
                v43 = v41[8] != -1 || v41[6];
                if ( (a2 & 0x40000) != 0 && v43 )
                {
                  v37 = -1073741492;
LABEL_152:
                  v95 = 1040;
                  v64 = -1073741492;
LABEL_153:
                  SetFailureLocation(a7, 0, 14, v64, v95);
LABEL_93:
                  if ( !v42 )
                    goto LABEL_94;
LABEL_154:
                  v65 = &v100;
                  goto LABEL_155;
                }
                v44 = (a2 & 2) != 0;
                if ( (a2 & 0xD) != 0 && v43 )
                  v44 = 1;
                if ( ((a2 & 8) == 0 || *(_DWORD *)(BugCheckParameter3 + 220) >= 4u) && !v44 )
                {
LABEL_92:
                  v37 = v113 != 0 ? 0x8000002A : 0;
                  goto LABEL_93;
                }
                v68 = HvpMarkCellDirty(BugCheckParameter3, v39, 0);
                v37 = v68;
                if ( v68 >= 0 )
                {
                  v41[6] = 0;
                  if ( (a2 & 4) != 0 && *(_DWORD *)(BugCheckParameter3 + 220) >= 4u )
                    v71 = -1163005939;
                  else
                    v71 = -1;
                  v41[8] = v71;
                  goto LABEL_92;
                }
                v95 = 1056;
LABEL_344:
                v64 = v68;
                goto LABEL_153;
              }
              v49 = (unsigned int)v41[7];
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v50 = HvpGetCellFlat(BugCheckParameter3, v49, &v100);
              else
                v50 = HvpGetCellPaged(BugCheckParameter3, v49, &v100);
              v101 = v50;
              v51 = (__int16 *)v50;
              if ( !v50 )
              {
                v45 = -1073741670;
                v94 = 736;
                v37 = -1073741670;
                goto LABEL_100;
              }
              if ( (unsigned int)(-4 - *(_DWORD *)(v50 - 4)) < 8
                || (CmpGetIndexElementSize(v50),
                    IndexElementSize = CmpGetIndexElementSize(v51),
                    (unsigned __int64)(unsigned int)(v53 * IndexElementSize) + 4 > v55) )
              {
                v37 = -1073741492;
                v113 = 1;
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(BugCheckParameter3, &v100);
                else
                  HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                v42 = 0LL;
                v59 = 752;
                goto LABEL_223;
              }
              if ( (_WORD)v53 )
              {
                if ( a7 )
                  *(_QWORD *)(a7 + 256) = v51;
                v56 = *v51;
                if ( ((*v51 - 26220) & 0xFCFF) != 0 || v56 == 26476 )
                {
                  if ( v56 == 26994 )
                  {
                    v80 = v54;
                    v107 = v54;
                    for ( j = v54; ; j = v103 + 1 )
                    {
                      v82 = v101;
                      v103 = j;
                      if ( j >= *(unsigned __int16 *)(v101 + 2) )
                        break;
                      if ( a7 )
                        *(_DWORD *)(a7 + 264) = j;
                      if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v82 + 4LL * j + 4)) )
                      {
                        v37 = -1073741492;
                        v113 = 1;
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v100);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                        v101 = 0LL;
                        v59 = 848;
                        goto LABEL_222;
                      }
                      v85 = *(unsigned int *)(v101 + 4LL * j + 4);
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        v86 = HvpGetCellFlat(BugCheckParameter3, v85, &v105);
                      else
                        v86 = HvpGetCellPaged(BugCheckParameter3, v85, &v105);
                      v87 = (_WORD *)v86;
                      if ( !v86 )
                      {
                        v37 = -1073741670;
                        SetFailureLocation(a7, 0, 14, -1073741670, 864);
                        goto LABEL_154;
                      }
                      if ( (unsigned int)(-4 - *(_DWORD *)(v86 - 4)) < 8
                        || (CmpGetIndexElementSize(v86),
                            v88 = CmpGetIndexElementSize(v87),
                            (unsigned __int64)(unsigned int)(v89 * v88) + 4 > v90) )
                      {
                        v37 = -1073741492;
                        v113 = 1;
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v105);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v105);
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v100);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                        v101 = 0LL;
                        v59 = 880;
                        goto LABEL_222;
                      }
                      if ( !(_WORD)v89 )
                      {
                        v37 = -1073741492;
                        v113 = 1;
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v105);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v105);
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v100);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                        v101 = 0LL;
                        v59 = 912;
                        goto LABEL_222;
                      }
                      if ( ((*v87 - 26220) & 0xFCFF) != 0 || *v87 == 26476 )
                      {
                        v37 = -1073741492;
                        v113 = 1;
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v105);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v105);
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(BugCheckParameter3, &v100);
                        else
                          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                        v101 = 0LL;
                        v59 = 944;
                        goto LABEL_222;
                      }
                      v91 = CmpCheckLeaf(BugCheckParameter3, a7);
                      v37 = v91;
                      if ( v91 == -2147483606 )
                      {
                        v113 = 1;
                      }
                      else
                      {
                        if ( (int)(v91 + 0x80000000) >= 0 && v91 != -1073741492 )
                          goto LABEL_154;
                        if ( v91 == -1073741492 )
                        {
                          v113 = 1;
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(BugCheckParameter3, &v105);
                          else
                            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v105);
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(BugCheckParameter3, &v100);
                          else
                            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                          v101 = 0LL;
                          v59 = 952;
                          goto LABEL_222;
                        }
                      }
                      v80 = (unsigned __int16)v87[1] + v107;
                      v66 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
                      v107 = v80;
                      if ( v66 )
                        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v105);
                      else
                        HvpReleaseCellFlat(BugCheckParameter3, &v105);
                    }
                    if ( v41[5] == v80 )
                      goto LABEL_128;
                    v37 = -1073741492;
                    v113 = 1;
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v100);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                    v101 = 0LL;
                    v59 = 960;
                  }
                  else
                  {
                    v37 = -1073741492;
                    v113 = 1;
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v100);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                    v101 = 0LL;
                    v59 = 992;
                  }
                }
                else if ( (unsigned __int16)v51[1] == v41[5] )
                {
                  v57 = CmpCheckLeaf(BugCheckParameter3, a7);
                  v37 = v57;
                  if ( v57 == -2147483606 )
                  {
                    v113 = 1;
LABEL_128:
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v100);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                    v39 = a3;
                    goto LABEL_82;
                  }
                  if ( (int)(v57 + 0x80000000) >= 0 && v57 != -1073741492 )
                    goto LABEL_154;
                  if ( v57 != -1073741492 )
                    goto LABEL_128;
                  v113 = 1;
                  v59 = 832;
                }
                else
                {
                  v37 = -1073741492;
                  v113 = 1;
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(BugCheckParameter3, &v100);
                  else
                    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                  v101 = 0LL;
                  v59 = 816;
                }
              }
              else
              {
                v37 = -1073741492;
                v113 = 1;
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(BugCheckParameter3, &v100);
                else
                  HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v100);
                v101 = 0LL;
                v59 = 784;
              }
            }
LABEL_222:
            v42 = v101;
            goto LABEL_223;
          }
          v67 = -1073741670;
          v96 = 688;
          v37 = -1073741670;
LABEL_175:
          SetFailureLocation(a7, 0, 14, v67, v96);
          return (unsigned int)v37;
        }
        v94 = 652;
        goto LABEL_193;
      }
      v37 = -1073741492;
      v94 = 500;
      v45 = -1073741492;
      goto LABEL_411;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 496);
LABEL_247:
    v25 = a4;
    v26 = a2 & 0x20000;
LABEL_248:
    if ( v26 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 304);
      v37 = -1073741492;
      goto LABEL_94;
    }
    v104 = 0xFFFFFFFFLL;
    v99 = 0xFFFFFFFFLL;
    if ( (_DWORD)v25 == -1 )
    {
      v94 = 272;
LABEL_98:
      v37 = -1073741492;
      goto LABEL_99;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v72 = HvpGetCellFlat(BugCheckParameter3, v25, &v104);
    else
      v72 = HvpGetCellPaged(BugCheckParameter3, v25, &v104);
    v73 = v72;
    if ( !v72 )
    {
      v45 = -1073741670;
      v94 = 276;
      v37 = -1073741670;
      goto LABEL_100;
    }
    v74 = *(unsigned int *)(v72 + 44);
    v75 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v74, &v99)
        : HvpGetCellPaged(BugCheckParameter3, v74, &v99);
    v114 = v75;
    if ( !v75 )
      break;
    v76 = HvpMarkCellDirty(BugCheckParameter3, a3, 0);
    v37 = v76;
    if ( v76 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v76, 284);
      goto LABEL_475;
    }
    v37 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v73 + 44), 0);
    if ( v37 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v37, 288);
      goto LABEL_475;
    }
    v37 = CmpKeySecurityIncrementReferenceCount(v114, BugCheckParameter3, *(_DWORD *)(v73 + 44), 1);
    if ( v37 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v37, 292);
LABEL_475:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v99);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v99);
      v66 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v65 = &v104;
      goto LABEL_156;
    }
    *(_DWORD *)(v12 + 44) = *(_DWORD *)(v73 + 44);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v99);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v99);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v104);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v104);
    v25 = a4;
    v113 = 1;
  }
  v37 = -1073741670;
  SetFailureLocation(a7, 0, 14, -1073741670, 280);
  v65 = &v104;
LABEL_155:
  v66 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
LABEL_156:
  if ( v66 )
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v65);
  else
    HvpReleaseCellFlat(BugCheckParameter3, v65);
LABEL_94:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v108);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v108);
  return (unsigned int)v37;
}
