/*
 * XREFs of ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18002206C
 * Callers:
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x180019568 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 *     _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001A3F4 (_lambda_c7e28edb760347053732171cef665d5d_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000CCBC (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18001479C (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@UG.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180027330 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E878 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
        __int64 a1,
        __int64 a2,
        volatile signed __int64 **a3,
        __int64 **a4)
{
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // r15d
  __int128 v11; // xmm6
  int GameFromGameConfigStore; // ebx
  volatile signed __int64 *v13; // rcx
  __int64 v14; // rdi
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v15; // rax
  volatile signed __int64 *v16; // rbx
  const struct std::nothrow_t *v17; // rdx
  int v18; // edi
  signed __int64 v19; // rcx
  bool v20; // zf
  signed __int64 v21; // rax
  signed __int32 v22; // eax
  int v23; // eax
  const struct std::nothrow_t *v24; // rdx
  __int64 v26; // rdx
  const struct std::nothrow_t *v27; // rdx
  void *v28; // [rsp+38h] [rbp-79h] BYREF
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v29; // [rsp+40h] [rbp-71h]
  volatile signed __int64 *v30; // [rsp+48h] [rbp-69h]
  __int128 v31[2]; // [rsp+58h] [rbp-59h] BYREF
  __int128 v32; // [rsp+78h] [rbp-39h] BYREF
  __int64 v33; // [rsp+88h] [rbp-29h]
  unsigned int v34; // [rsp+90h] [rbp-21h] BYREF
  int *v35; // [rsp+98h] [rbp-19h]
  int v36; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v37; // [rsp+A4h] [rbp-Dh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v33 = a2;
  v35 = &v36;
  v36 = 0;
  v37 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v34);
  *v35 = v7;
  if ( v7 >= 0 && v34 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v33 + 48LL))(v33, 0LL, &v37);
    *v35 = v8;
  }
  v9 = 0;
  v10 = v34;
  while ( 1 )
  {
    if ( *v35 < 0 || v9 == v10 )
      return 0LL;
    v11 = v37;
    v28 = 0LL;
    v31[0] = v37;
    GameFromGameConfigStore = GetGameFromGameConfigStore(*a4, v31, &v28);
    if ( GameFromGameConfigStore < 0 )
    {
      v26 = 549LL;
      goto LABEL_37;
    }
    v13 = *a3;
    if ( *a3 )
      break;
    v14 = *(_QWORD *)(a1 + 128);
    *a3 = 0LL;
    v15 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                               0x130uLL,
                                                                               (const struct std::nothrow_t *)&std::nothrow);
    v29 = v15;
    if ( !v15 )
    {
      v18 = -2147024882;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v18);
      if ( v28 )
        operator delete(v28, v24);
      return (unsigned int)v18;
    }
    v16 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v15);
    v30 = v16;
    v29 = 0LL;
    v31[1] = v11;
    v18 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v16,
            (v14 + 8) & -(__int64)(v14 != 0));
    if ( v18 < 0 )
    {
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v16);
      goto LABEL_32;
    }
    if ( v16 )
    {
      v19 = *((_QWORD *)v16 + 17);
      while ( v19 >= 0 )
      {
        if ( (_DWORD)v19 != 0x7FFFFFFF )
        {
          v17 = (const struct std::nothrow_t *)(v19 + 1);
          v21 = _InterlockedCompareExchange64(v16 + 17, v19 + 1, v19);
          v20 = v19 == v21;
          v19 = v21;
          if ( !v20 )
            continue;
        }
        goto LABEL_19;
      }
      do
      {
        v22 = *(_DWORD *)(2 * v19 + 0x10);
        if ( v22 == 0x7FFFFFFF )
          break;
        v17 = (const struct std::nothrow_t *)(unsigned int)(v22 + 1);
      }
      while ( v22 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v19 + 16), (signed __int32)v17, v22) );
    }
LABEL_19:
    *a3 = v16;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v16);
LABEL_23:
    if ( v28 )
      operator delete(v28, v17);
    ++v9;
    if ( *v35 >= 0 && v9 < v34 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v33 + 48LL))(v33, v9, &v37);
      *v35 = v23;
    }
  }
  v32 = v11;
  GameFromGameConfigStore = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfig(
                              v13 + 3,
                              &v32,
                              &v28,
                              a4);
  if ( GameFromGameConfigStore >= 0 )
    goto LABEL_23;
  v26 = 566LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)GameFromGameConfigStore);
  if ( v28 )
    operator delete(v28, v27);
  return (unsigned int)GameFromGameConfigStore;
}
