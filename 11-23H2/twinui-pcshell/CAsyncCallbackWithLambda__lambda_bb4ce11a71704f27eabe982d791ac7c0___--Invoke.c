/*
 * XREFs of CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke @ 0x1801BF1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _LogEventWithApplicationViewData__ @ 0x1804A90A8 (_LogEventWithApplicationViewData__.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804ADDD4 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AECE8 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AFD80 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // edx
  unsigned int v3; // ebx
  int v5; // edx
  struct IApplicationView **v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  if ( *(_DWORD *)(v1 + 448) == v2 )
    return v3;
  *(_DWORD *)(v1 + 448) = v2;
  if ( !v2 )
  {
    v6 = (struct IApplicationView **)(v1 + 424);
    if ( !*(_QWORD *)(v1 + 424) )
      return v3;
    LogEventWithApplicationViewData__(*v6, HolographicPositionerTelemetry::ReplayPendingAppView<unsigned short const *>);
    v9 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)v1, *v6, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x812,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
    v10 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)v1, *v6);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x815,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v10);
    goto LABEL_15;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    v6 = (struct IApplicationView **)(v1 + 424);
    if ( !*(_QWORD *)(v1 + 424) )
      return v3;
    LogEventWithApplicationViewData__(
      *v6,
      HolographicPositionerTelemetry::TerminatePendingAppViewForOOBE<unsigned short const *>);
    v7 = HolographicPositioner::_CloseView((HolographicPositioner *)v1, *v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x826,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
LABEL_15:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v6);
    return v3;
  }
  if ( (unsigned int)(v5 - 2) <= 1 )
    *(_BYTE *)(v1 + 296) = 0;
  return v3;
}
