/*
 * XREFs of ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x18003ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_28433bbdf35c05dec82bca523d2a5fd2_::_lambda_28433bbdf35c05dec82bca523d2a5fd2_ @ 0x18003D150 (_lambda_28433bbdf35c05dec82bca523d2a5fd2_--_lambda_28433bbdf35c05dec82bca523d2a5fd2_.c)
 *     _lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator() @ 0x18003D8DC (_lambda_28433bbdf35c05dec82bca523d2a5fd2_--operator().c)
 */

__int64 __fastcall TsSessionConsoleLockedNotificationCallback(void *a1, __int64 a2, void *a3)
{
  _QWORD *v3; // rax
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a1;
  v3 = lambda_28433bbdf35c05dec82bca523d2a5fd2_::_lambda_28433bbdf35c05dec82bca523d2a5fd2_(
         v6,
         (__int64)&v9,
         (__int64)&v8);
  v4 = lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator()((__int64)v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2089LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
