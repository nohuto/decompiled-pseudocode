/*
 * XREFs of ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016E10
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18001877C (--0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001C2D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumer.c)
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180021658 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v8; // rax
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v12; // rbx
  int CanCastTo; // edi
  signed __int32 v14; // edx
  int v15; // edx
  signed __int32 v16; // eax

  *a1 |= 4u;
  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)operator new(
                                                                              0x70uLL,
                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
    return (unsigned int)-2147024882;
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GameListFactoryServer(v8);
  v9 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize((Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)v10);
  if ( v9 < 0 )
  {
    if ( v10 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(v10);
    return (unsigned int)v9;
  }
  if ( !v10 )
    goto LABEL_8;
  do
  {
    v14 = *(_DWORD *)(v10 + 68);
    if ( v14 == 0x7FFFFFFF )
    {
      v15 = 0x7FFFFFFF;
      goto LABEL_17;
    }
  }
  while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 68), v14 + 1, v14) );
  v15 = v14 + 1;
LABEL_17:
  if ( (*(_BYTE *)(v10 + 88) & 4) == 0 && v15 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
  {
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v12 = v10;
  }
  else
  {
LABEL_8:
    v12 = v10;
    if ( !v10 )
      goto LABEL_10;
  }
  Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(v10);
LABEL_10:
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v12,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    if ( (*(_BYTE *)a1 & 4) == 0 )
    {
      do
        v16 = *(_DWORD *)(v12 + 68);
      while ( v16 != 0x7FFFFFFF
           && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 68), v16 + 1, v16) );
    }
    *(_DWORD *)(v12 + 88) = *a1;
    *(_QWORD *)(v12 + 80) = a2;
    return 0LL;
  }
  else
  {
    if ( v12 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(v12);
    return (unsigned int)CanCastTo;
  }
}
