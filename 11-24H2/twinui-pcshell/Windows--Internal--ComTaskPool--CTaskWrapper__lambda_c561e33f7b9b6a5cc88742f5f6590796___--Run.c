/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::Run @ 0x180304A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c561e33f7b9b6a5cc88742f5f6590796___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         (*(_QWORD *)(a1 + 24) + 88LL) & -(__int64)(*(_QWORD *)(a1 + 24) != 0LL),
         *(unsigned int *)(a1 + 32));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14AB,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v1);
}
