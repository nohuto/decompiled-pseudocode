/*
 * XREFs of ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CB198
 * Callers:
 *     ??_GGameControllerRawInputProvider@@UEAAPEAXI@Z @ 0x1800CB360 (--_GGameControllerRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x1800669F8 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006934C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800809A8 (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180093228 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     __std_find_trivial_8 @ 0x18009E460 (__std_find_trivial_8.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A8AC4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

void __fastcall GameControllerRawInputProvider::~GameControllerRawInputProvider(GameControllerRawInputProvider *this)
{
  unsigned __int64 v2; // rbx
  struct GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  const char *v4; // r9
  struct GamepadInterceptionHelper *v5; // rsi
  __m128i *trivial_8; // rax
  __m128i *v7; // r8
  GameControllerRawInputProvider::ShellButtonListEntry **v8; // rbx
  GameControllerRawInputProvider::ShellButtonListEntry *v9; // rax
  GameControllerRawInputProvider::ShellButtonListEntry **v10; // rcx
  __int64 **v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &GameControllerRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &GameControllerRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &GameControllerRawInputProvider::`vftable'{for `IGameInputServerInputRouter'};
  v2 = (unsigned __int64)this + 24;
  *((_QWORD *)this + 3) = &GameControllerRawInputProvider::`vftable'{for `IGamepadInterceptionListener'};
  *((_QWORD *)this + 4) = &GameControllerRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 43) = -1;
  GameControllerRawInputProvider::UpdateFocusPids(this);
  v15 = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &v15, 4LL);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  v5 = GamepadInterceptionHelper;
  if ( (v2 & -(__int64)(this != 0LL)) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x76,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
      v4);
  trivial_8 = (__m128i *)_std_find_trivial_8(
                           *((const __m128i **)GamepadInterceptionHelper + 6),
                           *((const __m128i **)GamepadInterceptionHelper + 7),
                           v2 & -(__int64)(this != 0LL));
  v7 = (__m128i *)*((_QWORD *)v5 + 7);
  if ( trivial_8 != v7 )
  {
    memmove_0(trivial_8, &trivial_8->m128i_u64[1], (char *)v7 - (char *)&trivial_8->m128i_u64[1]);
    *((_QWORD *)v5 + 7) -= 8LL;
  }
  GameControllerRawInputProvider::s_instance = 0LL;
  v8 = (GameControllerRawInputProvider::ShellButtonListEntry **)((char *)this + 112);
  while ( 1 )
  {
    v9 = *v8;
    v10 = *(GameControllerRawInputProvider::ShellButtonListEntry ***)*v8;
    if ( *((GameControllerRawInputProvider::ShellButtonListEntry ***)*v8 + 1) != v8 || v10[1] != v9 )
LABEL_9:
      __fastfail(3u);
    *v8 = (GameControllerRawInputProvider::ShellButtonListEntry *)v10;
    v10[1] = (GameControllerRawInputProvider::ShellButtonListEntry *)v8;
    if ( v9 == (GameControllerRawInputProvider::ShellButtonListEntry *)v8 )
      break;
    GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(v9);
    --*((_DWORD *)this + 32);
  }
  v11 = (__int64 **)((char *)this + 88);
  while ( 1 )
  {
    v12 = *v11;
    v13 = **v11;
    if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
      goto LABEL_9;
    *v11 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( v12 == (__int64 *)v11 )
      break;
    operator delete(v12, (const struct std::nothrow_t *)0x20);
    --*((_DWORD *)this + 26);
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 10);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 6);
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
}
