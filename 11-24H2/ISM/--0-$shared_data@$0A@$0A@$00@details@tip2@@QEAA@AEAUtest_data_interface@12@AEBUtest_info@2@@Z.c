/*
 * XREFs of ??0?$shared_data@$0A@$0A@$00@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180107894
 * Callers:
 *     ??0?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180107798 (--0-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@detai.c)
 *     ??0?$merged_data@U_tip_HapticMouseAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x1801897BC (--0-$merged_data@U_tip_HapticMouseAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@ti.c)
 *     ??0?$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x1801898B8 (--0-$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2.c)
 *     ??0?$merged_data@U_tip_HapticTouchpadAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x1801899B4 (--0-$merged_data@U_tip_HapticTouchpadAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details.c)
 * Callees:
 *     ??0test_state@tip2@@QEAA@XZ @ 0x1800A467C (--0test_state@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,1>::shared_data<0,0,1>(__int64 a1, __int64 a2)
{
  _OWORD *v3; // r8

  *(_QWORD *)a1 = a2;
  tip2::test_state::test_state((tip2::test_state *)(a1 + 8));
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 16) = *v3;
  *(_OWORD *)(a1 + 32) = v3[1];
  *(_OWORD *)(a1 + 48) = v3[2];
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  return a1;
}
