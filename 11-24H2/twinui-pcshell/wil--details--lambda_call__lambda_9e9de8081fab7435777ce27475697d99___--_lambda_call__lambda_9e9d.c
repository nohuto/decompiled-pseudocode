/*
 * XREFs of wil::details::lambda_call__lambda_9e9de8081fab7435777ce27475697d99___::_lambda_call__lambda_9e9de8081fab7435777ce27475697d99___ @ 0x180427834
 * Callers:
 *     ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18042A430 (-UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowMan.c)
 *     _UwpWindowEventDispatcher::UwpWindowSwitchRequested_::_1_::dtor$5 @ 0x1806E9597 (_UwpWindowEventDispatcher--UwpWindowSwitchRequested_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::lambda_call__lambda_9e9de8081fab7435777ce27475697d99___::_lambda_call__lambda_9e9de8081fab7435777ce27475697d99___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 24LL))(**(_QWORD **)a1, 2147500037LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
