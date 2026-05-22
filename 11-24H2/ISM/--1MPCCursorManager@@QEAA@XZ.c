/*
 * XREFs of ??1MPCCursorManager@@QEAA@XZ @ 0x1800BECA4
 * Callers:
 *     ??R?$default_delete@VMPCCursorManager@@@std@@QEBAXPEAVMPCCursorManager@@@Z @ 0x1800B9AFC (--R-$default_delete@VMPCCursorManager@@@std@@QEBAXPEAVMPCCursorManager@@@Z.c)
 * Callees:
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18007539C (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A279C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall MPCCursorManager::~MPCCursorManager(MPCCursorManager *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 66) )
  {
    if ( !(unsigned int)NtMITDisableMouseIntercept() )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x41,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v2);
    *((_BYTE *)this + 66) = 0;
    MPCCursorManager::UpdateCursorVisibility(this, 1u, 1u, 1);
  }
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>((HMODULE *)this + 5);
}
