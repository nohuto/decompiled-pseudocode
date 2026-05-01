/*
 * XREFs of ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x180107658
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800A90D0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1801068C8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 *     ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x180107164 (-ScanKGLForFSECompat@IsGameManager@@AEAAJXZ.c)
 *     ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x1801F83F8 (-CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800CB440 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     memcpy_s_0 @ 0x1800D2E90 (memcpy_s_0.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180105FA0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180106534 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?FreeGameConfig@@YAXPEAUGameConfig@ExecutionModel@@@Z @ 0x180108130 (-FreeGameConfig@@YAXPEAUGameConfig@ExecutionModel@@@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z @ 0x1802B660C (-IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PEA_N3@Z @ 0x18067ADE4 (-GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IsGameManager::UpdateGameConfigStoreFromKGL(
        IsGameManager *this,
        struct KnownGameList::IGameEntry *a2,
        struct _GUID *a3,
        unsigned int a4,
        bool a5,
        struct Windows::Internal::String *a6,
        struct _GUID *a7)
{
  unsigned int v10; // edi
  unsigned int v11; // r13d
  __int64 v12; // rax
  int v13; // eax
  int v14; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // eax
  void *v18; // rcx
  int v19; // eax
  const char *v20; // r9
  LPVOID v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  DWORD ActiveProcessorCount; // eax
  int GameProfileFromAttribute; // eax
  int v36; // eax
  const char *v37; // r9
  const unsigned __int16 *v38; // rdi
  unsigned __int64 v39; // rcx
  bool v40; // al
  __int64 (__fastcall ***v41)(_QWORD, void **, __m128i *); // rcx
  __int64 *v42; // rcx
  __int64 v43; // rax
  const char *v44; // r9
  __int64 v45; // rax
  __int64 (__fastcall **v46)(_QWORD, _QWORD, _QWORD); // rax
  unsigned int v47; // r13d
  void *v48; // rbx
  __int64 *v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  int v52; // edi
  unsigned int v53; // edi
  void *v54; // rbx
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 *v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  void *v61; // r12
  rsize_t v62; // r14
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rdi
  void *v65; // rax
  _WORD *v66; // rbx
  _WORD *v67; // rax
  __int64 v68; // rcx
  __int64 *v69; // rcx
  __int64 v70; // rax
  int v71; // eax
  __int64 *v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  __int64 *v75; // rcx
  __int64 v76; // rax
  int v77; // eax
  __int64 *v78; // rcx
  __int64 v79; // rax
  int v80; // eax
  unsigned __int64 *v82; // [rsp+20h] [rbp-E0h]
  bool *v83; // [rsp+38h] [rbp-C8h]
  bool v84; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v85[3]; // [rsp+41h] [rbp-BFh] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v87[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v88; // [rsp+64h] [rbp-9Ch] BYREF
  int v89; // [rsp+68h] [rbp-98h] BYREF
  void *v90[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v91; // [rsp+80h] [rbp-80h]
  __int64 v92; // [rsp+90h] [rbp-70h]
  int v93; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v94; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned __int64 v95; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v96; // [rsp+A8h] [rbp-58h] BYREF
  int v97; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v98; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v99; // [rsp+B4h] [rbp-4Ch]
  rsize_t SourceSize; // [rsp+B8h] [rbp-48h]
  Windows::Internal::String *v101[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v102[4]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v103; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v104; // [rsp+F0h] [rbp-10h] BYREF
  char *v105; // [rsp+100h] [rbp+0h] BYREF
  char *v106; // [rsp+108h] [rbp+8h] BYREF
  void *Source; // [rsp+110h] [rbp+10h]
  __m128i v108; // [rsp+120h] [rbp+20h] BYREF
  __int128 v109; // [rsp+130h] [rbp+30h] BYREF
  __int64 v110; // [rsp+140h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v101[0] = a6;
  *(_OWORD *)v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v10 = 0;
  *(_QWORD *)&v109 = 0LL;
  *((_QWORD *)&v109 + 1) = 0x100000001LL;
  v110 = 0x200000002LL;
  v103.m128i_i64[0] = 0LL;
  v11 = 0;
  v104.m128i_i64[0] = 0LL;
  v99 = 0;
  Source = 0LL;
  LODWORD(SourceSize) = 0;
  v94 = 0;
  *(_QWORD *)v102 = 0LL;
  LODWORD(v95) = 0;
  LOBYTE(v85[0]) = 0;
  LODWORD(v90[0]) = *((_DWORD *)this + 11);
  DWORD1(v91) = 1;
  v92 = 32 * (unsigned int)a5;
  if ( a7 )
    *a7 = (struct _GUID)xmmword_180780478;
  v12 = *(_QWORD *)&a3->Data1;
  if ( !*(_QWORD *)&a3->Data1 )
    v12 = *(_QWORD *)a3->Data4;
  if ( !v12 || a4 <= 2 )
  {
    LODWORD(v92) = (32 * a5) | 0x11;
    v87[0] = 0;
    v13 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _WORD *))(*(_QWORD *)a2 + 40LL))(a2, v87);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = (unsigned int)v13;
      v16 = 1565LL;
      goto LABEL_14;
    }
    v17 = v87[0];
    LODWORD(v91) = v87[0];
    if ( v87[0] )
    {
      v18 = CoTaskMemAlloc(16LL * v87[0]);
      v90[1] = v18;
      if ( !v18 )
      {
        v16 = 1571LL;
        goto LABEL_12;
      }
      v17 = v91;
    }
    else
    {
      v18 = v90[1];
    }
    memset_0(v18, 0, 16LL * v17);
    while ( v10 < (unsigned int)v91 )
    {
      HIDWORD(v95) = 0;
      v105 = 0LL;
      v96 = 0;
      v19 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, char *, char **, unsigned int *))(*(_QWORD *)a2 + 56LL))(
              a2,
              v10,
              (char *)&v95 + 4,
              &v105,
              &v96);
      v14 = v19;
      if ( v19 < 0 )
      {
        v15 = (unsigned int)v19;
        v16 = 1582LL;
        goto LABEL_14;
      }
      *((_DWORD *)v90[1] + 4 * v10) = *((_DWORD *)&v109 + 2 * WORD2(v95) + 1);
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        pv,
        v105,
        v96,
        v20);
      v21 = pv[0];
      pv[0] = 0LL;
      *((_QWORD *)v90[1] + 2 * v10 + 1) = v21;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
      if ( !*((_QWORD *)v90[1] + 2 * v10 + 1) )
      {
        v16 = 1587LL;
        goto LABEL_12;
      }
      ++v10;
    }
    LOWORD(v10) = 0;
  }
  v22 = *(_QWORD *)&a3->Data1;
  if ( !*(_QWORD *)&a3->Data1 )
    v22 = *(_QWORD *)a3->Data4;
  if ( v22 )
  {
    v89 = 0;
    v93 = 4;
    v23 = (__int64 *)*((_QWORD *)this + 2);
    v24 = *v23;
    *(struct _GUID *)pv = *a3;
    v25 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *, __int64, int *, int *))(v24 + 64))(v23, pv, 9LL, &v89, &v93);
    v14 = v25;
    if ( v25 < 0 )
    {
      v15 = (unsigned int)v25;
      v16 = 1598LL;
      goto LABEL_14;
    }
    LODWORD(v92) = (v89 != 0) | v92 & 0xFFFFFFFE;
    v93 = 4;
    v26 = (__int64 *)*((_QWORD *)this + 2);
    v27 = *v26;
    *(struct _GUID *)pv = *a3;
    v28 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *, __int64, int *, int *))(v27 + 64))(v26, pv, 13LL, &v89, &v93);
    v14 = v28;
    if ( v28 < 0 )
    {
      v15 = (unsigned int)v28;
      v16 = 1604LL;
      goto LABEL_14;
    }
    LODWORD(v92) = (v89 != 0 ? 0x10 : 0) | v92 & 0xFFFFFFEF;
  }
  v88 = 0;
  v29 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned __int16 *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v88);
  v14 = v29;
  if ( v29 < 0 )
  {
    v15 = (unsigned int)v29;
    v16 = 1610LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v30 = *(_QWORD *)a2;
    if ( (unsigned __int16)v10 >= v88 )
      break;
    v109 = 0LL;
    v110 = 0LL;
    v97 = 0;
    v31 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, int *, __int128 *))(v30 + 64))(
            a2,
            (unsigned __int16)v10,
            &v97,
            &v109);
    v14 = v31;
    if ( v31 < 0 )
    {
      v15 = (unsigned int)v31;
      v16 = 1617LL;
      goto LABEL_14;
    }
    if ( (unsigned __int16)v97 <= 0x104u )
    {
      if ( (unsigned __int16)v97 == 260 )
      {
        v32 = DWORD2(v109) != 0 ? 0x200 : 0;
        v33 = v92 & 0xFFFFFDFF;
      }
      else
      {
        if ( !(_WORD)v97 )
        {
          v103.m128i_i64[0] = *((_QWORD *)&v109 + 1);
          v11 = v110;
          goto LABEL_65;
        }
        switch ( (unsigned __int16)v97 )
        {
          case 2u:
            v104.m128i_i64[0] = *((_QWORD *)&v109 + 1);
            v99 = v110;
            goto LABEL_65;
          case 0x100u:
            v32 = DWORD2(v109) != 0 ? 2 : 0;
            v33 = v92 & 0xFFFFFFFD;
            break;
          case 0x101u:
            v32 = DWORD2(v109) != 0 ? 8 : 0;
            v33 = v92 & 0xFFFFFFF7;
            break;
          case 0x102u:
            v32 = DWORD2(v109) != 0 ? 4 : 0;
            v33 = v92 & 0xFFFFFFFB;
            break;
          case 0x103u:
            v32 = DWORD2(v109) != 0 ? 0x40 : 0;
            v33 = v92 & 0xFFFFFFBF;
            break;
          default:
            goto LABEL_65;
        }
      }
      goto LABEL_64;
    }
    switch ( (unsigned __int16)v97 )
    {
      case 0x140u:
        v32 = DWORD2(v109) != 0 ? 0x80 : 0;
        v33 = v92 & 0xFFFFFF7F;
        goto LABEL_64;
      case 0x141u:
        v84 = 0;
        ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
        GameProfileFromAttribute = AutoGameProfile::GetGameProfileFromAttribute(
                                     (AutoGameProfile *)&v109,
                                     (struct KnownGameList::AttributeValue *)ActiveProcessorCount,
                                     (unsigned int)&v94,
                                     v102,
                                     &v95,
                                     v85,
                                     &v84,
                                     v83);
        v14 = GameProfileFromAttribute;
        if ( GameProfileFromAttribute < 0 )
        {
          v15 = (unsigned int)GameProfileFromAttribute;
          v16 = 1677LL;
          goto LABEL_14;
        }
        if ( v84 )
          LODWORD(v92) = v92 & 0xFFFFFEFF | ((v85[0] & 1) << 8);
        break;
      case 0x142u:
        Source = (void *)*((_QWORD *)&v109 + 1);
        LODWORD(SourceSize) = v110;
        break;
      case 0x143u:
        v32 = DWORD2(v109) != 0 ? 0x400 : 0;
        v33 = v92 & 0xFFFFFBFF;
LABEL_64:
        LODWORD(v92) = v32 | v33;
        break;
      case 0x200u:
        DWORD1(v91) = 2;
        break;
    }
LABEL_65:
    LOWORD(v10) = v10 + 1;
  }
  v106 = 0LL;
  v98 = 0;
  v36 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, char **, unsigned int *))(v30 + 24))(
          a2,
          &v106,
          &v98);
  v14 = v36;
  if ( v36 < 0 )
  {
    v15 = (unsigned int)v36;
    v16 = 1706LL;
    goto LABEL_14;
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    pv,
    v106,
    v98,
    v37);
  v38 = (const unsigned __int16 *)pv[0];
  if ( !pv[0] )
  {
    v16 = 1709LL;
LABEL_12:
    v14 = -2147024882;
LABEL_13:
    v15 = (unsigned int)v14;
    goto LABEL_14;
  }
  *((LPVOID *)&v91 + 1) = pv[0];
  v108 = (__m128i)xmmword_180780478;
  v39 = *(_QWORD *)&a3->Data1;
  if ( !*(_QWORD *)&a3->Data1 )
    v39 = *(_QWORD *)a3->Data4 - _mm_srli_si128((__m128i)xmmword_180780478, 8).m128i_u64[0];
  v40 = v39 == 0;
  v41 = (__int64 (__fastcall ***)(_QWORD, void **, __m128i *))*((_QWORD *)this + 2);
  if ( v40 )
  {
    v14 = (**v41)(v41, v90, &v108);
    if ( v14 == -2147024713 )
    {
      v42 = (__int64 *)*((_QWORD *)this + 2);
      v43 = *v42;
      *(__m128i *)pv = v108;
      v14 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *, void **))(v43 + 16))(v42, pv, v90);
    }
    GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL(v14, v38, (unsigned int)v90[0]);
    if ( v14 < 0 )
    {
      v16 = 1741LL;
      goto LABEL_13;
    }
    if ( a7 )
      *a7 = (struct _GUID)v108;
  }
  else
  {
    v108 = *(__m128i *)a3;
    v46 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v41;
    *(__m128i *)pv = v108;
    v14 = ((__int64 (__fastcall **)(_QWORD, LPVOID *, void **))v46)[2](v41, pv, v90);
    GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL(v14, v38, (unsigned int)v90[0]);
    if ( v14 < 0 )
    {
      v16 = 1755LL;
      goto LABEL_13;
    }
  }
  v45 = v108.m128i_i64[0];
  if ( !v108.m128i_i64[0] )
    v45 = _mm_srli_si128(v108, 8).m128i_u64[0];
  if ( !v45 )
  {
    v14 = -2147418113;
    v16 = 1758LL;
    goto LABEL_13;
  }
  if ( v103.m128i_i64[0] )
  {
    pv[0] = 0LL;
    v47 = v11 >> 1;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v103,
      (char *)v103.m128i_i64[0],
      v47,
      v44);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      pv,
      (void *)v103.m128i_i64[0]);
    v48 = pv[0];
    if ( !pv[0] )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E9,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_90;
    }
    v49 = (__int64 *)*((_QWORD *)this + 2);
    v50 = *v49;
    v103 = v108;
    LODWORD(v82) = 2 * v47;
    v51 = (*(__int64 (__fastcall **)(__int64 *, __m128i *, __int64, LPVOID, unsigned __int64 *))(v50 + 72))(
            v49,
            &v103,
            8LL,
            pv[0],
            v82);
    v52 = v51;
    if ( v51 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6EB,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v51);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
      goto LABEL_93;
    }
    CoTaskMemFree(v48);
  }
  if ( !v104.m128i_i64[0] )
  {
LABEL_105:
    v61 = Source;
    if ( Source )
    {
      pv[0] = 0LL;
      v62 = (unsigned int)SourceSize;
      v63 = (unsigned int)SourceSize + 4LL;
      v64 = v63 >> 1;
      v65 = CoTaskMemAlloc(v63);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        pv,
        v65);
      v66 = pv[0];
      if ( !pv[0] )
      {
        v14 = -2147024882;
        v55 = 2147942414LL;
        v56 = 1806LL;
        goto LABEL_98;
      }
      memcpy_s_0(pv[0], v63, v61, v62);
      if ( (_DWORD)v64 )
      {
        v67 = v66;
        v68 = (unsigned int)v64;
        do
        {
          if ( *v67 == 59 )
            *v67 = 0;
          ++v67;
          --v68;
        }
        while ( v68 );
      }
      v66[(unsigned int)(v64 - 2)] = 0;
      v66[(unsigned int)(v64 - 1)] = 0;
      v69 = (__int64 *)*((_QWORD *)this + 2);
      v70 = *v69;
      *(__m128i *)v101 = v108;
      LODWORD(v82) = v63;
      v71 = (*(__int64 (__fastcall **)(__int64 *, Windows::Internal::String **, __int64, _WORD *, unsigned __int64 *))(v70 + 72))(
              v69,
              v101,
              22LL,
              v66,
              v82);
      v14 = v71;
      if ( v71 < 0 )
      {
        v55 = (unsigned int)v71;
        v56 = 1824LL;
        goto LABEL_98;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
    }
    if ( v94 || *(_QWORD *)v102 )
    {
      v72 = (__int64 *)*((_QWORD *)this + 2);
      v73 = *v72;
      *(__m128i *)v101 = v108;
      LODWORD(v82) = 4;
      v74 = (*(__int64 (__fastcall **)(__int64 *, Windows::Internal::String **, __int64, unsigned int *, unsigned __int64 *))(v73 + 72))(
              v72,
              v101,
              19LL,
              &v94,
              v82);
      v14 = v74;
      if ( v74 < 0 )
      {
        v15 = (unsigned int)v74;
        v16 = 1829LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)v15);
        goto LABEL_126;
      }
      v75 = (__int64 *)*((_QWORD *)this + 2);
      v76 = *v75;
      *(__m128i *)v101 = v108;
      v77 = (*(__int64 (__fastcall **)(__int64 *, Windows::Internal::String **, __int64, unsigned int *, int))(v76 + 72))(
              v75,
              v101,
              18LL,
              v102,
              8);
      v14 = v77;
      if ( v77 < 0 )
      {
        v15 = (unsigned int)v77;
        v16 = 1830LL;
        goto LABEL_14;
      }
    }
    if ( !(_DWORD)v95
      || (v78 = (__int64 *)*((_QWORD *)this + 2),
          v79 = *v78,
          *(__m128i *)v101 = v108,
          LODWORD(v82) = 4,
          v80 = (*(__int64 (__fastcall **)(__int64 *, Windows::Internal::String **, __int64, unsigned __int64 *, unsigned __int64 *))(v79 + 72))(
                  v78,
                  v101,
                  20LL,
                  &v95,
                  v82),
          v14 = v80,
          v80 >= 0) )
    {
      v14 = 0;
      goto LABEL_126;
    }
    v15 = (unsigned int)v80;
    v16 = 1835LL;
    goto LABEL_14;
  }
  pv[0] = 0LL;
  v53 = v99 >> 1;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v104,
    (char *)v104.m128i_i64[0],
    v99 >> 1,
    v44);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    pv,
    (void *)v104.m128i_i64[0]);
  v54 = pv[0];
  if ( pv[0] )
  {
    v57 = (__int64 *)*((_QWORD *)this + 2);
    v58 = *v57;
    v104 = v108;
    LODWORD(v82) = 2 * v53;
    v59 = (*(__int64 (__fastcall **)(__int64 *, __m128i *, __int64, LPVOID, unsigned __int64 *))(v58 + 72))(
            v57,
            &v104,
            15LL,
            pv[0],
            v82);
    v52 = v59;
    if ( v59 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F9,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v59);
      CoTaskMemFree(v54);
LABEL_93:
      v14 = v52;
      goto LABEL_126;
    }
    if ( v101[0] )
    {
      v60 = Windows::Internal::String::_InitializeHelper((HSTRING *)v101[0], (const unsigned __int16 *)v54);
      v14 = v60;
      if ( v60 < 0 )
      {
        v55 = (unsigned int)v60;
        v56 = 1790LL;
        goto LABEL_98;
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
    goto LABEL_105;
  }
  v14 = -2147024882;
  v55 = 2147942414LL;
  v56 = 1783LL;
LABEL_98:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v56,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)v55);
LABEL_90:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
LABEL_126:
  FreeGameConfig((struct ExecutionModel::GameConfig *)v90);
  return (unsigned int)v14;
}
