/*
 * XREFs of ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@Z @ 0x18023A688
 * Callers:
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802455B0 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803BDB64 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_bc798bc91d3352a764cb262da2d2d108_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_bc798bc91d3352a764cb262da2d2d108_@@@Z @ 0x1802B6058 (--$DoInvoke@V_lambda_bc798bc91d3352a764cb262da2d2d108_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::UI::WindowId>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::UI::WindowId>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v4[0] = &v5;
  v4[1] = &v6;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::UI::WindowId>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_bc798bc91d3352a764cb262da2d2d108_>(
           a1,
           v4);
}
