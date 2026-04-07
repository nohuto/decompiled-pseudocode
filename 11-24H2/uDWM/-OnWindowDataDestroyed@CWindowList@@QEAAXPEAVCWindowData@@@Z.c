/*
 * XREFs of ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18009052C
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001BFE4 (--1CWindowData@@QEAA@XZ.c)
 * Callees:
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180069148 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18006C2A8 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800827A8 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows@@@details@wil@@QEAA_NXZ @ 0x1800ED134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnWindowDataDestroyed(CDisplayAnimatedVisual **this, struct CWindowData *a2)
{
  int v4; // eax
  CDisplayAnimatedVisual *v5; // rcx
  CTopLevelWindow3D *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 ***v9; // rdi
  __int64 **i; // rbx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == this[87] )
  {
    v4 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed((CWindowList *)this, 1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDCD,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v4,
        v11);
    this[87] = 0LL;
  }
  v5 = this[70];
  if ( v5 )
    CDisplayAnimatedVisual::OnWindowDataDestroyed(v5, a2);
  v6 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
  if ( v6 )
    CTopLevelWindow3D::SetWindowData(v6, 0LL);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 59)
                                                                 + 184LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
           a2);
    if ( v7 >= 0 )
      goto LABEL_15;
    v8 = 3549LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 58)
                                                                 + 192LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
           a2);
    if ( v7 >= 0 )
      goto LABEL_15;
    v8 = 3553LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v7,
    v11);
LABEL_15:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows>::GetImpl'::`2'::impl) )
  {
    v9 = (__int64 ***)*((_QWORD *)a2 + 85);
    for ( i = *v9; i != (__int64 **)v9; i = (__int64 **)*i )
      SetEvent(i[3]);
  }
}
