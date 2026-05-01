/*
 * XREFs of ?FallbackWndProc@GamingFallbackWindow@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1804FC790
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x18032A9E0 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x18032CFA4 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$CreatedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F4B9C (--$CreatedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWN.c)
 *     ??$DestroyedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F4BE0 (--$DestroyedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUH.c)
 *     ?FallbackWindowActivated@GamingFallbackWindow@@AEAAX_N@Z @ 0x1804FC6C8 (-FallbackWindowActivated@GamingFallbackWindow@@AEAAX_N@Z.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180507228 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_61038858@@@details@wil@@QEAA_NXZ @ 0x180508A24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_61038858@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall GamingFallbackWindow::FallbackWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LONG_PTR *lParam)
{
  LRESULT v8; // rbx
  __int64 v9; // rax
  GamingPosturePositioner **WindowLongPtrW; // rsi
  LONG_PTR v11; // rsi
  signed int v12; // eax
  LONG_PTR v13; // r8
  bool v14; // dl
  signed int LastError; // eax
  _BYTE v17[96]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[80]; // [rsp+80h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  HWND v20; // [rsp+F0h] [rbp+8h] BYREF

  v20 = hWnd;
  v8 = 0LL;
  v17[80] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v9 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v18, "GamingFallbackWindow\\FallbackWndProc");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v17, v9);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v18);
  }
  WindowLongPtrW = (GamingPosturePositioner **)GetWindowLongPtrW(hWnd, 0);
  if ( Msg == 2 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      SetLastError(0);
      SetWindowLongPtrW(hWnd, 0, 0LL);
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF2E,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          (const char *)(unsigned int)LastError);
      GamingPosturePositionerTelemetryProvider::DestroyedFallbackWindow<HWND__ * &>((__int64 *)&v20);
      goto LABEL_29;
    }
    v13 = 0LL;
LABEL_28:
    SetWindowLongPtrW(hWnd, 0, v13);
    goto LABEL_29;
  }
  if ( Msg == 6 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_61038858>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_61038858>::GetImpl'::`2'::impl) )
    {
      v14 = (_WORD)wParam != 0;
    }
    else
    {
      if ( wParam != 1 )
        goto LABEL_29;
      v14 = 1;
    }
    GamingFallbackWindow::FallbackWindowActivated(WindowLongPtrW, v14);
LABEL_29:
    v8 = DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    goto LABEL_30;
  }
  if ( Msg != 16 )
  {
    if ( Msg != 70 )
    {
      if ( Msg == 129 )
      {
        v11 = *lParam;
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
        {
          SetLastError(0);
          SetWindowLongPtrW(hWnd, 0, v11);
          v12 = GetLastError();
          if ( v12 > 0 )
            v12 = (unsigned __int16)v12 | 0x80070000;
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xF1B,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
              (const char *)(unsigned int)v12);
          GamingPosturePositionerTelemetryProvider::CreatedFallbackWindow<HWND__ * &>((__int64 *)&v20);
          goto LABEL_29;
        }
        v13 = v11;
        goto LABEL_28;
      }
      goto LABEL_29;
    }
    lParam[3] = 0LL;
  }
LABEL_30:
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v17);
  return v8;
}
