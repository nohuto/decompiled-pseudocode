/*
 * XREFs of ?OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18039F560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnVisibilityChanged@CVirtualTouchpadExperienceManager@@AEAAXXZ @ 0x18039F650 (-OnVisibilityChanged@CVirtualTouchpadExperienceManager@@AEAAXXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1803A08E4 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::OnViewShown(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CVirtualTouchpadExperienceManager *v3; // rsi
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CVirtualTouchpadExperienceManager *)((char *)this - 56);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 36) + 104LL))(
         *((_QWORD *)this + 36),
         *((_QWORD *)this + 4));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1002LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    *((_DWORD *)this + 180) = 0;
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 36) + 128LL))(*((_QWORD *)this + 36), 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1004LL;
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 112LL))(*((_QWORD *)this + 36));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1005LL;
    goto LABEL_9;
  }
  v4 = CVirtualTouchpadExperienceManager::Uncloack(v3, (CVirtualTouchpadExperienceManager *)((char *)this + 320));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1009LL;
    goto LABEL_9;
  }
  *((_DWORD *)this + 180) = 2;
  CVirtualTouchpadExperienceManager::OnVisibilityChanged(v3);
  return 0LL;
}
