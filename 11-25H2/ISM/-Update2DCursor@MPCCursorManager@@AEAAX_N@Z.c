/*
 * XREFs of ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x1800C1074
 * Callers:
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800755FC (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800C1014 (-MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCCursorManager::Update2DCursor(MPCCursorManager *this, bool a2)
{
  unsigned int (__fastcall *v2)(bool); // rax
  signed int LastError; // eax
  bool v4; // sf
  ISMTracing *v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (unsigned int (__fastcall *)(bool))*((_QWORD *)this + 6);
  if ( v2 )
  {
    if ( !v2(a2) )
    {
      LastError = GetLastError();
      v4 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v4 = LastError < 0;
      }
      if ( v4 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x105,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          (const char *)(unsigned int)LastError,
          v6);
    }
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCCursorManager_Update2DCursor_(v5, &v8);
    }
  }
}
