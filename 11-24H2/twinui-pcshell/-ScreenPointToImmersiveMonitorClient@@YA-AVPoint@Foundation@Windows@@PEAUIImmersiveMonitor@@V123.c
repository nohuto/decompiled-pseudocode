/*
 * XREFs of ?ScreenPointToImmersiveMonitorClient@@YA?AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123@@Z @ 0x1806BBD60
 * Callers:
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285FD0 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x1806B96C0 (_lambda_5b1893e84c025059ea9350e935de1321_--operator()_winrt--WindowsUdk--UI--Shell--DisplayMonit.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float *__fastcall ScreenPointToImmersiveMonitorClient(float *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // eax
  int v6; // eax
  float v7; // xmm2_4
  float *result; // rax
  float v9; // xmm2_4
  float v10; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h]

  v3 = *a2;
  v13 = 0;
  v12 = 0;
  v14 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64 *, int *, int *))(v3 + 112))(a2, &v13, &v12);
  if ( v5 >= 0 )
  {
    v6 = v12;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC6,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v5);
    v6 = 96;
  }
  v7 = (float)v6;
  result = a1;
  v9 = v7 / 96.0;
  v10 = *((float *)&v14 + 1) / v9;
  *a1 = *(float *)&v14 / v9;
  a1[1] = v10;
  return result;
}
