/*
 * XREFs of ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007F064
 * Callers:
 *     ?Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18007F000 (-Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800528D0 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180066768 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180071208 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084CA0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __std_find_trivial_8 @ 0x18009E750 (__std_find_trivial_8.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A279C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@?$vector@PEAUIGamepadInterceptionListener@@V?$allocator@PEAUIGamepadInterceptionListener@@@std@@@std@@AEAAPEAPEAUIGamepadInterceptionListener@@QEAPEAU2@AEBQEAU2@@Z @ 0x180106DA8 (--$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@-$vector@PEAUIGamepadInterceptionLi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
GameControllerRawInputProvider *__fastcall GameControllerRawInputProvider::GameControllerRawInputProvider(
        GameControllerRawInputProvider *this,
        struct IRawInputClient *a2)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rsi
  int v5; // eax
  unsigned int i; // edi
  HANDLE FileW; // rax
  const char *v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  struct GameInputServerProxy *v13; // rcx
  struct GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  const char *v15; // r9
  struct GamepadInterceptionHelper *v16; // rbp
  _QWORD *v17; // rdx
  int updated; // eax
  int dwCreationDisposition; // [rsp+20h] [rbp-38h]
  int dwCreationDispositiona; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct GameInputServerProxy *v23; // [rsp+60h] [rbp+8h] BYREF

  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &GameControllerRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &GameControllerRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &GameControllerRawInputProvider::`vftable'{for `IGameInputServerInputRouter'};
  *((_QWORD *)this + 3) = &GameControllerRawInputProvider::`vftable'{for `IGamepadInterceptionListener'};
  *((_QWORD *)this + 4) = &GameControllerRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
  v3 = (__int64 *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v4 = (_QWORD *)((char *)this + 80);
  *((_QWORD *)this + 10) = -1LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  QpcTimeConverter::QpcTimeConverter((GameControllerRawInputProvider *)((char *)this + 136));
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  if ( GameControllerRawInputProvider::s_instance )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x63,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)0x8000FFFFLL,
      dwCreationDisposition);
  GameControllerRawInputProvider::s_instance = this;
  LODWORD(v23) = GetCurrentProcessId();
  dwCreationDispositiona = 0;
  v5 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &v23, 4LL);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v5,
      0);
  if ( IsEdition(6176LL) )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (char *)this + 80,
        FileW);
      if ( ((*v4 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        break;
      Sleep(0x64u);
    }
    if ( (unsigned __int64)(*v4 - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x89,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        v8);
    v3 = (__int64 *)((char *)this + 56);
  }
  v9 = *v3;
  *v3 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = CoreUICreate(v3);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v10,
      dwCreationDispositiona);
  if ( !gbIsDWMNoRawGameController )
  {
    v11 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v23 = 0LL;
    v12 = GameInputServerProxy::CreateSingleton((GameControllerRawInputProvider *)((char *)this + 16), &v23);
    v13 = 0LL;
    if ( v12 >= 0 )
      v13 = v23;
    *((_QWORD *)this + 8) = v13;
  }
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  v16 = GamepadInterceptionHelper;
  v23 = (GameControllerRawInputProvider *)((char *)this + 24);
  if ( this == (GameControllerRawInputProvider *)-24LL )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x6A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
      v15);
  if ( _std_find_trivial_8(
         *((_QWORD *)GamepadInterceptionHelper + 6),
         *((_QWORD *)GamepadInterceptionHelper + 7),
         (char *)this + 24) == *((_QWORD *)GamepadInterceptionHelper + 7) )
  {
    v17 = (_QWORD *)*((_QWORD *)v16 + 7);
    if ( v17 == *((_QWORD **)v16 + 8) )
    {
      std::vector<IGamepadInterceptionListener *>::_Emplace_reallocate<IGamepadInterceptionListener * const &>(
        (char *)v16 + 48,
        v17,
        &v23);
    }
    else
    {
      *v17 = (char *)this + 24;
      *((_QWORD *)v16 + 7) += 8LL;
    }
  }
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 43) = -1;
  updated = GameControllerRawInputProvider::UpdateFocusPids(this);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x98,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)updated,
      dwCreationDispositiona);
  return this;
}
