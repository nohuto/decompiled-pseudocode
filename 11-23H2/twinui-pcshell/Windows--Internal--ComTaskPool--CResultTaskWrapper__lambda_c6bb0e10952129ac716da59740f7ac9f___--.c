/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c6bb0e10952129ac716da59740f7ac9f___::Run @ 0x1801F9A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c6bb0e10952129ac716da59740f7ac9f___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 112LL) + 168LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL),
         **(_QWORD **)(a1 + 24),
         **(_QWORD **)(a1 + 32));
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5CF,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v2);
  result = *(int **)(a1 + 40);
  *result = v3;
  return result;
}
