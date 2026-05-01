/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4db7e16b27d144662c4cfda4f02bbfea___::Run @ 0x1801BBC40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4db7e16b27d144662c4cfda4f02bbfea___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 296LL) + 264LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 296LL));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37C,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
  else
    v3 = 0;
  result = *(int **)(a1 + 24);
  *result = v3;
  return result;
}
