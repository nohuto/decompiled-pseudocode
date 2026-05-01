/*
 * XREFs of ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003EA60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18003CFA0 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18003D834 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180040B6C (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180041BB8 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180041C88 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     _alloca_probe @ 0x180043010 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromGameConfig(
        CQueryKnownGameList *this,
        struct ExecutionModel::GameConfig *a2,
        struct KnownGameList::IGameEntry **a3)
{
  KnownGameList *v6; // rax
  __int64 v7; // r12
  int TOCIndexByIdentifier; // eax
  unsigned int v9; // ebx
  struct KnownGameList::IEnumerateEntries **v11; // rsi
  struct KnownGameList::IEnumerateEntries **v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rdx
  const struct std::nothrow_t *v16; // rdx
  int v17; // eax
  const struct std::nothrow_t *v18; // rdx
  struct KnownGameList::IEnumerateEntries **v19; // rcx
  int EnumerateEntriesInstance; // eax
  __int64 v21; // rcx
  unsigned int v22; // r15d
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, KnownGameList **); // rsi
  KnownGameList *v25; // rcx
  int v26; // eax
  const struct std::nothrow_t *v27; // rdx
  unsigned int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  const unsigned __int16 *v33; // r9
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  KnownGameList *v42; // rcx
  __int64 v43; // rcx
  const struct std::nothrow_t *v44; // rdx
  KnownGameList *v45; // rcx
  __int64 v46; // rcx
  KnownGameList *v47; // rcx
  __int64 v48; // rcx
  KnownGameList *v49; // rcx
  __int64 v50; // rcx
  KnownGameList *v51; // rcx
  __int64 v52; // rcx
  KnownGameList *v53; // rcx
  __int64 v54; // rcx
  KnownGameList *v55; // rcx
  __int64 v56; // rcx
  KnownGameList *v57; // rcx
  __int64 v58; // rcx
  _DWORD *v59; // [rsp+20h] [rbp-E0h]
  KnownGameList *v60; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v62; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v63[3]; // [rsp+44h] [rbp-BCh] BYREF
  KnownGameList *v64; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v65; // [rsp+58h] [rbp-A8h] BYREF
  int v66; // [rsp+5Ch] [rbp-A4h] BYREF
  KnownGameList *v67; // [rsp+60h] [rbp-A0h] BYREF
  struct KnownGameList::IEnumerateEntries **v68; // [rsp+68h] [rbp-98h]
  _BYTE v69[4096]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10B8h] [rbp+FB8h]

  *a3 = 0LL;
  v6 = (KnownGameList *)*((_QWORD *)a2 + 3);
  v64 = v6;
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)v6 + v7) );
  v62 = 0;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, (const unsigned __int16 *)v6, &v62);
  v9 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v9;
  }
  v11 = (struct KnownGameList::IEnumerateEntries **)v69;
  v12 = 0LL;
  v68 = 0LL;
  v63[0] = 4096;
  v13 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, _BYTE *, _DWORD *))(*(_QWORD *)this + 96LL))(
          this,
          v62,
          v69,
          v63);
  v14 = v13;
  if ( v13 )
  {
    if ( v13 != -2147024774 )
    {
      if ( v13 >= 0 )
        return v14;
      v15 = 398LL;
      goto LABEL_14;
    }
    v11 = (struct KnownGameList::IEnumerateEntries **)operator new[](
                                                        v63[0],
                                                        (const struct std::nothrow_t *)&std::nothrow);
    if ( !v11 )
    {
      v14 = -2147024882;
      v15 = 403LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v14);
      return v14;
    }
    operator delete(0LL, v16);
    v12 = v11;
    v68 = v11;
    v17 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, _DWORD *))(*(_QWORD *)this + 96LL))(
            this,
            v62,
            v11,
            v63);
    v14 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x197,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v17);
      v19 = v11;
      goto LABEL_12;
    }
  }
  v61 = 0LL;
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v61,
                               v11,
                               (unsigned __int8 *)v63[0]);
  v14 = EnumerateEntriesInstance;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    v21 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_19;
  }
  v60 = 0LL;
  v22 = (unsigned int)v64;
  do
  {
LABEL_22:
    v23 = v61;
    v24 = *(__int64 (__fastcall **)(__int64, KnownGameList **))(*(_QWORD *)v61 + 24LL);
    v25 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v24(v23, &v60);
    v28 = 0;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
LABEL_97:
        v57 = v60;
        if ( v60 )
        {
          v60 = 0LL;
          (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v57 + 16LL))(v57);
        }
        v58 = v61;
        if ( v61 )
        {
          v61 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        }
LABEL_101:
        if ( v12 )
          operator delete(v12, v27);
        return 2147943568LL;
      }
LABEL_89:
      if ( *a3 )
      {
        v55 = v60;
        if ( v60 )
        {
          v60 = 0LL;
          (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v55 + 16LL))(v55);
        }
        v56 = v61;
        if ( v61 )
        {
          v61 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
        }
        if ( v12 )
          operator delete(v12, v27);
        return 0LL;
      }
      goto LABEL_97;
    }
    v67 = 0LL;
    v65 = 0;
    v29 = (*(__int64 (__fastcall **)(KnownGameList *, KnownGameList **, unsigned int *))(*(_QWORD *)v60 + 24LL))(
            v60,
            &v67,
            &v65);
    v14 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v29);
      v53 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v53 + 16LL))(v53);
      }
      v54 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      }
      goto LABEL_19;
    }
    v30 = KnownGameList::StrCmpInsensitive(
            v67,
            (const unsigned __int16 *)v65,
            v22,
            (const unsigned __int16 *)(unsigned int)v7,
            (unsigned int)v59);
    if ( v30 > 0 )
    {
      v51 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v51 + 16LL))(v51);
      }
      v52 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      }
      goto LABEL_101;
    }
  }
  while ( v30 );
  LOWORD(v62) = 0;
  v31 = (*(__int64 (__fastcall **)(KnownGameList *, unsigned int *))(*(_QWORD *)v60 + 40LL))(v60, &v62);
  v14 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v31);
    v49 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v49 + 16LL))(v49);
    }
    v50 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    goto LABEL_19;
  }
  if ( !(_WORD)v62 )
  {
LABEL_52:
    *(_QWORD *)&v63[1] = 0LL;
    v64 = v60;
    v40 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
            &v63[1],
            &v64);
    v14 = v40;
    if ( v40 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x206,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v40);
      v41 = *(_QWORD *)&v63[1];
      if ( *(_QWORD *)&v63[1] )
      {
        *(_QWORD *)&v63[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      v42 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v42 + 16LL))(v42);
      }
      v43 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      goto LABEL_19;
    }
    *a3 = *(struct KnownGameList::IGameEntry **)&v63[1];
    goto LABEL_89;
  }
  while ( 1 )
  {
    v66 = 0;
    v64 = 0LL;
    v63[1] = 0;
    v59 = &v63[1];
    v32 = (*(__int64 (__fastcall **)(KnownGameList *, _QWORD, int *, KnownGameList **))(*(_QWORD *)v60 + 56LL))(
            v60,
            v28,
            &v66,
            &v64);
    v14 = v32;
    if ( v32 < 0 )
      break;
    if ( v66 )
    {
      if ( v66 == 1 )
      {
        v37 = 0;
        if ( !*((_DWORD *)a2 + 4) )
          goto LABEL_22;
        v35 = *((_QWORD *)a2 + 1);
        while ( 1 )
        {
          v36 = 2LL * v37;
          if ( *(_DWORD *)(v35 + 16LL * v37) == 1 )
            break;
          if ( ++v37 >= *((_DWORD *)a2 + 4) )
            goto LABEL_22;
        }
      }
      else
      {
        if ( v66 != 2 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1EA,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8000FFFFLL);
          v45 = v60;
          if ( v60 )
          {
            v60 = 0LL;
            (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v45 + 16LL))(v45);
          }
          v46 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
          }
          if ( v12 )
            operator delete(v12, v44);
          return 2147549183LL;
        }
        v38 = 0;
        if ( !*((_DWORD *)a2 + 4) )
          goto LABEL_22;
        v35 = *((_QWORD *)a2 + 1);
        while ( 1 )
        {
          v36 = 2LL * v38;
          if ( *(_DWORD *)(v35 + 16LL * v38) == 2 )
            break;
          if ( ++v38 >= *((_DWORD *)a2 + 4) )
            goto LABEL_22;
        }
      }
    }
    else
    {
      v34 = 0;
      if ( !*((_DWORD *)a2 + 4) )
        goto LABEL_22;
      v35 = *((_QWORD *)a2 + 1);
      while ( 1 )
      {
        v36 = 2LL * v34;
        if ( !*(_DWORD *)(v35 + 16LL * v34) )
          break;
        if ( ++v34 >= *((_DWORD *)a2 + 4) )
          goto LABEL_22;
      }
    }
    v39 = *(_QWORD *)(v35 + 8 * v36 + 8);
    if ( !v39 || !KnownGameList::StrStrInsensitive(v64, (const unsigned __int16 *)v63[1], v39, v33) )
      goto LABEL_22;
    if ( ++v28 >= (unsigned __int16)v62 )
      goto LABEL_52;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C3,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v32);
  v47 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v47 + 16LL))(v47);
  }
  v48 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
LABEL_19:
  if ( v12 )
  {
    v19 = v12;
LABEL_12:
    operator delete(v19, v18);
  }
  return v14;
}
