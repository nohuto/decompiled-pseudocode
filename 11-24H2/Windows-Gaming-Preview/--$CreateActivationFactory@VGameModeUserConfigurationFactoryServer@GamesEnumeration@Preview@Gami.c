/*
 * XREFs of ??$CreateActivationFactory@VGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180039430
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumer.c)
 *     ??0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180039540 (--0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180039AF0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180039AF0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  signed __int32 i; // edx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int CanCastTo; // edi
  signed __int32 v16; // eax

  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *)operator new(
                                                                                               0x98uLL,
                                                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
    return 2147942414LL;
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GameModeUserConfigurationFactoryServer(v8);
  v11 = v10;
  if ( v10 )
  {
    for ( i = *(_DWORD *)(v10 + 68); ; i = *(_DWORD *)(v10 + 68) )
    {
      if ( i == 0x7FFFFFFF )
      {
        v13 = 0x7FFFFFFFLL;
        goto LABEL_9;
      }
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 68), i + 1, i) )
        break;
    }
    v13 = (unsigned int)(i + 1);
LABEL_9:
    if ( (*(_BYTE *)(v10 + 88) & 4) == 0 && (_DWORD)v13 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(
      v11,
      v13);
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v11,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    if ( (*a1 & 4) == 0 )
    {
      do
        v16 = *(_DWORD *)(v11 + 68);
      while ( v16 != 0x7FFFFFFF
           && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 68), v16 + 1, v16) );
    }
    *(_DWORD *)(v11 + 88) = *(_DWORD *)a1;
    *(_QWORD *)(v11 + 80) = a2;
    return 0LL;
  }
  else
  {
    if ( v11 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(
        v11,
        v14);
    return (unsigned int)CanCastTo;
  }
}
