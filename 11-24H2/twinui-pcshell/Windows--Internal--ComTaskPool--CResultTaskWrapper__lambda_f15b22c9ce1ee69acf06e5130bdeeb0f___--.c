/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f15b22c9ce1ee69acf06e5130bdeeb0f___::Run @ 0x18044B710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f15b22c9ce1ee69acf06e5130bdeeb0f___::Run(
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
      (void *)0x5CE,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v2);
  result = *(int **)(a1 + 40);
  *result = v3;
  return result;
}
