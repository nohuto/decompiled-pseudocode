/*
 * XREFs of bAddFlEntry @ 0x1400B8A30
 * Callers:
 *     BuildAndLoadLinkedFontRoutine @ 0x1400B7D40 (BuildAndLoadLinkedFontRoutine.c)
 *     GreEudcLoadLinkW @ 0x14030C258 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1400B907C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1400B93D0 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?ParseFontScaleFactor@@YA_NPEBGPEAJ@Z @ 0x1400B9464 (-ParseFontScaleFactor@@YA_NPEBGPEAJ@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B94E0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BFAE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1400FDC0C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401B7374 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

__int64 __fastcall bAddFlEntry(wchar_t *a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  struct PFF *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct PFF *v10; // rbx
  __int64 v11; // r14
  _QWORD *v12; // rsi
  const wchar_t *v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdx
  wchar_t *v16; // rcx
  __int64 v17; // rdi
  wchar_t v18; // ax
  wchar_t *v19; // rax
  const wchar_t *v20; // rdi
  unsigned int v21; // r8d
  wchar_t *v22; // r15
  wchar_t *v23; // rdi
  struct PFF *v24; // r13
  struct _FLENTRY *BaseFontEntry; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // r12
  _QWORD *v28; // rdi
  _QWORD *v29; // rcx
  int v31; // eax
  wchar_t *v32; // rdi
  wchar_t *v33; // rdi
  unsigned int v34; // r12d
  int v35; // eax
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned int v39; // edi
  unsigned __int16 *v40; // rax
  unsigned __int16 *v41; // r15
  int v42; // edi
  PFTOBJ *v43; // rcx
  __int64 *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 i; // rcx
  _QWORD *v48; // r14
  _QWORD *v49; // rax
  unsigned int v50; // edi
  __int64 v51; // rax
  PFTOBJ *v52; // rcx
  struct PFF **v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  size_t v56; // [rsp+30h] [rbp-99h]
  void *v57; // [rsp+78h] [rbp-51h]
  struct PFF *v58; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v59; // [rsp+90h] [rbp-39h] BYREF
  __int64 v60; // [rsp+98h] [rbp-31h]
  __int128 *v61; // [rsp+A0h] [rbp-29h] BYREF
  wchar_t *v62; // [rsp+A8h] [rbp-21h]
  const wchar_t *v63; // [rsp+B0h] [rbp-19h]
  int v64[4]; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v65; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v66[8]; // [rsp+D8h] [rbp+Fh] BYREF

  v6 = (struct PFF *)Win32AllocPoolZInit(1104LL, 1886221383LL);
  v58 = v6;
  v10 = v6;
  if ( !v6 )
  {
    EngSetLastError(8u);
LABEL_80:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v58);
    return 0LL;
  }
  v11 = 0LL;
  v57 = 0LL;
  v12 = 0LL;
  v13 = (const wchar_t *)((char *)v6 + 520);
  v14 = *(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96);
  v60 = v14;
  *(_DWORD *)(v14 + 13512) = 1;
  if ( a5 )
    *a5 = 0LL;
  v15 = 292LL;
  v16 = (wchar_t *)v13;
  v17 = a2 - (_QWORD)v13;
  do
  {
    if ( v15 == -2147483354 )
      break;
    v18 = *(wchar_t *)((char *)v16 + v17);
    if ( !v18 )
      break;
    *v16++ = v18;
    --v15;
  }
  while ( v15 );
  v19 = v16 - 1;
  if ( v15 )
    v19 = v16;
  *v19 = 0;
  if ( !v15 )
  {
    if ( v10 )
      Win32FreePool(v10);
    return 0LL;
  }
  v63 = v13;
  *(_OWORD *)v64 = 0LL;
  v20 = &v13[wcscspn(v13, L",")];
  if ( !*v20 )
    goto LABEL_37;
  *v20 = 0;
  v22 = (wchar_t *)&v20[wcsspn(v20 + 1, L" ") + 1];
  if ( iswdigit(*v22) )
  {
LABEL_34:
    v32 = &v22[wcscspn(v22, L",")];
    if ( !*v32 )
      goto LABEL_80;
    *v32 = 0;
    v33 = &v32[wcsspn(v32 + 1, L" ") + 1];
    if ( !ParseFontScaleFactor(v22, &v64[2]) || !ParseFontScaleFactor(v33, &v64[3]) )
      goto LABEL_80;
LABEL_37:
    v22 = *(wchar_t **)v64;
    goto LABEL_14;
  }
  *(_QWORD *)v64 = v22;
  v23 = &v22[wcscspn(v22, L",")];
  if ( *v23 )
  {
    *v23 = 0;
    v22 = &v23[wcsspn(v23 + 1, L" ") + 1];
    goto LABEL_34;
  }
LABEL_14:
  if ( !(unsigned int)bAppendSysDirectory((unsigned __int16 *)v10, v13, v21)
    || !_wcsicmp((const wchar_t *)v10, (const wchar_t *)(v14 + 13544)) )
  {
    goto LABEL_80;
  }
  v24 = (struct PFF *)(v14 + 14120);
  v58 = v24;
  if ( *(struct PFF **)v24 == v24 )
    goto LABEL_38;
  BaseFontEntry = FindBaseFontEntry(a1);
  v11 = (__int64)BaseFontEntry;
  if ( !BaseFontEntry )
    goto LABEL_38;
  v26 = (_QWORD *)((char *)BaseFontEntry + 16);
  v27 = (_QWORD *)*v26;
  if ( (_QWORD *)*v26 == v26 )
    goto LABEL_38;
  while ( 1 )
  {
    v28 = (_QWORD *)v27[4];
    if ( !_wcsicmp(*(const wchar_t **)(*v28 + 24LL), (const wchar_t *)v10) )
    {
      v31 = *((_DWORD *)v27 + 5) & 1;
      if ( !v22 )
        goto LABEL_28;
      if ( v31 )
        break;
    }
LABEL_20:
    v27 = (_QWORD *)*v27;
    v29 = 0LL;
    if ( v27 == (_QWORD *)(v11 + 16) )
      goto LABEL_21;
  }
  v31 = _wcsicmp((const wchar_t *)(v28[4] + *(int *)(v28[4] + 8LL)), v22);
LABEL_28:
  if ( v31 )
    goto LABEL_20;
  v29 = v27;
LABEL_21:
  v12 = 0LL;
  v24 = v58;
  if ( v29 )
  {
    if ( v10 )
      Win32FreePool(v10);
    return 1LL;
  }
LABEL_38:
  v59 = 0;
  v65 = 0LL;
  v62 = v22;
  v66[0] = *(_QWORD *)(v60 + 20416);
  v61 = &v65;
  v34 = a3 != 0 ? 8 : 10;
  if ( v22 )
  {
    v35 = _wcsicmp(v22, L"Segoe UI Symbol");
    v22 = 0LL;
    if ( !v35 )
      v34 |= 0x4000u;
  }
  if ( v11 )
  {
    v36 = 0LL;
    goto LABEL_43;
  }
  v51 = Win32AllocPool(112LL, 1718382187LL);
  v57 = (void *)v51;
  v11 = v51;
  v36 = (void *)v51;
  if ( !v51 )
    goto LABEL_62;
  if ( (int)StringCchCopyW((unsigned __int16 *)(v51 + 32), 0x21uLL, a1) >= 0 )
  {
LABEL_43:
    v37 = Win32AllocPool(48LL, 1718382187LL);
    v12 = (_QWORD *)v37;
    if ( v37 )
    {
      v38 = -1LL;
      *(_DWORD *)(v37 + 24) = v64[2];
      *(_DWORD *)(v37 + 28) = v64[3];
      v58 = (struct PFF *)v22;
      do
        ++v38;
      while ( *((_WORD *)v10 + v38) != (_WORD)v22 );
      v39 = v38 + 1;
      if ( v39 <= 0x1388000 )
      {
        v40 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v39);
        v41 = v40;
        if ( v40 )
        {
          cCapString(v40, (const unsigned __int16 *)v10, v39);
          LODWORD(v56) = 0;
          v42 = PUBLIC_PFTOBJ::bLoadFonts(
                  (PUBLIC_PFTOBJ *)v66,
                  v41,
                  v39,
                  1u,
                  0LL,
                  v56,
                  &v59,
                  v34,
                  &v58,
                  0,
                  0,
                  (struct _EUDCLOAD *)&v61,
                  0,
                  0);
          FreeTmpBuffer(v41);
          if ( v42 )
          {
            if ( (_QWORD)v65 )
            {
              v44 = (__int64 *)&v65;
              v45 = 2LL;
              do
              {
                v46 = *v44++;
                *(_DWORD *)(v46 + 12) |= 0x200u;
                --v45;
              }
              while ( v45 );
              if ( v57 )
              {
                *(_QWORD *)(v11 + 100) = 0LL;
                *(_QWORD *)(v11 + 24) = v11 + 16;
                *(_QWORD *)(v11 + 16) = v11 + 16;
                v53 = (struct PFF **)*((_QWORD *)v24 + 1);
                if ( *v53 != v24 )
                  goto LABEL_59;
                *(_QWORD *)(v11 + 8) = v53;
                *(_QWORD *)v11 = v24;
                *v53 = (struct PFF *)v11;
                v54 = v60;
                *((_QWORD *)v24 + 1) = v11;
                ++*(_DWORD *)(v54 + 14112);
                if ( a5 )
                  *a5 = v11;
                ++*(_DWORD *)(v54 + 14108);
              }
              for ( i = 0LL; i < 2; ++i )
                v12[i + 4] = v66[i - 2];
              *((_DWORD *)v12 + 4) = a3;
              *((_DWORD *)v12 + 5) = 0;
              if ( v62 )
                *((_DWORD *)v12 + 5) = 1;
              ++*(_DWORD *)(v11 + 100);
              ++*(_DWORD *)(v11 + 104);
              v48 = (_QWORD *)(v11 + 16);
              if ( a4 < 0 )
              {
                v49 = (_QWORD *)v48[1];
                if ( (_QWORD *)*v49 != v48 )
                  goto LABEL_59;
                *v12 = v48;
                v12[1] = v49;
                *v49 = v12;
                v48[1] = v12;
LABEL_71:
                v50 = 1;
                goto LABEL_67;
              }
              v55 = *v48;
              if ( *(_QWORD **)(*v48 + 8LL) == v48 )
              {
                *v12 = v55;
                v12[1] = v48;
                *(_QWORD *)(v55 + 8) = v12;
                *v48 = v12;
                goto LABEL_71;
              }
LABEL_59:
              __fastfail(3u);
            }
            PFTOBJ::bUnloadEUDCFont(v43, (unsigned __int16 *)v10);
          }
        }
      }
      v36 = v57;
    }
LABEL_62:
    if ( v36 )
      goto LABEL_63;
    goto LABEL_64;
  }
  PFTOBJ::bUnloadEUDCFont(v52, (unsigned __int16 *)v10);
LABEL_63:
  Win32FreePool(v36);
LABEL_64:
  if ( v12 )
    Win32FreePool(v12);
  v50 = 0;
LABEL_67:
  if ( v10 )
    Win32FreePool(v10);
  return v50;
}
