/*
 * XREFs of ?_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180022980
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000CD8C (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ??$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_56908091a02afdced2314238e386ad81_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800172F4 (--$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@Gam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020D30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E874 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded(
        RTL_SRWLOCK *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *a2)
{
  PVOID Ptr; // rdi
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *v5; // r15
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v6; // rax
  int v7; // edi
  volatile signed __int64 *v8; // rbx
  __int64 v9; // rdx
  signed __int64 v10; // rcx
  bool v11; // zf
  signed __int64 v12; // rax
  signed __int32 v13; // eax
  volatile signed __int32 *v14; // rbx
  signed __int32 v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  volatile signed __int64 *v18; // [rsp+60h] [rbp+30h]
  volatile signed __int64 *v19; // [rsp+78h] [rbp+48h] BYREF

  Ptr = this[16].Ptr;
  v5 = (struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *)this[7].Ptr;
  v18 = 0LL;
  v6 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                            0x130uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    v9 = 338LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_28;
  }
  v8 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v6);
  v7 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
         (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v8,
         a2,
         v5,
         (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)(((unsigned __int64)Ptr + 8) & -(__int64)(Ptr != 0LL)));
  if ( v7 < 0 )
  {
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v8);
    goto LABEL_6;
  }
  if ( v8 )
  {
    v10 = *((_QWORD *)v8 + 17);
    while ( v10 >= 0 )
    {
      if ( (_DWORD)v10 != 0x7FFFFFFF )
      {
        v12 = _InterlockedCompareExchange64(v8 + 17, v10 + 1, v10);
        v11 = v10 == v12;
        v10 = v12;
        if ( !v11 )
          continue;
      }
      goto LABEL_15;
    }
    do
      v13 = *(_DWORD *)(2 * v10 + 0x10);
    while ( v13 != 0x7FFFFFFF
         && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v10 + 16), v13 + 1, v13) );
  }
LABEL_15:
  v18 = v8;
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v8);
  v19 = v8;
  v7 = 0;
  v14 = 0LL;
  AcquireSRWLockExclusive(this + 11);
  if ( this[10].Ptr )
  {
    v14 = (volatile signed __int32 *)this[10].Ptr;
    do
      v15 = *((_DWORD *)v14 + 3);
    while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange(v14 + 3, v15 + 1, v15) );
  }
  if ( this != (RTL_SRWLOCK *)-88LL )
    ReleaseSRWLockExclusive(this + 11);
  if ( v14 )
  {
    v7 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_56908091a02afdced2314238e386ad81_,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
           &v19,
           (__int64)v14,
           (__int64)&this[10]);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14);
  }
  if ( v7 < 0 )
  {
    v9 = 340LL;
    goto LABEL_27;
  }
LABEL_28:
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v18);
  return (unsigned int)v7;
}
