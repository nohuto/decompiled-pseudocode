/*
 * XREFs of ?_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4CollectionProvider@Shim@UnifiedTile@Shell@WindowsInternal@@AEAV?$ComPtr@UIUnifiedTileCollection@Shim@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@PEAUEventRegistrationToken@@@Z @ 0x180022EF0
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x1800215E8 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs_____lambda_bf617d1671b63836cbfdc32eeaad81a0___ @ 0x180017368 (wil--MakeAgileCallbackNoThrow_Windows--Foundation--ITypedEventHandler_WindowsInternal--Shell--Un.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FB90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_RegisterListenerOnTileCollection(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD *); // rdi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v22[2]; // [rsp+28h] [rbp-18h] BYREF
  bool v23; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h]
  __int64 v26; // [rsp+80h] [rbp+40h] BYREF

  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v8 + 56LL);
  v10 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v9(v8, a2, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  v25 = 0LL;
  v21 = 0LL;
  v14 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::QueryInterface(
          a1,
          &GUID_00000038_0000_0000_c000_000000000046,
          &v21);
  if ( v14 >= 0 )
  {
    v26 = 0LL;
    v15 = v21;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v26);
    if ( v14 >= 0 )
    {
      v17 = v26;
      v18 = v26;
      if ( v26 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        v17 = v26;
      }
      v25 = v18;
      if ( v17 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v14 = 0;
    }
    else
    {
      v16 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v14);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    return (unsigned int)v14;
  }
  v22[0] = v25;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  v22[1] = a1;
  v23 = a2 == 0;
  wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs_____lambda_bf617d1671b63836cbfdc32eeaad81a0___(
    &v26,
    v22);
  if ( v22[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
  v19 = v26;
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a3 + 56LL))(*a3, v26, a4);
  v14 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v20);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    return (unsigned int)v14;
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return 0LL;
}
