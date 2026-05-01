/*
 * XREFs of wistd::__function::__func__lambda_c685849f44fc9bdd58a601b3859f1fc8__void___cdecl(void)_::operator() @ 0x1803A8E80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___ @ 0x1803A8510 (CreationThreadDispatcher--RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___.c)
 */

void __fastcall wistd::__function::__func__lambda_c685849f44fc9bdd58a601b3859f1fc8__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
         *(volatile int **)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x162,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
