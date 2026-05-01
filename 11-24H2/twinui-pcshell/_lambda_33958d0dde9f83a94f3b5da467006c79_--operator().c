/*
 * XREFs of _lambda_33958d0dde9f83a94f3b5da467006c79_::operator() @ 0x1803099C4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6616119d366343af4599591a716fcf3c___::Run @ 0x18030A940 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6616119d366343af4599591a716fcf3c___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall lambda_33958d0dde9f83a94f3b5da467006c79_::operator()(_QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 120LL) + 80LL))(
         *(_QWORD *)(*a1 + 120LL),
         *a1 + 152LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x64C,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 224LL))(*a1);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
