/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800394F4
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x18002794C (--$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationM.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B9E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18002269C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800229C8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationManager::RuntimeClassInitialize(CApplicationManager *this)
{
  PSID *v1; // rbx
  void *v2; // rdi
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (PSID *)((char *)this + 16);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v6);
    LocalFree(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v6);
  }
  *v1 = 0LL;
  if ( ConvertStringSidToSidW(
         L"S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991",
         v1) )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x18D,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             v3);
  }
}
