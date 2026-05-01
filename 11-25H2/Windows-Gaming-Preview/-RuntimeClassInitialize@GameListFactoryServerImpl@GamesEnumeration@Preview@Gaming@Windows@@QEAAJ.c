/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x1800215E8
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x1800214D8 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E7B4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180017B88 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@Windows.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedE.c)
 *     ?_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4CollectionProvider@Shim@UnifiedTile@Shell@WindowsInternal@@AEAV?$ComPtr@UIUnifiedTileCollection@Shim@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@PEAUEventRegistrationToken@@@Z @ 0x180022EF0 (-_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003B0BC (-LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003B80C (-PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this)
{
  int v2; // esi
  HRESULT v3; // eax
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v8; // eax
  DWORD v9; // edx
  int v10; // r8d
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  bool v23; // zf
  signed __int64 v24; // rax
  signed __int32 v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-38h] BYREF
  int v32; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglAsync();
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync();
  v2 = 1;
  v32 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v32, 0LL);
  if ( v32 == 3 || v32 == 9 )
    v2 = 3;
  v30 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"WindowsInternal.Shell.UnifiedTile.Shim.UnifiedTileManager",
         0x39u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x180021A4BLL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_5a2ffb33_28a6_56fa_b567_129b48b36784, &v30);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v6 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v5;
  }
  v31 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _DWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v30 + 48LL))(
         v30,
         0LL,
         0LL,
         268435511LL,
         v2,
         0,
         &v31);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    v11 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
    }
    v12 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v5;
  }
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v31;
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileManager *> *>(
         v31,
         v9,
         v10);
  if ( (v5 & 0x80000000) == 0 )
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), char *))(*v14)[8])(
           v14,
           (char *)this + 56);
  if ( (v5 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v5);
    v15 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v15)[2])(v15);
    }
    v16 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v5;
  }
  v17 = (volatile signed __int64 *)*((_QWORD *)this + 16);
  if ( v17 )
  {
    *((_QWORD *)this + 16) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(v17);
  }
  *((_QWORD *)this + 16) = 0LL;
  v18 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v18;
  if ( !v18 )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x8007000ELL);
    v20 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v20)[2])(v20);
    }
    v21 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v5;
  }
  v18[4] = 1LL;
  *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable';
  v18[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler'};
  v18[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v19 = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable';
  v19[1] = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler'};
  v19[2] = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v19[5] = 0LL;
  InitializeSRWLock((PSRWLOCK)v19 + 6);
  InitializeSRWLock((PSRWLOCK)v19 + 7);
  v22 = v19[4];
  while ( v22 >= 0 )
  {
    if ( (_DWORD)v22 != 0x7FFFFFFF )
    {
      v24 = _InterlockedCompareExchange64(v19 + 4, v22 + 1, v22);
      v23 = v22 == v24;
      v22 = v24;
      if ( !v23 )
        continue;
    }
    goto LABEL_42;
  }
  do
    v25 = *(_DWORD *)(2 * v22 + 0x10);
  while ( v25 != 0x7FFFFFFF
       && v25 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v22 + 16), v25 + 1, v25) );
LABEL_42:
  *((_QWORD *)this + 16) = v19;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(v19);
  v26 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_RegisterListenerOnTileCollection(
          this,
          1LL,
          (char *)this + 64,
          (char *)this + 40);
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v26);
  v27 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_RegisterListenerOnTileCollection(
          this,
          0LL,
          (char *)this + 72,
          (char *)this + 48);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v27);
  v28 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v28)[2])(v28);
  }
  v29 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return 0LL;
}
