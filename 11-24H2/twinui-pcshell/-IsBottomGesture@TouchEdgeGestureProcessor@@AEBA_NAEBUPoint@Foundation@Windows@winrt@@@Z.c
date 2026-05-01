/*
 * XREFs of ?IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1801ED5CC
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801ED1D0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x180594348 (-ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentImmersiveMonitor@TouchGestureHelper@@SA?AU?$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUIImmersiveMonitorManager@@AEBUPoint@Foundation@Windows@3@@Z @ 0x1801ED700 (-GetCurrentImmersiveMonitor@TouchGestureHelper@@SA-AU-$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUI.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TouchEdgeGestureProcessor::IsBottomGesture(
        TouchEdgeGestureProcessor *this,
        const struct winrt::Windows::Foundation::Point *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int IsThreadRTL; // eax
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  bool v10; // cf
  bool v11; // zf
  float v12; // xmm0_4
  bool v13; // bl
  int nNumerator; // [rsp+20h] [rbp-30h] BYREF
  int v16[2]; // [rsp+28h] [rbp-28h] BYREF
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  TouchGestureHelper::GetCurrentImmersiveMonitor((int)v16);
  v18 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v16 + 88LL))(*(_QWORD *)v16, &v18);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegestureprocessor.cpp",
      (const char *)(unsigned int)v3,
      nNumerator);
  nNumerator = 0;
  v17 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**(_QWORD **)v16 + 112LL))(*(_QWORD *)v16, &nNumerator, &v17);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16C,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegestureprocessor.cpp",
      (const char *)(unsigned int)v4,
      nNumerator);
  v5 = MulDiv(240, nNumerator, 96);
  IsThreadRTL = Mirror_IsThreadRTL();
  v7 = *(float *)a2;
  v8 = (float)v5;
  if ( IsThreadRTL )
  {
    v9 = v7 - (float)(int)v18;
    v10 = v9 < v8;
    v11 = v9 == v8;
  }
  else
  {
    v12 = (float)SDWORD2(v18) - v7;
    v10 = v12 < v8;
    v11 = v12 == v8;
  }
  v13 = !v10 && !v11;
  if ( *(_QWORD *)v16 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v16);
  return v13;
}
