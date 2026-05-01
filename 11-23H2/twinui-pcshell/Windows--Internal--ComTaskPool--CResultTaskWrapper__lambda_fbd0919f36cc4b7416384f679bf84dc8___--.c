/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fbd0919f36cc4b7416384f679bf84dc8___::Run @ 0x1801B1790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fbd0919f36cc4b7416384f679bf84dc8___::Run(
        _QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 296LL) + 56LL))(
         *(_QWORD *)(a1[2] + 296LL),
         a1[3]);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
  else
    v3 = 0;
  result = (int *)a1[4];
  *result = v3;
  return result;
}
