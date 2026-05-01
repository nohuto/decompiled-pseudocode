/*
 * XREFs of ?__fail_if_complete_not_called@?$test_data_base@U_tip_CopilotHardwareKeyInvokedTest_id@@@tip2@@IEBA_NXZ @ 0x1802C9120
 * Callers:
 *     ?evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ @ 0x180637228 (-evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_TaskViewShowTest@SwitcherTip@@QEAAXXZ @ 0x1806A60A4 (-evaluate@_tip_TaskViewShowTest@SwitcherTip@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall tip2::test_data_base<_tip_CopilotHardwareKeyInvokedTest_id>::__fail_if_complete_not_called(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 )
    return 0;
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_QWORD *)(v1 + 160) = 0LL;
    *(_BYTE *)(v1 + 152) = 3;
    *(_WORD *)(v1 + 154) = 16385;
  }
  return 1;
}
