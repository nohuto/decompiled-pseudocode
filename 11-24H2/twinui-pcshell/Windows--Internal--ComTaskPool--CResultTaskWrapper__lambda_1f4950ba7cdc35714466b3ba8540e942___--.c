/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1f4950ba7cdc35714466b3ba8540e942___::Run @ 0x180441F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1f4950ba7cdc35714466b3ba8540e942___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r9
  int v6; // eax
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  if ( v2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, **(_QWORD **)(a1 + 24));
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v5 = (unsigned int)v6;
    v4 = 1254LL;
  }
  else
  {
    v3 = -2147467259;
    v4 = 1253LL;
    v5 = 2147500037LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
    (const char *)v5);
LABEL_7:
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
