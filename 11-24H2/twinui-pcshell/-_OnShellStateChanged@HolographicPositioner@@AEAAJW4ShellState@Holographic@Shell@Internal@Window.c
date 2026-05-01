/*
 * XREFs of ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x18023AA5C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke @ 0x1802CC300 (CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithApplicationViewData__ @ 0x1804070E4 (_LogEventWithApplicationViewData__.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040C614 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18040D118 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040DEDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall HolographicPositioner::_OnShellStateChanged(__int64 a1, int a2)
{
  int v3; // edx
  struct IApplicationView **v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 608) == a2 )
    return 0LL;
  *(_DWORD *)(a1 + 608) = a2;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( (unsigned int)(v3 - 2) <= 1 )
        *(_BYTE *)(a1 + 312) = 0;
      return 0LL;
    }
    v4 = (struct IApplicationView **)(a1 + 584);
    v5 = *(_QWORD *)(a1 + 584);
    if ( v5 )
    {
      LogEventWithApplicationViewData__(
        v5,
        HolographicPositionerTelemetry::TerminatePendingAppViewForOOBE<unsigned short const *>);
      v6 = HolographicPositioner::_CloseView((HolographicPositioner *)a1, *v4);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x897,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
      goto LABEL_14;
    }
  }
  else
  {
    v4 = (struct IApplicationView **)(a1 + 584);
    v9 = *(_QWORD *)(a1 + 584);
    if ( v9 )
    {
      LogEventWithApplicationViewData__(
        v9,
        HolographicPositionerTelemetry::ReplayPendingAppView<unsigned short const *>);
      v10 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)a1, *v4, 0LL);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x883,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v10);
      v11 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)a1, *v4);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x886,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v11);
LABEL_14:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v4);
    }
  }
  return 0LL;
}
