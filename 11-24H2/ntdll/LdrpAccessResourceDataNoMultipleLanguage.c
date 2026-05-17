/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850
 * Callers:
 *     LdrIsResItemExist @ 0x18005F5C0 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x180061480 (LdrpGetRcConfig.c)
 *     LdrpAccessResourceData @ 0x180061D70 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800640E0 (LdrpFindMessageInAlternateModule.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180063F90 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  bool v7; // si
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  int v11; // edx
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // esi
  __int64 FileSizeFromLoadAsDataTable; // rdi
  unsigned __int64 v16; // r15
  unsigned int *v17; // rdx
  unsigned __int64 v18; // rcx
  int v19; // eax
  __int16 v20; // ax
  unsigned int v21; // r8d
  _DWORD *v22; // rax
  unsigned int v23; // r10d
  unsigned int v24; // r9d
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // r8
  unsigned int v32; // r11d
  unsigned int v33; // r9d
  unsigned int v34; // ecx
  __int64 v35; // r9
  _DWORD *v36; // rdx
  unsigned int v37; // r10d
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // r9
  _DWORD *v42; // rdx
  unsigned int v43; // r10d
  unsigned int v44; // r8d
  unsigned int v45; // ecx
  int v46; // eax
  __int16 v47; // cx
  int v48; // ecx
  __int64 v50; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-D8h]
  __int64 v53; // [rsp+58h] [rbp-D0h]
  int v54; // [rsp+60h] [rbp-C8h]
  int v55; // [rsp+64h] [rbp-C4h]
  unsigned int j; // [rsp+68h] [rbp-C0h]
  unsigned int i; // [rsp+6Ch] [rbp-BCh]
  unsigned __int64 v58; // [rsp+70h] [rbp-B8h] BYREF
  int v59; // [rsp+78h] [rbp-B0h]
  _DWORD *v60; // [rsp+80h] [rbp-A8h]
  _DWORD *v61; // [rsp+88h] [rbp-A0h]
  __int64 v62; // [rsp+90h] [rbp-98h]
  __int64 v63; // [rsp+98h] [rbp-90h]
  unsigned __int64 v64; // [rsp+A0h] [rbp-88h]
  _DWORD *v65; // [rsp+A8h] [rbp-80h]
  __int64 v66; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-70h]
  __int128 v68; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v69; // [rsp+D0h] [rbp-58h]
  __int128 v70; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v71; // [rsp+130h] [rbp+8h]

  v71 = a1;
  v5 = a1;
  v50 = a1;
  v7 = 1;
  v8 = a1;
  v67 = a1;
  v51 = 0LL;
  v9 = 0LL;
  v52 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v7 = (a1 & 1) == 0;
    v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v67 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v11 = RtlImageNtHeaderEx(1, v8, 0LL, &v51);
  if ( !v51 )
    goto LABEL_11;
  v12 = *(_WORD *)(v51 + 24);
  if ( v12 == 267 )
  {
    if ( *(_DWORD *)(v51 + 116) > 2u )
    {
      v41 = *(unsigned int *)(v51 + 136);
      if ( (_DWORD)v41 )
      {
        if ( v7 || (unsigned int)v41 < *(_DWORD *)(v51 + 84) )
        {
          v9 = v8 + v41;
          v52 = v8 + v41;
          v11 = 0;
        }
        else
        {
          v54 = 0;
          v60 = 0LL;
          v42 = (_DWORD *)(*(unsigned __int16 *)(v51 + 20) + v51 + 24);
          v60 = v42;
          v43 = *(unsigned __int16 *)(v51 + 6);
          v44 = 0;
          v54 = 0;
          while ( v44 < v43 )
          {
            v45 = v42[3];
            if ( (unsigned int)v41 >= v45 && (unsigned int)v41 < v42[4] + v45 )
            {
              if ( v42 )
                v9 = v41 + v8 + (unsigned int)v42[5] - (unsigned __int64)(unsigned int)v42[3];
              break;
            }
            v42 += 10;
            v60 = v42;
            v54 = ++v44;
          }
          v52 = v9;
          v46 = 0;
          if ( !v9 )
            v46 = -1073741811;
          v11 = v46;
          v5 = v71;
        }
      }
      else
      {
        v11 = -1073741822;
      }
      goto LABEL_10;
    }
  }
  else if ( v12 == 523 && *(_DWORD *)(v51 + 132) > 2u )
  {
    v13 = *(unsigned int *)(v51 + 152);
    if ( (_DWORD)v13 )
    {
      if ( v7 || (unsigned int)v13 < *(_DWORD *)(v51 + 84) )
      {
        v9 = v8 + v13;
        v52 = v8 + v13;
        v11 = 0;
      }
      else
      {
        v9 = RtlAddressInSectionTable(v51, v8, (unsigned int)v13);
        v52 = v9;
        v48 = 0;
        if ( !v9 )
          v48 = -1073741811;
        v11 = v48;
      }
    }
    else
    {
      v11 = -1073741822;
    }
    goto LABEL_10;
  }
  v11 = -1073741811;
LABEL_10:
  v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_11:
  if ( v11 < 0 )
    v9 = 0LL;
  v52 = v9;
  v66 = v9;
  if ( !v9 )
    return 3221225609LL;
  v14 = 0;
  FileSizeFromLoadAsDataTable = 0LL;
  v53 = 0LL;
  v58 = 0LL;
  RtlImageNtHeaderEx(1, v10, 0LL, &v58);
  if ( v58 )
  {
    if ( (v5 & 1) != 0 )
    {
      FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(v5);
      v53 = FileSizeFromLoadAsDataTable;
      if ( !FileSizeFromLoadAsDataTable )
      {
        v68 = 0LL;
        v69 = 0LL;
        v70 = 0LL;
        v14 = ZwQueryVirtualMemory(-1LL, v10, 3LL, &v68, 48LL, 0LL);
        if ( v14 < 0 )
        {
          v14 = -1073741793;
        }
        else
        {
          FileSizeFromLoadAsDataTable = v69;
          v53 = v69;
        }
      }
    }
    else
    {
      v47 = *(_WORD *)(v58 + 24);
      if ( v47 == 267 )
      {
        FileSizeFromLoadAsDataTable = *(unsigned int *)(v58 + 80);
        v53 = FileSizeFromLoadAsDataTable;
      }
      else if ( v47 == 523 )
      {
        FileSizeFromLoadAsDataTable = *(unsigned int *)(v58 + 80);
        v53 = FileSizeFromLoadAsDataTable;
      }
      else
      {
        FileSizeFromLoadAsDataTable = 0LL;
        v53 = 0LL;
        v14 = -1073741701;
      }
    }
    v16 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    v14 = -1073741701;
    v16 = v10;
  }
  v63 = FileSizeFromLoadAsDataTable;
  if ( v14 < 0 )
    return (unsigned int)v14;
  v64 = v16;
  v17 = a2 + 4;
  if ( (unsigned __int64)a2 < v16 || v17 < a2 )
    return (unsigned int)-1073741701;
  v18 = v16;
  if ( !FileSizeFromLoadAsDataTable )
    goto LABEL_26;
  if ( (unsigned __int64)v17 > v16 + FileSizeFromLoadAsDataTable )
    return (unsigned int)-1073741701;
  v18 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_26:
  v14 = 0;
  v19 = 0;
  v59 = 0;
  if ( (v5 & 3) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      v19 = 1;
      v59 = 1;
    }
    v5 = v18;
    v71 = v18;
  }
  if ( v19 == 1 )
  {
    v50 = 0LL;
    RtlImageNtHeaderEx(1, v5, 0LL, &v50);
    v51 = v50;
    if ( !v50 )
      return (unsigned int)-1073741687;
    v20 = *(_WORD *)(v50 + 24);
    if ( v20 == 267 )
    {
      v21 = *(_DWORD *)(v50 + 136);
    }
    else
    {
      if ( v20 != 523 )
        return (unsigned int)-1073741687;
      v21 = *(_DWORD *)(v50 + 152);
    }
    if ( v21 )
    {
      v58 = v5 + v21 - v9;
      i = 0;
      v65 = 0LL;
      v22 = (_DWORD *)(*(unsigned __int16 *)(v50 + 20) + v50 + 24);
      v65 = v22;
      v23 = *(unsigned __int16 *)(v50 + 6);
      v24 = 0;
      for ( i = 0; ; i = v24 )
      {
        if ( v24 >= v23 )
          return (unsigned int)-1073741687;
        v25 = v22[3];
        if ( v21 >= v25 && v21 < v22[4] + v25 )
          break;
        v22 += 10;
        v65 = v22;
        ++v24;
      }
      if ( !v22 )
        return (unsigned int)-1073741687;
      v26 = *a2;
      if ( *a2 > v22[2] )
      {
        v30 = (unsigned int)v22[3];
        j = 0;
        v62 = 0LL;
        v31 = *(unsigned __int16 *)(v51 + 20) + v51 + 24;
        v62 = v31;
        v32 = *(unsigned __int16 *)(v51 + 6);
        v33 = 0;
        for ( j = 0; ; j = v33 )
        {
          if ( v33 >= v32 )
            return (unsigned int)-1073741687;
          v34 = *(_DWORD *)(v31 + 12);
          if ( v26 >= v34 && v26 < *(_DWORD *)(v31 + 16) + v34 )
            break;
          v31 += 40LL;
          v62 = v31;
          ++v33;
        }
        v50 = v31;
        if ( !v31 )
          return (unsigned int)-1073741687;
        v35 = *(unsigned int *)(v31 + 12);
        v55 = 0;
        v61 = 0LL;
        v36 = (_DWORD *)(*(unsigned __int16 *)(v51 + 20) + v51 + 24);
        v61 = v36;
        v37 = *(unsigned __int16 *)(v51 + 6);
        v38 = 0;
        v55 = 0;
        while ( v38 < v37 )
        {
          v39 = v36[3];
          if ( (unsigned int)v35 >= v39 && (unsigned int)v35 < v36[4] + v39 )
          {
            if ( v36 )
            {
              v5 = v71;
              v40 = v35 + v71 + (unsigned int)v36[5] - (unsigned __int64)(unsigned int)v36[3];
              goto LABEL_66;
            }
            break;
          }
          v36 += 10;
          v61 = v36;
          v55 = ++v38;
        }
        v40 = 0LL;
        v5 = v71;
LABEL_66:
        v27 = v66 + *(unsigned int *)(v50 + 12) - v30 - v40 + v58;
        FileSizeFromLoadAsDataTable = v63;
        v16 = v64;
      }
      else
      {
        v5 = v71;
        v27 = v58;
        FileSizeFromLoadAsDataTable = v63;
        v16 = v64;
      }
      goto LABEL_43;
    }
    return (unsigned int)-1073741687;
  }
  v27 = 0LL;
LABEL_43:
  if ( !a3 )
    goto LABEL_49;
  v28 = v5 + *a2 - v27;
  v29 = v28 + a2[1];
  if ( v28 >= v16 && v29 >= v28 && (!FileSizeFromLoadAsDataTable || v29 <= v16 + FileSizeFromLoadAsDataTable) )
  {
    *a3 = v28;
LABEL_49:
    if ( a4 )
      *a4 = a2[1];
    return (unsigned int)v14;
  }
  return (unsigned int)-1073741701;
}
