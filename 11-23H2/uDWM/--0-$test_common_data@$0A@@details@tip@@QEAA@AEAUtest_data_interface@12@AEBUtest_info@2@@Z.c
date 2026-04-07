/*
 * XREFs of ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800210B8
 * Callers:
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@XZ @ 0x180021034 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::details::test_common_data<0>::test_common_data<0>(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_WORD *)(a1 + 130) = -1;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  return a1;
}
