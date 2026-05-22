/*
 * XREFs of ?evaluate@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXXZ @ 0x1801068B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::evaluate(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 248);
  if ( (*(_DWORD *)(result + 56) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(result + 152) )
      return result;
    *(_BYTE *)(result + 152) = 1;
    *(_WORD *)(result + 154) = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(result + 152) )
      return result;
    *(_BYTE *)(result + 152) = 3;
    *(_WORD *)(result + 154) = 16385;
  }
  *(_QWORD *)(result + 160) = 0LL;
  return result;
}
