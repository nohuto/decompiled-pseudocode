/*
 * XREFs of ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FC80
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180082D10 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800EC788 (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows@@@details@wil@@QEAA_NXZ @ 0x1800ED134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows@@.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_767b0072026fef5317467f2afcf76d8a___ @ 0x1800ED1E4 (CWindowList--ForEachSoftwareCursorListener__lambda_767b0072026fef5317467f2afcf76d8a___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroyWindow(CWindowArrangementTransition **this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rax
  void (__fastcall ***v5)(_QWORD, _QWORD); // rcx
  __int64 v6; // r14
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  __int64 ***v10; // rdi
  __int64 **i; // rbx
  struct CWindowData *v12; // rdx
  struct CWindowData **v13; // rcx
  CWindowArrangementTransition *v14; // rcx
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CWindowData *v18; // [rsp+60h] [rbp+30h] BYREF
  struct CWindowData **v19; // [rsp+68h] [rbp+38h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0LL;
  CWindowList::GetSyncedWindowData((CWindowList *)this, a2, 1, &v18);
  v4 = v18;
  if ( !v18 )
    goto LABEL_23;
  v5 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)v18 + 3);
  if ( v5 )
  {
    (**v5)(v5, 0LL);
    *((_QWORD *)v18 + 3) = 0LL;
    v4 = v18;
  }
  v6 = *((_QWORD *)v4 + 5);
  if ( (*((_BYTE *)v4 + 740) & 2) != 0 )
  {
    v19 = &v18;
    CWindowList::ForEachSoftwareCursorListener__lambda_767b0072026fef5317467f2afcf76d8a___(this, &v19);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 59)
                                                                 + 184LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
           v18);
    v8 = retaddr;
    if ( v7 < 0 )
    {
      v9 = 2579LL;
LABEL_11:
      wil::details::in1diag3::_Log_Hr(
        v8,
        (void *)v9,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v7,
        (int)v16);
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 58)
                                                                 + 192LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
           v18);
    v8 = retaddr;
    if ( v7 < 0 )
    {
      v9 = 2583LL;
      goto LABEL_11;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ExpandCapturableWindows>::GetImpl'::`2'::impl) )
  {
    v10 = (__int64 ***)*((_QWORD *)v18 + 85);
    for ( i = *v10; i != (__int64 **)v10; i = (__int64 **)*i )
      SetEvent(i[3]);
  }
  if ( (*((_BYTE *)v18 + 736) & 4) == 0 )
  {
    v12 = *(struct CWindowData **)v18;
    v13 = (struct CWindowData **)*((_QWORD *)v18 + 1);
    if ( *(struct CWindowData **)(*(_QWORD *)v18 + 8LL) != v18 || *v13 != v18 )
      __fastfail(3u);
    *v13 = v12;
    *((_QWORD *)v12 + 1) = v13;
    *((_QWORD *)v18 + 1) = v18;
    *(_QWORD *)v18 = v18;
    CWindowList::ImmediateDestroyWindow((CWindowList *)this, v18);
  }
  v14 = this[66];
  if ( v14 && v6 == *((_QWORD *)v14 + 1) )
    CWindowArrangementTransition::OnWindowDestroyed(v14);
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return 0LL;
}
