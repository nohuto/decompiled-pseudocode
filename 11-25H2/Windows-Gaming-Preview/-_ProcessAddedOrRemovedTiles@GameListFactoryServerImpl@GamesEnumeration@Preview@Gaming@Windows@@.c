/*
 * XREFs of ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x180022D60
 * Callers:
 *     ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@Shim@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180022B7C (-_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 * Callees:
 *     ??$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18000BF68 (--$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA-AV-$vector_range_nothro.c)
 *     ??Evector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x18000D3B0 (--Evector_iterator_nothrow@-$vector_range_nothrow@U-$IVectorView@PEAVUnifiedTile@Shim@1Shell@Win.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x18000E15C (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?begin@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAA?AVvector_iterator_nothrow@12@XZ @ 0x180010EF8 (-begin@-$vector_range_nothrow@U-$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Colle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  unsigned __int8 *v6; // r8
  int v7; // r14d
  Windows::Gaming::Preview::GamesEnumeration *v8; // rbx
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  int v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v23; // [rsp+A0h] [rbp+30h] BYREF
  char *v24; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+40h]

  v25 = a3;
  v23 = a1;
  if ( !a2 )
    goto LABEL_24;
  LODWORD(v24) = 0;
  wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>((__int64)&v19, a2, (__int64)&v24);
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::begin(
    &v19,
    (__int64)&v17);
  v7 = v20;
  while ( **(int **)(v17 + 16) >= 0 && v18 != v7 )
  {
    v8 = *(Windows::Gaming::Preview::GamesEnumeration **)(v17 + 32);
    v16[1] = v8;
    if ( v8 )
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v8 + 8LL))(v8);
    v16[2] = 0LL;
    LOBYTE(v23) = 0;
    if ( a4 )
    {
      if ( !v8 )
        goto LABEL_16;
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                           v8,
                           (struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)&v23,
                           v6);
      v10 = retaddr;
      if ( IsUserPinnedTile < 0 )
      {
        v11 = 315LL;
LABEL_15:
        wil::details::in1diag3::_Log_Hr(
          v10,
          (void *)v11,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)IsUserPinnedTile);
        goto LABEL_16;
      }
      if ( !(_BYTE)v23 )
        goto LABEL_16;
    }
    v16[0] = v8;
    v12 = *(_QWORD *)(a3 + 56);
    if ( !v12 )
    {
      std::_Xbad_function_call();
      break;
    }
    IsUserPinnedTile = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 16LL))(v12, v16);
    v10 = retaddr;
    if ( IsUserPinnedTile < 0 )
    {
      v11 = 318LL;
      goto LABEL_15;
    }
LABEL_16:
    if ( v8 )
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v8 + 16LL))(v8);
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::vector_iterator_nothrow::operator++(&v17);
  }
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( (int)v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v24);
LABEL_24:
  v14 = *(_QWORD *)(a3 + 56);
  if ( v14 )
  {
    LOBYTE(a2) = v14 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, a2);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return 0LL;
}
