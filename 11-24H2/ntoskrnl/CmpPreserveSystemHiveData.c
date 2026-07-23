/*
 * XREFs of CmpPreserveSystemHiveData @ 0x1407E26F8
 * Callers:
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x1404FBA20 (_strnicmp.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpCopySyncTree @ 0x1407E2380 (CmpCopySyncTree.c)
 *     CmpWalkPath @ 0x1407E389C (CmpWalkPath.c)
 *     CmpFindValueByName @ 0x14086EAC4 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     CmpSetValueKeyExisting @ 0x140883D24 (CmpSetValueKeyExisting.c)
 *     CmpFindSubKeyByNumber @ 0x140888160 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  WCHAR *v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rax
  unsigned int v8; // r15d
  __int64 CellFlat; // rax
  bool v10; // zf
  __int64 v11; // rbx
  __int64 CellPaged; // rax
  int i; // r14d
  int v14; // r13d
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // r15d
  __int64 *v19; // r14
  _DWORD *v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // r14d
  __int64 v23; // rax
  unsigned int ValueByName; // ebx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  _WORD *v29; // r14
  unsigned int v30; // ebx
  size_t v31; // rbx
  char v32; // r13
  unsigned int j; // r12d
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned int v37; // eax
  __int64 v38; // rax
  unsigned int k; // r13d
  __int64 v40; // rax
  const char *v41; // rcx
  int v42; // eax
  bool v43; // bl
  unsigned int v44; // r15d
  int v45; // r14d
  const WCHAR *v46; // r12
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r14
  unsigned int v50; // r14d
  __int64 v51; // rax
  _DWORD *v52; // rdx
  void *v53; // rcx
  int *v54; // rdx
  size_t Size; // [rsp+28h] [rbp-D8h]
  _DWORD v57[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v58[2]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v59[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v60[2]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v61[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  PCWSTR v64; // [rsp+80h] [rbp-80h]
  PCWSTR SourceString; // [rsp+88h] [rbp-78h]
  _DWORD v66[2]; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  _DWORD v68[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v69[2]; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v71[2]; // [rsp+B8h] [rbp-48h] BYREF
  void *v72; // [rsp+C0h] [rbp-40h] BYREF
  int v73; // [rsp+C8h] [rbp-38h] BYREF
  size_t v74; // [rsp+CCh] [rbp-34h]
  _BYTE v75[4]; // [rsp+D4h] [rbp-2Ch] BYREF
  const wchar_t *v76; // [rsp+D8h] [rbp-28h]
  const wchar_t *v77; // [rsp+E0h] [rbp-20h]
  int v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  int v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+110h] [rbp+10h]
  int v85; // [rsp+114h] [rbp+14h]
  __int64 v86; // [rsp+118h] [rbp+18h]
  int v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+124h] [rbp+24h]
  char v89; // [rsp+12Ch] [rbp+2Ch]
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  PCWSTR v91; // [rsp+140h] [rbp+40h]
  int v92; // [rsp+1A8h] [rbp+A8h] BYREF
  int v93; // [rsp+1ACh] [rbp+ACh]
  WCHAR *Pool2; // [rsp+1B0h] [rbp+B0h]
  int v95; // [rsp+1B8h] [rbp+B8h] BYREF
  int v96; // [rsp+1BCh] [rbp+BCh]

  v91 = L"WPA";
  v64 = L"Control\\FastCache";
  v96 = 0;
  v95 = -1;
  v76 = L"Control\\ProductOptions";
  v61[0] = -1;
  v77 = L"ProductPolicy";
  v4 = 0LL;
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  v61[1] = 0;
  v59[0] = -1;
  v59[1] = 0;
  v6 = *(_DWORD *)(v5 + 36);
  v7 = *(_QWORD *)(a2 + 64);
  v57[0] = -1;
  v57[1] = 0;
  v58[0] = -1;
  v8 = *(_DWORD *)(v7 + 36);
  v58[1] = 0;
  v60[0] = -1;
  v60[1] = 0;
  v92 = -1;
  v93 = 0;
  SourceString = 0LL;
  v66[0] = -1;
  v67 = 0LL;
  v68[0] = -1;
  v68[1] = 0;
  v69[0] = -1;
  v70 = 0LL;
  v71[0] = -1;
  v71[1] = 0;
  v72 = 0LL;
  v73 = -1;
  v74 = 0LL;
  v75[0] = 0;
  v78 = -1;
  v79 = 0LL;
  v80 = -1;
  v81 = 0;
  v82 = -1;
  v83 = 0LL;
  v84 = -1;
  v85 = 0;
  v86 = 0LL;
  v87 = -1;
  v88 = 0LL;
  v89 = 0;
  Pool2 = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  DestinationString = 0LL;
  if ( v6 == -1 || v8 == -1 )
  {
    v17 = -1073741492;
    goto LABEL_19;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v6);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v10 = (*(_BYTE *)(a2 + 140) & 1) == 0;
  v11 = CellFlat;
  v63 = CellFlat;
  if ( v10 )
    CellPaged = HvpGetCellPaged(a2);
  else
    CellPaged = HvpGetCellFlat(a2, v8);
  v62 = CellPaged;
  if ( !v11 || !CellPaged )
  {
    v17 = -1073741670;
    goto LABEL_19;
  }
  for ( i = 0; !i; i = 1 )
  {
    v14 = CmpWalkPath(BugCheckParameter3, v6, v91);
    v15 = CmpWalkPath(a2, v8, v91);
    if ( v14 == -1 || v15 == -1 )
    {
LABEL_17:
      v17 = -1073741492;
LABEL_18:
      v4 = Pool2;
      goto LABEL_19;
    }
    v16 = CmpCopySyncTree(BugCheckParameter3, v14, a2, v15, 2, 1);
    v4 = 0LL;
    v17 = v16;
    if ( v16 < 0 )
      goto LABEL_19;
  }
  v21 = CmpWalkPath(BugCheckParameter3, v6, L"CurrentControlSet");
  v22 = v21;
  if ( v21 == -1 )
  {
    v17 = 0;
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v23 = HvpGetCellFlat(BugCheckParameter3, v21);
  else
    v23 = HvpGetCellPaged(BugCheckParameter3);
  if ( !v23 )
  {
LABEL_29:
    v17 = -1073741670;
    goto LABEL_18;
  }
  ValueByName = CmpFindValueByName(BugCheckParameter3, v23, &CmSymbolicLinkValueName);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v58);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v58);
  if ( ValueByName == -1 )
    goto LABEL_66;
  v25 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, ValueByName)
      : HvpGetCellPaged(BugCheckParameter3);
  v26 = v25;
  if ( !v25 )
    goto LABEL_66;
  if ( *(_DWORD *)(v25 + 12) != 6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v92);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v92);
    goto LABEL_66;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v27 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v25 + 8));
  else
    v27 = HvpGetCellPaged(BugCheckParameter3);
  v28 = v27;
  if ( !v27 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v92);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v92);
    goto LABEL_29;
  }
  v29 = (_WORD *)(v27 + *(unsigned int *)(v26 + 4) - 2LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v92);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v92);
  v30 = 0;
  while ( *v29 != 92 && (unsigned __int64)v29 >= v28 )
  {
    ++v30;
    --v29;
  }
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, 2LL * (v30 + 1), 0x68504D43u);
  v4 = Pool2;
  if ( !Pool2 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v57);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v57);
    v17 = -1073741801;
    goto LABEL_19;
  }
  v31 = v30;
  memmove(Pool2, v29 + 1, v31 * 2);
  v4[v31] = 0;
  v22 = CmpWalkPath(BugCheckParameter3, v6, v4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v57);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v57);
  if ( v22 != -1 )
  {
LABEL_66:
    v32 = 0;
    for ( j = 0; j < 2; ++j )
    {
      v34 = CmpWalkPath(BugCheckParameter3, v22, (&v64)[11 * j]);
      v66[22 * j] = v34;
      if ( v34 != -1 )
      {
        if ( *(_QWORD *)&v66[22 * j - 2] )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v35 = HvpGetCellFlat(BugCheckParameter3, v34);
          else
            v35 = HvpGetCellPaged(BugCheckParameter3);
          *(_QWORD *)&v68[22 * j - 2] = v35;
          v36 = v35;
          if ( !v35 )
            goto LABEL_29;
          RtlInitUnicodeString(&DestinationString, *(PCWSTR *)&v66[22 * j - 2]);
          v37 = CmpFindValueByName(BugCheckParameter3, v36, &DestinationString);
          v69[22 * j] = v37;
          if ( v37 != -1 )
          {
            v32 = 1;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v38 = HvpGetCellFlat(BugCheckParameter3, v37);
            else
              v38 = HvpGetCellPaged(BugCheckParameter3);
            *(_QWORD *)&v71[22 * j - 2] = v38;
            if ( !v38 )
              goto LABEL_29;
            if ( !(unsigned __int8)CmpGetValueData(
                                     BugCheckParameter3,
                                     (__int64)(&v72 + 11 * j),
                                     (__int64)&v75[88 * j],
                                     (__int64)(&v73 + 22 * j)) )
              goto LABEL_17;
          }
        }
        else
        {
          v32 = 1;
        }
      }
    }
    v17 = 0;
    if ( v32 )
    {
      for ( k = 0; k < *(_DWORD *)(v62 + 20); ++k )
      {
        CmpFindSubKeyByNumber(a2);
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          v40 = HvpGetCellFlat(a2, 0LL);
        else
          v40 = HvpGetCellPaged(a2);
        if ( !v40 )
          goto LABEL_29;
        if ( *(_WORD *)(v40 + 72) == 13 )
        {
          v41 = (const char *)(v40 + 76);
          if ( (*(_BYTE *)(v40 + 2) & 0x20) != 0 )
            v42 = strnicmp(v41, "ControlSet000", 0xAuLL);
          else
            v42 = wcsnicmp((const wchar_t *)v41, L"ControlSet000", 0xAuLL);
          v43 = v42 == 0;
          if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
            HvpReleaseCellFlat(a2, &v95);
          else
            HvpReleaseCellPaged(a2, &v95);
          v44 = 0;
          if ( v43 )
          {
            while ( v44 < 2 )
            {
              v45 = v66[22 * v44];
              if ( v45 != -1 )
              {
                v46 = *(const WCHAR **)&v66[22 * v44 - 2];
                if ( !v46 || v69[22 * v44] != -1 )
                {
                  v47 = CmpWalkPath(a2, 0LL, (&v64)[11 * v44]);
                  if ( v47 != -1 )
                  {
                    if ( v46 )
                    {
                      if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                        v48 = HvpGetCellFlat(a2, v47);
                      else
                        v48 = HvpGetCellPaged(a2);
                      v49 = v48;
                      if ( !v48 )
                        goto LABEL_29;
                      RtlInitUnicodeString(&DestinationString, v46);
                      v50 = CmpFindValueByName(a2, v49, &DestinationString);
                      if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(a2, &v95);
                      else
                        HvpReleaseCellPaged(a2, &v95);
                      if ( v50 != -1 )
                      {
                        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                          v51 = HvpGetCellFlat(a2, v50);
                        else
                          v51 = HvpGetCellPaged(a2);
                        if ( !v51 )
                          goto LABEL_29;
                        LODWORD(Size) = *(_DWORD *)&v75[88 * v44 - 4];
                        v17 = CmpSetValueKeyExisting(a2, *(&v72 + 11 * v44), Size, v50 >> 31);
                        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                          HvpReleaseCellFlat(a2, v59);
                        else
                          HvpReleaseCellPaged(a2, v59);
                        if ( v17 < 0 )
                          goto LABEL_18;
                      }
                    }
                    else
                    {
                      CmpCopySyncTree(BugCheckParameter3, v45, a2, v47, 2, 1);
                    }
                  }
                }
              }
              ++v44;
            }
          }
          v17 = 0;
        }
        else if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
        {
          HvpReleaseCellFlat(a2, &v95);
        }
        else
        {
          HvpReleaseCellPaged(a2, &v95);
        }
      }
    }
    goto LABEL_18;
  }
  v17 = 0;
LABEL_19:
  v18 = 0;
  v19 = &v70;
  do
  {
    if ( *(v19 - 3) )
    {
      v20 = &v68[22 * v18];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v20);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v20);
    }
    if ( *v19 )
    {
      v52 = &v71[22 * v18];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v52);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v52);
    }
    v53 = (void *)v19[2];
    if ( v53 )
    {
      if ( *((_BYTE *)v19 + 36) )
      {
        ExFreePoolWithTag(v53, 0);
      }
      else
      {
        v54 = &v73 + 22 * v18;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v54);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v54);
      }
    }
    ++v18;
    v19 += 11;
  }
  while ( v18 < 2 );
  if ( v63 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v60);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v60);
  }
  if ( v62 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, v61);
    else
      HvpReleaseCellPaged(a2, v61);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v17;
}
