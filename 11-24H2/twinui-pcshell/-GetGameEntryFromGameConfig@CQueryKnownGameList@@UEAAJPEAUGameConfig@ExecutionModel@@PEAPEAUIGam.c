/*
 * XREFs of ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180109510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x1801093A4 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180109AE0 (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x1801E0248 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x180238E28 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D50F8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x1806CA270 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromGameConfig(
        CQueryKnownGameList *this,
        struct ExecutionModel::GameConfig *a2,
        struct KnownGameList::IGameEntry **a3)
{
  const unsigned __int16 *v5; // rcx
  __int64 v6; // rax
  int TOCIndexByIdentifier; // eax
  unsigned int v8; // ebx
  struct KnownGameList::IEnumerateEntries **v9; // rsi
  struct KnownGameList::IEnumerateEntries **v10; // rbx
  int v11; // eax
  int v12; // edi
  unsigned int v13; // edi
  int EnumerateEntriesInstance; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64 *); // rsi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r15d
  int v20; // edi
  unsigned int v21; // r14d
  struct localeinfo_struct *locale; // r12
  bool v23; // zf
  int v24; // edi
  wint_t v25; // ax
  const struct std::nothrow_t *v26; // rdx
  unsigned int v27; // esi
  const unsigned __int16 *v28; // r9
  unsigned int k; // eax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  struct KnownGameList::IEnumerateEntries **v35; // rax
  const struct std::nothrow_t *v36; // rdx
  int v37; // eax
  __int64 v38; // rdx
  unsigned int i; // eax
  unsigned int j; // eax
  __int64 v41; // r8
  int v42; // eax
  unsigned __int16 *v43; // rax
  struct KnownGameList::IGameEntry **v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rcx
  const struct std::nothrow_t *v47; // rdx
  __int64 v48; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 *v51; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v52; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+58h] [rbp-A8h] BYREF
  int v54; // [rsp+5Ch] [rbp-A4h] BYREF
  KnownGameList *v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  KnownGameList *v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  struct KnownGameList::IGameEntry **v59; // [rsp+80h] [rbp-80h]
  struct KnownGameList::IEnumerateEntries **v60; // [rsp+88h] [rbp-78h]
  struct KnownGameList::IEnumerateEntries *v61[512]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10D8h] [rbp+FD8h]

  v59 = a3;
  *a3 = 0LL;
  v5 = (const unsigned __int16 *)*((_QWORD *)a2 + 3);
  v56 = (__int64)v5;
  v6 = -1LL;
  do
    ++v6;
  while ( v5[v6] );
  v58 = v6;
  v49 = 0;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, v5, &v49);
  v8 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v8;
  }
  v9 = v61;
  v10 = 0LL;
  v60 = 0LL;
  LODWORD(v51) = 4096;
  v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned __int8 **))(*(_QWORD *)this + 96LL))(
          this,
          v49,
          v61,
          &v51);
  v12 = v11;
  if ( !v11 )
    goto LABEL_5;
  if ( v11 != -2147024774 )
  {
    if ( v11 >= 0 )
      return (unsigned int)v12;
    v33 = (unsigned int)v11;
    v34 = 398LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v33);
    return (unsigned int)v12;
  }
  v35 = (struct KnownGameList::IEnumerateEntries **)operator new[](
                                                      (unsigned int)v51,
                                                      (const struct std::nothrow_t *)&std::nothrow);
  v9 = v35;
  v10 = v35;
  v60 = v35;
  if ( !v35 )
  {
    v12 = -2147024882;
    v33 = 2147942414LL;
    v34 = 403LL;
    goto LABEL_36;
  }
  v37 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned __int8 **))(*(_QWORD *)this + 96LL))(
          this,
          v49,
          v35,
          &v51);
  v12 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x197,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v37);
LABEL_38:
    operator delete(v10, v36);
    return (unsigned int)v12;
  }
LABEL_5:
  v50 = 0LL;
  v13 = (unsigned int)v51;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v50,
                               v9,
                               (unsigned __int8 *)v13);
  v12 = EnumerateEntriesInstance;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
LABEL_46:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    if ( !v10 )
      return (unsigned int)v12;
    goto LABEL_38;
  }
  v48 = 0LL;
  while ( 1 )
  {
LABEL_7:
    v15 = v50;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v50 + 24LL);
    v17 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v16(v15, &v48);
    if ( v18 )
    {
      if ( v18 != 1 )
      {
        v44 = v59;
        goto LABEL_80;
      }
LABEL_84:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v48);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
      goto LABEL_29;
    }
    v57 = 0LL;
    v53 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, KnownGameList **, unsigned int *))(*(_QWORD *)v48 + 24LL))(
            v48,
            &v57,
            &v53);
    if ( v12 < 0 )
    {
      v38 = 424LL;
LABEL_44:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v12);
LABEL_45:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v48);
      goto LABEL_46;
    }
    v19 = v53;
    v55 = v57;
    v20 = 0;
    v21 = 0;
    locale = _create_locale(0, "C");
    while ( 1 )
    {
      v23 = v21 == v19;
      if ( v21 >= v19 )
        break;
      if ( v21 < (unsigned int)v58 )
      {
        v24 = _towlower_l(*((_WORD *)v55 + v21), locale);
        v25 = _towlower_l(*(_WORD *)(v56 + 2LL * v21++), locale);
        v20 = v24 - v25;
        if ( !v20 )
          continue;
      }
      if ( v20 )
        goto LABEL_16;
      v23 = v21 == v19;
      break;
    }
    if ( v23 )
    {
      if ( v21 != (_DWORD)v58 )
        v20 = -1;
    }
    else
    {
      v20 = 1;
    }
LABEL_16:
    _free_locale(locale);
    if ( v20 > 0 )
      break;
    if ( !v20 )
    {
      LOWORD(v49) = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v48 + 40LL))(v48, &v49);
      if ( v12 < 0 )
      {
        v38 = 439LL;
        goto LABEL_44;
      }
      v27 = 0;
LABEL_20:
      if ( v27 >= (unsigned __int16)v49 )
      {
        v52 = 0LL;
        v56 = v48;
        v42 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
                &v52,
                &v56);
        v12 = v42;
        if ( v42 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x206,
            (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v42);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v52);
          goto LABEL_45;
        }
        v43 = v52;
        v52 = 0LL;
        v44 = v59;
        *v59 = (struct KnownGameList::IGameEntry *)v43;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v52);
LABEL_80:
        if ( *v44 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v48);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
          if ( v10 )
            operator delete(v10, v47);
          return 0LL;
        }
        goto LABEL_84;
      }
      v54 = 0;
      v55 = 0LL;
      LODWORD(v52) = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, KnownGameList **, unsigned __int16 **))(*(_QWORD *)v48 + 56LL))(
              v48,
              v27,
              &v54,
              &v55,
              &v52);
      if ( v12 < 0 )
      {
        v38 = 451LL;
        goto LABEL_44;
      }
      if ( v54 )
      {
        if ( v54 == 1 )
        {
          for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
          {
            v30 = 2LL * i;
            v31 = *((_QWORD *)a2 + 1);
            if ( *(_DWORD *)(v31 + 16LL * i) == 1 )
              goto LABEL_64;
          }
        }
        else
        {
          if ( v54 != 2 )
          {
            v12 = -2147418113;
            v38 = 490LL;
            goto LABEL_44;
          }
          for ( j = 0; j < *((_DWORD *)a2 + 4); ++j )
          {
            v30 = 2LL * j;
            v31 = *((_QWORD *)a2 + 1);
            if ( *(_DWORD *)(v31 + 16LL * j) == 2 )
            {
LABEL_64:
              v41 = *(_QWORD *)(v31 + 8 * v30 + 8);
              if ( v41 && KnownGameList::StrStrInsensitive(v55, (const unsigned __int16 *)(unsigned int)v52, v41, v28) )
              {
                ++v27;
                goto LABEL_20;
              }
              goto LABEL_7;
            }
          }
        }
      }
      else
      {
        for ( k = 0; k < *((_DWORD *)a2 + 4); ++k )
        {
          v30 = 2LL * k;
          v31 = *((_QWORD *)a2 + 1);
          if ( !*(_DWORD *)(v31 + 16LL * k) )
            goto LABEL_64;
        }
      }
    }
  }
  v45 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v46 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
LABEL_29:
  if ( v10 )
    operator delete(v10, v26);
  return 2147943568LL;
}
