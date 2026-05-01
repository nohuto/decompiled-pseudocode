/*
 * XREFs of wistd::__function::__func__lambda_205a72f4ba184ca7ab2ac139b0798297__void___cdecl(void)_::operator() @ 0x1801E5500
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b945abeeb0d2b18f20f6e47375aac32a___ @ 0x1801E4E18 (CreationThreadDispatcher--RunAsync__lambda_b945abeeb0d2b18f20f6e47375aac32a___.c)
 */

void __fastcall wistd::__function::__func__lambda_205a72f4ba184ca7ab2ac139b0798297__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreationThreadDispatcher::RunAsync__lambda_b945abeeb0d2b18f20f6e47375aac32a___(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
         *(volatile int **)(a1 + 8));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x163,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
