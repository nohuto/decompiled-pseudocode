/*
 * XREFs of wil::details::ScopeExitFn__lambda_9880aa7e5b34af4ec8b662ea8f84cd48___::_ScopeExitFn__lambda_9880aa7e5b34af4ec8b662ea8f84cd48___ @ 0x1802069B0
 * Callers:
 *     __lambda_0cfa17de80a192d7104afc8a843b7ae2_::operator()_::_1_::dtor$2 @ 0x180206E36 (__lambda_0cfa17de80a192d7104afc8a843b7ae2_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051C0FC (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_9880aa7e5b34af4ec8b662ea8f84cd48___::_ScopeExitFn__lambda_9880aa7e5b34af4ec8b662ea8f84cd48___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 344LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1516,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
}
