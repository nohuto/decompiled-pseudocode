/*
 * XREFs of ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180052B98
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180052658 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF8E0 (-FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18003F5F0 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x180086BD4 (-OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180094F50 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ @ 0x180097A7C (-OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowData::OnWindowSizeUpdated(CTopLevelWindow **this)
{
  int v2; // edi
  __int64 v3; // rdx
  CWindowIconic *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 i; // rdi
  CThumbnailVisual *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CTopLevelWindow::OnWindowSizeUpdated(this[55]);
  if ( v2 < 0 )
  {
    v3 = 724LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)v2,
      v10);
    return (unsigned int)v2;
  }
  v5 = this[61];
  if ( v5 )
  {
    v2 = CWindowIconic::OnWindowSizeUpdated(v5);
    if ( v2 < 0 )
    {
      v3 = 729LL;
      goto LABEL_3;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, CTopLevelWindow **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 59)
                                                               + 80LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
           this);
    if ( v6 < 0 )
    {
      v7 = 734LL;
LABEL_12:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
        (const char *)(unsigned int)v6,
        v10);
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, CTopLevelWindow **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 58)
                                                               + 96LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
           this);
    if ( v6 < 0 )
    {
      v7 = 738LL;
      goto LABEL_12;
    }
  }
  CWindowData::NotifySWROfMarginOrSizeChange((CWindowData *)this, 1, 1);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 140); i = (unsigned int)(i + 1) )
  {
    v9 = *(CThumbnailVisual **)(*((_QWORD *)this[67] + i) + 88LL);
    if ( v9 )
      CThumbnailVisual::OnDestinationClientRectChanged(v9);
  }
  return 0LL;
}
