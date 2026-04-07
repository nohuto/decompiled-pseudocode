/*
 * XREFs of ?OnProcessDisconnected@CWindowList@@UEAAJK@Z @ 0x180090480
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnProcessDisconnected(CWindowList *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58)
                                                   + 136LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
           a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1653LL;
      goto LABEL_6;
    }
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 59) + 120LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
         a2);
  v4 = v3;
  if ( v3 >= 0 )
    goto LABEL_7;
  v5 = 1649LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v3,
    v7);
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v4;
}
