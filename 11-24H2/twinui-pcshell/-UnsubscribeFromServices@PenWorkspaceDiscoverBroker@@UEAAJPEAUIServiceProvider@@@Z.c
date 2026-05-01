/*
 * XREFs of ?UnsubscribeFromServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803EFD90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::UnsubscribeFromServices(
        PenWorkspaceDiscoverBroker *this,
        struct IServiceProvider *a2)
{
  __int64 v2; // r9
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
  {
    v3 = -2147418113;
    v4 = 186LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v2 + 120LL))(
         *((_QWORD *)this + 3),
         ((unsigned __int64)this + 8) & -(__int64)(this != (PenWorkspaceDiscoverBroker *)40));
  if ( v3 < 0 )
  {
    v4 = 187LL;
    goto LABEL_3;
  }
  return 0LL;
}
