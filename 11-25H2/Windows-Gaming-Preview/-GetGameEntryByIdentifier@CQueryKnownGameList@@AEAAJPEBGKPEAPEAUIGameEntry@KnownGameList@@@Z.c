/*
 * XREFs of ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DD24
 * Callers:
 *     ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E840 (-GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003EFA0 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18003CDF0 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18003D684 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F314 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003FDAC (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800400B4 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x1800409BC (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180041A08 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180041AD8 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     _alloca_probe @ 0x180042E60 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CQueryKnownGameList::GetGameEntryByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct KnownGameList::IGameEntry **a4)
{
  unsigned __int16 *v5; // r15
  __int64 v6; // rax
  int TOCIndexByIdentifier; // eax
  unsigned int v8; // ebx
  struct KnownGameList::IEnumerateEntries **v10; // rsi
  struct KnownGameList::IEnumerateEntries **v11; // rdi
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  int v16; // eax
  const struct std::nothrow_t *v17; // rdx
  struct KnownGameList::IEnumerateEntries **v18; // rcx
  int EnumerateEntriesInstance; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  unsigned __int16 *v23; // rsi
  unsigned __int16 *v24; // r14
  __int64 v25; // r12
  __int64 (__fastcall *v26)(__int64, __int64 *); // r13
  const struct std::nothrow_t *v27; // rdx
  int v28; // r13d
  int v29; // eax
  unsigned int v30; // r12d
  unsigned int v31; // r13d
  int v32; // eax
  const struct std::nothrow_t *v33; // rdx
  int v34; // eax
  int v35; // eax
  const unsigned __int16 *v36; // r9
  int ProcessArgsByPID; // eax
  const struct std::nothrow_t *v38; // rdx
  unsigned __int16 *v39; // r12
  unsigned int v40; // r8d
  int ProcessWorkingDirectoryByPID; // eax
  const struct std::nothrow_t *v42; // rdx
  unsigned __int16 *v43; // r12
  int ProcessParentDirectoryByPID; // eax
  const struct std::nothrow_t *v45; // rdx
  unsigned __int16 *v46; // r12
  __int64 v47; // r12
  __int64 v48; // rcx
  int v49; // eax
  const struct std::nothrow_t *v50; // rdx
  unsigned __int16 *v51; // rcx
  const struct std::nothrow_t *v52; // rdx
  const struct std::nothrow_t *v53; // rdx
  const struct std::nothrow_t *v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  const struct std::nothrow_t *v57; // rdx
  const struct std::nothrow_t *v58; // rdx
  const struct std::nothrow_t *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rcx
  const struct std::nothrow_t *v62; // rdx
  const struct std::nothrow_t *v63; // rdx
  const struct std::nothrow_t *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  const struct std::nothrow_t *v67; // rdx
  const struct std::nothrow_t *v68; // rdx
  const struct std::nothrow_t *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rcx
  const struct std::nothrow_t *v72; // rdx
  const struct std::nothrow_t *v73; // rdx
  const struct std::nothrow_t *v74; // rdx
  const struct std::nothrow_t *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  const struct std::nothrow_t *v78; // rdx
  const struct std::nothrow_t *v79; // rdx
  const struct std::nothrow_t *v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rcx
  const struct std::nothrow_t *v83; // rdx
  const struct std::nothrow_t *v84; // rdx
  const struct std::nothrow_t *v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rcx
  const struct std::nothrow_t *v88; // rdx
  const struct std::nothrow_t *v89; // rdx
  const struct std::nothrow_t *v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rcx
  const struct std::nothrow_t *v93; // rdx
  const struct std::nothrow_t *v94; // rdx
  const struct std::nothrow_t *v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rcx
  struct KnownGameList::IGameEntry **v98; // rcx
  const struct std::nothrow_t *v99; // rdx
  const struct std::nothrow_t *v100; // rdx
  const struct std::nothrow_t *v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rcx
  const struct std::nothrow_t *v104; // rdx
  const struct std::nothrow_t *v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rcx
  unsigned int *v108; // [rsp+20h] [rbp-E0h]
  __int64 v109; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v110; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v111; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v112; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v113; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v114; // [rsp+54h] [rbp-ACh]
  unsigned int v115; // [rsp+58h] [rbp-A8h] BYREF
  int v116; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v117; // [rsp+60h] [rbp-A0h] BYREF
  int v118; // [rsp+64h] [rbp-9Ch]
  CQueryKnownGameList *v119; // [rsp+68h] [rbp-98h]
  unsigned int v120[2]; // [rsp+70h] [rbp-90h] BYREF
  KnownGameList *v121; // [rsp+78h] [rbp-88h] BYREF
  KnownGameList *v122; // [rsp+80h] [rbp-80h] BYREF
  struct KnownGameList::IGameEntry **v123; // [rsp+88h] [rbp-78h]
  struct KnownGameList::IEnumerateEntries **v124; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v125; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v126; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v127; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v128; // [rsp+B0h] [rbp-50h]
  __int64 v129; // [rsp+B8h] [rbp-48h]
  struct KnownGameList::IEnumerateEntries *v130[512]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1118h] [rbp+1018h]

  v123 = a4;
  v114 = a3;
  *(_QWORD *)v120 = a2;
  v119 = this;
  v5 = 0LL;
  *a4 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v125 = (unsigned __int16 *)v6;
  v111 = 0;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, a2, &v111);
  v8 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x286,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v8;
  }
  v10 = v130;
  v11 = 0LL;
  v124 = 0LL;
  v113 = 4096;
  v12 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
          this,
          v111,
          v130,
          &v113);
  v8 = v12;
  if ( v12 )
  {
    if ( v12 != -2147024774 )
    {
      if ( v12 >= 0 )
        return v8;
      v13 = (unsigned int)v12;
      v14 = 654LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v13);
      return v8;
    }
    v10 = (struct KnownGameList::IEnumerateEntries **)operator new[](v113, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v10 )
    {
      v8 = -2147024882;
      v13 = 2147942414LL;
      v14 = 659LL;
      goto LABEL_15;
    }
    operator delete(0LL, v15);
    v11 = v10;
    v124 = v10;
    v16 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
            this,
            v111,
            v10,
            &v113);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x297,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v16);
      v18 = v10;
LABEL_13:
      operator delete(v18, v17);
      return v8;
    }
  }
  v110 = 0LL;
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v110,
                               v10,
                               (unsigned __int8 *)v113);
  v8 = EnumerateEntriesInstance;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29B,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    v20 = v110;
    if ( v110 )
    {
      v110 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( !v11 )
      return v8;
    v18 = v11;
    goto LABEL_13;
  }
  v21 = 0LL;
  v109 = 0LL;
  v22 = 0LL;
  v129 = 0LL;
  v23 = 0LL;
  v126 = 0LL;
  v24 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  do
  {
    while ( 1 )
    {
      v25 = v110;
      v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v110 + 24LL);
      if ( v21 )
      {
        v109 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v28 = v26(v25, &v109);
      v118 = v28;
      if ( v28 )
        goto LABEL_61;
      v121 = 0LL;
      v115 = 0;
      v29 = (*(__int64 (__fastcall **)(__int64, KnownGameList **, unsigned int *))(*(_QWORD *)v109 + 24LL))(
              v109,
              &v121,
              &v115);
      v30 = v29;
      v31 = 0;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A9,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v29);
        operator delete(v5, v93);
        operator delete(v24, v94);
        operator delete(v23, v95);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v96 = v109;
        if ( v109 )
        {
          v109 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
        }
        v97 = v110;
        if ( v110 )
        {
          v110 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 16LL))(v97);
        }
        goto LABEL_127;
      }
      v32 = KnownGameList::StrCmpInsensitive(
              v121,
              (const unsigned __int16 *)v115,
              v120[0],
              (const unsigned __int16 *)(unsigned int)v125,
              (unsigned int)v108);
      if ( v32 > 0 )
      {
        if ( v22 )
          goto LABEL_62;
        operator delete(v5, v33);
        operator delete(v24, v88);
        operator delete(v23, v89);
        v91 = v109;
        if ( v109 )
        {
          v109 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 16LL))(v91);
        }
        v92 = v110;
        if ( v110 )
        {
          v110 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
        }
        goto LABEL_149;
      }
      if ( !v32 )
      {
        LOWORD(v111) = 0;
        v34 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v109 + 40LL))(v109, &v111);
        v30 = v34;
        if ( v34 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2BF,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v34);
          operator delete(v5, v83);
          operator delete(v24, v84);
          operator delete(v23, v85);
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v86 = v109;
          if ( v109 )
          {
            v109 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
          }
          v87 = v110;
          if ( v110 )
          {
            v110 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
          }
          goto LABEL_127;
        }
        v27 = (const struct std::nothrow_t *)(unsigned __int16)v111;
        if ( !(_WORD)v111 || v114 )
          break;
      }
LABEL_70:
      v21 = v109;
    }
    if ( (_WORD)v111 )
    {
      while ( 1 )
      {
        v116 = 0;
        v122 = 0LL;
        v117 = 0;
        v112 = 0LL;
        v108 = &v117;
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, KnownGameList **))(*(_QWORD *)v109 + 56LL))(
                v109,
                v31,
                &v116,
                &v122);
        v30 = v35;
        if ( v35 < 0 )
          break;
        if ( v116 )
        {
          if ( v116 == 1 )
          {
            if ( !v24 )
            {
              ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
                                               v119,
                                               v114,
                                               (const unsigned __int16 **)&v112);
              v30 = ProcessWorkingDirectoryByPID;
              if ( ProcessWorkingDirectoryByPID < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2E3,
                  (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                  (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
                operator delete(v5, v62);
                operator delete(0LL, v63);
                operator delete(v23, v64);
                if ( v22 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
                v65 = v109;
                if ( v109 )
                {
                  v109 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
                }
                v66 = v110;
                if ( v110 )
                {
                  v110 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
                }
                goto LABEL_127;
              }
              v43 = v112;
              if ( v112 )
              {
                operator delete(0LL, v42);
                v24 = v43;
                v127 = v43;
              }
            }
            v40 = (unsigned int)v24;
          }
          else
          {
            if ( v116 != 2 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2F3,
                (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                (const char *)0x8000FFFFLL);
              operator delete(v5, v72);
              operator delete(v24, v73);
              operator delete(v23, v74);
              if ( v22 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
              v76 = v109;
              if ( v109 )
              {
                v109 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
              }
              v77 = v110;
              if ( v110 )
              {
                v110 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
              }
              if ( v11 )
                operator delete(v11, v75);
              return 2147549183LL;
            }
            if ( !v5 )
            {
              ProcessParentDirectoryByPID = CQueryKnownGameList::GetProcessParentDirectoryByPID(
                                              v119,
                                              v114,
                                              (const unsigned __int16 **)&v112);
              v30 = ProcessParentDirectoryByPID;
              if ( ProcessParentDirectoryByPID < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2EC,
                  (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                  (const char *)(unsigned int)ProcessParentDirectoryByPID);
                operator delete(0LL, v67);
                operator delete(v24, v68);
                operator delete(v23, v69);
                if ( v22 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
                v70 = v109;
                if ( v109 )
                {
                  v109 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
                }
                v71 = v110;
                if ( v110 )
                {
                  v110 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
                }
                goto LABEL_127;
              }
              v46 = v112;
              if ( v112 )
              {
                operator delete(0LL, v45);
                v5 = v46;
                v128 = v46;
              }
            }
            v40 = (unsigned int)v5;
          }
        }
        else
        {
          if ( !v23 )
          {
            ProcessArgsByPID = CQueryKnownGameList::GetProcessArgsByPID(v119, v114, (const unsigned __int16 **)&v112);
            v30 = ProcessArgsByPID;
            if ( ProcessArgsByPID < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2DA,
                (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                (const char *)(unsigned int)ProcessArgsByPID);
              operator delete(v5, v57);
              operator delete(v24, v58);
              operator delete(0LL, v59);
              if ( v22 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
              v60 = v109;
              if ( v109 )
              {
                v109 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
              }
              v61 = v110;
              if ( v110 )
              {
                v110 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
              }
              goto LABEL_127;
            }
            v39 = v112;
            if ( v112 )
            {
              operator delete(0LL, v38);
              v23 = v39;
              v126 = v39;
            }
          }
          v40 = (unsigned int)v23;
        }
        if ( !KnownGameList::StrStrInsensitive(v122, (const unsigned __int16 *)v117, v40, v36) )
          goto LABEL_70;
        ++v31;
        v27 = (const struct std::nothrow_t *)(unsigned __int16)v111;
        if ( v31 >= (unsigned __int16)v111 )
          goto LABEL_54;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D4,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v35);
      operator delete(v5, v78);
      operator delete(v24, v79);
      operator delete(v23, v80);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v81 = v109;
      if ( v109 )
      {
        v109 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
      }
      v82 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
      }
      goto LABEL_127;
    }
LABEL_54:
    v21 = v109;
    if ( v22 != v109 )
    {
      v47 = v109;
      if ( v109 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 8LL))(v109);
        v21 = v109;
        v27 = (const struct std::nothrow_t *)(unsigned __int16)v111;
      }
      v48 = v22;
      v22 = v47;
      v129 = v47;
      if ( v48 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
        v21 = v109;
        v27 = (const struct std::nothrow_t *)(unsigned __int16)v111;
      }
    }
  }
  while ( !(_WORD)v27 );
  v28 = v118;
LABEL_61:
  if ( v22 )
  {
LABEL_62:
    v28 = 0;
    v112 = 0LL;
    *(_QWORD *)v120 = v22;
    v49 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
            &v112,
            (struct KnownGameList::IGameEntry **)v120);
    v30 = v49;
    if ( v49 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x315,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v49);
      v51 = v112;
      if ( v112 )
      {
        v112 = 0LL;
        (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
      operator delete(v5, v50);
      operator delete(v24, v52);
      operator delete(v23, v53);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v55 = v109;
      if ( v109 )
      {
        v109 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = v110;
      if ( v110 )
      {
        v110 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
LABEL_127:
      if ( v11 )
        operator delete(v11, v54);
      return v30;
    }
    v98 = v123;
    *v123 = (struct KnownGameList::IGameEntry *)v112;
  }
  else
  {
    v98 = v123;
  }
  if ( v28 != 1 && *v98 )
  {
    operator delete(v5, v27);
    operator delete(v24, v99);
    operator delete(v23, v100);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v102 = v109;
    if ( v109 )
    {
      v109 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
    }
    v103 = v110;
    if ( v110 )
    {
      v110 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
    }
    if ( v11 )
      operator delete(v11, v101);
    return 0LL;
  }
  operator delete(v5, v27);
  operator delete(v24, v104);
  operator delete(v23, v105);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v106 = v109;
  if ( v109 )
  {
    v109 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 16LL))(v106);
  }
  v107 = v110;
  if ( v110 )
  {
    v110 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
  }
LABEL_149:
  if ( v11 )
    operator delete(v11, v90);
  return 2147943568LL;
}
