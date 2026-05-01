/*
 * XREFs of ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@Shim@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180022CFC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_bf617d1671b63836cbfdc32eeaad81a0___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs___::Invoke @ 0x18001EE70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18001EE70.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@ZPEAV34567@AEBU?$_Ph@$00@2@@std@@JPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@std@@EEBAPEAV?$_Func_base@JPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@2@PEAX@Z @ 0x180022780 (-_Copy@-$_Func_impl_no_alloc@V-$_Binder@U_Unforced@std@@P8GameListFactoryServerImpl@GamesEnumera.c)
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x180022EE0 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs *a2,
        char a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  void ***v8; // rdx
  int (__fastcall *v9)(struct WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs *, __int64 *); // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  void ***v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+28h] [rbp-D8h]
  char v17; // [rsp+38h] [rbp-C8h]
  _BYTE v18[56]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h]
  void **v20; // [rsp+90h] [rbp-70h] BYREF
  __int128 v21; // [rsp+98h] [rbp-68h]
  char v22; // [rsp+A8h] [rbp-58h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v23; // [rsp+B0h] [rbp-50h]
  void ***v24; // [rsp+C8h] [rbp-38h]
  void **v25; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v26; // [rsp+D8h] [rbp-28h]
  char v27; // [rsp+E8h] [rbp-18h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v28; // [rsp+F0h] [rbp-10h]
  void ***v29; // [rsp+108h] [rbp+8h]

  v15 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v15) >= 0 )
  {
    *(_QWORD *)&v16 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded;
    DWORD2(v16) = 0;
    v20 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *>::`vftable';
    v21 = v16;
    v22 = v17;
    v23 = this;
    v24 = &v20;
    *(_QWORD *)&v16 = v18;
    v19 = 0LL;
    v19 = std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *>::_Copy(
            (__int64)&v20,
            (__int64)v18);
    LOBYTE(v6) = a3;
    Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(v7, v15, v18, v6);
    if ( v24 )
    {
      v8 = &v20;
      LOBYTE(v8) = v24 != &v20;
      ((void (__fastcall *)(void ***, void ***))(*v24)[4])(v24, v8);
    }
  }
  if ( a3 )
  {
    v9 = *(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 56LL);
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v9(a2, &v15) >= 0 )
    {
      *(_QWORD *)&v16 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved;
      DWORD2(v16) = 0;
      v25 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *>::`vftable';
      v26 = v16;
      v27 = v17;
      v28 = this;
      v29 = &v25;
      *(_QWORD *)&v16 = v18;
      v19 = 0LL;
      v19 = std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *>::_Copy(
              (__int64)&v25,
              (__int64)v18);
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        v11,
        v15,
        v18,
        0LL);
      if ( v29 )
      {
        v12 = &v25;
        LOBYTE(v12) = v29 != &v25;
        ((void (__fastcall *)(void ***, void ***))(*v29)[4])(v29, v12);
      }
    }
  }
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0LL;
}
