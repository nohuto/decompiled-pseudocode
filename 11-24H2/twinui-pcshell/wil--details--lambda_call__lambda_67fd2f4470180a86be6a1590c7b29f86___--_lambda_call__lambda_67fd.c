/*
 * XREFs of wil::details::lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___::_lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___ @ 0x18030CACC
 * Callers:
 *     ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801E3D80 (-SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _CApplicationViewManager::SwitchTo_::_1_::dtor$0 @ 0x1806D8C43 (_CApplicationViewManager--SwitchTo_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___::_lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 56LL))(**(_QWORD **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C4,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
