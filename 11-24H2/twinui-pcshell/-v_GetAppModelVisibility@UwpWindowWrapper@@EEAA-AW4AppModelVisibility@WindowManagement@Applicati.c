/*
 * XREFs of ?v_GetAppModelVisibility@UwpWindowWrapper@@EEAA?AW4AppModelVisibility@WindowManagement@ApplicationModel@Internal@Windows@@XZ @ 0x1801BC910
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapper::v_GetAppModelVisibility(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0;
  v2 = *(_QWORD *)(a1 + 608);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 560LL))(v2, &v7);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v3,
        v5);
    return v7;
  }
  return v1;
}
