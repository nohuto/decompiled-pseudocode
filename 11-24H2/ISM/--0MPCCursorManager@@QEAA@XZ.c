/*
 * XREFs of ??0MPCCursorManager@@QEAA@XZ @ 0x1800BEB04
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BA020 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009B3E4 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009C1EC (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A279C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsHyperVGuestOS@@YA_NXZ @ 0x1800BED04 (-IsHyperVGuestOS@@YA_NXZ.c)
 */

MPCCursorManager *__fastcall MPCCursorManager::MPCCursorManager(
        MPCCursorManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct ISMTestMode *v4; // rax
  HMODULE LibraryW; // rax
  const char *v7; // r9
  HMODULE v8; // rsi
  HMODULE v9; // rdi
  FARPROC ProcAddress; // rax
  const char *v11; // r9
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 8) = 0;
  v4 = ISMTestMode::s_instance;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_WORD *)this + 32) = 0;
  *((_BYTE *)this + 56) = 0;
  *((_DWORD *)this + 15) = 1;
  *((_BYTE *)this + 66) = 0;
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      a4);
  if ( !*(_BYTE *)v4 )
  {
    if ( !IsEdition(10LL) || IsHyperVGuestOS() )
    {
      if ( IsEdition(1024LL) )
      {
        if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x38,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
            v12);
        *((_BYTE *)this + 66) = 1;
      }
    }
    else
    {
      LibraryW = LoadLibraryW(L"User32.dll");
      v8 = (HMODULE)*((_QWORD *)this + 5);
      v9 = LibraryW;
      if ( v8 )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)&v15);
        FreeLibrary(v8);
        wil::last_error_context::~last_error_context((wil::last_error_context *)&v15);
      }
      *((_QWORD *)this + 5) = v9;
      if ( !v9 )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x2F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v7);
      ProcAddress = GetProcAddress(v9, "ShowSystemCursor");
      *((_QWORD *)this + 6) = ProcAddress;
      if ( !ProcAddress )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x32,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v11);
      *((_BYTE *)this + 64) = 1;
    }
  }
  return this;
}
