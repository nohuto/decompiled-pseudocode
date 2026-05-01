/*
 * XREFs of ?RequestPrivilegedPresentationOperations@CFullScreenManager@@UEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180327E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenManager::RequestPrivilegedPresentationOperations(
        CFullScreenManager *this,
        struct IPrivilegedOperationsConsumer *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(struct IPrivilegedOperationsConsumer *, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
         *((_QWORD *)this + 16));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x146,
    (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
