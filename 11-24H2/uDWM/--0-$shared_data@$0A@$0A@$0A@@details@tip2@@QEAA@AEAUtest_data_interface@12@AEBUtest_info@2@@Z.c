/*
 * XREFs of ??0?$shared_data@$0A@$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18004C584
 * Callers:
 *     ??0?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@QEAA@XZ @ 0x18004C4B8 (--0-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U1234.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::details::shared_data<0,0,0>::shared_data<0,0,0>(__int64 a1, __int64 a2, _OWORD *a3)
{
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_WORD *)(a1 + 162) = -1;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_OWORD *)(a1 + 16) = *a3;
  *(_OWORD *)(a1 + 32) = a3[1];
  *(_OWORD *)(a1 + 48) = a3[2];
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  return a1;
}
