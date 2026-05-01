/*
 * XREFs of ?GetDefault@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeUserConfiguration@2345@@Z @ 0x180039A00
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000CC00 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DB00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039EA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetDefault(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **a2)
{
  char *v3; // r14
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  char *v5; // rax
  char *v6; // rbx
  int Interface; // esi
  _QWORD *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v11; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **); // rsi
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v20; // [rsp+50h] [rbp+30h] BYREF
  __int64 v21; // [rsp+60h] [rbp+40h] BYREF

  v3 = (char *)this + 104;
  v20 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !*(_QWORD *)v3 )
  {
    *(_QWORD *)v3 = 0LL;
    v5 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( !v5 )
    {
      Interface = -2147024882;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)Interface);
      if ( v4 )
        LeaveCriticalSection(v4);
      v11 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return (unsigned int)Interface;
    }
    v8 = v5 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 16));
    *((_QWORD *)v6 + 7) = 1LL;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v6 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable';
    *((_QWORD *)v6 + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 64), 0, 0);
    *((_QWORD *)v6 + 13) = 0LL;
    *((_QWORD *)v6 + 14) = 0LL;
    v21 = 0LL;
    v9 = CreateGameConfigStoreClient(&v21);
    Interface = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v6);
      goto LABEL_11;
    }
    v10 = *((_QWORD *)v6 + 14);
    *((_QWORD *)v6 + 14) = v21;
    if ( v10 )
      FreeGameConfigStoreClient(v10);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
                  v6,
                  &GUID_72d34af4_756b_470f_a0c2_ba62a90795db,
                  v3);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v6);
    if ( Interface < 0 )
      goto LABEL_11;
  }
  v13 = *(_QWORD *)v3;
  v14 = ***(__int64 (__fastcall ****)(__int64, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **))v3;
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v14(v13, &GUID_72d34af4_756b_470f_a0c2_ba62a90795db, &v20);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( v4 )
      LeaveCriticalSection(v4);
    *a2 = v20;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v16);
    if ( v4 )
      LeaveCriticalSection(v4);
    v18 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v17;
  }
}
