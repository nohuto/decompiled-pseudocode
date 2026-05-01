/*
 * XREFs of _lambda_47284ee12e316a93415fcd6b809ad33f_::operator() @ 0x1802F618C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_47284ee12e316a93415fcd6b809ad33f___1_long_::Invoke @ 0x1802F85E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F85E0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F7484 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_47284ee12e316a93415fcd6b809ad33f_::operator()(__int64 a1)
{
  CAppViewManager *v1; // rax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct tagPOINT v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(CAppViewManager **)a1;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct tagPOINT *))(**((_QWORD **)v1 + 23) + 88LL))(
         *((_QWORD *)v1 + 23),
         a1 + 12,
         &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x519,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CAppViewManager::DragCompleteWorker(*(CAppViewManager **)a1, (const struct _GUID *)(a1 + 12), v8);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x51B,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 184LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 184LL),
         a1 + 12,
         2LL,
         2LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x51D,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}
