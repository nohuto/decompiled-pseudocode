/*
 * XREFs of ?GetPropertyAsString@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180440840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::GetPropertyAsString(WindowWrapperBase *this, HSTRING a2, HSTRING *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30B,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
